// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qrunnable.h
// dst-file: /src/core/qrunnable.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qrunnable.h>


// <= header block end

// main block begin =>
void __keep_qrunnable_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 64, column 10>
//   // proto:  void QRunnable::setAutoDelete(bool _autoDelete);
if (true) {
  auto f = [](bool arg1) {
    ((QRunnable*)0)->setAutoDelete(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QRunnable13setAutoDeleteEb setAutoDelete(_Bool)
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 60, column 5>
//   // proto:  void QRunnable::QRunnable();
if (true) {
  auto f = []() {
    // new QRunnable();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 63, column 10>
//   // proto:  bool QRunnable::autoDelete();
if (true) {
  auto f = []() {
    ((QRunnable*)0)->autoDelete();
  };
  if (f == nullptr){}
}
// _ZNK9QRunnable10autoDeleteEv autoDelete()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRunnable_Class_Size()
{
  return sizeof(QRunnable);
}

// <= use block end

// ext block begin =>
//   // proto:  void QRunnable::~QRunnable();
extern "C"
void C_ZN9QRunnableD2Ev(void *qthis) {
  delete (QRunnable*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 64, column 10>
//   // proto:  void QRunnable::setAutoDelete(bool _autoDelete);
// _ZN9QRunnable13setAutoDeleteEb setAutoDelete(_Bool)
extern "C"
void
C_ZN9QRunnable13setAutoDeleteEb(void *qthis,
bool arg1) {
  ((QRunnable*)qthis)->setAutoDelete(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 60, column 5>
//   // proto:  void QRunnable::QRunnable();
extern "C"
QRunnable*
C_ZN9QRunnableC2Ev() {
  // auto ret = new QRunnable();
}
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 58, column 18>
//   // proto:  void QRunnable::run();
// _ZN9QRunnable3runEv run()
extern "C"
void
C_ZN9QRunnable3runEv(void *qthis) {
  ((QRunnable*)qthis)->run();
}
// <SourceLocation file '/usr/include/qt/QtCore/qrunnable.h', line 63, column 10>
//   // proto:  bool QRunnable::autoDelete();
// _ZNK9QRunnable10autoDeleteEv autoDelete()
extern "C"
bool
C_ZNK9QRunnable10autoDeleteEv(void *qthis) {
  auto ret =
  ((QRunnable*)qthis)->autoDelete();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

