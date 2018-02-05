//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// CachedQmlUnit is pure virtual: false
// CachedQmlUnit has virtual projected: false
//  header block end

//  main block begin

class MyCachedQmlUnit : public QQmlPrivate::CachedQmlUnit {
public:
  virtual ~MyCachedQmlUnit() {}
};


extern "C"
void C_ZN13CachedQmlUnitD2Ev(void *this_) {
  delete (QQmlPrivate::CachedQmlUnit*)(this_);
}
//  main block end
