// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qtimer.h
// dst-file: /src/core/qtimer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtimer.h>


#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qtimer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 60, column 9>
//   // proto:  int QTimer::timerId();
if (true) {
  auto f = [](QTimer flythis) {
    ((QTimer*)0)->timerId();
    flythis.timerId();
  };
  if (f == nullptr){}
}
// _ZNK6QTimer7timerIdEv timerId()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 70, column 17>
//   // proto:  void QTimer::setSingleShot(bool singleShot);
if (true) {
  auto f = [](QTimer flythis, bool arg1) {
    ((QTimer*)0)->setSingleShot(arg1);
    flythis.setSingleShot(arg1);
  };
  if (f == nullptr){}
}
// _ZN6QTimer13setSingleShotEb setSingleShot(_Bool)
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 68, column 19>
//   // proto:  Qt::TimerType QTimer::timerType();
if (true) {
  auto f = [](QTimer flythis) {
    ((QTimer*)0)->timerType();
    flythis.timerType();
  };
  if (f == nullptr){}
}
// _ZNK6QTimer9timerTypeEv timerType()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 63, column 9>
//   // proto:  int QTimer::interval();
if (true) {
  auto f = [](QTimer flythis) {
    ((QTimer*)0)->interval();
    flythis.interval();
  };
  if (f == nullptr){}
}
// _ZNK6QTimer8intervalEv interval()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 67, column 10>
//   // proto:  void QTimer::setTimerType(Qt::TimerType atype);
if (true) {
  auto f = [](QTimer flythis, Qt::TimerType arg1) {
    ((QTimer*)0)->setTimerType(arg1);
    flythis.setTimerType(arg1);
  };
  if (f == nullptr){}
}
// _ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE setTimerType(Qt::TimerType)
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 71, column 17>
//   // proto:  bool QTimer::isSingleShot();
if (true) {
  auto f = [](QTimer flythis) {
    ((QTimer*)0)->isSingleShot();
    flythis.isSingleShot();
  };
  if (f == nullptr){}
}
// _ZNK6QTimer12isSingleShotEv isSingleShot()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 59, column 17>
//   // proto:  bool QTimer::isActive();
if (true) {
  auto f = [](QTimer flythis) {
    ((QTimer*)0)->isActive();
    flythis.isActive();
  };
  if (f == nullptr){}
}
// _ZNK6QTimer8isActiveEv isActive()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTimer_Class_Size()
{
  return sizeof(QTimer);
}

// <= use block end

// ext block begin =>
//   // proto:  void QTimer::~QTimer();
extern "C"
void C_ZN6QTimerD2Ev(void *qthis) {
  delete (QTimer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 141, column 10>
//   // proto:  void QTimer::stop();
// _ZN6QTimer4stopEv stop()
extern "C"
void
C_ZN6QTimer4stopEv(void *qthis) {
  ((QTimer*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 60, column 9>
//   // proto:  int QTimer::timerId();
// _ZNK6QTimer7timerIdEv timerId()
extern "C"
int
C_ZNK6QTimer7timerIdEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->timerId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 70, column 17>
//   // proto:  void QTimer::setSingleShot(bool singleShot);
// _ZN6QTimer13setSingleShotEb setSingleShot(_Bool)
extern "C"
void
C_ZN6QTimer13setSingleShotEb(void *qthis,
bool arg1) {
  ((QTimer*)qthis)->setSingleShot(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 73, column 17>
//   // proto: static void QTimer::singleShot(int msec, const QObject * receiver, const char * member);
// _ZN6QTimer10singleShotEiPK7QObjectPKc singleShot(int, const class QObject *, const char *)
extern "C"
void
C_ZN6QTimer10singleShotEiPK7QObjectPKc(int arg1,
const QObject * arg2,
const char * arg3) {
  QTimer::singleShot(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 68, column 19>
//   // proto:  Qt::TimerType QTimer::timerType();
// _ZNK6QTimer9timerTypeEv timerType()
extern "C"
Qt::TimerType
C_ZNK6QTimer9timerTypeEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->timerType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 140, column 10>
//   // proto:  void QTimer::start();
// _ZN6QTimer5startEv start()
extern "C"
void
C_ZN6QTimer5startEv(void *qthis) {
  ((QTimer*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 63, column 9>
//   // proto:  int QTimer::interval();
// _ZNK6QTimer8intervalEv interval()
extern "C"
int
C_ZNK6QTimer8intervalEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->interval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 62, column 10>
//   // proto:  void QTimer::setInterval(int msec);
// _ZN6QTimer11setIntervalEi setInterval(int)
extern "C"
void
C_ZN6QTimer11setIntervalEi(void *qthis,
int arg1) {
  ((QTimer*)qthis)->setInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 138, column 10>
//   // proto:  void QTimer::start(int msec);
// _ZN6QTimer5startEi start(int)
extern "C"
void
C_ZN6QTimer5startEi(void *qthis,
int arg1) {
  ((QTimer*)qthis)->start(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 67, column 10>
//   // proto:  void QTimer::setTimerType(Qt::TimerType atype);
// _ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE setTimerType(Qt::TimerType)
extern "C"
void
C_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE(void *qthis,
Qt::TimerType* arg1) {
  ((QTimer*)qthis)->setTimerType(*((Qt::TimerType*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 65, column 9>
//   // proto:  int QTimer::remainingTime();
// _ZNK6QTimer13remainingTimeEv remainingTime()
extern "C"
int
C_ZNK6QTimer13remainingTimeEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->remainingTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 71, column 17>
//   // proto:  bool QTimer::isSingleShot();
// _ZNK6QTimer12isSingleShotEv isSingleShot()
extern "C"
bool
C_ZNK6QTimer12isSingleShotEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->isSingleShot();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 59, column 17>
//   // proto:  bool QTimer::isActive();
// _ZNK6QTimer8isActiveEv isActive()
extern "C"
bool
C_ZNK6QTimer8isActiveEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 49, column 5>
//   // proto:  const QMetaObject * QTimer::metaObject();
// _ZNK6QTimer10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QTimer10metaObjectEv(void *qthis) {
  auto ret =
  ((QTimer*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 56, column 14>
//   // proto:  void QTimer::QTimer(QObject * parent);
extern "C"
QTimer*
C_ZN6QTimerC2EP7QObject(QObject * arg1) {
  auto ret = new QTimer(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 74, column 17>
//   // proto: static void QTimer::singleShot(int msec, Qt::TimerType timerType, const QObject * receiver, const char * member);
// _ZN6QTimer10singleShotEiN2Qt9TimerTypeEPK7QObjectPKc singleShot(int, Qt::TimerType, const class QObject *, const char *)
extern "C"
void
C_ZN6QTimer10singleShotEiN2Qt9TimerTypeEPK7QObjectPKc(int arg1,
Qt::TimerType* arg2,
const QObject * arg3,
const char * arg4) {
  QTimer::singleShot(arg1,
*((Qt::TimerType*)arg2),
arg3,
arg4);
}
// <= ext block end

// body block begin =>
// QTimer_SlotProxy here
class QTimer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimer_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtimer.moc"

extern "C" {
  QTimer_SlotProxy* QTimer_SlotProxy_new()
  {
    return new QTimer_SlotProxy();
  }
};

// <= body block end

