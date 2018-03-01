//  header block begin
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectData is pure virtual: true
// QObjectData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQObjectData : public QObjectData {
public:
  virtual ~MyQObjectData() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:97
// [-2] void ~QObjectData()
extern "C" Q_DECL_EXPORT
void C_ZN11QObjectDataD2Ev(void *this_) {
  delete (QObjectData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:113
// [8] QMetaObject * dynamicMetaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QObjectData17dynamicMetaObjectEv(void *this_) {
  return (void*)((QObjectData*)this_)->dynamicMetaObject();
}

//  main block end
