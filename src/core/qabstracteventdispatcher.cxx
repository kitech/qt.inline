//  header block begin
// /usr/include/qt/QtCore/qabstracteventdispatcher.h
#ifndef protected
#define protected public
#endif
#include <qabstracteventdispatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractEventDispatcher is pure virtual: true
// QAbstractEventDispatcher has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractEventDispatcher : public QAbstractEventDispatcher {
public:
  virtual ~MyQAbstractEventDispatcher() {}
// void QAbstractEventDispatcher(class QObject *)
MyQAbstractEventDispatcher(QObject * parent) : QAbstractEventDispatcher(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractEventDispatcher10metaObjectEv(void *this_) {
  return (void*)((QAbstractEventDispatcher*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:73
// [-2] void QAbstractEventDispatcher(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcherC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractEventDispatcher(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:74
// [-2] void ~QAbstractEventDispatcher()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcherD2Ev(void *this_) {
  delete (QAbstractEventDispatcher*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:76
// [8] QAbstractEventDispatcher * instance(class QThread *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcher8instanceEP7QThread(QThread * thread) {
  return (void*)QAbstractEventDispatcher::instance(thread);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:78
// [1] bool processEvents(class QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (bool)((QAbstractEventDispatcher*)this_)->processEvents(flags);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:79
// [1] bool hasPendingEvents()
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher16hasPendingEventsEv(void *this_) {
  return (bool)((QAbstractEventDispatcher*)this_)->hasPendingEvents();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:81
// [-2] void registerSocketNotifier(class QSocketNotifier *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher22registerSocketNotifierEP15QSocketNotifier(void *this_, QSocketNotifier * notifier) {
  ((QAbstractEventDispatcher*)this_)->registerSocketNotifier(notifier);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:82
// [-2] void unregisterSocketNotifier(class QSocketNotifier *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher24unregisterSocketNotifierEP15QSocketNotifier(void *this_, QSocketNotifier * notifier) {
  ((QAbstractEventDispatcher*)this_)->unregisterSocketNotifier(notifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:90
// [4] int registerTimer(int, Qt::TimerType, class QObject *)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractEventDispatcher13registerTimerEiN2Qt9TimerTypeEP7QObject(void *this_, int interval, Qt::TimerType timerType, QObject * object) {
  return (int)((QAbstractEventDispatcher*)this_)->registerTimer(interval, timerType, object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:91
// [-2] void registerTimer(int, int, Qt::TimerType, class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher13registerTimerEiiN2Qt9TimerTypeEP7QObject(void *this_, int timerId, int interval, Qt::TimerType timerType, QObject * object) {
  ((QAbstractEventDispatcher*)this_)->registerTimer(timerId, interval, timerType, object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:92
// [1] bool unregisterTimer(int)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher15unregisterTimerEi(void *this_, int timerId) {
  return (bool)((QAbstractEventDispatcher*)this_)->unregisterTimer(timerId);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:93
// [1] bool unregisterTimers(class QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher16unregisterTimersEP7QObject(void *this_, QObject * object) {
  return (bool)((QAbstractEventDispatcher*)this_)->unregisterTimers(object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:96
// [4] int remainingTime(int)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractEventDispatcher13remainingTimeEi(void *this_, int timerId) {
  return (int)((QAbstractEventDispatcher*)this_)->remainingTime(timerId);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:103
// [-2] void wakeUp()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher6wakeUpEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->wakeUp();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:104
// [-2] void interrupt()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher9interruptEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->interrupt();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:105
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher5flushEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->flush();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:107
// [-2] void startingUp()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher10startingUpEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->startingUp();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:108
// [-2] void closingDown()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher11closingDownEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->closingDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:110
// [-2] void installNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher24installNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QAbstractEventDispatcher*)this_)->installNativeEventFilter(filterObj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:111
// [-2] void removeNativeEventFilter(class QAbstractNativeEventFilter *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QAbstractEventDispatcher*)this_)->removeNativeEventFilter(filterObj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:112
// [1] bool filterNativeEvent(const class QByteArray &, void *, long *)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher17filterNativeEventERK10QByteArrayPvPl(void *this_, QByteArray* eventType, void * message, long * result) {
  return (bool)((QAbstractEventDispatcher*)this_)->filterNativeEvent(*eventType, message, result);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:119
// [-2] void aboutToBlock()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher12aboutToBlockEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->aboutToBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:120
// [-2] void awake()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher5awakeEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->awake();
}

//  main block end
