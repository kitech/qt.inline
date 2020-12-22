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


struct qt_meta_stringdata_MyQPageSize_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPageSize_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPageSize_t qt_meta_stringdata_MyQPageSize = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQPageSize"
  },
  "MyQPageSize"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPageSize[] = {
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
class Q_DECL_EXPORT MyQPageSize : public QPageSize {
public:
  virtual ~MyQPageSize() {}
// void QPageSize()
MyQPageSize() : QPageSize() {}
// void QPageSize(QPageSize::PageSizeId)
MyQPageSize(QPageSize::PageSizeId pageSizeId) : QPageSize(pageSizeId) {}
// void QPageSize(const QSize &, const QString &, QPageSize::SizeMatchPolicy)
MyQPageSize(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(pointSize, name, matchPolicy) {}
// void QPageSize(const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy)
MyQPageSize(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy) : QPageSize(size, units, name, matchPolicy) {}
// void QPageSize(const QPageSize &)
MyQPageSize(const QPageSize & other) : QPageSize(other) {}
};

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
  this_ =  new MyQPageSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:231
// [-2] void QPageSize(QPageSize::PageSizeId) 
// (11)qm939258003 (32)_ZN9QPageSizeC2ENS_10PageSizeIdE
/*void* qm939258003(QPageSize::PageSizeId pageSizeId)*/{
  QPageSize::PageSizeId pageSizeId = *(QPageSize::PageSizeId*)this_;
  this_ =  new QPageSize(pageSizeId);
  this_ =  new MyQPageSize(pageSizeId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:232
// [-2] void QPageSize(const QSize &, const QString &, QPageSize::SizeMatchPolicy) 
// (11)qm150233864 (55)_ZN9QPageSizeC2ERK5QSizeRK7QStringNS_15SizeMatchPolicyE
/*void* qm150233864(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)*/{
  const QSize & pointSize = *(const QSize *)this_; const QString & name = *(const QString *)this_; QPageSize::SizeMatchPolicy matchPolicy = *(QPageSize::SizeMatchPolicy*)this_;
  this_ =  new QPageSize(pointSize, name, matchPolicy);
  this_ =  new MyQPageSize(pointSize, name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:235
// [-2] void QPageSize(const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy) 
// (12)qm2269842282 (65)_ZN9QPageSizeC2ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE
/*void* qm2269842282(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy)*/{
  const QSizeF & size = *(const QSizeF *)this_; QPageSize::Unit units = *(QPageSize::Unit*)this_; const QString & name = *(const QString *)this_; QPageSize::SizeMatchPolicy matchPolicy = *(QPageSize::SizeMatchPolicy*)this_;
  this_ =  new QPageSize(size, units, name, matchPolicy);
  this_ =  new MyQPageSize(size, units, name, matchPolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:238
// [-2] void QPageSize(const QPageSize &) 
// (12)qm2921856886 (20)_ZN9QPageSizeC2ERKS_
/*void* qm2921856886(const QPageSize & other)*/{
  const QPageSize & other = *(const QPageSize *)this_;
  this_ =  new QPageSize(other);
  this_ =  new MyQPageSize(other);
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
