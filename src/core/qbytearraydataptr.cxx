//  header block begin

// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayDataPtr is pure virtual: false
// QByteArrayDataPtr has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQByteArrayDataPtr_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQByteArrayDataPtr_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQByteArrayDataPtr_t qt_meta_stringdata_MyQByteArrayDataPtr = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQByteArrayDataPtr"
  },
  "MyQByteArrayDataPtr"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQByteArrayDataPtr[] = {
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
class Q_DECL_EXPORT MyQByteArrayDataPtr : public QByteArrayDataPtr {
public:
  virtual ~MyQByteArrayDataPtr() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN17QByteArrayDataPtrD2Ev(void *this_) {
  delete (QByteArrayDataPtr*)(this_);
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
