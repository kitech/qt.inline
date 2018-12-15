//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaEnum is pure virtual: false
// QMetaEnum has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaEnum_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaEnum_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaEnum_t qt_meta_stringdata_MyQMetaEnum = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMetaEnum"
  },
  "MyQMetaEnum"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaEnum[] = {
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
class Q_DECL_EXPORT MyQMetaEnum : public QMetaEnum {
public:
  virtual ~MyQMetaEnum() {}
// void QMetaEnum()
MyQMetaEnum() : QMetaEnum() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:209
// [-2] void QMetaEnum()
extern "C" Q_DECL_EXPORT
void* C_ZN9QMetaEnumC2Ev() {
  return  new QMetaEnum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:211
// [8] const char * name()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum4nameEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->name();
}

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtCore/qmetaobject.h:212
// [8] const char * enumName()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum8enumNameEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->enumName();
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:213
// [1] bool isFlag()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaEnum6isFlagEv(void *this_) {
  return (bool)((QMetaEnum*)this_)->isFlag();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qmetaobject.h:214
// [1] bool isScoped()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaEnum8isScopedEv(void *this_) {
  return (bool)((QMetaEnum*)this_)->isScoped();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:216
// [4] int keyCount()
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum8keyCountEv(void *this_) {
  return (int)((QMetaEnum*)this_)->keyCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:217
// [8] const char * key(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum3keyEi(void *this_, int index) {
  return (void*)((QMetaEnum*)this_)->key(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:218
// [4] int value(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum5valueEi(void *this_, int index) {
  return (int)((QMetaEnum*)this_)->value(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:220
// [8] const char * scope()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum5scopeEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->scope();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:222
// [4] int keyToValue(const char *, bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum10keyToValueEPKcPb(void *this_, const char * key, bool * ok) {
  return (int)((QMetaEnum*)this_)->keyToValue(key, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:223
// [8] const char * valueToKey(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum10valueToKeyEi(void *this_, int value) {
  return (void*)((QMetaEnum*)this_)->valueToKey(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:224
// [4] int keysToValue(const char *, bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum11keysToValueEPKcPb(void *this_, const char * keys, bool * ok) {
  return (int)((QMetaEnum*)this_)->keysToValue(keys, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:225
// [8] QByteArray valueToKeys(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum11valueToKeysEi(void *this_, int value) {
  auto rv = ((QMetaEnum*)this_)->valueToKeys(value);
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:227
// [8] const QMetaObject * enclosingMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->enclosingMetaObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:229
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaEnum7isValidEv(void *this_) {
  return (bool)((QMetaEnum*)this_)->isValid();
}


extern "C" Q_DECL_EXPORT
void C_ZN9QMetaEnumD2Ev(void *this_) {
  delete (QMetaEnum*)(this_);
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
