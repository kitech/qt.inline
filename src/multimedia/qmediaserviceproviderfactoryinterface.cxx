//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderFactoryInterface is pure virtual: true
// QMediaServiceProviderFactoryInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceProviderFactoryInterface : public QMediaServiceProviderFactoryInterface {
public:
  virtual ~MyQMediaServiceProviderFactoryInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:112
// [8] QMediaService * create(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:113
// [-2] void release(QMediaService *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:112
// [8] QMediaService * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN37QMediaServiceProviderFactoryInterface6createERK7QString(void *this_, QString* key) {
  return (void*)((QMediaServiceProviderFactoryInterface*)this_)->create(*key);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:113
// [-2] void release(QMediaService *)
extern "C" Q_DECL_EXPORT
void C_ZN37QMediaServiceProviderFactoryInterface7releaseEP13QMediaService(void *this_, QMediaService * service) {
  ((QMediaServiceProviderFactoryInterface*)this_)->release(service);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:114
// [-2] void ~QMediaServiceProviderFactoryInterface()
extern "C" Q_DECL_EXPORT
void C_ZN37QMediaServiceProviderFactoryInterfaceD2Ev(void *this_) {
  delete (QMediaServiceProviderFactoryInterface*)(this_);
}
//  main block end
