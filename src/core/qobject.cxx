//  header block begin
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObject is pure virtual: false
// QObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQObject : public QObject {
public:
  virtual ~MyQObject() {}
// void QObject(class QObject *)
MyQObject(QObject * parent) : QObject(parent) {}
// Protected Visibility=Default Availability=Available
// QObject * sender()
  virtual QObject * sender() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sender", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QObject *)(irv);
      // PointerPointerQObject *
    } else {
    return QObject::sender();
  }
  }

// Protected Visibility=Default Availability=Available
// int senderSignalIndex()
  virtual int senderSignalIndex() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"senderSignalIndex", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QObject::senderSignalIndex();
  }
  }

// Protected Visibility=Default Availability=Available
// int receivers(const char *)
  virtual int receivers(const char * signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"receivers", &handled, 1, (uint64_t)signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QObject::receivers(signal);
  }
  }

// Protected Visibility=Default Availability=Available
// bool isSignalConnected(const class QMetaMethod &)
  virtual bool isSignalConnected(const QMetaMethod & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isSignalConnected", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QObject::isSignalConnected(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QObject::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void childEvent(class QChildEvent *)
  virtual void childEvent(QChildEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"childEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QObject::childEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void customEvent(class QEvent *)
  virtual void customEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"customEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QObject::customEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void connectNotify(const class QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QObject::connectNotify(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void disconnectNotify(const class QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QObject::disconnectNotify(signal);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:423
// [8] QObject * sender()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject6senderEv(void *this_) {
  return (void*)((QObject*)this_)->QObject::sender();
}

// Protected Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qobject.h:424
// [4] int senderSignalIndex()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK7QObject17senderSignalIndexEv(void *this_) {
  return (int)((QObject*)this_)->QObject::senderSignalIndex();
}
#endif // QT_VERSION >= 0x040800

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:425
// [4] int receivers(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK7QObject9receiversEPKc(void *this_, const char * signal) {
  return (int)((QObject*)this_)->QObject::receivers(signal);
}

// Protected Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobject.h:426
// [1] bool isSignalConnected(const class QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject17isSignalConnectedERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  return (bool)((QObject*)this_)->QObject::isSignalConnected(*signal);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:428
// [-2] void timerEvent(class QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QObject*)this_)->QObject::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:429
// [-2] void childEvent(class QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject10childEventEP11QChildEvent(void *this_, QChildEvent * event) {
  ((QObject*)this_)->QObject::childEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:430
// [-2] void customEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11customEventEP6QEvent(void *this_, QEvent * event) {
  ((QObject*)this_)->QObject::customEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobject.h:432
