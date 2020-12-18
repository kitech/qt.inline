//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSpinBox is pure virtual: false false
// QStyleOptionSpinBox has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionSpinBox_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionSpinBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionSpinBox_t qt_meta_stringdata_MyQStyleOptionSpinBox = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQStyleOptionSpinBox"
  },
  "MyQStyleOptionSpinBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionSpinBox[] = {
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
class Q_DECL_EXPORT MyQStyleOptionSpinBox : public QStyleOptionSpinBox {
public:
  virtual ~MyQStyleOptionSpinBox() {}
// void QStyleOptionSpinBox()
MyQStyleOptionSpinBox() : QStyleOptionSpinBox() {}
// void QStyleOptionSpinBox(const QStyleOptionSpinBox &)
MyQStyleOptionSpinBox(const QStyleOptionSpinBox & other) : QStyleOptionSpinBox(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionspinbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:577
// [-2] void QStyleOptionSpinBox(const QStyleOptionSpinBox &) 
// (12)qm2211193367 (31)_ZN19QStyleOptionSpinBoxC2ERKS_
/*void* qm2211193367(const QStyleOptionSpinBox & other)*/{
  const QStyleOptionSpinBox & other = *(const QStyleOptionSpinBox *)this_;
  this_ =  new QStyleOptionSpinBox(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:578
// [88] QStyleOptionSpinBox & operator=(const QStyleOptionSpinBox &) 
// (11)qm407295581 (31)_ZN19QStyleOptionSpinBoxaSERKS_
//static
/*void qm407295581(const QStyleOptionSpinBox & arg0)*/ {
  const QStyleOptionSpinBox & arg0 = *(const QStyleOptionSpinBox *)this_;
  (void) ((QStyleOptionSpinBox*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionSpinBox & (QStyleOptionSpinBox::*)(QStyleOptionSpinBox const&) ) &QStyleOptionSpinBox::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionSpinBoxD2Ev(void *this_)*/ {
  delete (QStyleOptionSpinBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionspinbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
