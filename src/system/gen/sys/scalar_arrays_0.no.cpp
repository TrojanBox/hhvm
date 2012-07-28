/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <runtime/base/hphp.h>
#include <sys/system_globals.h>
#include <sys/literal_strings.h>

namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

StaticArray SystemScalarArrays::ssa_[2];

void SystemScalarArrays::initialize() {
  ssa_[0] = StaticArray(ArrayData::Create());
  ssa_[0].setEvalScalar();
  ssa_[1] = StaticArray(ArrayInit(9).add(NAMSTR(s_sys_ss558db28e, "bool"), 1LL, true).add(NAMSTR(s_sys_ssb36538f4, "boolean"), 1LL, true).add(NAMSTR(s_sys_ss928a1ef0, "int"), 1LL, true).add(NAMSTR(s_sys_ssb62ff05d, "integer"), 1LL, true).add(NAMSTR(s_sys_ssada7d86e, "real"), 1LL, true).add(NAMSTR(s_sys_ssaea2d57a, "double"), 1LL, true).add(NAMSTR(s_sys_ss919bffe4, "float"), 1LL, true).add(NAMSTR(s_sys_ss69ad4382, "string"), 1LL, true).add(NAMSTR(s_sys_ss8c04b960, "array"), 1LL, true).create());
  ssa_[1].setEvalScalar();
  SystemScalarArrays::initializeNamed();
}

///////////////////////////////////////////////////////////////////////////////
}
