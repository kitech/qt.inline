//  header block begin

// since 0x040300
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturnVariant is pure virtual: false
// QStyleHintReturnVariant has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleHintReturnVariant_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleHintReturnVariant_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleHintReturnVariant_t qt_meta_stringdata_MyQStyleHintReturnVariant = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQStyleHintReturnVariant"
  },
  "MyQStyleHintReturnVariant"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleHintReturnVariant[] = {
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
class Q_DECL_EXPORT MyQStyleHintReturnVariant : public QStyleHintReturnVariant {
public:
  virtual ~MyQStyleHintReturnVariant() {}
// void QStyleHintReturnVariant()
MyQStyleHintReturnVariant() : QStyleHintReturnVariant() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:733
// [-2] void QStyleHintReturnVariant()
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleHintReturnVariantC2Ev() {
  return  new QStyleHintReturnVariant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:734
// [-2] void ~QStyleHintReturnVariant()
extern "C" Q_DECL_EXPORT
void C_ZN23QStyleHintReturnVariantD2Ev(void *this_) {
  delete (QStyleHintReturnVariant*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
