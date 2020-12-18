//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceSupportedDevicesInterface is pure virtual: true true
// QMediaServiceSupportedDevicesInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceSupportedDevicesInterface_t {
  QByteArrayData data[1];
  char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceSupportedDevicesInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceSupportedDevicesInterface_t qt_meta_stringdata_MyQMediaServiceSupportedDevicesInterface = {
   {
  QT_MOC_LITERAL(0, 0, 40), // "MyQMediaServiceSupportedDevicesInterface"
  },
  "MyQMediaServiceSupportedDevicesInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceSupportedDevicesInterface[] = {
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaservicesupporteddevicesinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:140
// [-2] void ~QMediaServiceSupportedDevicesInterface() 
// (12)qm3685067229 (47)_ZN38QMediaServiceSupportedDevicesInterfaceD2Ev
/*void qm3685067229 (void *this_)*/ {
  delete (QMediaServiceSupportedDevicesInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaservicesupporteddevicesinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
