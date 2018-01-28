//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#include <qmetaobject.h>
#include <QtCore>

// QMetaClassInfo is pure virtual: false
//  header block end

//  main block begin

class MyQMetaClassInfo : public QMetaClassInfo {
public:
MyQMetaClassInfo() : QMetaClassInfo() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:303
// [-2] void QMetaClassInfo()
extern "C"
void* C_ZN14QMetaClassInfoC1Ev() {
  (MyQMetaClassInfo*)(0);
  return  new MyQMetaClassInfo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:304
// [8] const char * name()
extern "C"
void* C_ZNK14QMetaClassInfo4nameEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->name();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:305
// [8] const char * value()
extern "C"
void* C_ZNK14QMetaClassInfo5valueEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->value();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:306
// [8] const QMetaObject * enclosingMetaObject()
extern "C"
void* C_ZNK14QMetaClassInfo19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaClassInfo*)this_)->enclosingMetaObject();
}
//  main block end
