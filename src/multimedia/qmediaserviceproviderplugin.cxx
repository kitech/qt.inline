//  header block begin
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderPlugin is pure virtual: true
// QMediaServiceProviderPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaServiceProviderPlugin : public QMediaServiceProviderPlugin {
public:
  virtual ~MyQMediaServiceProviderPlugin() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QMediaServiceProviderPlugin10metaObjectEv(void *this_) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QMediaServiceProviderPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaServiceProviderPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaServiceProviderPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:194
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaServiceProviderPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:198
// [8] QMediaService * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QMediaServiceProviderPlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QMediaServiceProviderPlugin*)this_)->create(*key);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:199
// [-2] void release(QMediaService *)
extern "C" Q_DECL_EXPORT
void C_ZN27QMediaServiceProviderPlugin7releaseEP13QMediaService(void *this_, QMediaService * service) {
  ((QMediaServiceProviderPlugin*)this_)->release(service);
}


extern "C" Q_DECL_EXPORT
void C_ZN27QMediaServiceProviderPluginD2Ev(void *this_) {
  delete (QMediaServiceProviderPlugin*)(this_);
}
//  main block end
