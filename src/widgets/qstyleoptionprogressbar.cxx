//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionProgressBar is pure virtual: false false
// QStyleOptionProgressBar has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionProgressBar_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionProgressBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionProgressBar_t qt_meta_stringdata_MyQStyleOptionProgressBar = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQStyleOptionProgressBar"
  },
  "MyQStyleOptionProgressBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionProgressBar[] = {
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
class Q_DECL_EXPORT MyQStyleOptionProgressBar : public QStyleOptionProgressBar {
public:
  virtual ~MyQStyleOptionProgressBar() {}
// void QStyleOptionProgressBar()
MyQStyleOptionProgressBar() : QStyleOptionProgressBar() {}
// void QStyleOptionProgressBar(const QStyleOptionProgressBar &)
MyQStyleOptionProgressBar(const QStyleOptionProgressBar & other) : QStyleOptionProgressBar(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionprogressbar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:359
// [-2] void QStyleOptionProgressBar(const QStyleOptionProgressBar &) 
// (12)qm3385247607 (35)_ZN23QStyleOptionProgressBarC2ERKS_
/*void* qm3385247607(const QStyleOptionProgressBar & other)*/{
  const QStyleOptionProgressBar & other = *(const QStyleOptionProgressBar *)this_;
  this_ =  new QStyleOptionProgressBar(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:360
// [104] QStyleOptionProgressBar & operator=(const QStyleOptionProgressBar &) 
// (12)qm1380725565 (35)_ZN23QStyleOptionProgressBaraSERKS_
//static
/*void qm1380725565(const QStyleOptionProgressBar & arg0)*/ {
  const QStyleOptionProgressBar & arg0 = *(const QStyleOptionProgressBar *)this_;
  (void) ((QStyleOptionProgressBar*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionProgressBar & (QStyleOptionProgressBar::*)(QStyleOptionProgressBar const&) ) &QStyleOptionProgressBar::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QStyleOptionProgressBarD2Ev(void *this_)*/ {
  delete (QStyleOptionProgressBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionprogressbar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
