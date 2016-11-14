// /usr/include/qt/QtCore/qmetaobject.h
#include <qmetaobject.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qmetaobject.h:306
// void QMetaClassInfo()
extern "C"
void* C_ZN14QMetaClassInfoC1Ev() {
  return new QMetaClassInfo();
}
// /usr/include/qt/QtCore/qmetaobject.h:307
// const char * name()
extern "C"
void C_ZNK14QMetaClassInfo4nameEv(void *this_) {
  /*return*/ ((QMetaClassInfo*)this_)->name();
}
// /usr/include/qt/QtCore/qmetaobject.h:308
// const char * value()
extern "C"
void C_ZNK14QMetaClassInfo5valueEv(void *this_) {
  /*return*/ ((QMetaClassInfo*)this_)->value();
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:309
// const QMetaObject * enclosingMetaObject()
extern "C"
void C_ZNK14QMetaClassInfo19enclosingMetaObjectEv(void *this_) {
  /*return*/ ((QMetaClassInfo*)this_)->enclosingMetaObject();
}