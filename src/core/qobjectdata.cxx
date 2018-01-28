//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

// QObjectData is pure virtual: true
//  header block end

//  main block begin

class MyQObjectData : public QObjectData {
public:
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:97
// [-2] void ~QObjectData()
extern "C"
void C_ZN11QObjectDataD1Ev(void *this_) {
  delete (QObjectData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:112
// [8] QMetaObject * dynamicMetaObject()
extern "C"
void* C_ZNK11QObjectData17dynamicMetaObjectEv(void *this_) {
  return (void*)((QObjectData*)this_)->dynamicMetaObject();
}
//  main block end
