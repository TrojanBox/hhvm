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
#ifndef _TRANSLATOR_DEBUG_H_
#define _TRANSLATOR_DEBUG_H_

#include <runtime/base/types.h>
#include <runtime/vm/translator/translator.h>
#include <runtime/vm/hhbc.h>
#include "dwarf.h"

namespace HPHP {
namespace VM {
namespace Debug {

using namespace HPHP::VM::Transl;

class DebugInfo {
 public:
  DebugInfo();
  ~DebugInfo();

  void recordTracelet(TCRange range, 
                      const Unit *unit,
                      const Opcode *instr, bool exit,
                      bool inPrologue);
  void recordStub(TCRange range,
                  const char* name);
  void recordPerfMap(DwarfChunk* d);
  void recordBCInstr(TCRange range, uint32_t op);

  void debugSync();
  static DebugInfo* Get();

 private:
  /* maintain separate dwarf info for a and astubs, so that we
   * don't emit dwarf info for the two in the same ELF file.
   * gdb tends to get confused when it sees dwarf info for
   * widely separated addresses ranges in the same ELF file.
   */
  DwarfInfo m_aDwarfInfo;
  DwarfInfo m_astubsDwarfInfo;
  /*
   * Stuff to output symbol names to /tmp/perf-%d.map files.  This stuff
   * can be read by perf top/record, etc.
   */
  FILE* m_perfMap;
  char m_perfMapName[64];
};

/*
 * Gets the fake symbol name we want to use for a php function.
 */
std::string lookupFunction(const Unit *unit,
                           const Opcode *instr,
                           bool exit,
                           bool inPrologue,
                           bool pseudoWithFileName);

}
}
}

#endif
