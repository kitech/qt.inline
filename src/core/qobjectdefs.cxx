// /usr/include/qt/QtCore/qobjectdefs.h
#include <qobjectdefs.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qobjectdefs.h:319
// void QGenericReturnArgument(const char *, void *)
extern "C"
void* C_ZN22QGenericReturnArgumentC1EPKcPv(const char * aName, void * aData) {
  return new QGenericReturnArgument(aName, aData);
}