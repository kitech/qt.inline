//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qmimetype.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimetype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeType is pure virtual: false
// QMimeType has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMimeType_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMimeType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMimeType_t qt_meta_stringdata_MyQMimeType = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMimeType"
  },
  "MyQMimeType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMimeType[] = {
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
class Q_DECL_EXPORT MyQMimeType : public QMimeType {
public:
  virtual ~MyQMimeType() {}
// void QMimeType()
MyQMimeType() : QMimeType() {}
// void QMimeType(const QMimeType &)
MyQMimeType(const QMimeType & other) : QMimeType(other) {}
// void QMimeType(const QMimeTypePrivate &)
MyQMimeType(const QMimeTypePrivate & dd) : QMimeType(dd) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:78
// [-2] void QMimeType()
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeTypeC2Ev() {
  return  new QMimeType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:79
// [-2] void QMimeType(const QMimeType &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeTypeC2ERKS_(QMimeType* other) {
  return  new QMimeType(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:80
// [8] QMimeType & operator=(const QMimeType &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeTypeaSERKS_(void *this_, QMimeType* other) {
  auto& rv = ((QMimeType*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:82
// [8] QMimeType & operator=(QMimeType &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeTypeaSEOS_(void *this_, QMimeType && other) {
  auto& rv = ((QMimeType*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:84
// [-2] void swap(QMimeType &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeType4swapERS_(void *this_, QMimeType* other) {
  ((QMimeType*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:88
// [-2] void QMimeType(const QMimeTypePrivate &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeTypeC2ERK16QMimeTypePrivate(QMimeTypePrivate* dd) {
  return  new QMimeType(*dd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:89
// [-2] void ~QMimeType()
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeTypeD2Ev(void *this_) {
  delete (QMimeType*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:91
// [1] bool operator==(const QMimeType &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeTypeeqERKS_(void *this_, QMimeType* other) {
  return (bool)((QMimeType*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:93
// [1] bool operator!=(const QMimeType &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeTypeneERKS_(void *this_, QMimeType* other) {
  return (bool)((QMimeType*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:98
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeType7isValidEv(void *this_) {
  return (bool)((QMimeType*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:100
// [1] bool isDefault()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeType9isDefaultEv(void *this_) {
  return (bool)((QMimeType*)this_)->isDefault();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:102
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType4nameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:103
// [8] QString comment()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType7commentEv(void *this_) {
  auto rv = ((QMimeType*)this_)->comment();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:104
// [8] QString genericIconName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType15genericIconNameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->genericIconName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:105
// [8] QString iconName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType8iconNameEv(void *this_) {
  auto rv = ((QMimeType*)this_)->iconName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:106
// [8] QStringList globPatterns()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType12globPatternsEv(void *this_) {
  auto rv = ((QMimeType*)this_)->globPatterns();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:107
// [8] QStringList parentMimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType15parentMimeTypesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->parentMimeTypes();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:108
// [8] QStringList allAncestors()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType12allAncestorsEv(void *this_) {
  auto rv = ((QMimeType*)this_)->allAncestors();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:109
// [8] QStringList aliases()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType7aliasesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->aliases();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:110
// [8] QStringList suffixes()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType8suffixesEv(void *this_) {
  auto rv = ((QMimeType*)this_)->suffixes();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:111
// [8] QString preferredSuffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType15preferredSuffixEv(void *this_) {
  auto rv = ((QMimeType*)this_)->preferredSuffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:113
// [1] bool inherits(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeType8inheritsERK7QString(void *this_, QString* mimeTypeName) {
  return (bool)((QMimeType*)this_)->inherits(*mimeTypeName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:115
// [8] QString filterString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeType12filterStringEv(void *this_) {
  auto rv = ((QMimeType*)this_)->filterString();
return new QString(rv);
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
