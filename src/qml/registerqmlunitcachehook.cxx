//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#endif
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


extern "C" Q_DECL_EXPORT
void C_ZN24RegisterQmlUnitCacheHookD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterQmlUnitCacheHook*)(this_);
}
//  main block end
