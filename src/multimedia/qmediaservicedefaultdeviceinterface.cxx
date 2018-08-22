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

// QMediaServiceDefaultDeviceInterface is pure virtual: true
// QMediaServiceDefaultDeviceInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceDefaultDeviceInterface : public QMediaServiceDefaultDeviceInterface {
public:
  virtual ~MyQMediaServiceDefaultDeviceInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QByteArray defaultDevice(const QByteArray &)
  virtual QByteArray defaultDevice(const QByteArray & service) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultDevice", &handled, 1, (uint64_t)&service, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QByteArray){};}
    auto prv = (QByteArray*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QByteArray
    } else {
    return (QByteArray){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:157
// [8] QByteArray defaultDevice(const QByteArray &)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:156
// [-2] void ~QMediaServiceDefaultDeviceInterface()
extern "C" Q_DECL_EXPORT
void C_ZN35QMediaServiceDefaultDeviceInterfaceD2Ev(void *this_) {
  delete (QMediaServiceDefaultDeviceInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:157
// [8] QByteArray defaultDevice(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK35QMediaServiceDefaultDeviceInterface13defaultDeviceERK10QByteArray(void *this_, QByteArray* service) {
  auto rv = ((QMediaServiceDefaultDeviceInterface*)this_)->defaultDevice(*service);
return new QByteArray(rv);
}

//  main block end
