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
