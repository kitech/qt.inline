//  header block begin
// since 0x050300
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceCameraInfoInterface is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:167
// [4] QCamera::Position cameraPosition(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:168
// [4] int cameraOrientation(const QByteArray &)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:166
// [-2] void ~QMediaServiceCameraInfoInterface()
extern "C" Q_DECL_EXPORT
void C_ZN32QMediaServiceCameraInfoInterfaceD2Ev(void *this_) {
  delete (QMediaServiceCameraInfoInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:167
// [4] QCamera::Position cameraPosition(const QByteArray &)
extern "C" Q_DECL_EXPORT
QCamera::Position C_ZNK32QMediaServiceCameraInfoInterface14cameraPositionERK10QByteArray(void *this_, QByteArray* device) {
  return (QCamera::Position)((QMediaServiceCameraInfoInterface*)this_)->cameraPosition(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:168
// [4] int cameraOrientation(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZNK32QMediaServiceCameraInfoInterface17cameraOrientationERK10QByteArray(void *this_, QByteArray* device) {
  return (int)((QMediaServiceCameraInfoInterface*)this_)->cameraOrientation(*device);
}

//  main block end
