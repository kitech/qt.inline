//  header block begin
// /usr/include/qt/QtCore/qobjectdefs.h
#include <qobjectdefs.h>
#include <QtCore>

// QGenericReturnArgument is pure virtual: false
//  header block end

//  main block begin

class MyQGenericReturnArgument : public QGenericReturnArgument {
public:
MyQGenericReturnArgument(const char * aName, void * aData) : QGenericReturnArgument(aName, aData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:310
// [-2] void QGenericReturnArgument(const char *, void *)
extern "C"
void* C_ZN22QGenericReturnArgumentC1EPKcPv(const char * aName, void * aData) {
  (MyQGenericReturnArgument*)(0);
  return  new MyQGenericReturnArgument(aName, aData);
}
//  main block end
