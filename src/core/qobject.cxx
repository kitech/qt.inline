//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qobject.h:114
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QObject10metaObjectEv(void *this_) {
  /*return*/ ((QObject*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qobject.h:119
// void QObject(class QObject *)
extern "C"
void* C_ZN7QObjectC1EPS_(QObject * parent) {
  return new QObject(parent);
}
// virtual
// /usr/include/qt/QtCore/qobject.h:120
// void ~QObject()
extern "C"
void C_ZN7QObjectD1Ev(void *this_) {
  delete (QObject*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qobject.h:122
// bool event(class QEvent *)
extern "C"
void C_ZN7QObject5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QObject*)this_)->event(event);
}
// virtual
// /usr/include/qt/QtCore/qobject.h:123
// bool eventFilter(class QObject *, class QEvent *)
extern "C"
void C_ZN7QObject11eventFilterEPS_P6QEvent(void *this_, QObject * watched, QEvent * event) {
  /*return*/ ((QObject*)this_)->eventFilter(watched, event);
}
// /usr/include/qt/QtCore/qobject.h:140
// QString objectName()
extern "C"
void C_ZNK7QObject10objectNameEv(void *this_) {
  /*return*/ ((QObject*)this_)->objectName();
}
// /usr/include/qt/QtCore/qobject.h:141
// void setObjectName(const class QString &)
extern "C"
void C_ZN7QObject13setObjectNameERK7QString(void *this_, const QString & name) {
  ((QObject*)this_)->setObjectName(name);
}
// inline
// /usr/include/qt/QtCore/qobject.h:143
// bool isWidgetType()
extern "C"
void C_ZNK7QObject12isWidgetTypeEv(void *this_) {
  /*return*/ ((QObject*)this_)->isWidgetType();
}
// inline
// /usr/include/qt/QtCore/qobject.h:144
// bool isWindowType()
extern "C"
void C_ZNK7QObject12isWindowTypeEv(void *this_) {
  /*return*/ ((QObject*)this_)->isWindowType();
}
// inline
// /usr/include/qt/QtCore/qobject.h:146
// bool signalsBlocked()
extern "C"
void C_ZNK7QObject14signalsBlockedEv(void *this_) {
  /*return*/ ((QObject*)this_)->signalsBlocked();
}
// /usr/include/qt/QtCore/qobject.h:147
// bool blockSignals(_Bool)
extern "C"
void C_ZN7QObject12blockSignalsEb(void *this_, bool b) {
  /*return*/ ((QObject*)this_)->blockSignals(b);
}
// /usr/include/qt/QtCore/qobject.h:149
// QThread * thread()
extern "C"
void C_ZNK7QObject6threadEv(void *this_) {
  /*return*/ ((QObject*)this_)->thread();
}
// /usr/include/qt/QtCore/qobject.h:150
// void moveToThread(class QThread *)
extern "C"
void C_ZN7QObject12moveToThreadEP7QThread(void *this_, QThread * thread) {
  ((QObject*)this_)->moveToThread(thread);
}
// /usr/include/qt/QtCore/qobject.h:152
// int startTimer(int, Qt::TimerType)
extern "C"
void C_ZN7QObject10startTimerEiN2Qt9TimerTypeE(void *this_, int interval, Qt::TimerType timerType) {
  /*return*/ ((QObject*)this_)->startTimer(interval, timerType);
}
// /usr/include/qt/QtCore/qobject.h:153
// void killTimer(int)
extern "C"
void C_ZN7QObject9killTimerEi(void *this_, int id) {
  ((QObject*)this_)->killTimer(id);
}
// inline
// /usr/include/qt/QtCore/qobject.h:196
// const QObjectList & children()
extern "C"
void C_ZNK7QObject8childrenEv(void *this_) {
  /*return*/ ((QObject*)this_)->children();
}
// /usr/include/qt/QtCore/qobject.h:198
// void setParent(class QObject *)
extern "C"
void C_ZN7QObject9setParentEPS_(void *this_, QObject * parent) {
  ((QObject*)this_)->setParent(parent);
}
// /usr/include/qt/QtCore/qobject.h:199
// void installEventFilter(class QObject *)
extern "C"
void C_ZN7QObject18installEventFilterEPS_(void *this_, QObject * filterObj) {
  ((QObject*)this_)->installEventFilter(filterObj);
}
// /usr/include/qt/QtCore/qobject.h:200
// void removeEventFilter(class QObject *)
extern "C"
void C_ZN7QObject17removeEventFilterEPS_(void *this_, QObject * obj) {
  ((QObject*)this_)->removeEventFilter(obj);
}
// static
// /usr/include/qt/QtCore/qobject.h:202
// QMetaObject::Connection connect(const class QObject *, const char *, const class QObject *, const char *, Qt::ConnectionType)
extern "C"
void C_ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(const QObject * sender, const char * signal, const QObject * receiver, const char * member, Qt::ConnectionType arg4) {
  /*return*/ QObject::connect(sender, signal, receiver, member, arg4);
}
// static
// /usr/include/qt/QtCore/qobject.h:205
// QMetaObject::Connection connect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &, Qt::ConnectionType)
extern "C"
void C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & method, Qt::ConnectionType type) {
  /*return*/ QObject::connect(sender, signal, receiver, method, type);
}
// inline
// /usr/include/qt/QtCore/qobject.h:209
// QMetaObject::Connection connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
extern "C"
void C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *this_, const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type) {
  /*return*/ ((QObject*)this_)->connect(sender, signal, member, type);
}
// static
// /usr/include/qt/QtCore/qobject.h:351
// bool disconnect(const class QObject *, const char *, const class QObject *, const char *)
extern "C"
void C_ZN7QObject10disconnectEPKS_PKcS1_S3_(const QObject * sender, const char * signal, const QObject * receiver, const char * member) {
  /*return*/ QObject::disconnect(sender, signal, receiver, member);
}
// static
// /usr/include/qt/QtCore/qobject.h:353
// bool disconnect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &)
extern "C"
void C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & member) {
  /*return*/ QObject::disconnect(sender, signal, receiver, member);
}
// inline
// /usr/include/qt/QtCore/qobject.h:355
// bool disconnect(const char *, const class QObject *, const char *)
extern "C"
void C_ZNK7QObject10disconnectEPKcPKS_S1_(void *this_, const char * signal, const QObject * receiver, const char * member) {
  /*return*/ ((QObject*)this_)->disconnect(signal, receiver, member);
}
// inline
// /usr/include/qt/QtCore/qobject.h:358
// bool disconnect(const class QObject *, const char *)
extern "C"
void C_ZNK7QObject10disconnectEPKS_PKc(void *this_, const QObject * receiver, const char * member) {
  /*return*/ ((QObject*)this_)->disconnect(receiver, member);
}
// static
// /usr/include/qt/QtCore/qobject.h:360
// bool disconnect(const struct QMetaObject::Connection &)
extern "C"
void C_ZN7QObject10disconnectERKN11QMetaObject10ConnectionE(const QMetaObject::Connection & arg0) {
  /*return*/ QObject::disconnect(arg0);
}
// /usr/include/qt/QtCore/qobject.h:397
// void dumpObjectTree()
extern "C"
void C_ZN7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}
// /usr/include/qt/QtCore/qobject.h:398
// void dumpObjectInfo()
extern "C"
void C_ZN7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}
// /usr/include/qt/QtCore/qobject.h:401
// bool setProperty(const char *, const class QVariant &)
extern "C"
void C_ZN7QObject11setPropertyEPKcRK8QVariant(void *this_, const char * name, const QVariant & value) {
  /*return*/ ((QObject*)this_)->setProperty(name, value);
}
// /usr/include/qt/QtCore/qobject.h:402
// QVariant property(const char *)
extern "C"
void C_ZNK7QObject8propertyEPKc(void *this_, const char * name) {
  /*return*/ ((QObject*)this_)->property(name);
}
// /usr/include/qt/QtCore/qobject.h:403
// QList<QByteArray> dynamicPropertyNames()
extern "C"
void C_ZNK7QObject20dynamicPropertyNamesEv(void *this_) {
  /*return*/ ((QObject*)this_)->dynamicPropertyNames();
}
// static
// /usr/include/qt/QtCore/qobject.h:407
// uint registerUserData()
extern "C"
void C_ZN7QObject16registerUserDataEv() {
  /*return*/ QObject::registerUserData();
}
// /usr/include/qt/QtCore/qobject.h:408
// void setUserData(uint, class QObjectUserData *)
extern "C"
void C_ZN7QObject11setUserDataEjP15QObjectUserData(void *this_, uint id, QObjectUserData * data) {
  ((QObject*)this_)->setUserData(id, data);
}
// /usr/include/qt/QtCore/qobject.h:409
// QObjectUserData * userData(uint)
extern "C"
void C_ZNK7QObject8userDataEj(void *this_, uint id) {
  /*return*/ ((QObject*)this_)->userData(id);
}
// /usr/include/qt/QtCore/qobject.h:413
// void destroyed(class QObject *)
extern "C"
void C_ZN7QObject9destroyedEPS_(void *this_, QObject * arg0) {
  ((QObject*)this_)->destroyed(arg0);
}
// inline
// /usr/include/qt/QtCore/qobject.h:417
// QObject * parent()
extern "C"
void C_ZNK7QObject6parentEv(void *this_) {
  /*return*/ ((QObject*)this_)->parent();
}
// inline
// /usr/include/qt/QtCore/qobject.h:419
// bool inherits(const char *)
extern "C"
void C_ZNK7QObject8inheritsEPKc(void *this_, const char * classname) {
  /*return*/ ((QObject*)this_)->inherits(classname);
}
// /usr/include/qt/QtCore/qobject.h:423
// void deleteLater()
extern "C"
void C_ZN7QObject11deleteLaterEv(void *this_) {
  ((QObject*)this_)->deleteLater();
}
//  main block end
