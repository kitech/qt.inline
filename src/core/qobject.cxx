//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

// QObject is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:422
// [8] QObject * sender()
extern "C"
void* callback_ZNK7QObject6senderEv = 0;
extern "C" void set_callback_ZNK7QObject6senderEv(void*cbfn)
{ callback_ZNK7QObject6senderEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:423
// [4] int senderSignalIndex()
extern "C"
void* callback_ZNK7QObject17senderSignalIndexEv = 0;
extern "C" void set_callback_ZNK7QObject17senderSignalIndexEv(void*cbfn)
{ callback_ZNK7QObject17senderSignalIndexEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:424
// [4] int receivers(const char *)
extern "C"
void* callback_ZNK7QObject9receiversEPKc = 0;
extern "C" void set_callback_ZNK7QObject9receiversEPKc(void*cbfn)
{ callback_ZNK7QObject9receiversEPKc = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:425
// [1] bool isSignalConnected(const class QMetaMethod &)
extern "C"
void* callback_ZNK7QObject17isSignalConnectedERK11QMetaMethod = 0;
extern "C" void set_callback_ZNK7QObject17isSignalConnectedERK11QMetaMethod(void*cbfn)
{ callback_ZNK7QObject17isSignalConnectedERK11QMetaMethod = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:427
// [-2] void timerEvent(class QTimerEvent *)
extern "C"
void* callback_ZN7QObject10timerEventEP11QTimerEvent = 0;
extern "C" void set_callback_ZN7QObject10timerEventEP11QTimerEvent(void*cbfn)
{ callback_ZN7QObject10timerEventEP11QTimerEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:428
// [-2] void childEvent(class QChildEvent *)
extern "C"
void* callback_ZN7QObject10childEventEP11QChildEvent = 0;
extern "C" void set_callback_ZN7QObject10childEventEP11QChildEvent(void*cbfn)
{ callback_ZN7QObject10childEventEP11QChildEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:429
// [-2] void customEvent(class QEvent *)
extern "C"
void* callback_ZN7QObject11customEventEP6QEvent = 0;
extern "C" void set_callback_ZN7QObject11customEventEP6QEvent(void*cbfn)
{ callback_ZN7QObject11customEventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:431
// [-2] void connectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN7QObject13connectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN7QObject13connectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN7QObject13connectNotifyERK11QMetaMethod = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:432
// [-2] void disconnectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN7QObject16disconnectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN7QObject16disconnectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN7QObject16disconnectNotifyERK11QMetaMethod = cbfn; }

class MyQObject : public QObject {
public:
MyQObject(QObject * parent) : QObject(parent) {}
// QObject * sender()
// QObject * sender()
virtual QObject * sender() {
  if (callback_ZNK7QObject6senderEv != 0) {
  // callback_ZNK7QObject6senderEv();
}}
// int senderSignalIndex()
// int senderSignalIndex()
virtual int senderSignalIndex() {
  if (callback_ZNK7QObject17senderSignalIndexEv != 0) {
  // callback_ZNK7QObject17senderSignalIndexEv();
}}
// int receivers(const char *)
// int receivers(const char *)
virtual int receivers(const char * signal) {
  if (callback_ZNK7QObject9receiversEPKc != 0) {
  // callback_ZNK7QObject9receiversEPKc(signal);
}}
// bool isSignalConnected(const class QMetaMethod &)
// bool isSignalConnected(const class QMetaMethod &)
virtual bool isSignalConnected(const QMetaMethod & signal) {
  if (callback_ZNK7QObject17isSignalConnectedERK11QMetaMethod != 0) {
  // callback_ZNK7QObject17isSignalConnectedERK11QMetaMethod(signal);
}}
// void timerEvent(class QTimerEvent *)
// void timerEvent(class QTimerEvent *)
virtual void timerEvent(QTimerEvent * event) {
  if (callback_ZN7QObject10timerEventEP11QTimerEvent != 0) {
  // callback_ZN7QObject10timerEventEP11QTimerEvent(event);
}}
// void childEvent(class QChildEvent *)
// void childEvent(class QChildEvent *)
virtual void childEvent(QChildEvent * event) {
  if (callback_ZN7QObject10childEventEP11QChildEvent != 0) {
  // callback_ZN7QObject10childEventEP11QChildEvent(event);
}}
// void customEvent(class QEvent *)
// void customEvent(class QEvent *)
virtual void customEvent(QEvent * event) {
  if (callback_ZN7QObject11customEventEP6QEvent != 0) {
  // callback_ZN7QObject11customEventEP6QEvent(event);
}}
// void connectNotify(const class QMetaMethod &)
// void connectNotify(const class QMetaMethod &)
virtual void connectNotify(const QMetaMethod & signal) {
  if (callback_ZN7QObject13connectNotifyERK11QMetaMethod != 0) {
  // callback_ZN7QObject13connectNotifyERK11QMetaMethod(signal);
}}
// void disconnectNotify(const class QMetaMethod &)
// void disconnectNotify(const class QMetaMethod &)
virtual void disconnectNotify(const QMetaMethod & signal) {
  if (callback_ZN7QObject16disconnectNotifyERK11QMetaMethod != 0) {
  // callback_ZN7QObject16disconnectNotifyERK11QMetaMethod(signal);
}}
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
void* C_ZN7QObjectC1EPS_(QObject * parent) {
  (MyQObject*)(0);
  return  new MyQObject(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:124
// [-2] void ~QObject()
extern "C"
void C_ZN7QObjectD1Ev(void *this_) {
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
void C_ZN7QObject13setObjectNameERK7QString(void *this_, const QString & name) {
  ((QObject*)this_)->setObjectName(name);
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
QMetaObject::Connection C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & method, Qt::ConnectionType type) {
  return (QMetaObject::Connection)QObject::connect(sender, signal, receiver, method, type);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:220
// [8] QMetaObject::Connection connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
extern "C"
QMetaObject::Connection C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *this_, const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type) {
  return (QMetaObject::Connection)((QObject*)this_)->connect(sender, signal, member, type);
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
bool C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & member) {
  return (bool)QObject::disconnect(sender, signal, receiver, member);
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
bool C_ZN7QObject11setPropertyEPKcRK8QVariant(void *this_, const char * name, const QVariant & value) {
  return (bool)((QObject*)this_)->setProperty(name, value);
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
