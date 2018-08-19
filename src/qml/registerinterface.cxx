//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterInterface is pure virtual: false
// RegisterInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyRegisterInterface : public QQmlPrivate::RegisterInterface {
public:
  virtual ~MyRegisterInterface() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN17RegisterInterfaceD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterInterface*)(this_);
}
//  main block end
