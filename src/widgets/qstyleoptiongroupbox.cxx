//  header block begin
// since 0x040100
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGroupBox is pure virtual: false
// QStyleOptionGroupBox has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionGroupBox_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionGroupBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionGroupBox_t qt_meta_stringdata_MyQStyleOptionGroupBox = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionGroupBox"
  },
  "MyQStyleOptionGroupBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionGroupBox[] = {
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
class Q_DECL_EXPORT MyQStyleOptionGroupBox : public QStyleOptionGroupBox {
public:
  virtual ~MyQStyleOptionGroupBox() {}
// void QStyleOptionGroupBox()
MyQStyleOptionGroupBox() : QStyleOptionGroupBox() {}
// void QStyleOptionGroupBox(const QStyleOptionGroupBox &)
MyQStyleOptionGroupBox(const QStyleOptionGroupBox & other) : QStyleOptionGroupBox(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:639
// [-2] void QStyleOptionGroupBox()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionGroupBoxC2Ev() {
  return  new QStyleOptionGroupBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:640
// [-2] void QStyleOptionGroupBox(const QStyleOptionGroupBox &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionGroupBoxC2ERKS_(QStyleOptionGroupBox* other) {
  return  new QStyleOptionGroupBox(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionGroupBoxD2Ev(void *this_) {
  delete (QStyleOptionGroupBox*)(this_);
}
//  main block end
