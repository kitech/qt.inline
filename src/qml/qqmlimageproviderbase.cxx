//  header block begin
// /usr/include/qt/QtQml/qqmlengine.h
#ifndef protected
#define protected public
#endif
#include <qqmlengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlImageProviderBase is pure virtual: true
// QQmlImageProviderBase has virtual projected: false
//  header block end

//  main block begin

class MyQQmlImageProviderBase : public QQmlImageProviderBase {
public:
  virtual ~MyQQmlImageProviderBase() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:72
// [-2] void ~QQmlImageProviderBase()
extern "C"
void C_ZN21QQmlImageProviderBaseD2Ev(void *this_) {
  delete (QQmlImageProviderBase*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:74
// [4] QQmlImageProviderBase::ImageType imageType()
extern "C"
QQmlImageProviderBase::ImageType C_ZNK21QQmlImageProviderBase9imageTypeEv(void *this_) {
  return (QQmlImageProviderBase::ImageType)((QQmlImageProviderBase*)this_)->imageType();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlengine.h:75
// [4] QQmlImageProviderBase::Flags flags()
extern "C"
QQmlImageProviderBase::Flags* C_ZNK21QQmlImageProviderBase5flagsEv(void *this_) {
  auto rv = ((QQmlImageProviderBase*)this_)->flags();
return new QQmlImageProviderBase::Flags(rv);
}

//  main block end
