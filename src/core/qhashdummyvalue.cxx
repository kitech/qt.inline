//  header block begin

// /usr/include/qt/QtCore/qhash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashDummyValue is pure virtual: false
// QHashDummyValue has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHashDummyValue_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHashDummyValue_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHashDummyValue_t qt_meta_stringdata_MyQHashDummyValue = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQHashDummyValue"
  },
  "MyQHashDummyValue"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHashDummyValue[] = {
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
class Q_DECL_EXPORT MyQHashDummyValue : public QHashDummyValue {
public:
  virtual ~MyQHashDummyValue() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN15QHashDummyValueD2Ev(void *this_) {
  delete (QHashDummyValue*)(this_);
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
