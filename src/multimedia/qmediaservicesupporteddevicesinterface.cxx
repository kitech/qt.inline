//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceSupportedDevicesInterface is pure virtual: true
// QMediaServiceSupportedDevicesInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceSupportedDevicesInterface : public QMediaServiceSupportedDevicesInterface {
public:
  virtual ~MyQMediaServiceSupportedDevicesInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QByteArray> devices(const QByteArray &)
  virtual QList<QByteArray> devices(const QByteArray & service) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"devices", &handled, 1, (uint64_t)&service, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QByteArray>){};}
    auto prv = (QList<QByteArray>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QByteArray>
    } else {
    return (QList<QByteArray>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceDescription(const QByteArray &, const QByteArray &)
  virtual QString deviceDescription(const QByteArray & service, const QByteArray & device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceDescription", &handled, 2, (uint64_t)&service, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:141
// [8] QList<QByteArray> devices(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:142
// [8] QString deviceDescription(const QByteArray &, const QByteArray &)
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:140
// [-2] void ~QMediaServiceSupportedDevicesInterface()
extern "C" Q_DECL_EXPORT
void C_ZN38QMediaServiceSupportedDevicesInterfaceD2Ev(void *this_) {
  delete (QMediaServiceSupportedDevicesInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:141
// [8] QList<QByteArray> devices(const QByteArray &)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK38QMediaServiceSupportedDevicesInterface7devicesERK10QByteArray(void *this_, QByteArray* service) {
  auto rv = ((QMediaServiceSupportedDevicesInterface*)this_)->devices(*service);
return new QList<QByteArray>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:142
// [8] QString deviceDescription(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN38QMediaServiceSupportedDevicesInterface17deviceDescriptionERK10QByteArrayS2_(void *this_, QByteArray* service, QByteArray* device) {
  auto rv = ((QMediaServiceSupportedDevicesInterface*)this_)->deviceDescription(*service, *device);
return new QString(rv);
}

//  main block end
