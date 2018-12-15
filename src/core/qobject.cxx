//  header block begin

// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObject is pure virtual: false
// QObject has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQObject_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQObject_t qt_meta_stringdata_MyQObject = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQObject"
  },
  "MyQObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQObject[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQObject : public QObject {
public:
  virtual ~MyQObject() {}
// void QObject(QObject *)
MyQObject(QObject * parent) : QObject(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::childEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void customEvent(QEvent *)
  virtual void customEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"customEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::customEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void connectNotify(const QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::connectNotify(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void disconnectNotify(const QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QObject::disconnectNotify(signal);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:427
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QObject*)this_)->QObject::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:428
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject10childEventEP11QChildEvent(void *this_, QChildEvent * event) {
  ((QObject*)this_)->QObject::childEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:429
// [-2] void customEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11customEventEP6QEvent(void *this_, QEvent * event) {
  ((QObject*)this_)->QObject::customEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobject.h:431
// [-2] void connectNotify(const QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QObject13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QObject*)this_)->QObject::connectNotify(*signal);
}
#endif // QT_VERSION >= 0x050000

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobject.h:432
// [-2] void disconnectNotify(const QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QObject16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QObject*)this_)->QObject::disconnectNotify(*signal);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject10metaObjectEv(void *this_) {
  return (void*)((QObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:118
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:123
// [-2] void QObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObjectC2EPS_(QObject * parent) {
  auto _nilp = (MyQObject*)(0);
  return  new MyQObject(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:124
// [-2] void ~QObject()
extern "C" Q_DECL_EXPORT
void C_ZN7QObjectD2Ev(void *this_) {
  delete (QObject*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:126
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QObject*)this_)->event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:127
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject11eventFilterEPS_P6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QObject*)this_)->eventFilter(watched, event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:144
// [8] QString objectName()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject10objectNameEv(void *this_) {
  auto rv = ((QObject*)this_)->objectName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:145
// [-2] void setObjectName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject13setObjectNameERK7QString(void *this_, QString* name) {
  ((QObject*)this_)->setObjectName(*name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:147
// [1] bool isWidgetType()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject12isWidgetTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWidgetType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:148
// [1] bool isWindowType()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject12isWindowTypeEv(void *this_) {
  return (bool)((QObject*)this_)->isWindowType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:150
// [1] bool signalsBlocked()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject14signalsBlockedEv(void *this_) {
  return (bool)((QObject*)this_)->signalsBlocked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:151
// [1] bool blockSignals(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject12blockSignalsEb(void *this_, bool b) {
  return (bool)((QObject*)this_)->blockSignals(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:153
// [8] QThread * thread()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject6threadEv(void *this_) {
  return (void*)((QObject*)this_)->thread();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:154
// [-2] void moveToThread(QThread *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject12moveToThreadEP7QThread(void *this_, QThread * thread) {
  ((QObject*)this_)->moveToThread(thread);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:156
// [4] int startTimer(int, Qt::TimerType)
extern "C" Q_DECL_EXPORT
int C_ZN7QObject10startTimerEiN2Qt9TimerTypeE(void *this_, int interval, Qt::TimerType timerType) {
  return (int)((QObject*)this_)->startTimer(interval, timerType);
}

// Public inline Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qobject.h:159
// [4] int startTimer(std::chrono::milliseconds, Qt::TimerType)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
int C_ZN7QObject10startTimerENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEN2Qt9TimerTypeE(void *this_, std::chrono::milliseconds time, Qt::TimerType timerType) {
  return (int)((QObject*)this_)->startTimer(time, timerType);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:164
// [-2] void killTimer(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9killTimerEi(void *this_, int id) {
  ((QObject*)this_)->killTimer(id);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:207
// [8] const QObjectList & children()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8childrenEv(void *this_) {
  auto& rv = ((QObject*)this_)->children();
return new QObjectList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:209
// [-2] void setParent(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9setParentEPS_(void *this_, QObject * parent) {
  ((QObject*)this_)->setParent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:210
// [-2] void installEventFilter(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject18installEventFilterEPS_(void *this_, QObject * filterObj) {
  ((QObject*)this_)->installEventFilter(filterObj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:211
// [-2] void removeEventFilter(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject17removeEventFilterEPS_(void *this_, QObject * obj) {
  ((QObject*)this_)->removeEventFilter(obj);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:213
// [8] QMetaObject::Connection connect(const QObject *, const char *, const QObject *, const char *, Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
void* C_ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(const QObject * sender, const char * signal, const QObject * receiver, const char * member, Qt::ConnectionType arg4) {
  auto rv = QObject::connect(sender, signal, receiver, member, arg4);
return new QMetaObject::Connection(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qobject.h:216
// [8] QMetaObject::Connection connect(const QObject *, const QMetaMethod &, const QObject *, const QMetaMethod &, Qt::ConnectionType)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* method, Qt::ConnectionType type_) {
  auto rv = QObject::connect(sender, *signal, receiver, *method, type_);
return new QMetaObject::Connection(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:220
// [8] QMetaObject::Connection connect(const QObject *, const char *, const char *, Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *this_, const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type_) {
  auto rv = ((QObject*)this_)->connect(sender, signal, member, type_);
return new QMetaObject::Connection(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:342
// [1] bool disconnect(const QObject *, const char *, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject10disconnectEPKS_PKcS1_S3_(const QObject * sender, const char * signal, const QObject * receiver, const char * member) {
  return (bool)QObject::disconnect(sender, signal, receiver, member);
}

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qobject.h:344
// [1] bool disconnect(const QObject *, const QMetaMethod &, const QObject *, const QMetaMethod &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * sender, QMetaMethod* signal, const QObject * receiver, QMetaMethod* member) {
  return (bool)QObject::disconnect(sender, *signal, receiver, *member);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:346
// [1] bool disconnect(const char *, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject10disconnectEPKcPKS_S1_(void *this_, const char * signal, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(signal, receiver, member);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:349
// [1] bool disconnect(const QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject10disconnectEPKS_PKc(void *this_, const QObject * receiver, const char * member) {
  return (bool)((QObject*)this_)->disconnect(receiver, member);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:351
// [1] bool disconnect(const QMetaObject::Connection &)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject10disconnectERKN11QMetaObject10ConnectionE(const QMetaObject::Connection & arg0) {
  return (bool)QObject::disconnect(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:390
// [-2] void dumpObjectTree()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:391
// [-2] void dumpObjectInfo()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:393
// [-2] void dumpObjectTree()
extern "C" Q_DECL_EXPORT
void C_ZNK7QObject14dumpObjectTreeEv(void *this_) {
  ((QObject*)this_)->dumpObjectTree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:394
// [-2] void dumpObjectInfo()
extern "C" Q_DECL_EXPORT
void C_ZNK7QObject14dumpObjectInfoEv(void *this_) {
  ((QObject*)this_)->dumpObjectInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:397
// [1] bool setProperty(const char *, const QVariant &)
extern "C" Q_DECL_EXPORT
bool C_ZN7QObject11setPropertyEPKcRK8QVariant(void *this_, const char * name, QVariant* value) {
  return (bool)((QObject*)this_)->setProperty(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:398
// [16] QVariant property(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8propertyEPKc(void *this_, const char * name) {
  auto rv = ((QObject*)this_)->property(name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qobject.h:399
// [8] QList<QByteArray> dynamicPropertyNames()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK7QObject20dynamicPropertyNamesEv(void *this_) {
  auto rv = ((QObject*)this_)->dynamicPropertyNames();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:403
// [4] uint registerUserData()
extern "C" Q_DECL_EXPORT
uint C_ZN7QObject16registerUserDataEv() {
  return (uint)QObject::registerUserData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:404
// [-2] void setUserData(uint, QObjectUserData *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11setUserDataEjP15QObjectUserData(void *this_, uint id, QObjectUserData * data) {
  ((QObject*)this_)->setUserData(id, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:405
// [8] QObjectUserData * userData(uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject8userDataEj(void *this_, uint id) {
  return (void*)((QObject*)this_)->userData(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:409
// [-2] void destroyed(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject9destroyedEPS_(void *this_, QObject * arg0) {
  ((QObject*)this_)->destroyed(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:410
// [-2] void objectNameChanged(const QString &, QObject::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN7QObject17objectNameChangedERK7QStringNS_14QPrivateSignalE(void *this_, QString* objectName, QObject::QPrivateSignal* arg1) {
  ((QObject*)this_)->objectNameChanged(*objectName, *arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:413
// [8] QObject * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QObject6parentEv(void *this_) {
  return (void*)((QObject*)this_)->parent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:415
// [1] bool inherits(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QObject8inheritsEPKc(void *this_, const char * classname) {
  return (bool)((QObject*)this_)->inherits(classname);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:419
// [-2] void deleteLater()
extern "C" Q_DECL_EXPORT
void C_ZN7QObject11deleteLaterEv(void *this_) {
  ((QObject*)this_)->deleteLater();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
