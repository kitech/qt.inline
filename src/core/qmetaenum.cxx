//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaEnum is pure virtual: false
// QMetaEnum has virtual projected: false
//  header block end

//  main block begin

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
// /usr/include/qt/QtCore/qmetaobject.h:212
// [1] bool isFlag()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaEnum6isFlagEv(void *this_) {
  return (bool)((QMetaEnum*)this_)->isFlag();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qmetaobject.h:213
// [1] bool isScoped()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMetaEnum8isScopedEv(void *this_) {
  return (bool)((QMetaEnum*)this_)->isScoped();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:215
// [4] int keyCount()
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum8keyCountEv(void *this_) {
  return (int)((QMetaEnum*)this_)->keyCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:216
// [8] const char * key(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum3keyEi(void *this_, int index) {
  return (void*)((QMetaEnum*)this_)->key(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:217
// [4] int value(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum5valueEi(void *this_, int index) {
  return (int)((QMetaEnum*)this_)->value(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:219
// [8] const char * scope()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum5scopeEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->scope();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:221
// [4] int keyToValue(const char *, bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum10keyToValueEPKcPb(void *this_, const char * key, bool * ok) {
  return (int)((QMetaEnum*)this_)->keyToValue(key, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:222
// [8] const char * valueToKey(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum10valueToKeyEi(void *this_, int value) {
  return (void*)((QMetaEnum*)this_)->valueToKey(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:223
// [4] int keysToValue(const char *, bool *)
extern "C" Q_DECL_EXPORT
int C_ZNK9QMetaEnum11keysToValueEPKcPb(void *this_, const char * keys, bool * ok) {
  return (int)((QMetaEnum*)this_)->keysToValue(keys, ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:224
// [8] QByteArray valueToKeys(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum11valueToKeysEi(void *this_, int value) {
  auto rv = ((QMetaEnum*)this_)->valueToKeys(value);
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:226
// [8] const QMetaObject * enclosingMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMetaEnum19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaEnum*)this_)->enclosingMetaObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:228
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
