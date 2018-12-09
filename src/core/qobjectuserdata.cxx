//  header block begin

// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QObjectUserData is pure virtual: false
// QObjectUserData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQObjectUserData_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQObjectUserData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQObjectUserData_t qt_meta_stringdata_MyQObjectUserData = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQObjectUserData"
  },
  "MyQObjectUserData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQObjectUserData[] = {
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
class Q_DECL_EXPORT MyQObjectUserData : public QObjectUserData {
public:
  virtual ~MyQObjectUserData() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:479
// [-2] void ~QObjectUserData()
extern "C" Q_DECL_EXPORT
void C_ZN15QObjectUserDataD2Ev(void *this_) {
  delete (QObjectUserData*)(this_);
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
