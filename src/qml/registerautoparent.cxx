//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterAutoParent is pure virtual: false
// RegisterAutoParent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyRegisterAutoParent : public QQmlPrivate::RegisterAutoParent {
public:
  virtual ~MyRegisterAutoParent() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN18RegisterAutoParentD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterAutoParent*)(this_);
}
//  main block end
