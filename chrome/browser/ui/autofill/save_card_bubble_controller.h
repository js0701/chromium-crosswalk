// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_AUTOFILL_SAVE_CARD_BUBBLE_CONTROLLER_H_
#define CHROME_BROWSER_UI_AUTOFILL_SAVE_CARD_BUBBLE_CONTROLLER_H_

#include <vector>

#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "base/strings/string16.h"
#include "components/autofill/core/browser/legal_message_line.h"
#include "url/gurl.h"

namespace autofill {

class CreditCard;
class SaveCardBubbleView;

// Interface that exposes controller functionality to SaveCardBubbleView.
class SaveCardBubbleController {
 public:
  // Returns the title that should be displayed in the bubble.
  virtual base::string16 GetWindowTitle() const = 0;

  // Returns the explanatory text that should be displayed in the bubble.
  // Returns an empty string if no message should be displayed.
  virtual base::string16 GetExplanatoryMessage() const = 0;

  // Returns the card that will be uploaded if the user accepts.
  virtual const CreditCard GetCard() const = 0;

  // Interaction.
  virtual void OnSaveButton() = 0;
  virtual void OnCancelButton() = 0;
  virtual void OnLearnMoreClicked() = 0;
  virtual void OnLegalMessageLinkClicked(const GURL& url) = 0;
  virtual void OnBubbleClosed() = 0;

  // State.

  // Returns empty vector if no legal message should be shown.
  virtual const LegalMessageLines& GetLegalMessageLines() const = 0;

 protected:
  SaveCardBubbleController() {}
  virtual ~SaveCardBubbleController() {}

  DISALLOW_COPY_AND_ASSIGN(SaveCardBubbleController);
};

}  // namespace autofill

#endif  // CHROME_BROWSER_UI_AUTOFILL_SAVE_CARD_BUBBLE_CONTROLLER_H_
