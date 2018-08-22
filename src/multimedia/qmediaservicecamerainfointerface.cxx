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
