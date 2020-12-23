//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QAssociativeIterable is pure virtual: false false
// QAssociativeIterable has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qassociativeiterable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:721
// [-2] void QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl) 
// (11)qm837777242 (75)_ZN20QAssociativeIterableC2EN17QtMetaTypePrivate24QAssociativeIterableImplE
/*void* qm837777242(QtMetaTypePrivate::QAssociativeIterableImpl impl)*/{
  QtMetaTypePrivate::QAssociativeIterableImpl impl = *(QtMetaTypePrivate::QAssociativeIterableImpl*)this_;
  this_ =  new QAssociativeIterable(impl);
}


/*void C_ZN20QAssociativeIterableD2Ev(void *this_)*/ {
  delete (QAssociativeIterable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qassociativeiterable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
