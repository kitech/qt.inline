//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionButton is pure virtual: false
// QStyleOptionButton has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionButton_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionButton_t qt_meta_stringdata_MyQStyleOptionButton = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStyleOptionButton"
  },
  "MyQStyleOptionButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionButton[] = {
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
class Q_DECL_EXPORT MyQStyleOptionButton : public QStyleOptionButton {
public:
  virtual ~MyQStyleOptionButton() {}
// void QStyleOptionButton()
MyQStyleOptionButton() : QStyleOptionButton() {}
// void QStyleOptionButton(const QStyleOptionButton &)
MyQStyleOptionButton(const QStyleOptionButton & other) : QStyleOptionButton(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:248
// [-2] void QStyleOptionButton()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionButtonC2Ev() {
  return  new QStyleOptionButton();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:249
// [-2] void QStyleOptionButton(const QStyleOptionButton &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionButtonC2ERKS_(QStyleOptionButton* other) {
  return  new QStyleOptionButton(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionButtonD2Ev(void *this_) {
  delete (QStyleOptionButton*)(this_);
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
