#include <runtime/ext_hhvm/ext_hhvm.h>
#include <runtime/base/builtin_functions.h>
#include <runtime/base/array/array_init.h>
#include <runtime/ext/ext.h>
#include <runtime/vm/class.h>
#include <runtime/vm/runtime.h>
#include <runtime/vm/exception_gate.h>
#include <exception>

namespace HPHP {

/*
void HPHP::f_thrift_protocol_write_compact(HPHP::Object const&, HPHP::String const&, long long, HPHP::Object const&, int)
_ZN4HPHP31f_thrift_protocol_write_compactERKNS_6ObjectERKNS_6StringExS2_i

transportobj => rdi
method_name => rsi
msgtype => rdx
request_struct => rcx
seqid => r8
*/

void fh_thrift_protocol_write_compact(Value* transportobj, Value* method_name, long long msgtype, Value* request_struct, int seqid) asm("_ZN4HPHP31f_thrift_protocol_write_compactERKNS_6ObjectERKNS_6StringExS2_i");

TypedValue * fg1_thrift_protocol_write_compact(TypedValue* rv, HPHP::VM::ActRec* ar, long long count) __attribute__((noinline,cold));
TypedValue * fg1_thrift_protocol_write_compact(TypedValue* rv, HPHP::VM::ActRec* ar, long long count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  rv->m_data.num = 0LL;
  rv->_count = 0;
  rv->m_type = KindOfNull;
  if ((args-4)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-4);
  }
  if ((args-3)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-3);
  }
  if ((args-2)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-2);
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_thrift_protocol_write_compact((Value*)(args-0), (Value*)(args-1), (long long)(args[-2].m_data.num), (Value*)(args-3), (int)(args[-4].m_data.num));
  return rv;
}

TypedValue* fg_thrift_protocol_write_compact(HPHP::VM::ActRec *ar) {
  EXCEPTION_GATE_ENTER();
    TypedValue rv;
    long long count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 5LL) {
      if ((args-4)->m_type == KindOfInt64 && (args-3)->m_type == KindOfObject && (args-2)->m_type == KindOfInt64 && IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        rv.m_data.num = 0LL;
        rv._count = 0;
        rv.m_type = KindOfNull;
        fh_thrift_protocol_write_compact((Value*)(args-0), (Value*)(args-1), (long long)(args[-2].m_data.num), (Value*)(args-3), (int)(args[-4].m_data.num));
        frame_free_locals_no_this_inl(ar, 5);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_thrift_protocol_write_compact(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 5);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("thrift_protocol_write_compact", count, 5, 5, 1);
    }
    rv.m_data.num = 0LL;
    rv._count = 0;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 5);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  EXCEPTION_GATE_RETURN(&ar->m_r);
}



/*
HPHP::Variant HPHP::f_thrift_protocol_read_compact(HPHP::Object const&, HPHP::String const&)
_ZN4HPHP30f_thrift_protocol_read_compactERKNS_6ObjectERKNS_6StringE

(return value) => rax
_rv => rdi
transportobj => rsi
obj_typename => rdx
*/

TypedValue* fh_thrift_protocol_read_compact(TypedValue* _rv, Value* transportobj, Value* obj_typename) asm("_ZN4HPHP30f_thrift_protocol_read_compactERKNS_6ObjectERKNS_6StringE");

TypedValue * fg1_thrift_protocol_read_compact(TypedValue* rv, HPHP::VM::ActRec* ar, long long count) __attribute__((noinline,cold));
TypedValue * fg1_thrift_protocol_read_compact(TypedValue* rv, HPHP::VM::ActRec* ar, long long count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_thrift_protocol_read_compact((rv), (Value*)(args-0), (Value*)(args-1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
  return rv;
}

TypedValue* fg_thrift_protocol_read_compact(HPHP::VM::ActRec *ar) {
  EXCEPTION_GATE_ENTER();
    TypedValue rv;
    long long count = ar->numArgs();
    TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
    if (count == 2LL) {
      if (IS_STRING_TYPE((args-1)->m_type) && (args-0)->m_type == KindOfObject) {
        fh_thrift_protocol_read_compact((&(rv)), (Value*)(args-0), (Value*)(args-1));
        if (rv.m_type == KindOfUninit) rv.m_type = KindOfNull;
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      } else {
        fg1_thrift_protocol_read_compact(&rv, ar, count);
        frame_free_locals_no_this_inl(ar, 2);
        memcpy(&ar->m_r, &rv, sizeof(TypedValue));
        return &ar->m_r;
      }
    } else {
      throw_wrong_arguments_nr("thrift_protocol_read_compact", count, 2, 2, 1);
    }
    rv.m_data.num = 0LL;
    rv._count = 0;
    rv.m_type = KindOfNull;
    frame_free_locals_no_this_inl(ar, 2);
    memcpy(&ar->m_r, &rv, sizeof(TypedValue));
    return &ar->m_r;
  EXCEPTION_GATE_RETURN(&ar->m_r);
}




} // !HPHP

