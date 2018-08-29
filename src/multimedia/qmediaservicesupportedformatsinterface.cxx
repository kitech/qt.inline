//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceSupportedFormatsInterface is pure virtual: true
// QMediaServiceSupportedFormatsInterface has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaServiceSupportedFormatsInterface_t {
  QByteArrayData data[1];
  char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceSupportedFormatsInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceSupportedFormatsInterface_t qt_meta_stringdata_MyQMediaServiceSupportedFormatsInterface = {
   {
  QT_MOC_LITERAL(0, 0, 40), // "MyQMediaServiceSupportedFormatsInterface"
  },
  "MyQMediaServiceSupportedFormatsInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceSupportedFormatsInterface[] = {
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
class Q_DECL_EXPORT MyQMediaServiceSupportedFormatsInterface : public QMediaServiceSupportedFormatsInterface {
public:
  virtual ~MyQMediaServiceSupportedFormatsInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &)
  virtual QMultimedia::SupportEstimate hasSupport(const QString & mimeType, const QStringList & codecs) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hasSupport", &handled, 2, (uint64_t)&mimeType, (uint64_t)&codecs, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMultimedia::SupportEstimate)(int)(irv);
      // Elaborated Enum QMultimedia::SupportEstimate
    } else {
    return (QMultimedia::SupportEstimate){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedMimeTypes()
  virtual QStringList supportedMimeTypes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedMimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:127
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:128
// [8] QStringList supportedMimeTypes()
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
