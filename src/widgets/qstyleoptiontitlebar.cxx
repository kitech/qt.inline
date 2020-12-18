//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTitleBar is pure virtual: false false
// QStyleOptionTitleBar has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionTitleBar_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTitleBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTitleBar_t qt_meta_stringdata_MyQStyleOptionTitleBar = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionTitleBar"
  },
  "MyQStyleOptionTitleBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTitleBar[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTitleBar : public QStyleOptionTitleBar {
public:
  virtual ~MyQStyleOptionTitleBar() {}
// void QStyleOptionTitleBar()
MyQStyleOptionTitleBar() : QStyleOptionTitleBar() {}
// void QStyleOptionTitleBar(const QStyleOptionTitleBar &)
MyQStyleOptionTitleBar(const QStyleOptionTitleBar & other) : QStyleOptionTitleBar(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontitlebar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:647
// [-2] void QStyleOptionTitleBar(const QStyleOptionTitleBar &) 
// (11)qm235453889 (32)_ZN20QStyleOptionTitleBarC2ERKS_
/*void* qm235453889(const QStyleOptionTitleBar & other)*/{
  const QStyleOptionTitleBar & other = *(const QStyleOptionTitleBar *)this_;
  this_ =  new QStyleOptionTitleBar(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:648
// [96] QStyleOptionTitleBar & operator=(const QStyleOptionTitleBar &) 
// (12)qm2508343691 (32)_ZN20QStyleOptionTitleBaraSERKS_
//static
/*void qm2508343691(const QStyleOptionTitleBar & arg0)*/ {
  const QStyleOptionTitleBar & arg0 = *(const QStyleOptionTitleBar *)this_;
  (void) ((QStyleOptionTitleBar*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionTitleBar & (QStyleOptionTitleBar::*)(QStyleOptionTitleBar const&) ) &QStyleOptionTitleBar::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionTitleBarD2Ev(void *this_)*/ {
  delete (QStyleOptionTitleBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontitlebar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
