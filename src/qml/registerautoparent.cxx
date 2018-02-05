//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterAutoParent is pure virtual: false
// RegisterAutoParent has virtual projected: false
//  header block end

//  main block begin

class MyRegisterAutoParent : public QQmlPrivate::RegisterAutoParent {
public:
  virtual ~MyRegisterAutoParent() {}
};


extern "C"
void C_ZN18RegisterAutoParentD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterAutoParent*)(this_);
}
//  main block end
