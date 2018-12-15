//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFocusRect is pure virtual: false
// QStyleOptionFocusRect has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionFocusRect_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionFocusRect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionFocusRect_t qt_meta_stringdata_MyQStyleOptionFocusRect = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQStyleOptionFocusRect"
  },
  "MyQStyleOptionFocusRect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionFocusRect[] = {
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
class Q_DECL_EXPORT MyQStyleOptionFocusRect : public QStyleOptionFocusRect {
public:
  virtual ~MyQStyleOptionFocusRect() {}
// void QStyleOptionFocusRect()
MyQStyleOptionFocusRect() : QStyleOptionFocusRect() {}
// void QStyleOptionFocusRect(const QStyleOptionFocusRect &)
MyQStyleOptionFocusRect(const QStyleOptionFocusRect & other) : QStyleOptionFocusRect(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:108
// [-2] void QStyleOptionFocusRect()
extern "C" Q_DECL_EXPORT
void* C_ZN21QStyleOptionFocusRectC2Ev() {
  return  new QStyleOptionFocusRect();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:109
// [-2] void QStyleOptionFocusRect(const QStyleOptionFocusRect &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QStyleOptionFocusRectC2ERKS_(QStyleOptionFocusRect* other) {
  return  new QStyleOptionFocusRect(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN21QStyleOptionFocusRectD2Ev(void *this_) {
  delete (QStyleOptionFocusRect*)(this_);
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
