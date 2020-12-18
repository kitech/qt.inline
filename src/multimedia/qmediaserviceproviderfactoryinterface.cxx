//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderFactoryInterface is pure virtual: true true
// QMediaServiceProviderFactoryInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceProviderFactoryInterface_t {
  QByteArrayData data[1];
  char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceProviderFactoryInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceProviderFactoryInterface_t qt_meta_stringdata_MyQMediaServiceProviderFactoryInterface = {
   {
  QT_MOC_LITERAL(0, 0, 39), // "MyQMediaServiceProviderFactoryInterface"
  },
  "MyQMediaServiceProviderFactoryInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceProviderFactoryInterface[] = {
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
class Q_DECL_EXPORT MyQMediaServiceProviderFactoryInterface : public QMediaServiceProviderFactoryInterface {
public:
  virtual ~MyQMediaServiceProviderFactoryInterface() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QMediaService * create(const QString &)
  virtual QMediaService * create(const QString & key)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 1, (uint64_t)&key, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaService *)(irv);
      // Pointer Pointer QMediaService *
    } else {
    return (QMediaService *){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void release(QMediaService *)
  virtual void release(QMediaService * service)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"release", &handled, 1, (uint64_t)service, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaServiceProviderFactoryInterface::release(service);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaserviceproviderfactoryinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN37QMediaServiceProviderFactoryInterfaceD2Ev(void *this_)*/ {
  delete (QMediaServiceProviderFactoryInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaserviceproviderfactoryinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
