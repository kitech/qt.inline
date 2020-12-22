//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBox is pure virtual: false false
// QStyleOptionToolBox has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionToolBox_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionToolBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionToolBox_t qt_meta_stringdata_MyQStyleOptionToolBox = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQStyleOptionToolBox"
  },
  "MyQStyleOptionToolBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionToolBox[] = {
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
class Q_DECL_EXPORT MyQStyleOptionToolBox : public QStyleOptionToolBox {
public:
  virtual ~MyQStyleOptionToolBox() {}
// void QStyleOptionToolBox()
MyQStyleOptionToolBox() : QStyleOptionToolBox() {}
// void QStyleOptionToolBox(const QStyleOptionToolBox &)
MyQStyleOptionToolBox(const QStyleOptionToolBox & other) : QStyleOptionToolBox(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontoolbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:492
// [-2] void QStyleOptionToolBox() 
// (12)qm4207656314 (28)_ZN19QStyleOptionToolBoxC2Ev
/*void* qm4207656314()*/{
  ;
  this_ =  new QStyleOptionToolBox();
  this_ =  new MyQStyleOptionToolBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:493
// [-2] void QStyleOptionToolBox(const QStyleOptionToolBox &) 
// (12)qm3257394969 (31)_ZN19QStyleOptionToolBoxC2ERKS_
/*void* qm3257394969(const QStyleOptionToolBox & other)*/{
  const QStyleOptionToolBox & other = *(const QStyleOptionToolBox *)this_;
  this_ =  new QStyleOptionToolBox(other);
  this_ =  new MyQStyleOptionToolBox(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:494
// [88] QStyleOptionToolBox & operator=(const QStyleOptionToolBox &) 
// (12)qm1504514899 (31)_ZN19QStyleOptionToolBoxaSERKS_
//static
/*void qm1504514899(const QStyleOptionToolBox & arg0)*/ {
  const QStyleOptionToolBox & arg0 = *(const QStyleOptionToolBox *)this_;
  (void) ((QStyleOptionToolBox*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionToolBox & (QStyleOptionToolBox::*)(QStyleOptionToolBox const&) ) &QStyleOptionToolBox::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QStyleOptionToolBoxD2Ev(void *this_)*/ {
  delete (QStyleOptionToolBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontoolbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
