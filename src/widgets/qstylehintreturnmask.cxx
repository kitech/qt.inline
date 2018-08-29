//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturnMask is pure virtual: false
// QStyleHintReturnMask has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleHintReturnMask_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleHintReturnMask_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleHintReturnMask_t qt_meta_stringdata_MyQStyleHintReturnMask = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQStyleHintReturnMask"
  },
  "MyQStyleHintReturnMask"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleHintReturnMask[] = {
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
class Q_DECL_EXPORT MyQStyleHintReturnMask : public QStyleHintReturnMask {
public:
  virtual ~MyQStyleHintReturnMask() {}
// void QStyleHintReturnMask()
MyQStyleHintReturnMask() : QStyleHintReturnMask() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:722
// [-2] void QStyleHintReturnMask()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleHintReturnMaskC2Ev() {
  return  new QStyleHintReturnMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:723
// [-2] void ~QStyleHintReturnMask()
extern "C" Q_DECL_EXPORT
void C_ZN20QStyleHintReturnMaskD2Ev(void *this_) {
  delete (QStyleHintReturnMask*)(this_);
}
//  main block end
