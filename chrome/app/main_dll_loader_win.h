// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file defines a class to load the main DLL of a Chrome process.

#ifndef CHROME_APP_MAIN_DLL_LOADER_WIN_H_
#define CHROME_APP_MAIN_DLL_LOADER_WIN_H_

#include <windows.h>  // NOLINT

#include <string>

#include "base/files/file_path.h"
#include "base/strings/string16.h"

// Implements the common aspects of loading the main dll for both chrome and
// chromium scenarios, which are in charge of implementing two abstract
// methods: GetRegistryPath() and OnBeforeLaunch().
class MainDllLoader {
 public:
  MainDllLoader();
  virtual ~MainDllLoader();

  // Loads and calls the entry point of chrome.dll. |instance| is the exe
  // instance retrieved from wWinMain.
  // The return value is what the main entry point of chrome.dll returns
  // upon termination.
  int Launch(HINSTANCE instance);

  // Launches a new instance of the browser if the current instance in
  // persistent mode an upgrade is detected.
  void RelaunchChromeBrowserWithNewCommandLineIfNeeded();

 protected:
  // Called after chrome.dll has been loaded but before the entry point
  // is invoked. Derived classes can implement custom actions here.
  // |process_type| is the argument to the --type command line argument, e.g.
  // "renderer", "watcher", etc.
  // |dll_path| refers to the path of the Chrome dll being loaded.
  virtual void OnBeforeLaunch(const std::string& process_type,
                              const base::FilePath& dll_path) = 0;

  // Called after the chrome.dll entry point returns and before terminating
  // this process. The return value will be used as the process return code.
  // |dll_path| refers to the path of the Chrome dll being loaded.
  virtual int OnBeforeExit(int return_code, const base::FilePath& dll_path) = 0;

 private:
  // Loads chrome.dll, populating |version| with the version of the DLL loaded
  // and |module| with the path of the loaded DLL. Returns a reference to the
  // module, or null on failure.
  HMODULE Load(base::string16* version, base::FilePath* module);

 private:
  HMODULE dll_;
  std::string process_type_;
};

// Factory for the MainDllLoader. Caller owns the pointer and should call
// delete to free it.
MainDllLoader* MakeMainDllLoader();

#endif  // CHROME_APP_MAIN_DLL_LOADER_WIN_H_
