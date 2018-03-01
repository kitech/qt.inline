//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeSingletonType is pure virtual: false
// RegisterCompositeSingletonType has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyRegisterCompositeSingletonType : public QQmlPrivate::RegisterCompositeSingletonType {
public:
  virtual ~MyRegisterCompositeSingletonType() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN30RegisterCompositeSingletonTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterCompositeSingletonType*)(this_);
}
//  main block end
