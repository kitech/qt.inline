//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QGeoPositionInfoSource * positionInfoSource(QObject *)
  virtual QGeoPositionInfoSource * positionInfoSource(QObject * parent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"positionInfoSource", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoPositionInfoSource *)(irv);
      // Pointer Pointer QGeoPositionInfoSource *
    } else {
    return (QGeoPositionInfoSource *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QGeoSatelliteInfoSource * satelliteInfoSource(QObject *)
  virtual QGeoSatelliteInfoSource * satelliteInfoSource(QObject * parent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"satelliteInfoSource", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoSatelliteInfoSource *)(irv);
      // Pointer Pointer QGeoSatelliteInfoSource *
    } else {
    return (QGeoSatelliteInfoSource *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QGeoAreaMonitorSource * areaMonitor(QObject *)
  virtual QGeoAreaMonitorSource * areaMonitor(QObject * parent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"areaMonitor", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoAreaMonitorSource *)(irv);
      // Pointer Pointer QGeoAreaMonitorSource *
    } else {
    return (QGeoAreaMonitorSource *){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:55
// [8] QGeoPositionInfoSource * positionInfoSource(QObject *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:56
// [8] QGeoSatelliteInfoSource * satelliteInfoSource(QObject *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h:57
// [8] QGeoAreaMonitorSource * areaMonitor(QObject *)
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
