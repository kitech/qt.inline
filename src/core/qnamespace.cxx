// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qnamespace.h
// dst-file: /src/core/qnamespace.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnamespace.h>


// <= header block end

// main block begin =>
void __keep_qnamespace_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QInternal_Class_Size()
{
  return sizeof(QInternal);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qnamespace.h', line 1775, column 17>
//   // proto: static bool QInternal::unregisterCallback(QInternal::Callback , qInternalCallback );
// _ZN9QInternal18unregisterCallbackENS_8CallbackEPFbPPvE unregisterCallback(enum QInternal::Callback, qInternalCallback)
extern "C"
bool
C_ZN9QInternal18unregisterCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg1,
qInternalCallback arg2) {
  auto ret =
  QInternal::unregisterCallback(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qnamespace.h', line 1776, column 17>
//   // proto: static bool QInternal::activateCallbacks(QInternal::Callback , void ** );
// _ZN9QInternal17activateCallbacksENS_8CallbackEPPv activateCallbacks(enum QInternal::Callback, void **)
extern "C"
bool
C_ZN9QInternal17activateCallbacksENS_8CallbackEPPv(QInternal::Callback arg1,
void ** arg2) {
  auto ret =
  QInternal::activateCallbacks(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qnamespace.h', line 1774, column 17>
//   // proto: static bool QInternal::registerCallback(QInternal::Callback , qInternalCallback );
// _ZN9QInternal16registerCallbackENS_8CallbackEPFbPPvE registerCallback(enum QInternal::Callback, qInternalCallback)
extern "C"
bool
C_ZN9QInternal16registerCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg1,
qInternalCallback arg2) {
  auto ret =
  QInternal::registerCallback(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

