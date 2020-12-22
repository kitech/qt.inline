//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSizeGrip is pure virtual: false false
// QStyleOptionSizeGrip has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionSizeGrip_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionSizeGrip_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionSizeGrip_t qt_meta_stringdata_MyQStyleOptionSizeGrip = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionSizeGrip"
  },
  "MyQStyleOptionSizeGrip"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionSizeGrip[] = {
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
class Q_DECL_EXPORT MyQStyleOptionSizeGrip : public QStyleOptionSizeGrip {
public:
  virtual ~MyQStyleOptionSizeGrip() {}
// void QStyleOptionSizeGrip()
MyQStyleOptionSizeGrip() : QStyleOptionSizeGrip() {}
// void QStyleOptionSizeGrip(const QStyleOptionSizeGrip &)
MyQStyleOptionSizeGrip(const QStyleOptionSizeGrip & other) : QStyleOptionSizeGrip(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionsizegrip(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:682
// [-2] void QStyleOptionSizeGrip() 
// (12)qm1193567615 (29)_ZN20QStyleOptionSizeGripC2Ev
/*void* qm1193567615()*/{
  ;
  this_ =  new QStyleOptionSizeGrip();
  this_ =  new MyQStyleOptionSizeGrip();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:683
// [-2] void QStyleOptionSizeGrip(const QStyleOptionSizeGrip &) 
// (12)qm3182990769 (32)_ZN20QStyleOptionSizeGripC2ERKS_
/*void* qm3182990769(const QStyleOptionSizeGrip & other)*/{
  const QStyleOptionSizeGrip & other = *(const QStyleOptionSizeGrip *)this_;
  this_ =  new QStyleOptionSizeGrip(other);
  this_ =  new MyQStyleOptionSizeGrip(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:684
// [80] QStyleOptionSizeGrip & operator=(const QStyleOptionSizeGrip &) 
// (11)qm640836091 (32)_ZN20QStyleOptionSizeGripaSERKS_
//static
/*void qm640836091(const QStyleOptionSizeGrip & arg0)*/ {
  const QStyleOptionSizeGrip & arg0 = *(const QStyleOptionSizeGrip *)this_;
  (void) ((QStyleOptionSizeGrip*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionSizeGrip & (QStyleOptionSizeGrip::*)(QStyleOptionSizeGrip const&) ) &QStyleOptionSizeGrip::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionSizeGripD2Ev(void *this_)*/ {
  delete (QStyleOptionSizeGrip*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionsizegrip
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
