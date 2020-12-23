//  header block begin

// /usr/include/qt/QtPositioning/qgeoaddress.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoaddress.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAddress is pure virtual: false false
// QGeoAddress has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeoaddress(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:54
// [-2] void QGeoAddress() 
// (12)qm3456043391 (20)_ZN11QGeoAddressC2Ev
/*void* qm3456043391()*/{
  ;
  this_ =  new QGeoAddress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:55
// [-2] void QGeoAddress(const QGeoAddress &) 
// (12)qm1710340812 (23)_ZN11QGeoAddressC2ERKS_
/*void* qm1710340812(const QGeoAddress & other)*/{
  const QGeoAddress & other = *(const QGeoAddress *)this_;
  this_ =  new QGeoAddress(other);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:60
// [1] bool operator!=(const QGeoAddress &) const
// (12)qm1384755161 (24)_ZNK11QGeoAddressneERKS_
//static
/*void qm1384755161(const QGeoAddress & other)*/ {
  const QGeoAddress & other = *(const QGeoAddress *)this_;
  (void) ((QGeoAddress*)this_)->operator!=(other);
  // auto xptr = (bool (QGeoAddress::*)(QGeoAddress const&) const ) &QGeoAddress::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QGeoAddressD2Ev(void *this_)*/ {
  delete (QGeoAddress*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeoaddress
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
