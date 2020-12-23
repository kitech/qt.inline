//  header block begin

// /usr/include/qt/QtGui/qpagesize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpagesize.h>
#include <QtGui>
#include "callback_inherit.h"

// QPageSize is pure virtual: false false
// QPageSize has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpagesize(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:230
// [-2] void QPageSize() 
// (12)qm2745184346 (17)_ZN9QPageSizeC2Ev
/*void* qm2745184346()*/{
  ;
  this_ =  new QPageSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:231
// [-2] void QPageSize(QPageSize::PageSizeId) 
// (11)qm939258003 (32)_ZN9QPageSizeC2ENS_10PageSizeIdE
/*void* qm939258003(QPageSize::PageSizeId pageSizeId)*/{
  QPageSize::PageSizeId pageSizeId = *(QPageSize::PageSizeId*)this_;
  this_ =  new QPageSize(pageSizeId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:232
// [-2] void QPageSize(const QSize &, const QString &, QPageSize::SizeMatchPolicy) 
// (11)qm150233864 (55)_ZN9QPageSizeC2ERK5QSizeRK7QStringNS_15SizeMatchPolicyE
/*void* qm150233864(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)*/{
  const QSize & pointSize = *(const QSize *)this_; const QString & name = *(const QString *)this_; QPageSize::SizeMatchPolicy matchPolicy = *(QPageSize::SizeMatchPolicy*)this_;
  this_ =  new QPageSize(pointSize, name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:235
// [-2] void QPageSize(const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy) 
// (12)qm2269842282 (65)_ZN9QPageSizeC2ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE
/*void* qm2269842282(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)*/{
  const QSizeF & size = *(const QSizeF *)this_; QPageSize::Unit units = *(QPageSize::Unit*)this_; const QString & name = *(const QString *)this_; QPageSize::SizeMatchPolicy matchPolicy = *(QPageSize::SizeMatchPolicy*)this_;
  this_ =  new QPageSize(size, units, name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:238
// [-2] void QPageSize(const QPageSize &) 
// (12)qm2921856886 (20)_ZN9QPageSizeC2ERKS_
/*void* qm2921856886(const QPageSize & other)*/{
  const QPageSize & other = *(const QPageSize *)this_;
  this_ =  new QPageSize(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:239
// [8] QPageSize & operator=(QPageSize &&) 
// (12)qm2291814912 (19)_ZN9QPageSizeaSEOS_
//static
/*void qm2291814912(QPageSize && other)*/ {
  QPageSize && other =  static_cast<QPageSize &&>(*(QPageSize *)this_);
  (void) ((QPageSize*)this_)->operator=(other);
  // auto xptr = (QPageSize & (QPageSize::*)(QPageSize&&) ) &QPageSize::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:244
// [-2] void swap(QPageSize &) 
// (11)qm406876231 (22)_ZN9QPageSize4swapERS_
//static
/*void qm406876231(QPageSize & other)*/ {
  QPageSize & other = *(QPageSize *)this_;
  (void) ((QPageSize*)this_)->swap(other);
   auto xptr = (void (QPageSize::*)(QPageSize&) ) &QPageSize::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QPageSizeD2Ev(void *this_)*/ {
  delete (QPageSize*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpagesize
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
