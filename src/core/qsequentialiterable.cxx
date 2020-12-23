//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QSequentialIterable is pure virtual: false false
// QSequentialIterable has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsequentialiterable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:663
// [-2] void QSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl) 
// (12)qm3097060146 (73)_ZN19QSequentialIterableC2EN17QtMetaTypePrivate23QSequentialIterableImplE
/*void* qm3097060146(QtMetaTypePrivate::QSequentialIterableImpl impl)*/{
  QtMetaTypePrivate::QSequentialIterableImpl impl = *(QtMetaTypePrivate::QSequentialIterableImpl*)this_;
  this_ =  new QSequentialIterable(impl);
}


/*void C_ZN19QSequentialIterableD2Ev(void *this_)*/ {
  delete (QSequentialIterable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsequentialiterable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
