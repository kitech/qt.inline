//  header block begin
// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapDataBase is pure virtual: false
// QMapDataBase has virtual projected: false
//  header block end

//  main block begin

class MyQMapDataBase : public QMapDataBase {
public:
  virtual ~MyQMapDataBase() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:194
// [-2] void recalcMostLeftNode()
extern "C"
void C_ZN12QMapDataBase18recalcMostLeftNodeEv(void *this_) {
  ((QMapDataBase*)this_)->recalcMostLeftNode();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:201
// [8] QMapDataBase * createData()
extern "C"
void* C_ZN12QMapDataBase10createDataEv() {
  return (void*)QMapDataBase::createData();
}

extern "C"
void C_ZN12QMapDataBaseD2Ev(void *this_) {
  delete (QMapDataBase*)(this_);
}
//  main block end
