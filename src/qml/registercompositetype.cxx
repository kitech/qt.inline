//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeType is pure virtual: false
// RegisterCompositeType has virtual projected: false
//  header block end

//  main block begin

class MyRegisterCompositeType : public QQmlPrivate::RegisterCompositeType {
public:
  virtual ~MyRegisterCompositeType() {}
};


extern "C"
void C_ZN21RegisterCompositeTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterCompositeType*)(this_);
}
//  main block end
