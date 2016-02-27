// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qthreadstorage.h
// dst-file: /src/core/qthreadstorage.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qthreadstorage.h>


// <= header block end

// main block begin =>
void __keep_qthreadstorage_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QThreadStorageData_Class_Size()
{
  return sizeof(QThreadStorageData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qthreadstorage.h', line 51, column 12>
//   // proto:  void ** QThreadStorageData::set(void * p);
// _ZN18QThreadStorageData3setEPv set(void *)
extern "C"
void*
C_ZN18QThreadStorageData3setEPv(void *qthis,
void * arg1) {
  auto ret =
  ((QThreadStorageData*)qthis)->set(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadstorage.h', line 50, column 12>
//   // proto:  void ** QThreadStorageData::get();
// _ZNK18QThreadStorageData3getEv get()
extern "C"
void*
C_ZNK18QThreadStorageData3getEv(void *qthis) {
  auto ret =
  ((QThreadStorageData*)qthis)->get();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadstorage.h', line 53, column 17>
//   // proto: static void QThreadStorageData::finish(void ** );
// _ZN18QThreadStorageData6finishEPPv finish(void **)
extern "C"
void
C_ZN18QThreadStorageData6finishEPPv(void ** arg1) {
  QThreadStorageData::finish(arg1);
}
//   // proto:  void QThreadStorageData::~QThreadStorageData();
extern "C"
void C_ZN18QThreadStorageDataD2Ev(void *qthis) {
  delete (QThreadStorageData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qthreadstorage.h', line 47, column 14>
//   // proto:  void QThreadStorageData::QThreadStorageData(void (*)(void *) func);
extern "C"
QThreadStorageData*
C_ZN18QThreadStorageDataC2EPFvPvE(void (*arg1)(void *)) {
  auto ret = new QThreadStorageData(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

