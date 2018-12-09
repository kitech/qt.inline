//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSpinBox is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:552
// [-2] void QStyleOptionSpinBox()
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionSpinBoxC2Ev() {
  return  new QStyleOptionSpinBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:553
// [-2] void QStyleOptionSpinBox(const QStyleOptionSpinBox &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionSpinBoxC2ERKS_(QStyleOptionSpinBox* other) {
  return  new QStyleOptionSpinBox(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionSpinBoxD2Ev(void *this_) {
  delete (QStyleOptionSpinBox*)(this_);
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
