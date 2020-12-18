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


struct qt_meta_stringdata_MyQPageLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPageLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPageLayout_t qt_meta_stringdata_MyQPageLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQPageLayout"
  },
  "MyQPageLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPageLayout[] = {
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
class Q_DECL_EXPORT MyQPageLayout : public QPageLayout {
public:
  virtual ~MyQPageLayout() {}
// void QPageLayout()
MyQPageLayout() : QPageLayout() {}
// void QPageLayout(const QPageSize &, QPageLayout::Orientation, const QMarginsF &, QPageLayout::Unit, const QMarginsF &)
MyQPageLayout(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins) : QPageLayout(pageSize, orientation, margins, units, minMargins) {}
// void QPageLayout(const QPageLayout &)
MyQPageLayout(const QPageLayout & other) : QPageLayout(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpagelayout(void* this_) {
  uint64_t fnptrsumval = 0;

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
