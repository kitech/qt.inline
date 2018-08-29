//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaType is pure virtual: false
// QMetaType has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMetaType_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaType_t qt_meta_stringdata_MyQMetaType = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMetaType"
  },
  "MyQMetaType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaType[] = {
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
class Q_DECL_EXPORT MyQMetaType : public QMetaType {
public:
  virtual ~MyQMetaType() {}
// void QMetaType(const int)
MyQMetaType(const int type_) : QMetaType(type_) {}
};
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:479
// [-2] void registerStreamOperators(const char *, QMetaType::SaveOperator, QMetaType::LoadOperator)
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaType23registerStreamOperatorsEPKcPFvR11QDataStreamPKvEPFvS3_PvE(const char * typeName, QMetaType::SaveOperator saveOp, QMetaType::LoadOperator loadOp) {
  QMetaType::registerStreamOperators(typeName, saveOp, loadOp);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:481
// [-2] void registerStreamOperators(int, QMetaType::SaveOperator, QMetaType::LoadOperator)
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaType23registerStreamOperatorsEiPFvR11QDataStreamPKvEPFvS1_PvE(int type_, QMetaType::SaveOperator saveOp, QMetaType::LoadOperator loadOp) {
  QMetaType::registerStreamOperators(type_, saveOp, loadOp);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:484
// [4] int registerType(const char *, QMetaType::Deleter, QMetaType::Creator)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvE(const char * typeName, QMetaType::Deleter deleter, QMetaType::Creator creator) {
  return (int)QMetaType::registerType(typeName, deleter, creator);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:486
// [4] int registerType(const char *, QMetaType::Deleter, QMetaType::Creator, QMetaType::Destructor, QMetaType::Constructor, int, QMetaType::TypeFlags, const QMetaObject *)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvES4_PFS2_S2_S6_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject(const char * typeName, QMetaType::Deleter deleter, QMetaType::Creator creator, QMetaType::Destructor destructor, QMetaType::Constructor constructor, int size, QFlags<QMetaType::TypeFlag> flags, const QMetaObject * metaObject) {
  return (int)QMetaType::registerType(typeName, deleter, creator, destructor, constructor, size, flags, metaObject);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:493
// [1] bool unregisterType(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType14unregisterTypeEi(int type_) {
  return (bool)QMetaType::unregisterType(type_);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:494
// [4] int registerNormalizedType(const ::QByteArray &, QMetaType::Deleter, QMetaType::Creator, QMetaType::Destructor, QMetaType::Constructor, int, QMetaType::TypeFlags, const QMetaObject *)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_PKvES5_PFS3_S3_S7_Ei6QFlagsINS_8TypeFlagEEPK11QMetaObject(const ::QByteArray & normalizedTypeName, QMetaType::Deleter deleter, QMetaType::Creator creator, QMetaType::Destructor destructor, QMetaType::Constructor constructor, int size, QFlags<QMetaType::TypeFlag> flags, const QMetaObject * metaObject) {
  return (int)QMetaType::registerNormalizedType(normalizedTypeName, deleter, creator, destructor, constructor, size, flags, metaObject);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:501
// [4] int registerNormalizedType(const ::QByteArray &, QMetaType::Destructor, QMetaType::Constructor, int, QMetaType::TypeFlags, const QMetaObject *)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType22registerNormalizedTypeERK10QByteArrayPFvPvEPFS3_S3_PKvEi6QFlagsINS_8TypeFlagEEPK11QMetaObject(const ::QByteArray & normalizedTypeName, QMetaType::Destructor destructor, QMetaType::Constructor constructor, int size, QFlags<QMetaType::TypeFlag> flags, const QMetaObject * metaObject) {
  return (int)QMetaType::registerNormalizedType(normalizedTypeName, destructor, constructor, size, flags, metaObject);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:506
// [4] int registerTypedef(const char *, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType15registerTypedefEPKci(const char * typeName, int aliasId) {
  return (int)QMetaType::registerTypedef(typeName, aliasId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:507
// [4] int registerNormalizedTypedef(const ::QByteArray &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType25registerNormalizedTypedefERK10QByteArrayi(const ::QByteArray & normalizedTypeName, int aliasId) {
  return (int)QMetaType::registerNormalizedTypedef(normalizedTypeName, aliasId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:508
// [4] int type(const char *)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType4typeEPKc(const char * typeName) {
  return (int)QMetaType::type(typeName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:510
// [4] int type(const ::QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType4typeERK10QByteArray(const ::QByteArray & typeName) {
  return (int)QMetaType::type(typeName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:511
// [8] const char * typeName(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaType8typeNameEi(int type_) {
  return (void*)QMetaType::typeName(type_);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:512
// [4] int sizeOf(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZN9QMetaType6sizeOfEi(int type_) {
  return (int)QMetaType::sizeOf(type_);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:513
// [4] QMetaType::TypeFlags typeFlags(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaType9typeFlagsEi(int type_) {
  auto rv = QMetaType::typeFlags(type_);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:514
// [8] const QMetaObject * metaObjectForType(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaType17metaObjectForTypeEi(int type_) {
  return (void*)QMetaType::metaObjectForType(type_);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:515
// [1] bool isRegistered(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType12isRegisteredEi(int type_) {
  return (bool)QMetaType::isRegistered(type_);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:516
// [8] void * create(int, const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaType6createEiPKv(int type_, const void * copy) {
  return (void*)QMetaType::create(type_, copy);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:521
// [-2] void destroy(int, void *)
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaType7destroyEiPv(int type_, void * data) {
  QMetaType::destroy(type_, data);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:522
// [8] void * construct(int, void *, const void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaType9constructEiPvPKv(int type_, void * where, const void * copy) {
  return (void*)QMetaType::construct(type_, where, copy);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:523
// [-2] void destruct(int, void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaType8destructEiPv(int type_, void * where) {
  QMetaType::destruct(type_, where);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:526
// [1] bool save(QDataStream &, int, const void *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType4saveER11QDataStreamiPKv(QDataStream* stream, int type_, const void * data) {
  return (bool)QMetaType::save(*stream, type_, data);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:527
// [1] bool load(QDataStream &, int, void *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType4loadER11QDataStreamiPv(QDataStream* stream, int type_, void * data) {
  return (bool)QMetaType::load(*stream, type_, data);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:530
// [-2] void QMetaType(const int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaTypeC2Ei(const int type_) {
  return  new QMetaType(type_);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:531
// [-2] void ~QMetaType()
extern "C" Q_DECL_EXPORT
void C_ZN9QMetaTypeD2Ev(void *this_) {
  delete (QMetaType*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:533
// [1] bool isValid()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaType7isValidEv(void *this_) {
  return (bool)((QMetaType*)this_)->isValid();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:534
// [1] bool isRegistered()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaType12isRegisteredEv(void *this_) {
  return (bool)((QMetaType*)this_)->isRegistered();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:535
// [4] int sizeOf()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaType6sizeOfEv(void *this_) {
  return (int)((QMetaType*)this_)->sizeOf();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:536
// [4] QMetaType::TypeFlags flags()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QMetaType::TypeFlags* C_ZNK9QMetaType5flagsEv(void *this_) {
  auto rv = ((QMetaType*)this_)->flags();
return new QMetaType::TypeFlags(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qmetatype.h:537
// [8] const QMetaObject * metaObject()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaType10metaObjectEv(void *this_) {
  return (void*)((QMetaType*)this_)->metaObject();
}
#endif // QT_VERSION >= 0x050500

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:539
// [8] void * create(const void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaType6createEPKv(void *this_, const void * copy) {
  return (void*)((QMetaType*)this_)->create(copy);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:540
// [-2] void destroy(void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK9QMetaType7destroyEPv(void *this_, void * data) {
  ((QMetaType*)this_)->destroy(data);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:541
// [8] void * construct(void *, const void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaType9constructEPvPKv(void *this_, void * where, const void * copy) {
  return (void*)((QMetaType*)this_)->construct(where, copy);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qmetatype.h:542
// [-2] void destruct(void *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK9QMetaType8destructEPv(void *this_, void * data) {
  ((QMetaType*)this_)->destruct(data);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qmetatype.h:570
// [1] bool hasRegisteredComparators(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType24hasRegisteredComparatorsEi(int typeId) {
  return (bool)QMetaType::hasRegisteredComparators(typeId);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:589
// [1] bool hasRegisteredDebugStreamOperator(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType32hasRegisteredDebugStreamOperatorEi(int typeId) {
  return (bool)QMetaType::hasRegisteredDebugStreamOperator(typeId);
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qmetatype.h:647
// [1] bool convert(const void *, int, void *, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType7convertEPKviPvi(const void * from, int fromTypeId, void * to, int toTypeId) {
  return (bool)QMetaType::convert(from, fromTypeId, to, toTypeId);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qmetatype.h:648
// [1] bool compare(const void *, const void *, int, int *)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType7compareEPKvS1_iPi(const void * lhs, const void * rhs, int typeId, int * result) {
  return (bool)QMetaType::compare(lhs, rhs, typeId, result);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qmetatype.h:649
// [1] bool equals(const void *, const void *, int, int *)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType6equalsEPKvS1_iPi(const void * lhs, const void * rhs, int typeId, int * result) {
  return (bool)QMetaType::equals(lhs, rhs, typeId, result);
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qmetatype.h:650
// [1] bool debugStream(QDebug &, const void *, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType11debugStreamER6QDebugPKvi(QDebug* dbg, const void * rhs, int typeId) {
  return (bool)QMetaType::debugStream(*dbg, rhs, typeId);
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qmetatype.h:658
// [1] bool hasRegisteredConverterFunction(int, int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QMetaType30hasRegisteredConverterFunctionEii(int fromTypeId, int toTypeId) {
  return (bool)QMetaType::hasRegisteredConverterFunction(fromTypeId, toTypeId);
}
#endif // QT_VERSION >= 0x050200

//  main block end
