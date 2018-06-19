//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceSupportedFormatsInterface is pure virtual: true
// QMediaServiceSupportedFormatsInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceSupportedFormatsInterface : public QMediaServiceSupportedFormatsInterface {
public:
  virtual ~MyQMediaServiceSupportedFormatsInterface() {}
};

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:126
// [-2] void ~QMediaServiceSupportedFormatsInterface()
extern "C" Q_DECL_EXPORT
void C_ZN38QMediaServiceSupportedFormatsInterfaceD2Ev(void *this_) {
  delete (QMediaServiceSupportedFormatsInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:127
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
QMultimedia::SupportEstimate C_ZNK38QMediaServiceSupportedFormatsInterface10hasSupportERK7QStringRK11QStringList(void *this_, QString* mimeType, QStringList* codecs) {
  return (QMultimedia::SupportEstimate)((QMediaServiceSupportedFormatsInterface*)this_)->hasSupport(*mimeType, *codecs);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:128
// [8] QStringList supportedMimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK38QMediaServiceSupportedFormatsInterface18supportedMimeTypesEv(void *this_) {
  auto rv = ((QMediaServiceSupportedFormatsInterface*)this_)->supportedMimeTypes();
return new QStringList(rv);
}

//  main block end
