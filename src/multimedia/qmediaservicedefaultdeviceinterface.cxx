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


struct qt_meta_stringdata_MyQMediaServiceDefaultDeviceInterface_t {
  QByteArrayData data[1];
  char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceDefaultDeviceInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceDefaultDeviceInterface_t qt_meta_stringdata_MyQMediaServiceDefaultDeviceInterface = {
   {
  QT_MOC_LITERAL(0, 0, 37), // "MyQMediaServiceDefaultDeviceInterface"
  },
  "MyQMediaServiceDefaultDeviceInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceDefaultDeviceInterface[] = {
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
