//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
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
};

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
