//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSizeGrip is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:653
// [-2] void QStyleOptionSizeGrip()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionSizeGripC2Ev() {
  return  new QStyleOptionSizeGrip();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:654
// [-2] void QStyleOptionSizeGrip(const QStyleOptionSizeGrip &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionSizeGripC2ERKS_(QStyleOptionSizeGrip* other) {
  return  new QStyleOptionSizeGrip(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionSizeGripD2Ev(void *this_) {
  delete (QStyleOptionSizeGrip*)(this_);
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
