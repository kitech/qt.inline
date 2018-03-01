//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// CachedQmlUnit is pure virtual: false
// CachedQmlUnit has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyCachedQmlUnit : public QQmlPrivate::CachedQmlUnit {
public:
  virtual ~MyCachedQmlUnit() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN13CachedQmlUnitD2Ev(void *this_) {
  delete (QQmlPrivate::CachedQmlUnit*)(this_);
}
//  main block end
