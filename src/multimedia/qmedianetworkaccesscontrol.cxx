//  header block begin
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h
#ifndef protected
#define protected public
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
// /usr/include/qt/QtMultimedia/qmedianetworkaccesscontrol.h:59
// [-2] void ~QMediaNetworkAccessControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QMediaNetworkAccessControlD2Ev(void *this_) {
  delete (QMediaNetworkAccessControl*)(this_);
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
