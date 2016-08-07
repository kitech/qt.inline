// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qscopedpointer.h
// dst-file: /src/core/qscopedpointer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscopedpointer.h>


// <= header block end

// main block begin =>
void __keep_qscopedpointer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qscopedpointer.h', line 81, column 24>
//   // proto: static void QScopedPointerPodDeleter::cleanup(void * pointer);
if (true) {
  auto f = [](QScopedPointerPodDeleter flythis, void * arg1) {
    ((QScopedPointerPodDeleter*)0)->cleanup(arg1);
    flythis.cleanup(arg1);
  };
  if (f == nullptr){}
}
// _ZN24QScopedPointerPodDeleter7cleanupEPv cleanup(void *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScopedPointerPodDeleter_Class_Size()
{
  return sizeof(QScopedPointerPodDeleter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qscopedpointer.h', line 81, column 24>
//   // proto: static void QScopedPointerPodDeleter::cleanup(void * pointer);
// _ZN24QScopedPointerPodDeleter7cleanupEPv cleanup(void *)
extern "C"
void
C_ZN24QScopedPointerPodDeleter7cleanupEPv(void * arg1) {
  QScopedPointerPodDeleter::cleanup(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

