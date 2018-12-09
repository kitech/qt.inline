//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionSlider is pure virtual: false
// QStyleOptionSlider has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionSlider_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionSlider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionSlider_t qt_meta_stringdata_MyQStyleOptionSlider = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStyleOptionSlider"
  },
  "MyQStyleOptionSlider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionSlider[] = {
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
class Q_DECL_EXPORT MyQStyleOptionSlider : public QStyleOptionSlider {
public:
  virtual ~MyQStyleOptionSlider() {}
// void QStyleOptionSlider()
MyQStyleOptionSlider() : QStyleOptionSlider() {}
// void QStyleOptionSlider(const QStyleOptionSlider &)
MyQStyleOptionSlider(const QStyleOptionSlider & other) : QStyleOptionSlider(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:533
// [-2] void QStyleOptionSlider()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionSliderC2Ev() {
  return  new QStyleOptionSlider();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:534
// [-2] void QStyleOptionSlider(const QStyleOptionSlider &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionSliderC2ERKS_(QStyleOptionSlider* other) {
  return  new QStyleOptionSlider(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionSliderD2Ev(void *this_) {
  delete (QStyleOptionSlider*)(this_);
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
