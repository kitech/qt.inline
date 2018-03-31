//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h
#ifndef protected
#define protected public
#endif
#include <qgeosatelliteinfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoSatelliteInfoSource is pure virtual: true
// QGeoSatelliteInfoSource has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoSatelliteInfoSource : public QGeoSatelliteInfoSource {
public:
  virtual ~MyQGeoSatelliteInfoSource() {}
// void QGeoSatelliteInfoSource(QObject *)
MyQGeoSatelliteInfoSource(QObject * parent) : QGeoSatelliteInfoSource(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGeoSatelliteInfoSource10metaObjectEv(void *this_) {
  return (void*)((QGeoSatelliteInfoSource*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:65
// [-2] void QGeoSatelliteInfoSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSourceC2EP7QObject(QObject * parent) {
  return 0; // new QGeoSatelliteInfoSource(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:66
// [-2] void ~QGeoSatelliteInfoSource()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSourceD2Ev(void *this_) {
  delete (QGeoSatelliteInfoSource*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:68
// [8] QGeoSatelliteInfoSource * createDefaultSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource19createDefaultSourceEP7QObject(QObject * parent) {
  return (void*)QGeoSatelliteInfoSource::createDefaultSource(parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:69
// [8] QGeoSatelliteInfoSource * createSource(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource12createSourceERK7QStringP7QObject(QString* sourceName, QObject * parent) {
  return (void*)QGeoSatelliteInfoSource::createSource(*sourceName, parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:70
// [8] QStringList availableSources()
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource16availableSourcesEv() {
  auto rv = QGeoSatelliteInfoSource::availableSources();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:72
// [8] QString sourceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGeoSatelliteInfoSource10sourceNameEv(void *this_) {
  auto rv = ((QGeoSatelliteInfoSource*)this_)->sourceName();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:74
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource17setUpdateIntervalEi(void *this_, int msec) {
  ((QGeoSatelliteInfoSource*)this_)->setUpdateInterval(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:75
// [4] int updateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK23QGeoSatelliteInfoSource14updateIntervalEv(void *this_) {
  return (int)((QGeoSatelliteInfoSource*)this_)->updateInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:76
// [4] int minimumUpdateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK23QGeoSatelliteInfoSource21minimumUpdateIntervalEv(void *this_) {
  return (int)((QGeoSatelliteInfoSource*)this_)->minimumUpdateInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:77
// [4] QGeoSatelliteInfoSource::Error error()
extern "C" Q_DECL_EXPORT
QGeoSatelliteInfoSource::Error C_ZNK23QGeoSatelliteInfoSource5errorEv(void *this_) {
  return (QGeoSatelliteInfoSource::Error)((QGeoSatelliteInfoSource*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:80
// [-2] void startUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource12startUpdatesEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->startUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:81
// [-2] void stopUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource11stopUpdatesEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->stopUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:83
// [-2] void requestUpdate(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource13requestUpdateEi(void *this_, int timeout) {
  ((QGeoSatelliteInfoSource*)this_)->requestUpdate(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:88
// [-2] void requestTimeout()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource14requestTimeoutEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->requestTimeout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:89
// [-2] void error(QGeoSatelliteInfoSource::Error)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource5errorENS_5ErrorE(void *this_, QGeoSatelliteInfoSource::Error arg0) {
  ((QGeoSatelliteInfoSource*)this_)->error(arg0);
}

//  main block end
