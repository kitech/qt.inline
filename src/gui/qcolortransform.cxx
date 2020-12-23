//  header block begin

// /usr/include/qt/QtGui/qcolortransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolortransform.h>
#include <QtGui>
#include "callback_inherit.h"

// QColorTransform is pure virtual: false false
// QColorTransform has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolortransform(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:56
// [-2] void QColorTransform() 
// (12)qm3427948977 (24)_ZN15QColorTransformC2Ev
/*void* qm3427948977()*/{
  ;
  this_ =  new QColorTransform();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:58
// [-2] void QColorTransform(const QColorTransform &) 
// (12)qm3961291654 (27)_ZN15QColorTransformC2ERKS_
/*void* qm3961291654(const QColorTransform & colorTransform)*/{
  const QColorTransform & colorTransform = *(const QColorTransform *)this_;
  this_ =  new QColorTransform(colorTransform);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:59
// [-2] void QColorTransform(QColorTransform &&) 
// (12)qm4014486761 (26)_ZN15QColorTransformC2EOS_
/*void* qm4014486761(QColorTransform && colorTransform)*/{
  QColorTransform && colorTransform =  static_cast<QColorTransform &&>(*(QColorTransform *)this_);
  this_ =  new QColorTransform(colorTransform);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:62
// [8] QColorTransform & operator=(const QColorTransform &) 
// (12)qm2006349772 (27)_ZN15QColorTransformaSERKS_
//static
/*void qm2006349772(const QColorTransform & other)*/ {
  const QColorTransform & other = *(const QColorTransform *)this_;
  (void) ((QColorTransform*)this_)->operator=(other);
  // auto xptr = (QColorTransform & (QColorTransform::*)(QColorTransform const&) ) &QColorTransform::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:67
// [8] QColorTransform & operator=(QColorTransform &&) 
// (10)qm25087529 (26)_ZN15QColorTransformaSEOS_
//static
/*void qm25087529(QColorTransform && other)*/ {
  QColorTransform && other =  static_cast<QColorTransform &&>(*(QColorTransform *)this_);
  (void) ((QColorTransform*)this_)->operator=(other);
  // auto xptr = (QColorTransform & (QColorTransform::*)(QColorTransform&&) ) &QColorTransform::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:73
// [-2] void swap(QColorTransform &) 
// (12)qm1431301846 (29)_ZN15QColorTransform4swapERS_
//static
/*void qm1431301846(QColorTransform & other)*/ {
  QColorTransform & other = *(QColorTransform *)this_;
  (void) ((QColorTransform*)this_)->swap(other);
   auto xptr = (void (QColorTransform::*)(QColorTransform&) ) &QColorTransform::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QColorTransformD2Ev(void *this_)*/ {
  delete (QColorTransform*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolortransform
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
