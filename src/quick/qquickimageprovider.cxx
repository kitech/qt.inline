//  header block begin

// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageProvider is pure virtual: false false
// QQuickImageProvider has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickimageprovider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:99
// [-2] void QQuickImageProvider(QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags) 
// (12)qm2034230936 (81)_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE
/*void* qm2034230936(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags)*/{
  QQmlImageProviderBase::ImageType type_ = *(QQmlImageProviderBase::ImageType*)this_; QFlags<QQmlImageProviderBase::Flag> flags = *(QFlags<QQmlImageProviderBase::Flag>*)this_;
  this_ =  new QQuickImageProvider(type_, flags);
}


/*void C_ZN19QQuickImageProviderD2Ev(void *this_)*/ {
  delete (QQuickImageProvider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickimageprovider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
