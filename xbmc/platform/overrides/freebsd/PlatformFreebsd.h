/*
 *  Copyright (C) 2016-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "platform/posix/PlatformPosix.h"

class CPlatformFreebsd : public CPlatformPosix
{
public:
  CPlatformFreebsd() = default;
  ~CPlatformFreebsd() override = default;

  bool Init() override;
};
