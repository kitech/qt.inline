//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#include <qmetaobject.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qmetaobject.h:213
// void QMetaEnum()
extern "C"
void* C_ZN9QMetaEnumC1Ev() {
  return new QMetaEnum();
}
// /usr/include/qt/QtCore/qmetaobject.h:215
// const char * name()
extern "C"
void C_ZNK9QMetaEnum4nameEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->name();
}
// /usr/include/qt/QtCore/qmetaobject.h:216
// bool isFlag()
extern "C"
void C_ZNK9QMetaEnum6isFlagEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->isFlag();
}
// /usr/include/qt/QtCore/qmetaobject.h:218
// int keyCount()
extern "C"
void C_ZNK9QMetaEnum8keyCountEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->keyCount();
}
// /usr/include/qt/QtCore/qmetaobject.h:219
// const char * key(int)
extern "C"
void C_ZNK9QMetaEnum3keyEi(void *this_, int index) {
  /*return*/ ((QMetaEnum*)this_)->key(index);
}
// /usr/include/qt/QtCore/qmetaobject.h:220
// int value(int)
extern "C"
void C_ZNK9QMetaEnum5valueEi(void *this_, int index) {
  /*return*/ ((QMetaEnum*)this_)->value(index);
}
// /usr/include/qt/QtCore/qmetaobject.h:222
// const char * scope()
extern "C"
void C_ZNK9QMetaEnum5scopeEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->scope();
}
// /usr/include/qt/QtCore/qmetaobject.h:224
// int keyToValue(const char *, _Bool *)
extern "C"
void C_ZNK9QMetaEnum10keyToValueEPKcPb(void *this_, const char * key, bool * ok) {
  /*return*/ ((QMetaEnum*)this_)->keyToValue(key, ok);
}
// /usr/include/qt/QtCore/qmetaobject.h:225
// const char * valueToKey(int)
extern "C"
void C_ZNK9QMetaEnum10valueToKeyEi(void *this_, int value) {
  /*return*/ ((QMetaEnum*)this_)->valueToKey(value);
}
// /usr/include/qt/QtCore/qmetaobject.h:226
// int keysToValue(const char *, _Bool *)
extern "C"
void C_ZNK9QMetaEnum11keysToValueEPKcPb(void *this_, const char * keys, bool * ok) {
  /*return*/ ((QMetaEnum*)this_)->keysToValue(keys, ok);
}
// /usr/include/qt/QtCore/qmetaobject.h:227
// QByteArray valueToKeys(int)
extern "C"
void C_ZNK9QMetaEnum11valueToKeysEi(void *this_, int value) {
  /*return*/ ((QMetaEnum*)this_)->valueToKeys(value);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:229
// const QMetaObject * enclosingMetaObject()
extern "C"
void C_ZNK9QMetaEnum19enclosingMetaObjectEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->enclosingMetaObject();
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:231
// bool isValid()
extern "C"
void C_ZNK9QMetaEnum7isValidEv(void *this_) {
  /*return*/ ((QMetaEnum*)this_)->isValid();
}
//  main block end
