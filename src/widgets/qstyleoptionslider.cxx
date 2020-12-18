//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSlider is pure virtual: false false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionSlider_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionSlider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionSlider_t qt_meta_stringdata_MyQStyleOptionSlider = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStyleOptionSlider"
  },
  "MyQStyleOptionSlider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionSlider[] = {
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
class Q_DECL_EXPORT MyQStyleOptionSlider : public QStyleOptionSlider {
public:
  virtual ~MyQStyleOptionSlider() {}
// void QStyleOptionSlider()
MyQStyleOptionSlider() : QStyleOptionSlider() {}
// void QStyleOptionSlider(const QStyleOptionSlider &)
MyQStyleOptionSlider(const QStyleOptionSlider & other) : QStyleOptionSlider(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionslider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:557
// [-2] void QStyleOptionSlider(const QStyleOptionSlider &) 
// (12)qm2628963685 (30)_ZN18QStyleOptionSliderC2ERKS_
/*void* qm2628963685(const QStyleOptionSlider & other)*/{
  const QStyleOptionSlider & other = *(const QStyleOptionSlider *)this_;
  this_ =  new QStyleOptionSlider(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:558
// [128] QStyleOptionSlider & operator=(const QStyleOptionSlider &) 
// (11)qm121125167 (30)_ZN18QStyleOptionSlideraSERKS_
//static
/*void qm121125167(const QStyleOptionSlider & arg0)*/ {
  const QStyleOptionSlider & arg0 = *(const QStyleOptionSlider *)this_;
  (void) ((QStyleOptionSlider*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionSlider & (QStyleOptionSlider::*)(QStyleOptionSlider const&) ) &QStyleOptionSlider::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QStyleOptionSliderD2Ev(void *this_)*/ {
  delete (QStyleOptionSlider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionslider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
