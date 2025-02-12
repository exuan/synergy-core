/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2021 Symless Ltd.
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include "IStringValidator.h"

namespace validators {

class EmptyStringValidator : public IStringValidator
{
public:
  explicit EmptyStringValidator(const QString &message);
  bool validate(const QString &input) const override;
};

} // namespace validators
