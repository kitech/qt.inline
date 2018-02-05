//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterQmlUnitCacheHook is pure virtual: false
// RegisterQmlUnitCacheHook has virtual projected: false
//  header block end

//  main block begin

class MyRegisterQmlUnitCacheHook : public QQmlPrivate::RegisterQmlUnitCacheHook {
public:
  virtual ~MyRegisterQmlUnitCacheHook() {}
};


extern "C"
void C_ZN24RegisterQmlUnitCacheHookD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterQmlUnitCacheHook*)(this_);
}
//  main block end
