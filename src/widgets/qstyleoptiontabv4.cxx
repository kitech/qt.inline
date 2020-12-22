//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabV4 is pure virtual: false false
// QStyleOptionTabV4 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionTabV4_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTabV4_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTabV4_t qt_meta_stringdata_MyQStyleOptionTabV4 = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQStyleOptionTabV4"
  },
  "MyQStyleOptionTabV4"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTabV4[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTabV4 : public QStyleOptionTabV4 {
public:
  virtual ~MyQStyleOptionTabV4() {}
// void QStyleOptionTabV4()
MyQStyleOptionTabV4() : QStyleOptionTabV4() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptiontabv4(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:303
// [-2] void QStyleOptionTabV4() 
// (12)qm1479456410 (26)_ZN17QStyleOptionTabV4C2Ev
/*void* qm1479456410()*/{
  ;
  this_ =  new QStyleOptionTabV4();
  this_ =  new MyQStyleOptionTabV4();
}


/*void C_ZN17QStyleOptionTabV4D2Ev(void *this_)*/ {
  delete (QStyleOptionTabV4*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptiontabv4
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
