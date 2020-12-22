//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFocusRect is pure virtual: false false
// QStyleOptionFocusRect has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionFocusRect_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionFocusRect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionFocusRect_t qt_meta_stringdata_MyQStyleOptionFocusRect = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQStyleOptionFocusRect"
  },
  "MyQStyleOptionFocusRect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionFocusRect[] = {
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
class Q_DECL_EXPORT MyQStyleOptionFocusRect : public QStyleOptionFocusRect {
public:
  virtual ~MyQStyleOptionFocusRect() {}
// void QStyleOptionFocusRect()
MyQStyleOptionFocusRect() : QStyleOptionFocusRect() {}
// void QStyleOptionFocusRect(const QStyleOptionFocusRect &)
MyQStyleOptionFocusRect(const QStyleOptionFocusRect & other) : QStyleOptionFocusRect(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionfocusrect(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:119
// [-2] void QStyleOptionFocusRect() 
// (12)qm1436176151 (30)_ZN21QStyleOptionFocusRectC2Ev
/*void* qm1436176151()*/{
  ;
  this_ =  new QStyleOptionFocusRect();
  this_ =  new MyQStyleOptionFocusRect();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:120
// [-2] void QStyleOptionFocusRect(const QStyleOptionFocusRect &) 
// (12)qm3100532120 (33)_ZN21QStyleOptionFocusRectC2ERKS_
/*void* qm3100532120(const QStyleOptionFocusRect & other)*/{
  const QStyleOptionFocusRect & other = *(const QStyleOptionFocusRect *)this_;
  this_ =  new QStyleOptionFocusRect(other);
  this_ =  new MyQStyleOptionFocusRect(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:121
// [80] QStyleOptionFocusRect & operator=(const QStyleOptionFocusRect &) 
// (11)qm591702482 (33)_ZN21QStyleOptionFocusRectaSERKS_
//static
/*void qm591702482(const QStyleOptionFocusRect & arg0)*/ {
  const QStyleOptionFocusRect & arg0 = *(const QStyleOptionFocusRect *)this_;
  (void) ((QStyleOptionFocusRect*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionFocusRect & (QStyleOptionFocusRect::*)(QStyleOptionFocusRect const&) ) &QStyleOptionFocusRect::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QStyleOptionFocusRectD2Ev(void *this_)*/ {
  delete (QStyleOptionFocusRect*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionfocusrect
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
