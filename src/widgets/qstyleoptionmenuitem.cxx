//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionMenuItem is pure virtual: false false
// QStyleOptionMenuItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionMenuItem_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionMenuItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionMenuItem_t qt_meta_stringdata_MyQStyleOptionMenuItem = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionMenuItem"
  },
  "MyQStyleOptionMenuItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionMenuItem[] = {
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
class Q_DECL_EXPORT MyQStyleOptionMenuItem : public QStyleOptionMenuItem {
public:
  virtual ~MyQStyleOptionMenuItem() {}
// void QStyleOptionMenuItem()
MyQStyleOptionMenuItem() : QStyleOptionMenuItem() {}
// void QStyleOptionMenuItem(const QStyleOptionMenuItem &)
MyQStyleOptionMenuItem(const QStyleOptionMenuItem & other) : QStyleOptionMenuItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionmenuitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:390
// [-2] void QStyleOptionMenuItem(const QStyleOptionMenuItem &) 
// (11)qm404238009 (32)_ZN20QStyleOptionMenuItemC2ERKS_
/*void* qm404238009(const QStyleOptionMenuItem & other)*/{
  const QStyleOptionMenuItem & other = *(const QStyleOptionMenuItem *)this_;
  this_ =  new QStyleOptionMenuItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:391
// [136] QStyleOptionMenuItem & operator=(const QStyleOptionMenuItem &) 
// (12)qm2207439603 (32)_ZN20QStyleOptionMenuItemaSERKS_
//static
/*void qm2207439603(const QStyleOptionMenuItem & arg0)*/ {
  const QStyleOptionMenuItem & arg0 = *(const QStyleOptionMenuItem *)this_;
  (void) ((QStyleOptionMenuItem*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionMenuItem & (QStyleOptionMenuItem::*)(QStyleOptionMenuItem const&) ) &QStyleOptionMenuItem::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QStyleOptionMenuItemD2Ev(void *this_)*/ {
  delete (QStyleOptionMenuItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionmenuitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
