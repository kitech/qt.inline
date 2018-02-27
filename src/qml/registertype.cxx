//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterType is pure virtual: false
// RegisterType has virtual projected: false
//  header block end

//  main block begin

class MyRegisterType : public QQmlPrivate::RegisterType {
public:
  virtual ~MyRegisterType() {}
};


extern "C"
void C_ZN12RegisterTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterType*)(this_);
}
//  main block end
