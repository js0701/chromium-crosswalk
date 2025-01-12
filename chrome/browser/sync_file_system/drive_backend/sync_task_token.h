// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_SYNC_FILE_SYSTEM_DRIVE_BACKEND_SYNC_TASK_TOKEN_H_
#define CHROME_BROWSER_SYNC_FILE_SYSTEM_DRIVE_BACKEND_SYNC_TASK_TOKEN_H_

#include <stdint.h>

#include "base/callback.h"
#include "base/location.h"
#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "base/memory/weak_ptr.h"
#include "chrome/browser/sync_file_system/sync_callbacks.h"
#include "chrome/browser/sync_file_system/task_logger.h"

namespace sync_file_system {
namespace drive_backend {

class SyncTaskManager;
struct TaskBlocker;

// Represents a running sequence of SyncTasks.  Owned by a callback chain that
// should run exclusively, and held by SyncTaskManager when no task is running.
class SyncTaskToken {
 public:
  static const int64_t kTestingTaskTokenID;
  static const int64_t kForegroundTaskTokenID;
  static const int64_t kMinimumBackgroundTaskTokenID;

  static scoped_ptr<SyncTaskToken> CreateForTesting(
      const SyncStatusCallback& callback);
  static scoped_ptr<SyncTaskToken> CreateForForegroundTask(
      const base::WeakPtr<SyncTaskManager>& manager,
      base::SequencedTaskRunner* task_runner);
  static scoped_ptr<SyncTaskToken> CreateForBackgroundTask(
      const base::WeakPtr<SyncTaskManager>& manager,
      base::SequencedTaskRunner* task_runner,
      int64_t token_id,
      scoped_ptr<TaskBlocker> task_blocker);

  void UpdateTask(const tracked_objects::Location& location,
                  const SyncStatusCallback& callback);

  const tracked_objects::Location& location() const { return location_; }
  virtual ~SyncTaskToken();

  static SyncStatusCallback WrapToCallback(scoped_ptr<SyncTaskToken> token);

  SyncTaskManager* manager() { return manager_.get(); }

  const SyncStatusCallback& callback() const { return callback_; }
  void clear_callback() { callback_.Reset(); }

  void set_task_blocker(scoped_ptr<TaskBlocker> task_blocker);
  const TaskBlocker* task_blocker() const;
  void clear_task_blocker();

  int64_t token_id() const { return token_id_; }

  void InitializeTaskLog(const std::string& task_description);
  void FinalizeTaskLog(const std::string& result_description);
  void RecordLog(const std::string& message);

  bool has_task_log() const { return task_log_; }
  void SetTaskLog(scoped_ptr<TaskLogger::TaskLog> task_log);
  scoped_ptr<TaskLogger::TaskLog> PassTaskLog();

 private:
  SyncTaskToken(const base::WeakPtr<SyncTaskManager>& manager,
                const scoped_refptr<base::SequencedTaskRunner>& task_runner,
                int64_t token_id,
                scoped_ptr<TaskBlocker> task_blocker,
                const SyncStatusCallback& callback);

  base::WeakPtr<SyncTaskManager> manager_;
  scoped_refptr<base::SequencedTaskRunner> task_runner_;
  tracked_objects::Location location_;
  int64_t token_id_;
  SyncStatusCallback callback_;

  scoped_ptr<TaskLogger::TaskLog> task_log_;
  scoped_ptr<TaskBlocker> task_blocker_;

  DISALLOW_COPY_AND_ASSIGN(SyncTaskToken);
};

}  // namespace drive_backend
}  // namespace sync_file_system

#endif  // CHROME_BROWSER_SYNC_FILE_SYSTEM_DRIVE_BACKEND_SYNC_TASK_TOKEN_H_
