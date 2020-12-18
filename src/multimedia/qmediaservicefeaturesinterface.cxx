//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceFeaturesInterface is pure virtual: true true
// QMediaServiceFeaturesInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceFeaturesInterface_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceFeaturesInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceFeaturesInterface_t qt_meta_stringdata_MyQMediaServiceFeaturesInterface = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQMediaServiceFeaturesInterface"
  },
  "MyQMediaServiceFeaturesInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceFeaturesInterface[] = {
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
class Q_DECL_EXPORT MyQMediaServiceFeaturesInterface : public QMediaServiceFeaturesInterface {
public:
  virtual ~MyQMediaServiceFeaturesInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaServiceProviderHint::Features supportedFeatures(const QByteArray &)
  virtual QMediaServiceProviderHint::Features supportedFeatures(const QByteArray & service) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedFeatures", &handled, 1, (uint64_t)&service, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaServiceProviderHint::Features)(int)(irv);
      // Elaborated Record QFlags<QMediaServiceProviderHint::Feature>
    } else {
    return (QMediaServiceProviderHint::Features){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaservicefeaturesinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:180
// [-2] void ~QMediaServiceFeaturesInterface() 
// (12)qm4016655890 (39)_ZN30QMediaServiceFeaturesInterfaceD2Ev
/*void qm4016655890 (void *this_)*/ {
  delete (QMediaServiceFeaturesInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaservicefeaturesinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
