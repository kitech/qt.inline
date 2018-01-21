//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#include <qobjectdefs.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qobjectdefs.h:306
// void QGenericArgument(const char *, const void *)
extern "C"
void* C_ZN16QGenericArgumentC1EPKcPKv(const char * aName, const void * aData) {
  return new QGenericArgument(aName, aData);
}
// inline
// /usr/include/qt/QtCore/qobjectdefs.h:308
// void * data()
extern "C"
void C_ZNK16QGenericArgument4dataEv(void *this_) {
  /*return*/ ((QGenericArgument*)this_)->data();
}
// inline
// /usr/include/qt/QtCore/qobjectdefs.h:309
// const char * name()
extern "C"
void C_ZNK16QGenericArgument4nameEv(void *this_) {
  /*return*/ ((QGenericArgument*)this_)->name();
}
//  main block end