// [-2] void connectNotify(const class QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QObject13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QObject*)this_)->QObject::connectNotify(*signal);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobject.h:433
// [-2] void disconnectNotify(const class QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QObject16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QObject*)this_)->QObject::disconnectNotify(*signal);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:119
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject10metaObjectEv(void *this_) {
  return (void*)((QObject*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:124
// [-2] void QObject(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObjectC2EPS_(QObject * parent) {
  auto _nilp = (MyQObject*)(0);
  return  new MyQObject(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:125
// [-2] void ~QObject()
extern "C" Q_DECL_EXPORT
void C_ZN7QObjectD2Ev(void *this_) {
  delete (QObject*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:127
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QObject*)this_)->event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:128
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject11eventFilterEPS_P6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QObject*)this_)->eventFilter(watched, event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:145
// [8] QString objectName()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject10objectNameEv(void *this_) {
  auto rv = ((QObject*)this_)->objectName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:146
// [-2] void setObjectName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject13setObjectNameERK7QString(void *this_, QString* name) {
  ((QObject*)this_)->setObjectName(*name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:148
// [1] bool isWidgetType()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject12isWidgetTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWidgetType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:149
// [1] bool isWindowType()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject12isWindowTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWindowType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:151
// [1] bool signalsBlocked()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject14signalsBlockedEv(void *this_) {
  return (bool)((QObject*)this_)->signalsBlocked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:152
// [1] bool blockSignals(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject12blockSignalsEb(void *this_, bool b) {
  return (bool)((QObject*)this_)->blockSignals(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:154
// [8] QThread * thread()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject6threadEv(void *this_) {
  return (void*)((QObject*)this_)->thread();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:155
// [-2] void moveToThread(class QThread *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject12moveToThreadEP7QThread(void *this_, QThread * thread) {
  ((QObject*)this_)->moveToThread(thread);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:157
// [4] int startTimer(int, Qt::TimerType)
extern "C" Q_DECL_EXPORT
int C_ZN7QObject10startTimerEiN2Qt9TimerTypeE(void *this_, int interval, Qt::TimerType timerType) {
  return (int)((QObject*)this_)->startTimer(interval, timerType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:165
// [-2] void killTimer(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9killTimerEi(void *this_, int id) {
  ((QObject*)this_)->killTimer(id);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:208
// [8] const QObjectList & children()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8childrenEv(void *this_) {
  auto& rv = ((QObject*)this_)->children();
return new QObjectList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:210
// [-2] void setParent(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9setParentEPS_(void *this_, QObject * parent) {
  ((QObject*)this_)->setParent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:211
// [-2] void installEventFilter(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject18installEventFilterEPS_(void *this_, QObject * filterObj) {
  ((QObject*)this_)->installEventFilter(filterObj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:212
// [-2] void removeEventFilter(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject17removeEventFilterEPS_(void *this_, QObject * obj) {
  ((QObject*)this_)->removeEventFilter(obj);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:214
// [8] QMetaObject::Connection connect(const class QObject *, const char *, const class QObject *, const char *, Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
QMetaObject::Connection C_ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(const QObject * sender, const char * signal, const QObject * receiver, const char * member, Qt::ConnectionType arg4) {
  return (QMetaObject::Connection)QObject::connect(sender, signal, receiver, member, arg4);
}

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qobject.h:217
// [8] QMetaObject::Connection connect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &, Qt::ConnectionType)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QMetaObject::Connection C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* method, Qt::ConnectionType type_) {
  return (QMetaObject::Connection)QObject::connect(sender, *signal, receiver, *method, type_);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:221
// [8] QMetaObject::Connection connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
QMetaObject::Connection C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *this_, const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type_) {
  return (QMetaObject::Connection)((QObject*)this_)->connect(sender, signal, member, type_);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:343
// [1] bool disconnect(const class QObject *, const char *, const class QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject10disconnectEPKS_PKcS1_S3_(const QObject * sender, const char * signal, const QObject * receiver, const char * member) {
  return (bool)QObject::disconnect(sender, signal, receiver, member);
}

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qobject.h:345
// [1] bool disconnect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* member) {
  return (bool)QObject::disconnect(sender, *signal, receiver, *member);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:347
// [1] bool disconnect(const char *, const class QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject10disconnectEPKcPKS_S1_(void *this_, const char * signal, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(signal, receiver, member);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:350
// [1] bool disconnect(const class QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject10disconnectEPKS_PKc(void *this_, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:391
// [-2] void dumpObjectTree()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:392
// [-2] void dumpObjectInfo()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:394
// [-2] void dumpObjectTree()
extern "C" Q_DECL_EXPORT
void C_ZNK7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:395
// [-2] void dumpObjectInfo()
extern "C" Q_DECL_EXPORT
void C_ZNK7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:398
// [1] bool setProperty(const char *, const class QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject11setPropertyEPKcRK8QVariant(void *this_, const char * name, QVariant* value) {
  return (bool)((QObject*)this_)->setProperty(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:399
// [16] QVariant property(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8propertyEPKc(void *this_, const char * name) {
  auto rv = ((QObject*)this_)->property(name);
return new QVariant(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:404
// [4] uint registerUserData()
extern "C" Q_DECL_EXPORT
uint C_ZN7QObject16registerUserDataEv() {
  return (uint)QObject::registerUserData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:405
// [-2] void setUserData(uint, class QObjectUserData *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11setUserDataEjP15QObjectUserData(void *this_, uint id, QObjectUserData * data) {
  ((QObject*)this_)->setUserData(id, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:406
// [8] QObjectUserData * userData(uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8userDataEj(void *this_, uint id) {
  return (void*)((QObject*)this_)->userData(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:410
// [-2] void destroyed(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9destroyedEPS_(void *this_, QObject * arg0) {
  ((QObject*)this_)->destroyed(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:414
// [8] QObject * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject6parentEv(void *this_) {
  return (void*)((QObject*)this_)->parent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:416
// [1] bool inherits(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject8inheritsEPKc(void *this_, const char * classname) {
  return (bool)((QObject*)this_)->inherits(classname);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:420
// [-2] void deleteLater()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11deleteLaterEv(void *this_) {
  ((QObject*)this_)->deleteLater();
}

//  main block end
