//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h
#ifndef protected
#define protected public
#endif
#include <qgeopositioninfosourcefactory.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSourceFactory is pure virtual: true
// QGeoPositionInfoSourceFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoPositionInfoSourceFactory : public QGeoPositionInfoSourceFactory {
public:
  virtual ~MyQGeoPositionInfoSourceFactory() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:53
// [-2] void ~QGeoPositionInfoSourceFactory()
extern "C" Q_DECL_EXPORT
void C_ZN29QGeoPositionInfoSourceFactoryD2Ev(void *this_) {
  delete (QGeoPositionInfoSourceFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:55
// [8] QGeoPositionInfoSource * positionInfoSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN29QGeoPositionInfoSourceFactory18positionInfoSourceEP7QObject(void *this_, QObject * parent) {
  return (void*)((QGeoPositionInfoSourceFactory*)this_)->positionInfoSource(parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:56
// [8] QGeoSatelliteInfoSource * satelliteInfoSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN29QGeoPositionInfoSourceFactory19satelliteInfoSourceEP7QObject(void *this_, QObject * parent) {
  return (void*)((QGeoPositionInfoSourceFactory*)this_)->satelliteInfoSource(parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:57
// [8] QGeoAreaMonitorSource * areaMonitor(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN29QGeoPositionInfoSourceFactory11areaMonitorEP7QObject(void *this_, QObject * parent) {
  return (void*)((QGeoPositionInfoSourceFactory*)this_)->areaMonitor(parent);
}

//  main block end
