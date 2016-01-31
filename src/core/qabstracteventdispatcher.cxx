// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qabstracteventdispatcher.h
// dst-file: /src/core/qabstracteventdispatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstracteventdispatcher.h>


#include <qlist.h>
#include <qjsonarray.h>
// <= header block end

// main block begin =>
void __keep_qabstracteventdispatcher_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractEventDispatcher_Class_Size()
{
  return sizeof(QAbstractEventDispatcher);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 73, column 18>
//   // proto:  bool QAbstractEventDispatcher::hasPendingEvents();
// _ZN24QAbstractEventDispatcher16hasPendingEventsEv hasPendingEvents()
extern "C"
bool
C_ZN24QAbstractEventDispatcher16hasPendingEventsEv(void *qthis) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->hasPendingEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 67, column 14>
//   // proto:  void QAbstractEventDispatcher::QAbstractEventDispatcher(QObject * parent);
extern "C"
QAbstractEventDispatcher*
C_ZN24QAbstractEventDispatcherC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractEventDispatcher(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 84, column 9>
//   // proto:  int QAbstractEventDispatcher::registerTimer(int interval, Qt::TimerType timerType, QObject * object);
// _ZN24QAbstractEventDispatcher13registerTimerEiN2Qt9TimerTypeEP7QObject registerTimer(int, Qt::TimerType, class QObject *)
extern "C"
int
C_ZN24QAbstractEventDispatcher13registerTimerEiN2Qt9TimerTypeEP7QObject(void *qthis,
int arg1,
Qt::TimerType* arg2,
QObject * arg3) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->registerTimer(arg1,
*((Qt::TimerType*)arg2),
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 70, column 38>
//   // proto: static QAbstractEventDispatcher * QAbstractEventDispatcher::instance(QThread * thread);
// _ZN24QAbstractEventDispatcher8instanceEP7QThread instance(class QThread *)
extern "C"
void*
C_ZN24QAbstractEventDispatcher8instanceEP7QThread(QThread * arg1) {
  auto ret =
  QAbstractEventDispatcher::instance(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 106, column 10>
//   // proto:  bool QAbstractEventDispatcher::filterNativeEvent(const QByteArray & eventType, void * message, long * result);
// _ZN24QAbstractEventDispatcher17filterNativeEventERK10QByteArrayPvPl filterNativeEvent(const class QByteArray &, void *, long *)
extern "C"
bool
C_ZN24QAbstractEventDispatcher17filterNativeEventERK10QByteArrayPvPl(void *qthis,
const QByteArray* arg1,
void * arg2,
long * arg3) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->filterNativeEvent(*((const QByteArray*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QAbstractEventDispatcher::~QAbstractEventDispatcher();
extern "C"
void C_ZN24QAbstractEventDispatcherD2Ev(void *qthis) {
  delete (QAbstractEventDispatcher*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 112, column 10>
//   // proto:  void QAbstractEventDispatcher::aboutToBlock();
// _ZN24QAbstractEventDispatcher12aboutToBlockEv aboutToBlock()
extern "C"
void
C_ZN24QAbstractEventDispatcher12aboutToBlockEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->aboutToBlock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 98, column 18>
//   // proto:  void QAbstractEventDispatcher::interrupt();
// _ZN24QAbstractEventDispatcher9interruptEv interrupt()
extern "C"
void
C_ZN24QAbstractEventDispatcher9interruptEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->interrupt();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 113, column 10>
//   // proto:  void QAbstractEventDispatcher::awake();
// _ZN24QAbstractEventDispatcher5awakeEv awake()
extern "C"
void
C_ZN24QAbstractEventDispatcher5awakeEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->awake();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 75, column 18>
//   // proto:  void QAbstractEventDispatcher::registerSocketNotifier(QSocketNotifier * notifier);
// _ZN24QAbstractEventDispatcher22registerSocketNotifierEP15QSocketNotifier registerSocketNotifier(class QSocketNotifier *)
extern "C"
void
C_ZN24QAbstractEventDispatcher22registerSocketNotifierEP15QSocketNotifier(void *qthis,
QSocketNotifier * arg1) {
  ((QAbstractEventDispatcher*)qthis)->registerSocketNotifier(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 104, column 10>
//   // proto:  void QAbstractEventDispatcher::installNativeEventFilter(QAbstractNativeEventFilter * filterObj);
// _ZN24QAbstractEventDispatcher24installNativeEventFilterEP26QAbstractNativeEventFilter installNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void
C_ZN24QAbstractEventDispatcher24installNativeEventFilterEP26QAbstractNativeEventFilter(void *qthis,
QAbstractNativeEventFilter * arg1) {
  ((QAbstractEventDispatcher*)qthis)->installNativeEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 105, column 10>
//   // proto:  void QAbstractEventDispatcher::removeNativeEventFilter(QAbstractNativeEventFilter * filterObj);
// _ZN24QAbstractEventDispatcher23removeNativeEventFilterEP26QAbstractNativeEventFilter removeNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C"
void
C_ZN24QAbstractEventDispatcher23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *qthis,
QAbstractNativeEventFilter * arg1) {
  ((QAbstractEventDispatcher*)qthis)->removeNativeEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 88, column 30>
//   // proto:  QList<QAbstractEventDispatcher::TimerInfo> QAbstractEventDispatcher::registeredTimers(QObject * object);
// _ZNK24QAbstractEventDispatcher16registeredTimersEP7QObject registeredTimers(class QObject *)
extern "C"
QList<QAbstractEventDispatcher::TimerInfo>*
C_ZNK24QAbstractEventDispatcher16registeredTimersEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->registeredTimers(arg1);
  return new QList<QAbstractEventDispatcher::TimerInfo>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 99, column 18>
//   // proto:  void QAbstractEventDispatcher::flush();
// _ZN24QAbstractEventDispatcher5flushEv flush()
extern "C"
void
C_ZN24QAbstractEventDispatcher5flushEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->flush();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 76, column 18>
//   // proto:  void QAbstractEventDispatcher::unregisterSocketNotifier(QSocketNotifier * notifier);
// _ZN24QAbstractEventDispatcher24unregisterSocketNotifierEP15QSocketNotifier unregisterSocketNotifier(class QSocketNotifier *)
extern "C"
void
C_ZN24QAbstractEventDispatcher24unregisterSocketNotifierEP15QSocketNotifier(void *qthis,
QSocketNotifier * arg1) {
  ((QAbstractEventDispatcher*)qthis)->unregisterSocketNotifier(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 97, column 18>
//   // proto:  void QAbstractEventDispatcher::wakeUp();
// _ZN24QAbstractEventDispatcher6wakeUpEv wakeUp()
extern "C"
void
C_ZN24QAbstractEventDispatcher6wakeUpEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->wakeUp();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 52, column 5>
//   // proto:  const QMetaObject * QAbstractEventDispatcher::metaObject();
// _ZNK24QAbstractEventDispatcher10metaObjectEv metaObject()
extern "C"
void*
C_ZNK24QAbstractEventDispatcher10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 72, column 18>
//   // proto:  bool QAbstractEventDispatcher::processEvents(QEventLoop::ProcessEventsFlags flags);
// _ZN24QAbstractEventDispatcher13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE processEvents(class QEventLoop::ProcessEventsFlags)
extern "C"
bool
C_ZN24QAbstractEventDispatcher13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(void *qthis,
QEventLoop::ProcessEventsFlags* arg1) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->processEvents(*((QEventLoop::ProcessEventsFlags*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 87, column 18>
//   // proto:  bool QAbstractEventDispatcher::unregisterTimers(QObject * object);
// _ZN24QAbstractEventDispatcher16unregisterTimersEP7QObject unregisterTimers(class QObject *)
extern "C"
bool
C_ZN24QAbstractEventDispatcher16unregisterTimersEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->unregisterTimers(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 90, column 17>
//   // proto:  int QAbstractEventDispatcher::remainingTime(int timerId);
// _ZN24QAbstractEventDispatcher13remainingTimeEi remainingTime(int)
extern "C"
int
C_ZN24QAbstractEventDispatcher13remainingTimeEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->remainingTime(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 101, column 18>
//   // proto:  void QAbstractEventDispatcher::startingUp();
// _ZN24QAbstractEventDispatcher10startingUpEv startingUp()
extern "C"
void
C_ZN24QAbstractEventDispatcher10startingUpEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->startingUp();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 85, column 18>
//   // proto:  void QAbstractEventDispatcher::registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject * object);
// _ZN24QAbstractEventDispatcher13registerTimerEiiN2Qt9TimerTypeEP7QObject registerTimer(int, int, Qt::TimerType, class QObject *)
extern "C"
void
C_ZN24QAbstractEventDispatcher13registerTimerEiiN2Qt9TimerTypeEP7QObject(void *qthis,
int arg1,
int arg2,
Qt::TimerType* arg3,
QObject * arg4) {
  ((QAbstractEventDispatcher*)qthis)->registerTimer(arg1,
arg2,
*((Qt::TimerType*)arg3),
arg4);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 102, column 18>
//   // proto:  void QAbstractEventDispatcher::closingDown();
// _ZN24QAbstractEventDispatcher11closingDownEv closingDown()
extern "C"
void
C_ZN24QAbstractEventDispatcher11closingDownEv(void *qthis) {
  ((QAbstractEventDispatcher*)qthis)->closingDown();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstracteventdispatcher.h', line 86, column 18>
//   // proto:  bool QAbstractEventDispatcher::unregisterTimer(int timerId);
// _ZN24QAbstractEventDispatcher15unregisterTimerEi unregisterTimer(int)
extern "C"
bool
C_ZN24QAbstractEventDispatcher15unregisterTimerEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractEventDispatcher*)qthis)->unregisterTimer(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QAbstractEventDispatcher_SlotProxy here
class QAbstractEventDispatcher_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractEventDispatcher_SlotProxy():QObject(){}

public slots:
  // aboutToBlock()
  void slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv();
public:
  void (*slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv)(void* rsfptr) = NULL;
public slots:
  // awake()
  void slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv();
public:
  void (*slot_func__ZN24QAbstractEventDispatcher5awakeEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qabstracteventdispatcher.moc"

extern "C" {
  QAbstractEventDispatcher_SlotProxy* QAbstractEventDispatcher_SlotProxy_new()
  {
    return new QAbstractEventDispatcher_SlotProxy();
  }
};

void QAbstractEventDispatcher_SlotProxy::slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv() {
  if (this->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv != NULL) {
    // do smth...
    this->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractEventDispatcher_SlotProxy_connect__ZN24QAbstractEventDispatcher12aboutToBlockEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractEventDispatcher_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv = (decltype(that->slot_func__ZN24QAbstractEventDispatcher12aboutToBlockEv))ffifptr;
  QObject::connect((QAbstractEventDispatcher*)sender, SIGNAL(aboutToBlock()), that, SLOT(slot_proxy_func__ZN24QAbstractEventDispatcher12aboutToBlockEv()));
  return that;
}
extern "C"
void QAbstractEventDispatcher_SlotProxy_disconnect__ZN24QAbstractEventDispatcher12aboutToBlockEv(QAbstractEventDispatcher_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractEventDispatcher_SlotProxy::slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv() {
  if (this->slot_func__ZN24QAbstractEventDispatcher5awakeEv != NULL) {
    // do smth...
    this->slot_func__ZN24QAbstractEventDispatcher5awakeEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractEventDispatcher_SlotProxy_connect__ZN24QAbstractEventDispatcher5awakeEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractEventDispatcher_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN24QAbstractEventDispatcher5awakeEv = (decltype(that->slot_func__ZN24QAbstractEventDispatcher5awakeEv))ffifptr;
  QObject::connect((QAbstractEventDispatcher*)sender, SIGNAL(awake()), that, SLOT(slot_proxy_func__ZN24QAbstractEventDispatcher5awakeEv()));
  return that;
}
extern "C"
void QAbstractEventDispatcher_SlotProxy_disconnect__ZN24QAbstractEventDispatcher5awakeEv(QAbstractEventDispatcher_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

