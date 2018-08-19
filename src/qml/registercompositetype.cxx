//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeType is pure virtual: false
// RegisterCompositeType has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyRegisterCompositeType : public QQmlPrivate::RegisterCompositeType {
public:
  virtual ~MyRegisterCompositeType() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN21RegisterCompositeTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterCompositeType*)(this_);
}
//  main block end
