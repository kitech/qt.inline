//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QGenericReturnArgument is pure virtual: false
// QGenericReturnArgument has virtual projected: false
//  header block end

//  main block begin

class MyQGenericReturnArgument : public QGenericReturnArgument {
public:
  virtual ~MyQGenericReturnArgument() {}
// void QGenericReturnArgument(const char *, void *)
MyQGenericReturnArgument(const char * aName, void * aData) : QGenericReturnArgument(aName, aData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:310
// [-2] void QGenericReturnArgument(const char *, void *)
extern "C"
void* C_ZN22QGenericReturnArgumentC2EPKcPv(const char * aName, void * aData) {
  return  new QGenericReturnArgument(aName, aData);
}

extern "C"
void C_ZN22QGenericReturnArgumentD2Ev(void *this_) {
  delete (QGenericReturnArgument*)(this_);
}
//  main block end