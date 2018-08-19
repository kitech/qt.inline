//  header block begin
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmedianetworkaccesscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaNetworkAccessControl is pure virtual: true
// QMediaNetworkAccessControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaNetworkAccessControl : public QMediaNetworkAccessControl {
public:
  virtual ~MyQMediaNetworkAccessControl() {}
// void QMediaNetworkAccessControl(QObject *)
MyQMediaNetworkAccessControl(QObject * parent) : QMediaNetworkAccessControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QMediaNetworkAccessControl10metaObjectEv(void *this_) {
  return (void*)((QMediaNetworkAccessControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QMediaNetworkAccessControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaNetworkAccessControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN26QMediaNetworkAccessControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaNetworkAccessControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QMediaNetworkAccessControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaNetworkAccessControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QMediaNetworkAccessControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaNetworkAccessControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:59
// [-2] void ~QMediaNetworkAccessControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QMediaNetworkAccessControlD2Ev(void *this_) {
  delete (QMediaNetworkAccessControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:61
// [-2] void setConfigurations(const QList<QNetworkConfiguration> &)
extern "C" Q_DECL_EXPORT
void C_ZN26QMediaNetworkAccessControl17setConfigurationsERK5QListI21QNetworkConfigurationE(void *this_, QList<QNetworkConfiguration>* configuration) {
  ((QMediaNetworkAccessControl*)this_)->setConfigurations(*configuration);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:62
// [8] QNetworkConfiguration currentConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QMediaNetworkAccessControl20currentConfigurationEv(void *this_) {
  auto rv = ((QMediaNetworkAccessControl*)this_)->currentConfiguration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:65
// [-2] void configurationChanged(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN26QMediaNetworkAccessControl20configurationChangedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* configuration) {
  ((QMediaNetworkAccessControl*)this_)->configurationChanged(*configuration);
}

//  main block end
