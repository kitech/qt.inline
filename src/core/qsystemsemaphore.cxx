// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qsystemsemaphore.h
// dst-file: /src/core/qsystemsemaphore.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsystemsemaphore.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsystemsemaphore_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSystemSemaphore_Class_Size()
{
  return sizeof(QSystemSemaphore);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 72, column 13>
//   // proto:  QString QSystemSemaphore::key();
// _ZNK16QSystemSemaphore3keyEv key()
extern "C"
QString*
C_ZNK16QSystemSemaphore3keyEv(void *qthis) {
  auto ret =
  ((QSystemSemaphore*)qthis)->key();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 68, column 5>
//   // proto:  void QSystemSemaphore::QSystemSemaphore(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode);
extern "C"
QSystemSemaphore*
C_ZN16QSystemSemaphoreC2ERK7QStringiNS_10AccessModeE(const QString* arg1,
int arg2,
QSystemSemaphore::AccessMode arg3) {
  auto ret = new QSystemSemaphore(*((const QString*)arg1), arg2, arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 75, column 10>
//   // proto:  bool QSystemSemaphore::release(int n);
// _ZN16QSystemSemaphore7releaseEi release(int)
extern "C"
bool
C_ZN16QSystemSemaphore7releaseEi(void *qthis,
int arg1) {
  auto ret =
  ((QSystemSemaphore*)qthis)->release(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 78, column 13>
//   // proto:  QString QSystemSemaphore::errorString();
// _ZNK16QSystemSemaphore11errorStringEv errorString()
extern "C"
QString*
C_ZNK16QSystemSemaphore11errorStringEv(void *qthis) {
  auto ret =
  ((QSystemSemaphore*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 74, column 10>
//   // proto:  bool QSystemSemaphore::acquire();
// _ZN16QSystemSemaphore7acquireEv acquire()
extern "C"
bool
C_ZN16QSystemSemaphore7acquireEv(void *qthis) {
  auto ret =
  ((QSystemSemaphore*)qthis)->acquire();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSystemSemaphore::~QSystemSemaphore();
extern "C"
void C_ZN16QSystemSemaphoreD2Ev(void *qthis) {
  delete (QSystemSemaphore*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 71, column 10>
//   // proto:  void QSystemSemaphore::setKey(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode);
// _ZN16QSystemSemaphore6setKeyERK7QStringiNS_10AccessModeE setKey(const class QString &, int, enum QSystemSemaphore::AccessMode)
extern "C"
void
C_ZN16QSystemSemaphore6setKeyERK7QStringiNS_10AccessModeE(void *qthis,
const QString* arg1,
int arg2,
QSystemSemaphore::AccessMode arg3) {
  ((QSystemSemaphore*)qthis)->setKey(*((const QString*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsystemsemaphore.h', line 77, column 26>
//   // proto:  QSystemSemaphore::SystemSemaphoreError QSystemSemaphore::error();
// _ZNK16QSystemSemaphore5errorEv error()
extern "C"
QSystemSemaphore::SystemSemaphoreError
C_ZNK16QSystemSemaphore5errorEv(void *qthis) {
  auto ret =
  ((QSystemSemaphore*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

