//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolButton is pure virtual: false
// QStyleOptionToolButton has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionToolButton_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionToolButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionToolButton_t qt_meta_stringdata_MyQStyleOptionToolButton = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQStyleOptionToolButton"
  },
  "MyQStyleOptionToolButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionToolButton[] = {
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
class Q_DECL_EXPORT MyQStyleOptionToolButton : public QStyleOptionToolButton {
public:
  virtual ~MyQStyleOptionToolButton() {}
// void QStyleOptionToolButton()
MyQStyleOptionToolButton() : QStyleOptionToolButton() {}
// void QStyleOptionToolButton(const QStyleOptionToolButton &)
MyQStyleOptionToolButton(const QStyleOptionToolButton & other) : QStyleOptionToolButton(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:579
// [-2] void QStyleOptionToolButton()
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionToolButtonC2Ev() {
  return  new QStyleOptionToolButton();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:580
// [-2] void QStyleOptionToolButton(const QStyleOptionToolButton &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionToolButtonC2ERKS_(QStyleOptionToolButton* other) {
  return  new QStyleOptionToolButton(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionToolButtonD2Ev(void *this_) {
  delete (QStyleOptionToolButton*)(this_);
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
