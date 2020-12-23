//  header block begin

// /usr/include/qt/QtGui/qglyphrun.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qglyphrun.h>
#include <QtGui>
#include "callback_inherit.h"

// QGlyphRun is pure virtual: false false
// QGlyphRun has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qglyphrun(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:67
// [-2] void QGlyphRun() 
// (12)qm1002566156 (17)_ZN9QGlyphRunC2Ev
/*void* qm1002566156()*/{
  ;
  this_ =  new QGlyphRun();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:68
// [-2] void QGlyphRun(const QGlyphRun &) 
// (10)qm91179502 (20)_ZN9QGlyphRunC2ERKS_
/*void* qm91179502(const QGlyphRun & other)*/{
  const QGlyphRun & other = *(const QGlyphRun *)this_;
  this_ =  new QGlyphRun(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:69
// [8] QGlyphRun & operator=(QGlyphRun &&) 
// (11)qm286364463 (19)_ZN9QGlyphRunaSEOS_
//static
/*void qm286364463(QGlyphRun && other)*/ {
  QGlyphRun && other =  static_cast<QGlyphRun &&>(*(QGlyphRun *)this_);
  (void) ((QGlyphRun*)this_)->operator=(other);
  // auto xptr = (QGlyphRun & (QGlyphRun::*)(QGlyphRun&&) ) &QGlyphRun::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:73
// [-2] void swap(QGlyphRun &) 
// (12)qm2212154788 (22)_ZN9QGlyphRun4swapERS_
//static
/*void qm2212154788(QGlyphRun & other)*/ {
  QGlyphRun & other = *(QGlyphRun *)this_;
  (void) ((QGlyphRun*)this_)->swap(other);
   auto xptr = (void (QGlyphRun::*)(QGlyphRun&) ) &QGlyphRun::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:91
// [1] bool operator!=(const QGlyphRun &) const
// (11)qm840245464 (21)_ZNK9QGlyphRunneERKS_
//static
/*void qm840245464(const QGlyphRun & other)*/ {
  const QGlyphRun & other = *(const QGlyphRun *)this_;
  (void) ((QGlyphRun*)this_)->operator!=(other);
  // auto xptr = (bool (QGlyphRun::*)(QGlyphRun const&) const ) &QGlyphRun::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QGlyphRunD2Ev(void *this_)*/ {
  delete (QGlyphRun*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qglyphrun
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
