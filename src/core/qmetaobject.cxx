//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaObject is pure virtual: false
// QMetaObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMetaObject : public QMetaObject {
public:
  virtual ~MyQMetaObject() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:345
// [8] const char * className()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject9classNameEv(void *this_) {
  return (void*)((QMetaObject*)this_)->className();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:346
// [8] const QMetaObject * superClass()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject10superClassEv(void *this_) {
  return (void*)((QMetaObject*)this_)->superClass();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:349
// [8] QObject * cast(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject4castEP7QObject(void *this_, QObject * obj) {
  return (void*)((QMetaObject*)this_)->cast(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:350
// [8] const QObject * cast(const class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject4castEPK7QObject(void *this_, const QObject * obj) {
  return (void*)((QMetaObject*)this_)->cast(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:356
// [4] int methodOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject12methodOffsetEv(void *this_) {
  return (int)((QMetaObject*)this_)->methodOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:357
// [4] int enumeratorOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject16enumeratorOffsetEv(void *this_) {
  return (int)((QMetaObject*)this_)->enumeratorOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:358
// [4] int propertyOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject14propertyOffsetEv(void *this_) {
  return (int)((QMetaObject*)this_)->propertyOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:359
// [4] int classInfoOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject15classInfoOffsetEv(void *this_) {
  return (int)((QMetaObject*)this_)->classInfoOffset();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qobjectdefs.h:361
// [4] int constructorCount()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject16constructorCountEv(void *this_) {
  return (int)((QMetaObject*)this_)->constructorCount();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:362
// [4] int methodCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject11methodCountEv(void *this_) {
  return (int)((QMetaObject*)this_)->methodCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:363
// [4] int enumeratorCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject15enumeratorCountEv(void *this_) {
  return (int)((QMetaObject*)this_)->enumeratorCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:364
// [4] int propertyCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject13propertyCountEv(void *this_) {
  return (int)((QMetaObject*)this_)->propertyCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:365
// [4] int classInfoCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject14classInfoCountEv(void *this_) {
  return (int)((QMetaObject*)this_)->classInfoCount();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qobjectdefs.h:367
// [4] int indexOfConstructor(const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject18indexOfConstructorEPKc(void *this_, const char * constructor) {
  return (int)((QMetaObject*)this_)->indexOfConstructor(constructor);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:368
// [4] int indexOfMethod(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject13indexOfMethodEPKc(void *this_, const char * method) {
  return (int)((QMetaObject*)this_)->indexOfMethod(method);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:369
// [4] int indexOfSignal(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject13indexOfSignalEPKc(void *this_, const char * signal) {
  return (int)((QMetaObject*)this_)->indexOfSignal(signal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:370
// [4] int indexOfSlot(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject11indexOfSlotEPKc(void *this_, const char * slot) {
  return (int)((QMetaObject*)this_)->indexOfSlot(slot);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:371
// [4] int indexOfEnumerator(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject17indexOfEnumeratorEPKc(void *this_, const char * name) {
  return (int)((QMetaObject*)this_)->indexOfEnumerator(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:372
// [4] int indexOfProperty(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject15indexOfPropertyEPKc(void *this_, const char * name) {
  return (int)((QMetaObject*)this_)->indexOfProperty(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:373
// [4] int indexOfClassInfo(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject16indexOfClassInfoEPKc(void *this_, const char * name) {
  return (int)((QMetaObject*)this_)->indexOfClassInfo(name);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qobjectdefs.h:375
// [16] QMetaMethod constructor(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject11constructorEi(void *this_, int index) {
  auto rv = ((QMetaObject*)this_)->constructor(index);
return new QMetaMethod(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:376
// [16] QMetaMethod method(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject6methodEi(void *this_, int index) {
  auto rv = ((QMetaObject*)this_)->method(index);
return new QMetaMethod(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:377
// [16] QMetaEnum enumerator(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject10enumeratorEi(void *this_, int index) {
  auto rv = ((QMetaObject*)this_)->enumerator(index);
return new QMetaEnum(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:378
// [32] QMetaProperty property(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject8propertyEi(void *this_, int index) {
  auto rv = ((QMetaObject*)this_)->property(index);
return new QMetaProperty(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:379
// [16] QMetaClassInfo classInfo(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject9classInfoEi(void *this_, int index) {
  auto rv = ((QMetaObject*)this_)->classInfo(index);
return new QMetaClassInfo(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qobjectdefs.h:380
// [32] QMetaProperty userProperty()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject12userPropertyEv(void *this_) {
  auto rv = ((QMetaObject*)this_)->userProperty();
return new QMetaProperty(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:382
// [1] bool checkConnectArgs(const char *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject16checkConnectArgsEPKcS1_(const char * signal, const char * method) {
  return (bool)QMetaObject::checkConnectArgs(signal, method);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qobjectdefs.h:383
// [1] bool checkConnectArgs(const class QMetaMethod &, const class QMetaMethod &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject16checkConnectArgsERK11QMetaMethodS2_(QMetaMethod* signal, QMetaMethod* method) {
  return (bool)QMetaObject::checkConnectArgs(*signal, *method);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:385
// [8] QByteArray normalizedSignature(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMetaObject19normalizedSignatureEPKc(const char * method) {
  auto rv = QMetaObject::normalizedSignature(method);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qobjectdefs.h:386
// [8] QByteArray normalizedType(const char *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN11QMetaObject14normalizedTypeEPKc(const char * type_) {
  auto rv = QMetaObject::normalizedType(type_);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:389
// [8] QMetaObject::Connection connect(const class QObject *, int, const class QObject *, int, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMetaObject7connectEPK7QObjectiS2_iiPi(const QObject * sender, int signal_index, const QObject * receiver, int method_index, int type_, int * types) {
  auto rv = QMetaObject::connect(sender, signal_index, receiver, method_index, type_, types);
return new QMetaObject::Connection(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:393
// [1] bool disconnect(const class QObject *, int, const class QObject *, int)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject10disconnectEPK7QObjectiS2_i(const QObject * sender, int signal_index, const QObject * receiver, int method_index) {
  return (bool)QMetaObject::disconnect(sender, signal_index, receiver, method_index);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:395
// [1] bool disconnectOne(const class QObject *, int, const class QObject *, int)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject13disconnectOneEPK7QObjectiS2_i(const QObject * sender, int signal_index, const QObject * receiver, int method_index) {
  return (bool)QMetaObject::disconnectOne(sender, signal_index, receiver, method_index);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:398
// [-2] void connectSlotsByName(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMetaObject18connectSlotsByNameEP7QObject(QObject * o) {
  QMetaObject::connectSlotsByName(o);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:401
// [-2] void activate(class QObject *, int, void **)
extern "C" Q_DECL_EXPORT
void C_ZN11QMetaObject8activateEP7QObjectiPPv(QObject * sender, int signal_index, void ** argv) {
  QMetaObject::activate(sender, signal_index, argv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:403
// [-2] void activate(class QObject *, int, int, void **)
extern "C" Q_DECL_EXPORT
void C_ZN11QMetaObject8activateEP7QObjectiiPPv(QObject * sender, int signal_offset, int local_signal_index, void ** argv) {
  QMetaObject::activate(sender, signal_offset, local_signal_index, argv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:405
// [1] bool invokeMethod(class QObject *, const char *, Qt::ConnectionType, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject12invokeMethodEP7QObjectPKcN2Qt14ConnectionTypeE22QGenericReturnArgument16QGenericArgumentS7_S7_S7_S7_S7_S7_S7_S7_S7_(QObject * obj, const char * member, Qt::ConnectionType arg2, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)QMetaObject::invokeMethod(obj, member, arg2, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:419
// [1] bool invokeMethod(class QObject *, const char *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject12invokeMethodEP7QObjectPKc22QGenericReturnArgument16QGenericArgumentS5_S5_S5_S5_S5_S5_S5_S5_S5_(QObject * obj, const char * member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:436
// [1] bool invokeMethod(class QObject *, const char *, Qt::ConnectionType, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject12invokeMethodEP7QObjectPKcN2Qt14ConnectionTypeE16QGenericArgumentS6_S6_S6_S6_S6_S6_S6_S6_S6_(QObject * obj, const char * member, Qt::ConnectionType type_, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)QMetaObject::invokeMethod(obj, member, type_, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:453
// [1] bool invokeMethod(class QObject *, const char *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMetaObject12invokeMethodEP7QObjectPKc16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_(QObject * obj, const char * member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qobjectdefs.h:554
// [8] QObject * newInstance(class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMetaObject11newInstanceE16QGenericArgumentS0_S0_S0_S0_S0_S0_S0_S0_S0_(void *this_, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (void*)((QMetaObject*)this_)->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:581
// [4] int static_metacall(enum QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZNK11QMetaObject15static_metacallENS_4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMetaObject*)this_)->static_metacall(arg0, arg1, arg2);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:582
// [4] int metacall(class QObject *, enum QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QMetaObject8metacallEP7QObjectNS_4CallEiPPv(QObject * arg0, QMetaObject::Call arg1, int arg2, void ** arg3) {
  return (int)QMetaObject::metacall(arg0, arg1, arg2, arg3);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QMetaObjectD2Ev(void *this_) {
  delete (QMetaObject*)(this_);
}
//  main block end
