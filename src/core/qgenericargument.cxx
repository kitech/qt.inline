//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#include <qobjectdefs.h>
#include <QtCore>

// QGenericArgument is pure virtual: false
// QGenericArgument has virtual projected: false
//  header block end

//  main block begin

class MyQGenericArgument : public QGenericArgument {
public:
  virtual ~MyQGenericArgument() {}
// void QGenericArgument(const char *, const void *)
MyQGenericArgument(const char * aName, const void * aData) : QGenericArgument(aName, aData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:297
// [-2] void QGenericArgument(const char *, const void *)
extern "C"
void* C_ZN16QGenericArgumentC2EPKcPKv(const char * aName, const void * aData) {
  return  new QGenericArgument(aName, aData);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:299
// [8] void * data()
extern "C"
void* C_ZNK16QGenericArgument4dataEv(void *this_) {
  return (void*)((QGenericArgument*)this_)->data();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:300
// [8] const char * name()
extern "C"
void* C_ZNK16QGenericArgument4nameEv(void *this_) {
  return (void*)((QGenericArgument*)this_)->name();
}

extern "C"
void C_ZN16QGenericArgumentD2Ev(void *this_) {
  delete (QGenericArgument*)(this_);
}
//  main block end
