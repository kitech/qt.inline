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
