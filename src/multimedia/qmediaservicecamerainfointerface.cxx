//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceCameraInfoInterface is pure virtual: true true
// QMediaServiceCameraInfoInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceCameraInfoInterface_t {
  QByteArrayData data[1];
  char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceCameraInfoInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceCameraInfoInterface_t qt_meta_stringdata_MyQMediaServiceCameraInfoInterface = {
   {
  QT_MOC_LITERAL(0, 0, 34), // "MyQMediaServiceCameraInfoInterface"
  },
  "MyQMediaServiceCameraInfoInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceCameraInfoInterface[] = {
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
class Q_DECL_EXPORT MyQMediaServiceCameraInfoInterface : public QMediaServiceCameraInfoInterface {
public:
  virtual ~MyQMediaServiceCameraInfoInterface() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QCamera::Position cameraPosition(const QByteArray &)
  virtual QCamera::Position cameraPosition(const QByteArray & device) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cameraPosition", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCamera::Position)(int)(irv);
      // Elaborated Enum QCamera::Position
    } else {
    return (QCamera::Position){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int cameraOrientation(const QByteArray &)
  virtual int cameraOrientation(const QByteArray & device) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cameraOrientation", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaservicecamerainfointerface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:166
// [-2] void ~QMediaServiceCameraInfoInterface() 
// (12)qm3960060885 (41)_ZN32QMediaServiceCameraInfoInterfaceD2Ev
/*void qm3960060885 (void *this_)*/ {
  delete (QMediaServiceCameraInfoInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaservicecamerainfointerface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
