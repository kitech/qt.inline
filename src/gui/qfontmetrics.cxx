//  header block begin

// /usr/include/qt/QtGui/qfontmetrics.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontmetrics.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontMetrics is pure virtual: false false
// QFontMetrics has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfontmetrics(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:61
// [-2] void QFontMetrics(const QFont &) 
// (12)qm1203140175 (28)_ZN12QFontMetricsC2ERK5QFont
/*void* qm1203140175(const QFont & arg0)*/{
  const QFont & arg0 = *(const QFont *)this_;
  this_ =  new QFontMetrics(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:63
// [-2] void QFontMetrics(const QFont &, QPaintDevice *) 
// (12)qm3035092134 (43)_ZN12QFontMetricsC2ERK5QFontP12QPaintDevice
/*void* qm3035092134(const QFont & font, QPaintDevice * pd)*/{
  const QFont & font = *(const QFont *)this_; QPaintDevice * pd = *(QPaintDevice **)this_;
  this_ =  new QFontMetrics(font, pd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:75
// [-2] void QFontMetrics(const QFontMetrics &) 
// (12)qm1245860941 (24)_ZN12QFontMetricsC2ERKS_
/*void* qm1245860941(const QFontMetrics & arg0)*/{
  const QFontMetrics & arg0 = *(const QFontMetrics *)this_;
  this_ =  new QFontMetrics(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:79
// [8] QFontMetrics & operator=(QFontMetrics &&) 
// (12)qm3825099404 (23)_ZN12QFontMetricsaSEOS_
//static
/*void qm3825099404(QFontMetrics && other)*/ {
  QFontMetrics && other =  static_cast<QFontMetrics &&>(*(QFontMetrics *)this_);
  (void) ((QFontMetrics*)this_)->operator=(other);
  // auto xptr = (QFontMetrics & (QFontMetrics::*)(QFontMetrics&&) ) &QFontMetrics::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:82
// [-2] void swap(QFontMetrics &) 
// (12)qm1710621050 (26)_ZN12QFontMetrics4swapERS_
//static
/*void qm1710621050(QFontMetrics & other)*/ {
  QFontMetrics & other = *(QFontMetrics *)this_;
  (void) ((QFontMetrics*)this_)->swap(other);
   auto xptr = (void (QFontMetrics::*)(QFontMetrics&) ) &QFontMetrics::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:124
// [16] QRect boundingRect(int, int, int, int, int, const QString &, int, int *) const
// (12)qm3120613395 (51)_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi
//static
/*void qm3120613395(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int flags = *(int*)this_; const QString & text = *(const QString *)this_; int tabstops = *(int*)this_; int * tabarray = *(int **)this_;
  (void) ((QFontMetrics*)this_)->boundingRect(x, y, w, h, flags, text, tabstops, tabarray);
   auto xptr = (QRect (QFontMetrics::*)(int, int, int, int, int, QString const&, int, int*) const ) &QFontMetrics::boundingRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:141
// [1] bool operator!=(const QFontMetrics &) const
// (11)qm474482718 (25)_ZNK12QFontMetricsneERKS_
//static
/*void qm474482718(const QFontMetrics & other)*/ {
  const QFontMetrics & other = *(const QFontMetrics *)this_;
  (void) ((QFontMetrics*)this_)->operator!=(other);
  // auto xptr = (bool (QFontMetrics::*)(QFontMetrics const&) const ) &QFontMetrics::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QFontMetricsD2Ev(void *this_)*/ {
  delete (QFontMetrics*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfontmetrics
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
