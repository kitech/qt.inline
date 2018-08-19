//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceFeaturesInterface is pure virtual: true
// QMediaServiceFeaturesInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceFeaturesInterface : public QMediaServiceFeaturesInterface {
public:
  virtual ~MyQMediaServiceFeaturesInterface() {}
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:180
// [-2] void ~QMediaServiceFeaturesInterface()
extern "C" Q_DECL_EXPORT
void C_ZN30QMediaServiceFeaturesInterfaceD2Ev(void *this_) {
  delete (QMediaServiceFeaturesInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:181
// [4] QMediaServiceProviderHint::Features supportedFeatures(const QByteArray &)
extern "C" Q_DECL_EXPORT
QMediaServiceProviderHint::Features C_ZNK30QMediaServiceFeaturesInterface17supportedFeaturesERK10QByteArray(void *this_, QByteArray* service) {
  return (QMediaServiceProviderHint::Features)((QMediaServiceFeaturesInterface*)this_)->supportedFeatures(*service);
}

//  main block end
