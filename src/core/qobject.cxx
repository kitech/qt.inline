//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObject is pure virtual: false
// QObject has virtual projected: true
//  header block end

//  main block begin

class MyQObject : public QObject {
public:
  virtual ~MyQObject() {}
// void QObject(class QObject *)
MyQObject(QObject * parent) : QObject(parent) {}
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QObject10metaObjectEv(void *this_) {
  return (void*)((QObject*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:123
// [-2] void QObject(class QObject *)
extern "C"
void* C_ZN7QObjectC2EPS_(QObject * parent) {
  auto _nilp = (MyQObject*)(0);
  return  new MyQObject(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:124
// [-2] void ~QObject()
extern "C"
void C_ZN7QObjectD2Ev(void *this_) {
  delete (QObject*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:126
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN7QObject5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QObject*)this_)->event(event);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:127
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
bool C_ZN7QObject11eventFilterEPS_P6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QObject*)this_)->eventFilter(watched, event);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:144
// [8] QString objectName()
extern "C"
void* C_ZNK7QObject10objectNameEv(void *this_) {
  auto rv = ((QObject*)this_)->objectName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:145
// [-2] void setObjectName(const class QString &)
extern "C"
void C_ZN7QObject13setObjectNameERK7QString(void *this_, QString* name) {
  ((QObject*)this_)->setObjectName(*name);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:147
// [1] bool isWidgetType()
extern "C"
bool C_ZNK7QObject12isWidgetTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWidgetType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:148
// [1] bool isWindowType()
extern "C"
bool C_ZNK7QObject12isWindowTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWindowType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:150
// [1] bool signalsBlocked()
extern "C"
bool C_ZNK7QObject14signalsBlockedEv(void *this_) {
  return (bool)((QObject*)this_)->signalsBlocked();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:151
// [1] bool blockSignals(_Bool)
extern "C"
bool C_ZN7QObject12blockSignalsEb(void *this_, bool b) {
  return (bool)((QObject*)this_)->blockSignals(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:153
// [8] QThread * thread()
extern "C"
void* C_ZNK7QObject6threadEv(void *this_) {
  return (void*)((QObject*)this_)->thread();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:154
// [-2] void moveToThread(class QThread *)
extern "C"
void C_ZN7QObject12moveToThreadEP7QThread(void *this_, QThread * thread) {
  ((QObject*)this_)->moveToThread(thread);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:156
// [4] int startTimer(int, Qt::TimerType)
extern "C"
int C_ZN7QObject10startTimerEiN2Qt9TimerTypeE(void *this_, int interval, Qt::TimerType timerType) {
  return (int)((QObject*)this_)->startTimer(interval, timerType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:164
// [-2] void killTimer(int)
extern "C"
void C_ZN7QObject9killTimerEi(void *this_, int id) {
  ((QObject*)this_)->killTimer(id);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:207
// [8] const QObjectList & children()
extern "C"
void* C_ZNK7QObject8childrenEv(void *this_) {
  auto& rv = ((QObject*)this_)->children();
return new QObjectList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:209
// [-2] void setParent(class QObject *)
extern "C"
void C_ZN7QObject9setParentEPS_(void *this_, QObject * parent) {
  ((QObject*)this_)->setParent(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:210
// [-2] void installEventFilter(class QObject *)
extern "C"
void C_ZN7QObject18installEventFilterEPS_(void *this_, QObject * filterObj) {
  ((QObject*)this_)->installEventFilter(filterObj);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:211
// [-2] void removeEventFilter(class QObject *)
extern "C"
void C_ZN7QObject17removeEventFilterEPS_(void *this_, QObject * obj) {
  ((QObject*)this_)->removeEventFilter(obj);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:213
// [8] QMetaObject::Connection connect(const class QObject *, const char *, const class QObject *, const char *, Qt::ConnectionType)
extern "C"
QMetaObject::Connection C_ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(const QObject * sender, const char * signal, const QObject * receiver, const char * member, Qt::ConnectionType arg4) {
  return (QMetaObject::Connection)QObject::connect(sender, signal, receiver, member, arg4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:216
// [8] QMetaObject::Connection connect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &, Qt::ConnectionType)
extern "C"
QMetaObject::Connection C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* method, Qt::ConnectionType type_) {
  return (QMetaObject::Connection)QObject::connect(sender, *signal, receiver, *method, type_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:220
// [8] QMetaObject::Connection connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
extern "C"
QMetaObject::Connection C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *this_, const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type_) {
  return (QMetaObject::Connection)((QObject*)this_)->connect(sender, signal, member, type_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:342
// [1] bool disconnect(const class QObject *, const char *, const class QObject *, const char *)
extern "C"
bool C_ZN7QObject10disconnectEPKS_PKcS1_S3_(const QObject * sender, const char * signal, const QObject * receiver, const char * member) {
  return (bool)QObject::disconnect(sender, signal, receiver, member);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:344
// [1] bool disconnect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &)
extern "C"
bool C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* member) {
  return (bool)QObject::disconnect(sender, *signal, receiver, *member);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:346
// [1] bool disconnect(const char *, const class QObject *, const char *)
extern "C"
bool C_ZNK7QObject10disconnectEPKcPKS_S1_(void *this_, const char * signal, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(signal, receiver, member);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:349
// [1] bool disconnect(const class QObject *, const char *)
extern "C"
bool C_ZNK7QObject10disconnectEPKS_PKc(void *this_, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(receiver, member);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:390
// [-2] void dumpObjectTree()
extern "C"
void C_ZN7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:391
// [-2] void dumpObjectInfo()
extern "C"
void C_ZN7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:393
// [-2] void dumpObjectTree()
extern "C"
void C_ZNK7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:394
// [-2] void dumpObjectInfo()
extern "C"
void C_ZNK7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:397
// [1] bool setProperty(const char *, const class QVariant &)
extern "C"
bool C_ZN7QObject11setPropertyEPKcRK8QVariant(void *this_, const char * name, QVariant* value) {
  return (bool)((QObject*)this_)->setProperty(name, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:398
// [16] QVariant property(const char *)
extern "C"
void* C_ZNK7QObject8propertyEPKc(void *this_, const char * name) {
  auto rv = ((QObject*)this_)->property(name);
return new QVariant(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:403
// [4] uint registerUserData()
extern "C"
uint C_ZN7QObject16registerUserDataEv() {
  return (uint)QObject::registerUserData();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:404
// [-2] void setUserData(uint, class QObjectUserData *)
extern "C"
void C_ZN7QObject11setUserDataEjP15QObjectUserData(void *this_, uint id, QObjectUserData * data) {
  ((QObject*)this_)->setUserData(id, data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:405
// [8] QObjectUserData * userData(uint)
extern "C"
void* C_ZNK7QObject8userDataEj(void *this_, uint id) {
  return (void*)((QObject*)this_)->userData(id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:409
// [-2] void destroyed(class QObject *)
extern "C"
void C_ZN7QObject9destroyedEPS_(void *this_, QObject * arg0) {
  ((QObject*)this_)->destroyed(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:413
// [8] QObject * parent()
extern "C"
void* C_ZNK7QObject6parentEv(void *this_) {
  return (void*)((QObject*)this_)->parent();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:415
// [1] bool inherits(const char *)
extern "C"
bool C_ZNK7QObject8inheritsEPKc(void *this_, const char * classname) {
  return (bool)((QObject*)this_)->inherits(classname);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:419
// [-2] void deleteLater()
extern "C"
void C_ZN7QObject11deleteLaterEv(void *this_) {
  ((QObject*)this_)->deleteLater();
}
//  main block end
