// Copyright (c) Shinya Ishikawa. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once
#include "Sprite.h"
#include "Mouth.h"
#include "Eye.h"

namespace m5avatar
{

class Face
{
private:
  MouthInterface *mouth;
  EyeInterface *eyeR;
  EyeInterface *eyeL;
  TFT_eSprite *sprite;
  DrawContext drawContext;

public:
  // constructor
  Face(void);

  // TODO: getter
  void openMouth(int percent);  // deprecated
  void openEye(boolean isOpen); // deprecated
  EyeInterface *getLeftEye();
  EyeInterface *getRightEye();
  MouthInterface *getMouth();
  void setMouth(MouthInterface *mouth);
  void setLeftEye(EyeInterface *eye);
  void setRightEye(EyeInterface *eye);
  void setLeftEyeblow();
  void setRightEyeblow();
  void setMouthOpen(float f);
  void setEyeOpen(float f); // deprecated
  void setEyesOpen(float f);
  void draw(DrawContext *ctx);
};
} // namespace m5avatar