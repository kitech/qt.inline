//  header block begin

// /usr/include/qt/QtGui/qpagelayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpagelayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QPageLayout is pure virtual: false false
// QPageLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpagelayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:80
// [-2] void QPageLayout() 
// (12)qm3037595024 (20)_ZN11QPageLayoutC2Ev
/*void* qm3037595024()*/{
  ;
  this_ =  new QPageLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:81
// [-2] void QPageLayout(const QPageSize &, QPageLayout::Orientation, const QMarginsF &, QPageLayout::Unit, const QMarginsF &) 
// (12)qm3403826045 (72)_ZN11QPageLayoutC2ERK9QPageSizeNS_11OrientationERK9QMarginsFNS_4UnitES6_
/*void* qm3403826045(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins)*/{
  const QPageSize & pageSize = *(const QPageSize *)this_; QPageLayout::Orientation orientation = *(QPageLayout::Orientation*)this_; const QMarginsF & margins = *(const QMarginsF *)this_; QPageLayout::Unit units = *(QPageLayout::Unit*)this_; const QMarginsF & minMargins = *(const QMarginsF *)this_;
  this_ =  new QPageLayout(pageSize, orientation, margins, units, minMargins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:84
// [-2] void QPageLayout(const QPageLayout &) 
// (12)qm2705367215 (23)_ZN11QPageLayoutC2ERKS_
/*void* qm2705367215(const QPageLayout & other)*/{
  const QPageLayout & other = *(const QPageLayout *)this_;
  this_ =  new QPageLayout(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:85
// [8] QPageLayout & operator=(QPageLayout &&) 
// (12)qm4013735753 (22)_ZN11QPageLayoutaSEOS_
//static
/*void qm4013735753(QPageLayout && other)*/ {
  QPageLayout && other =  static_cast<QPageLayout &&>(*(QPageLayout *)this_);
  (void) ((QPageLayout*)this_)->operator=(other);
  // auto xptr = (QPageLayout & (QPageLayout::*)(QPageLayout&&) ) &QPageLayout::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:89
// [-2] void swap(QPageLayout &) 
// (12)qm3010350355 (25)_ZN11QPageLayout4swapERS_
//static
/*void qm3010350355(QPageLayout & other)*/ {
  QPageLayout & other = *(QPageLayout *)this_;
  (void) ((QPageLayout*)this_)->swap(other);
   auto xptr = (void (QPageLayout::*)(QPageLayout&) ) &QPageLayout::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QPageLayoutD2Ev(void *this_)*/ {
  delete (QPageLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpagelayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
