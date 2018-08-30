//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComboBox is pure virtual: false
// QStyleOptionComboBox has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionComboBox_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionComboBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionComboBox_t qt_meta_stringdata_MyQStyleOptionComboBox = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleOptionComboBox"
  },
  "MyQStyleOptionComboBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionComboBox[] = {
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
class Q_DECL_EXPORT MyQStyleOptionComboBox : public QStyleOptionComboBox {
public:
  virtual ~MyQStyleOptionComboBox() {}
// void QStyleOptionComboBox()
MyQStyleOptionComboBox() : QStyleOptionComboBox() {}
// void QStyleOptionComboBox(const QStyleOptionComboBox &)
MyQStyleOptionComboBox(const QStyleOptionComboBox & other) : QStyleOptionComboBox(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:601
// [-2] void QStyleOptionComboBox()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionComboBoxC2Ev() {
  return  new QStyleOptionComboBox();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:602
// [-2] void QStyleOptionComboBox(const QStyleOptionComboBox &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionComboBoxC2ERKS_(QStyleOptionComboBox* other) {
  return  new QStyleOptionComboBox(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionComboBoxD2Ev(void *this_) {
  delete (QStyleOptionComboBox*)(this_);
}
//  main block end
