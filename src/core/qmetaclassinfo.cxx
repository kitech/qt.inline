//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaClassInfo is pure virtual: false
// QMetaClassInfo has virtual projected: false
//  header block end

//  main block begin

class MyQMetaClassInfo : public QMetaClassInfo {
public:
  virtual ~MyQMetaClassInfo() {}
// void QMetaClassInfo()
MyQMetaClassInfo() : QMetaClassInfo() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:303
// [-2] void QMetaClassInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN14QMetaClassInfoC2Ev() {
  return  new QMetaClassInfo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:304
// [8] const char * name()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo4nameEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->name();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:305
// [8] const char * value()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo5valueEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->value();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:306
// [8] const QMetaObject * enclosingMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMetaClassInfo19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->enclosingMetaObject();
}


extern "C" Q_DECL_EXPORT
void C_ZN14QMetaClassInfoD2Ev(void *this_) {
  delete (QMetaClassInfo*)(this_);
}
//  main block end
