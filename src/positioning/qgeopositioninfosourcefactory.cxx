//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfosourcefactory.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSourceFactory is pure virtual: true true
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
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopositioninfosourcefactory(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN29QGeoPositionInfoSourceFactoryD2Ev(void *this_)*/ {
  delete (QGeoPositionInfoSourceFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfosourcefactory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
