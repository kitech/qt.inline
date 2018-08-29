//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturn is pure virtual: false
// QStyleHintReturn has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleHintReturn_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleHintReturn_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleHintReturn_t qt_meta_stringdata_MyQStyleHintReturn = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQStyleHintReturn"
  },
  "MyQStyleHintReturn"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleHintReturn[] = {
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
class Q_DECL_EXPORT MyQStyleHintReturn : public QStyleHintReturn {
public:
  virtual ~MyQStyleHintReturn() {}
// void QStyleHintReturn(int, int)
MyQStyleHintReturn(int version, int type_) : QStyleHintReturn(version, type_) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:710
// [-2] void QStyleHintReturn(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStyleHintReturnC2Eii(int version, int type_) {
  return  new QStyleHintReturn(version, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:711
// [-2] void ~QStyleHintReturn()
extern "C" Q_DECL_EXPORT
void C_ZN16QStyleHintReturnD2Ev(void *this_) {
  delete (QStyleHintReturn*)(this_);
}
//  main block end
