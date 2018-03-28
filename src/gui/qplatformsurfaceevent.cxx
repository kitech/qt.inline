//  header block begin
// since 0x050500
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPlatformSurfaceEvent is pure virtual: false
// QPlatformSurfaceEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPlatformSurfaceEvent : public QPlatformSurfaceEvent {
public:
  virtual ~MyQPlatformSurfaceEvent() {}
// void QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType)
MyQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:451
// [-2] void QPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPlatformSurfaceEventC2ENS_16SurfaceEventTypeE(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) {
  return  new QPlatformSurfaceEvent(surfaceEventType);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:452
// [-2] void ~QPlatformSurfaceEvent()
extern "C" Q_DECL_EXPORT
void C_ZN21QPlatformSurfaceEventD2Ev(void *this_) {
  delete (QPlatformSurfaceEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:454
// [4] QPlatformSurfaceEvent::SurfaceEventType surfaceEventType()
extern "C" Q_DECL_EXPORT
QPlatformSurfaceEvent::SurfaceEventType C_ZNK21QPlatformSurfaceEvent16surfaceEventTypeEv(void *this_) {
  return (QPlatformSurfaceEvent::SurfaceEventType)((QPlatformSurfaceEvent*)this_)->surfaceEventType();
}

//  main block end
