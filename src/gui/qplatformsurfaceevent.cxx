//  header block begin

// since 0x050500
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPlatformSurfaceEvent is pure virtual: false
// QPlatformSurfaceEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPlatformSurfaceEvent_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPlatformSurfaceEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPlatformSurfaceEvent_t qt_meta_stringdata_MyQPlatformSurfaceEvent = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQPlatformSurfaceEvent"
  },
  "MyQPlatformSurfaceEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPlatformSurfaceEvent[] = {
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
class Q_DECL_EXPORT MyQPlatformSurfaceEvent : public QPlatformSurfaceEvent {
public:
  virtual ~MyQPlatformSurfaceEvent() {}
// void QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType)
MyQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:456
// [-2] void QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPlatformSurfaceEventC2ENS_16SurfaceEventTypeE(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) {
  return  new QPlatformSurfaceEvent(surfaceEventType);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:457
// [-2] void ~QPlatformSurfaceEvent()
extern "C" Q_DECL_EXPORT
void C_ZN21QPlatformSurfaceEventD2Ev(void *this_) {
  delete (QPlatformSurfaceEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:459
// [4] QPlatformSurfaceEvent::SurfaceEventType surfaceEventType()
extern "C" Q_DECL_EXPORT
QPlatformSurfaceEvent::SurfaceEventType C_ZNK21QPlatformSurfaceEvent16surfaceEventTypeEv(void *this_) {
  return (QPlatformSurfaceEvent::SurfaceEventType)((QPlatformSurfaceEvent*)this_)->surfaceEventType();
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
