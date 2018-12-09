//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBox is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:472
// [-2] void QStyleOptionToolBox()
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionToolBoxC2Ev() {
  return  new QStyleOptionToolBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:473
// [-2] void QStyleOptionToolBox(const QStyleOptionToolBox &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionToolBoxC2ERKS_(QStyleOptionToolBox* other) {
  return  new QStyleOptionToolBox(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionToolBoxD2Ev(void *this_) {
  delete (QStyleOptionToolBox*)(this_);
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
