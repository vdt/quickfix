/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#pragma once

using namespace System;

#include "quickfix_net.h"

namespace QuickFix
{
public __gc __interface Acceptor
{
  void start() throw ( ConfigError*, RuntimeError* ) = 0;
  void block() throw ( ConfigError*, RuntimeError* ) = 0;
  bool poll() throw ( ConfigError*, RuntimeError* ) = 0;
  void stop() = 0;
  void stop( bool force ) = 0;
  bool isLoggedOn() = 0;
};
}
