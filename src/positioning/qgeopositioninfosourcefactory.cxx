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


struct qt_meta_stringdata_MyQGeoPositionInfoSourceFactory_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPositionInfoSourceFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPositionInfoSourceFactory_t qt_meta_stringdata_MyQGeoPositionInfoSourceFactory = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQGeoPositionInfoSourceFactory"
  },
  "MyQGeoPositionInfoSourceFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPositionInfoSourceFactory[] = {
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
