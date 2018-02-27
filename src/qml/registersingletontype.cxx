//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterSingletonType is pure virtual: false
// RegisterSingletonType has virtual projected: false
//  header block end

//  main block begin

class MyRegisterSingletonType : public QQmlPrivate::RegisterSingletonType {
public:
  virtual ~MyRegisterSingletonType() {}
};


extern "C"
void C_ZN21RegisterSingletonTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterSingletonType*)(this_);
}
//  main block end
