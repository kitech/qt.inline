//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfosourcefactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfosourcefactory.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSourceFactoryV2 is pure virtual: true true
// QGeoPositionInfoSourceFactoryV2 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoPositionInfoSourceFactoryV2_t {
  QByteArrayData data[1];
  char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPositionInfoSourceFactoryV2_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPositionInfoSourceFactoryV2_t qt_meta_stringdata_MyQGeoPositionInfoSourceFactoryV2 = {
   {
  QT_MOC_LITERAL(0, 0, 33), // "MyQGeoPositionInfoSourceFactoryV2"
  },
  "MyQGeoPositionInfoSourceFactoryV2"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPositionInfoSourceFactoryV2[] = {
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
class Q_DECL_EXPORT MyQGeoPositionInfoSourceFactoryV2 : public QGeoPositionInfoSourceFactoryV2 {
public:
  virtual ~MyQGeoPositionInfoSourceFactoryV2() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QGeoPositionInfoSource * positionInfoSourceWithParameters(QObject *, const QVariantMap &)
  virtual QGeoPositionInfoSource * positionInfoSourceWithParameters(QObject * parent, const QVariantMap & parameters)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"positionInfoSourceWithParameters", &handled, 2, (uint64_t)parent, (uint64_t)&parameters, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoPositionInfoSource *)(irv);
      // Pointer Pointer QGeoPositionInfoSource *
    } else {
    return (QGeoPositionInfoSource *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QGeoSatelliteInfoSource * satelliteInfoSourceWithParameters(QObject *, const QVariantMap &)
  virtual QGeoSatelliteInfoSource * satelliteInfoSourceWithParameters(QObject * parent, const QVariantMap & parameters)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"satelliteInfoSourceWithParameters", &handled, 2, (uint64_t)parent, (uint64_t)&parameters, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoSatelliteInfoSource *)(irv);
      // Pointer Pointer QGeoSatelliteInfoSource *
    } else {
    return (QGeoSatelliteInfoSource *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QGeoAreaMonitorSource * areaMonitorWithParameters(QObject *, const QVariantMap &)
  virtual QGeoAreaMonitorSource * areaMonitorWithParameters(QObject * parent, const QVariantMap & parameters)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"areaMonitorWithParameters", &handled, 2, (uint64_t)parent, (uint64_t)&parameters, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoAreaMonitorSource *)(irv);
      // Pointer Pointer QGeoAreaMonitorSource *
    } else {
    return (QGeoAreaMonitorSource *){};
  }
  }

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
uint64_t ensure_inline_symbol_qgeopositioninfosourcefactoryv2(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN31QGeoPositionInfoSourceFactoryV2D2Ev(void *this_)*/ {
  delete (QGeoPositionInfoSourceFactoryV2*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfosourcefactoryv2
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
