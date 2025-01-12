// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_UI_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_UI_H_

#include "base/macros.h"
#include "chrome/browser/ui/webui/mojo_web_ui_controller.h"
#include "chrome/browser/ui/webui/omnibox/omnibox.mojom.h"

class OmniboxUIHandler;

// The UI for chrome://omnibox/
class OmniboxUI : public MojoWebUIController<OmniboxUIHandlerMojo> {
 public:
  explicit OmniboxUI(content::WebUI* contents);
  ~OmniboxUI() override;

 private:
  // MojoWebUIController overrides:
  void BindUIHandler(
      mojo::InterfaceRequest<OmniboxUIHandlerMojo> request) override;

  scoped_ptr<OmniboxUIHandler> omnibox_ui_handler_;

  DISALLOW_COPY_AND_ASSIGN(OmniboxUI);
};

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_UI_H_
