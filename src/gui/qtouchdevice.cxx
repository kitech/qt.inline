//  header block begin

// /usr/include/qt/QtGui/qtouchdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtouchdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchDevice is pure virtual: false false
// QTouchDevice has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTouchDevice_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTouchDevice_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTouchDevice_t qt_meta_stringdata_MyQTouchDevice = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTouchDevice"
  },
  "MyQTouchDevice"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTouchDevice[] = {
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
class Q_DECL_EXPORT MyQTouchDevice : public QTouchDevice {
public:
  virtual ~MyQTouchDevice() {}
// void QTouchDevice()
MyQTouchDevice() : QTouchDevice() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtouchdevice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:73
// [-2] void QTouchDevice() 
// (12)qm2190349910 (21)_ZN12QTouchDeviceC2Ev
/*void* qm2190349910()*/{
  ;
  this_ =  new QTouchDevice();
  this_ =  new MyQTouchDevice();
}


/*void C_ZN12QTouchDeviceD2Ev(void *this_)*/ {
  delete (QTouchDevice*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtouchdevice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
