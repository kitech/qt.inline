//  header block begin

// /usr/include/qt/QtGui/qfontmetrics.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontmetrics.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontMetricsF is pure virtual: false false
// QFontMetricsF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFontMetricsF_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontMetricsF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontMetricsF_t qt_meta_stringdata_MyQFontMetricsF = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQFontMetricsF"
  },
  "MyQFontMetricsF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontMetricsF[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQFontMetricsF : public QFontMetricsF {
public:
  virtual ~MyQFontMetricsF() {}
// void QFontMetricsF(const QFont &)
MyQFontMetricsF(const QFont & font) : QFontMetricsF(font) {}
// void QFontMetricsF(const QFont &, QPaintDevice *)
MyQFontMetricsF(const QFont & font, QPaintDevice * pd) : QFontMetricsF(font, pd) {}
// void QFontMetricsF(const QFontMetrics &)
MyQFontMetricsF(const QFontMetrics & arg0) : QFontMetricsF(arg0) {}
// void QFontMetricsF(const QFontMetricsF &)
MyQFontMetricsF(const QFontMetricsF & arg0) : QFontMetricsF(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfontmetricsf(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:155
// [-2] void QFontMetricsF(const QFont &) 
// (12)qm1328389211 (29)_ZN13QFontMetricsFC2ERK5QFont
/*void* qm1328389211(const QFont & font)*/{
  const QFont & font = *(const QFont *)this_;
  this_ =  new QFontMetricsF(font);
  this_ =  new MyQFontMetricsF(font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:157
// [-2] void QFontMetricsF(const QFont &, QPaintDevice *) 
// (12)qm1388895818 (44)_ZN13QFontMetricsFC2ERK5QFontP12QPaintDevice
/*void* qm1388895818(const QFont & font, QPaintDevice * pd)*/{
  const QFont & font = *(const QFont *)this_; QPaintDevice * pd = *(QPaintDevice **)this_;
  this_ =  new QFontMetricsF(font, pd);
  this_ =  new MyQFontMetricsF(font, pd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:169
// [-2] void QFontMetricsF(const QFontMetrics &) 
// (12)qm2235435477 (37)_ZN13QFontMetricsFC2ERK12QFontMetrics
/*void* qm2235435477(const QFontMetrics & arg0)*/{
  const QFontMetrics & arg0 = *(const QFontMetrics *)this_;
  this_ =  new QFontMetricsF(arg0);
  this_ =  new MyQFontMetricsF(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:170
// [-2] void QFontMetricsF(const QFontMetricsF &) 
// (12)qm3953285582 (25)_ZN13QFontMetricsFC2ERKS_
/*void* qm3953285582(const QFontMetricsF & arg0)*/{
  const QFontMetricsF & arg0 = *(const QFontMetricsF *)this_;
  this_ =  new QFontMetricsF(arg0);
  this_ =  new MyQFontMetricsF(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:175
// [8] QFontMetricsF & operator=(QFontMetricsF &&) 
// (12)qm3529547565 (24)_ZN13QFontMetricsFaSEOS_
//static
/*void qm3529547565(QFontMetricsF && other)*/ {
  QFontMetricsF && other =  static_cast<QFontMetricsF &&>(*(QFontMetricsF *)this_);
  (void) ((QFontMetricsF*)this_)->operator=(other);
  // auto xptr = (QFontMetricsF & (QFontMetricsF::*)(QFontMetricsF&&) ) &QFontMetricsF::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:178
// [-2] void swap(QFontMetricsF &) 
// (11)qm199825327 (27)_ZN13QFontMetricsF4swapERS_
//static
/*void qm199825327(QFontMetricsF & other)*/ {
  QFontMetricsF & other = *(QFontMetricsF *)this_;
  (void) ((QFontMetricsF*)this_)->swap(other);
   auto xptr = (void (QFontMetricsF::*)(QFontMetricsF&) ) &QFontMetricsF::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:224
// [1] bool operator!=(const QFontMetricsF &) const
// (11)qm578196337 (26)_ZNK13QFontMetricsFneERKS_
//static
/*void qm578196337(const QFontMetricsF & other)*/ {
  const QFontMetricsF & other = *(const QFontMetricsF *)this_;
  (void) ((QFontMetricsF*)this_)->operator!=(other);
  // auto xptr = (bool (QFontMetricsF::*)(QFontMetricsF const&) const ) &QFontMetricsF::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QFontMetricsFD2Ev(void *this_)*/ {
  delete (QFontMetricsF*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfontmetricsf
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
