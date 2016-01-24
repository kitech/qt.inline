// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qbasictimer.h
// dst-file: /src/core/qbasictimer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbasictimer.h>


// <= header block end

// main block begin =>
void __keep_qbasictimer_inline_symbols() {
//   // proto:  void QBasicTimer::~QBasicTimer();
if (true) {
  delete ((QBasicTimer*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 53, column 16>
//   // proto:  int QBasicTimer::timerId();
if (true) {
  auto f = [](QBasicTimer flythis) {
    ((QBasicTimer*)0)->timerId();
    flythis.timerId();
  };
  if (f == nullptr){}
}
// _ZNK11QBasicTimer7timerIdEv timerId()
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 52, column 17>
//   // proto:  bool QBasicTimer::isActive();
if (true) {
  auto f = [](QBasicTimer flythis) {
    ((QBasicTimer*)0)->isActive();
    flythis.isActive();
  };
  if (f == nullptr){}
}
// _ZNK11QBasicTimer8isActiveEv isActive()
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 49, column 12>
//   // proto:  void QBasicTimer::QBasicTimer();
if (true) {
  auto f = []() {
    new QBasicTimer();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QBasicTimer_Class_Size()
{
  return sizeof(QBasicTimer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 56, column 10>
//   // proto:  void QBasicTimer::start(int msec, Qt::TimerType timerType, QObject * obj);
// _ZN11QBasicTimer5startEiN2Qt9TimerTypeEP7QObject start(int, Qt::TimerType, class QObject *)
extern "C"
void
C_ZN11QBasicTimer5startEiN2Qt9TimerTypeEP7QObject(void *qthis,
int arg1,
Qt::TimerType* arg2,
QObject * arg3) {
  ((QBasicTimer*)qthis)->start(arg1,
*((Qt::TimerType*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 57, column 10>
//   // proto:  void QBasicTimer::stop();
// _ZN11QBasicTimer4stopEv stop()
extern "C"
void
C_ZN11QBasicTimer4stopEv(void *qthis) {
  ((QBasicTimer*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 53, column 16>
//   // proto:  int QBasicTimer::timerId();
// _ZNK11QBasicTimer7timerIdEv timerId()
extern "C"
int
C_ZNK11QBasicTimer7timerIdEv(void *qthis) {
  auto ret =
  ((QBasicTimer*)qthis)->timerId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 52, column 17>
//   // proto:  bool QBasicTimer::isActive();
// _ZNK11QBasicTimer8isActiveEv isActive()
extern "C"
bool
C_ZNK11QBasicTimer8isActiveEv(void *qthis) {
  auto ret =
  ((QBasicTimer*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qbasictimer.h', line 55, column 10>
//   // proto:  void QBasicTimer::start(int msec, QObject * obj);
// _ZN11QBasicTimer5startEiP7QObject start(int, class QObject *)
extern "C"
void
C_ZN11QBasicTimer5startEiP7QObject(void *qthis,
int arg1,
QObject * arg2) {
  ((QBasicTimer*)qthis)->start(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// <= body block end

