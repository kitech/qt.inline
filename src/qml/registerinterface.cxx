//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterInterface is pure virtual: false
// RegisterInterface has virtual projected: false
//  header block end

//  main block begin

class MyRegisterInterface : public QQmlPrivate::RegisterInterface {
public:
  virtual ~MyRegisterInterface() {}
};


extern "C"
void C_ZN17RegisterInterfaceD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterInterface*)(this_);
}
//  main block end
