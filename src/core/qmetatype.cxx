// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qmetatype.h
// dst-file: /src/core/qmetatype.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmetatype.h>


// <= header block end

// main block begin =>
void __keep_qmetatype_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 534, column 31>
//   // proto:  const QMetaObject * QMetaType::metaObject();
if (true) {
  auto f = [](QMetaType flythis) {
    ((QMetaType*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 537, column 17>
//   // proto:  void QMetaType::destroy(void * data);
if (true) {
  auto f = [](QMetaType flythis, void * arg1) {
    ((QMetaType*)0)->destroy(arg1);
    flythis.destroy(arg1);
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType7destroyEPv destroy(void *)
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 530, column 17>
//   // proto:  bool QMetaType::isValid();
if (true) {
  auto f = [](QMetaType flythis) {
    ((QMetaType*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 538, column 18>
//   // proto:  void * QMetaType::construct(void * where, const void * copy);
if (true) {
  auto f = [](QMetaType flythis, void * arg1, const void * arg2) {
    ((QMetaType*)0)->construct(arg1, arg2);
    flythis.construct(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType9constructEPvPKv construct(void *, const void *)
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 533, column 22>
//   // proto:  TypeFlags QMetaType::flags();
if (true) {
  auto f = [](QMetaType flythis) {
    ((QMetaType*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 536, column 18>
//   // proto:  void * QMetaType::create(const void * copy);
if (true) {
  auto f = [](QMetaType flythis, const void * arg1) {
    ((QMetaType*)0)->create(arg1);
    flythis.create(arg1);
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType6createEPKv create(const void *)
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 539, column 17>
//   // proto:  void QMetaType::destruct(void * data);
if (true) {
  auto f = [](QMetaType flythis, void * arg1) {
    ((QMetaType*)0)->destruct(arg1);
    flythis.destruct(arg1);
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType8destructEPv destruct(void *)
//   // proto:  void QMetaType::~QMetaType();
if (true) {
  delete ((QMetaType*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 532, column 16>
//   // proto:  int QMetaType::sizeOf();
if (true) {
  auto f = [](QMetaType flythis) {
    ((QMetaType*)0)->sizeOf();
    flythis.sizeOf();
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType6sizeOfEv sizeOf()
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 531, column 17>
//   // proto:  bool QMetaType::isRegistered();
if (true) {
  auto f = [](QMetaType flythis) {
    ((QMetaType*)0)->isRegistered();
    flythis.isRegistered();
  };
  if (f == nullptr){}
}
// _ZNK9QMetaType12isRegisteredEv isRegistered()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMetaType_Class_Size()
{
  return sizeof(QMetaType);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 518, column 17>
//   // proto: static void QMetaType::destroy(int type, void * data);
// _ZN9QMetaType7destroyEiPv destroy(int, void *)
extern "C"
void
C_ZN9QMetaType7destroyEiPv(int arg1,
void * arg2) {
  QMetaType::destroy(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 652, column 17>
//   // proto: static bool QMetaType::hasRegisteredConverterFunction(int fromTypeId, int toTypeId);
// _ZN9QMetaType30hasRegisteredConverterFunctionEii hasRegisteredConverterFunction(int, int)
extern "C"
bool
C_ZN9QMetaType30hasRegisteredConverterFunctionEii(int arg1,
int arg2) {
  auto ret =
  QMetaType::hasRegisteredConverterFunction(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 534, column 31>
//   // proto:  const QMetaObject * QMetaType::metaObject();
// _ZNK9QMetaType10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QMetaType10metaObjectEv(void *qthis) {
  auto ret =
  ((QMetaType*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 480, column 16>
//   // proto: static int QMetaType::registerType(const char * typeName, Deleter deleter, Creator creator, Destructor destructor, Constructor constructor, int size, QMetaType::TypeFlags flags, const QMetaObject * metaObject);
// _ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvES4_PFS2_S2_S6_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject registerType(const char *, Deleter, Creator, Destructor, Constructor, int, class QMetaType::TypeFlags, const struct QMetaObject *)
extern "C"
int
C_ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvES4_PFS2_S2_S6_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject(const char * arg1,
QMetaType::Deleter arg2,
QMetaType::Creator arg3,
QMetaType::Destructor arg4,
QMetaType::Constructor arg5,
int arg6,
QMetaType::TypeFlags* arg7,
const QMetaObject * arg8) {
  auto ret =
  QMetaType::registerType(arg1,
arg2,
arg3,
arg4,
arg5,
arg6,
*((QMetaType::TypeFlags*)arg7),
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 586, column 17>
//   // proto: static bool QMetaType::hasRegisteredDebugStreamOperator(int typeId);
// _ZN9QMetaType32hasRegisteredDebugStreamOperatorEi hasRegisteredDebugStreamOperator(int)
extern "C"
bool
C_ZN9QMetaType32hasRegisteredDebugStreamOperatorEi(int arg1) {
  auto ret =
  QMetaType::hasRegisteredDebugStreamOperator(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 513, column 18>
//   // proto: static void * QMetaType::create(int type, const void * copy);
// _ZN9QMetaType6createEiPKv create(int, const void *)
extern "C"
void*
C_ZN9QMetaType6createEiPKv(int arg1,
const void * arg2) {
  auto ret =
  QMetaType::create(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 537, column 17>
//   // proto:  void QMetaType::destroy(void * data);
// _ZNK9QMetaType7destroyEPv destroy(void *)
extern "C"
void
C_ZNK9QMetaType7destroyEPv(void *qthis,
void * arg1) {
  ((QMetaType*)qthis)->destroy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 500, column 16>
//   // proto: static int QMetaType::registerTypedef(const char * typeName, int aliasId);
// _ZN9QMetaType15registerTypedefEPKci registerTypedef(const char *, int)
extern "C"
int
C_ZN9QMetaType15registerTypedefEPKci(const char * arg1,
int arg2) {
  auto ret =
  QMetaType::registerTypedef(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 520, column 17>
//   // proto: static void QMetaType::destruct(int type, void * where);
// _ZN9QMetaType8destructEiPv destruct(int, void *)
extern "C"
void
C_ZN9QMetaType8destructEiPv(int arg1,
void * arg2) {
  QMetaType::destruct(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 530, column 17>
//   // proto:  bool QMetaType::isValid();
// _ZNK9QMetaType7isValidEv isValid()
extern "C"
bool
C_ZNK9QMetaType7isValidEv(void *qthis) {
  auto ret =
  ((QMetaType*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 495, column 16>
//   // proto: static int QMetaType::registerNormalizedType(const ::QByteArray & normalizedTypeName, Destructor destructor, Constructor constructor, int size, QMetaType::TypeFlags flags, const QMetaObject * metaObject);
// _ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_S3_PKvEi6QFlagsINS_8TypeFlagEEPK11QMetaObject registerNormalizedType(const ::QByteArray &, Destructor, Constructor, int, class QMetaType::TypeFlags, const struct QMetaObject *)
extern "C"
int
C_ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_S3_PKvEi6QFlagsINS_8TypeFlagEEPK11QMetaObject(const ::QByteArray* arg1,
QMetaType::Destructor arg2,
QMetaType::Constructor arg3,
int arg4,
QMetaType::TypeFlags* arg5,
const QMetaObject * arg6) {
  auto ret =
  QMetaType::registerNormalizedType(*((const ::QByteArray*)arg1),
arg2,
arg3,
arg4,
*((QMetaType::TypeFlags*)arg5),
arg6);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 519, column 18>
//   // proto: static void * QMetaType::construct(int type, void * where, const void * copy);
// _ZN9QMetaType9constructEiPvPKv construct(int, void *, const void *)
extern "C"
void*
C_ZN9QMetaType9constructEiPvPKv(int arg1,
void * arg2,
const void * arg3) {
  auto ret =
  QMetaType::construct(arg1,
arg2,
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 643, column 17>
//   // proto: static bool QMetaType::equals(const void * lhs, const void * rhs, int typeId, int * result);
// _ZN9QMetaType6equalsEPKvS1_iPi equals(const void *, const void *, int, int *)
extern "C"
bool
C_ZN9QMetaType6equalsEPKvS1_iPi(const void * arg1,
const void * arg2,
int arg3,
int * arg4) {
  auto ret =
  QMetaType::equals(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 538, column 18>
//   // proto:  void * QMetaType::construct(void * where, const void * copy);
// _ZNK9QMetaType9constructEPvPKv construct(void *, const void *)
extern "C"
void*
C_ZNK9QMetaType9constructEPvPKv(void *qthis,
void * arg1,
const void * arg2) {
  auto ret =
  ((QMetaType*)qthis)->construct(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 512, column 17>
//   // proto: static bool QMetaType::isRegistered(int type);
// _ZN9QMetaType12isRegisteredEi isRegistered(int)
extern "C"
bool
C_ZN9QMetaType12isRegisteredEi(int arg1) {
  auto ret =
  QMetaType::isRegistered(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 533, column 22>
//   // proto:  TypeFlags QMetaType::flags();
// _ZNK9QMetaType5flagsEv flags()
extern "C"
QFlags<QMetaType::TypeFlag>*
C_ZNK9QMetaType5flagsEv(void *qthis) {
  auto ret =
  ((QMetaType*)qthis)->flags();
  return new QFlags<QMetaType::TypeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 487, column 17>
//   // proto: static bool QMetaType::unregisterType(int type);
// _ZN9QMetaType14unregisterTypeEi unregisterType(int)
extern "C"
bool
C_ZN9QMetaType14unregisterTypeEi(int arg1) {
  auto ret =
  QMetaType::unregisterType(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 510, column 22>
//   // proto: static TypeFlags QMetaType::typeFlags(int type);
// _ZN9QMetaType9typeFlagsEi typeFlags(int)
extern "C"
QFlags<QMetaType::TypeFlag>*
C_ZN9QMetaType9typeFlagsEi(int arg1) {
  auto ret =
  QMetaType::typeFlags(arg1);
  return new QFlags<QMetaType::TypeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 511, column 31>
//   // proto: static const QMetaObject * QMetaType::metaObjectForType(int type);
// _ZN9QMetaType17metaObjectForTypeEi metaObjectForType(int)
extern "C"
void*
C_ZN9QMetaType17metaObjectForTypeEi(int arg1) {
  auto ret =
  QMetaType::metaObjectForType(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 524, column 17>
//   // proto: static bool QMetaType::load(QDataStream & stream, int type, void * data);
// _ZN9QMetaType4loadER11QDataStreamiPv load(class QDataStream &, int, void *)
extern "C"
bool
C_ZN9QMetaType4loadER11QDataStreamiPv(QDataStream* arg1,
int arg2,
void * arg3) {
  auto ret =
  QMetaType::load(*((QDataStream*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 536, column 18>
//   // proto:  void * QMetaType::create(const void * copy);
// _ZNK9QMetaType6createEPKv create(const void *)
extern "C"
void*
C_ZNK9QMetaType6createEPKv(void *qthis,
const void * arg1) {
  auto ret =
  ((QMetaType*)qthis)->create(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 509, column 16>
//   // proto: static int QMetaType::sizeOf(int type);
// _ZN9QMetaType6sizeOfEi sizeOf(int)
extern "C"
int
C_ZN9QMetaType6sizeOfEi(int arg1) {
  auto ret =
  QMetaType::sizeOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 567, column 17>
//   // proto: static bool QMetaType::hasRegisteredComparators(int typeId);
// _ZN9QMetaType24hasRegisteredComparatorsEi hasRegisteredComparators(int)
extern "C"
bool
C_ZN9QMetaType24hasRegisteredComparatorsEi(int arg1) {
  auto ret =
  QMetaType::hasRegisteredComparators(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 523, column 17>
//   // proto: static bool QMetaType::save(QDataStream & stream, int type, const void * data);
// _ZN9QMetaType4saveER11QDataStreamiPKv save(class QDataStream &, int, const void *)
extern "C"
bool
C_ZN9QMetaType4saveER11QDataStreamiPKv(QDataStream* arg1,
int arg2,
const void * arg3) {
  auto ret =
  QMetaType::save(*((QDataStream*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 539, column 17>
//   // proto:  void QMetaType::destruct(void * data);
// _ZNK9QMetaType8destructEPv destruct(void *)
extern "C"
void
C_ZNK9QMetaType8destructEPv(void *qthis,
void * arg1) {
  ((QMetaType*)qthis)->destruct(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 475, column 17>
//   // proto: static void QMetaType::registerStreamOperators(int type, SaveOperator saveOp, LoadOperator loadOp);
// _ZN9QMetaType23registerStreamOperatorsEiPFvR11QDataStreamPKvEPFvS1_PvE registerStreamOperators(int, SaveOperator, LoadOperator)
extern "C"
void
C_ZN9QMetaType23registerStreamOperatorsEiPFvR11QDataStreamPKvEPFvS1_PvE(int arg1,
QMetaType::SaveOperator arg2,
QMetaType::LoadOperator arg3) {
  QMetaType::registerStreamOperators(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 502, column 16>
//   // proto: static int QMetaType::type(const char * typeName);
// _ZN9QMetaType4typeEPKc type(const char *)
extern "C"
int
C_ZN9QMetaType4typeEPKc(const char * arg1) {
  auto ret =
  QMetaType::type(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 504, column 16>
//   // proto: static int QMetaType::type(const ::QByteArray & typeName);
// _ZN9QMetaType4typeERK10QByteArray type(const ::QByteArray &)
extern "C"
int
C_ZN9QMetaType4typeERK10QByteArray(const ::QByteArray* arg1) {
  auto ret =
  QMetaType::type(*((const ::QByteArray*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 644, column 17>
//   // proto: static bool QMetaType::debugStream(QDebug & dbg, const void * rhs, int typeId);
// _ZN9QMetaType11debugStreamER6QDebugPKvi debugStream(class QDebug &, const void *, int)
extern "C"
bool
C_ZN9QMetaType11debugStreamER6QDebugPKvi(QDebug* arg1,
const void * arg2,
int arg3) {
  auto ret =
  QMetaType::debugStream(*((QDebug*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 532, column 16>
//   // proto:  int QMetaType::sizeOf();
// _ZNK9QMetaType6sizeOfEv sizeOf()
extern "C"
int
C_ZNK9QMetaType6sizeOfEv(void *qthis) {
  auto ret =
  ((QMetaType*)qthis)->sizeOf();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 508, column 24>
//   // proto: static const char * QMetaType::typeName(int type);
// _ZN9QMetaType8typeNameEi typeName(int)
extern "C"
void*
C_ZN9QMetaType8typeNameEi(int arg1) {
  auto ret =
  QMetaType::typeName(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 473, column 17>
//   // proto: static void QMetaType::registerStreamOperators(const char * typeName, SaveOperator saveOp, LoadOperator loadOp);
// _ZN9QMetaType23registerStreamOperatorsEPKcPFvR11QDataStreamPKvEPFvS3_PvE registerStreamOperators(const char *, SaveOperator, LoadOperator)
extern "C"
void
C_ZN9QMetaType23registerStreamOperatorsEPKcPFvR11QDataStreamPKvEPFvS3_PvE(const char * arg1,
QMetaType::SaveOperator arg2,
QMetaType::LoadOperator arg3) {
  QMetaType::registerStreamOperators(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 488, column 16>
//   // proto: static int QMetaType::registerNormalizedType(const ::QByteArray & normalizedTypeName, Deleter deleter, Creator creator, Destructor destructor, Constructor constructor, int size, QMetaType::TypeFlags flags, const QMetaObject * metaObject);
// _ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_PKvES5_PFS3_S3_S7_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject registerNormalizedType(const ::QByteArray &, Deleter, Creator, Destructor, Constructor, int, class QMetaType::TypeFlags, const struct QMetaObject *)
extern "C"
int
C_ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_PKvES5_PFS3_S3_S7_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject(const ::QByteArray* arg1,
QMetaType::Deleter arg2,
QMetaType::Creator arg3,
QMetaType::Destructor arg4,
QMetaType::Constructor arg5,
int arg6,
QMetaType::TypeFlags* arg7,
const QMetaObject * arg8) {
  auto ret =
  QMetaType::registerNormalizedType(*((const ::QByteArray*)arg1),
arg2,
arg3,
arg4,
arg5,
arg6,
*((QMetaType::TypeFlags*)arg7),
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 641, column 17>
//   // proto: static bool QMetaType::convert(const void * from, int fromTypeId, void * to, int toTypeId);
// _ZN9QMetaType7convertEPKviPvi convert(const void *, int, void *, int)
extern "C"
bool
C_ZN9QMetaType7convertEPKviPvi(const void * arg1,
int arg2,
void * arg3,
int arg4) {
  auto ret =
  QMetaType::convert(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 527, column 14>
//   // proto:  void QMetaType::QMetaType(const int type);
extern "C"
QMetaType*
C_ZN9QMetaTypeC2Ei(const int arg1) {
  auto ret = new QMetaType(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 501, column 16>
//   // proto: static int QMetaType::registerNormalizedTypedef(const ::QByteArray & normalizedTypeName, int aliasId);
// _ZN9QMetaType25registerNormalizedTypedefERK10QByteArrayi registerNormalizedTypedef(const ::QByteArray &, int)
extern "C"
int
C_ZN9QMetaType25registerNormalizedTypedefERK10QByteArrayi(const ::QByteArray* arg1,
int arg2) {
  auto ret =
  QMetaType::registerNormalizedTypedef(*((const ::QByteArray*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 642, column 17>
//   // proto: static bool QMetaType::compare(const void * lhs, const void * rhs, int typeId, int * result);
// _ZN9QMetaType7compareEPKvS1_iPi compare(const void *, const void *, int, int *)
extern "C"
bool
C_ZN9QMetaType7compareEPKvS1_iPi(const void * arg1,
const void * arg2,
int arg3,
int * arg4) {
  auto ret =
  QMetaType::compare(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 478, column 16>
//   // proto: static int QMetaType::registerType(const char * typeName, Deleter deleter, Creator creator);
// _ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvE registerType(const char *, Deleter, Creator)
extern "C"
int
C_ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvE(const char * arg1,
QMetaType::Deleter arg2,
QMetaType::Creator arg3) {
  auto ret =
  QMetaType::registerType(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qmetatype.h', line 531, column 17>
//   // proto:  bool QMetaType::isRegistered();
// _ZNK9QMetaType12isRegisteredEv isRegistered()
extern "C"
bool
C_ZNK9QMetaType12isRegisteredEv(void *qthis) {
  auto ret =
  ((QMetaType*)qthis)->isRegistered();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

