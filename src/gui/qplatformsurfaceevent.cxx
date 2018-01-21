//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:441
// void QPlatformSurfaceEvent(enum QPlatformSurfaceEvent::SurfaceEventType)
extern "C"
void* C_ZN21QPlatformSurfaceEventC1ENS_16SurfaceEventTypeE(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) {
  return new QPlatformSurfaceEvent(surfaceEventType);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:442
// void ~QPlatformSurfaceEvent()
extern "C"
void C_ZN21QPlatformSurfaceEventD1Ev(void *this_) {
  delete (QPlatformSurfaceEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:444
// QPlatformSurfaceEvent::SurfaceEventType surfaceEventType()
extern "C"
void C_ZNK21QPlatformSurfaceEvent16surfaceEventTypeEv(void *this_) {
  /*return*/ ((QPlatformSurfaceEvent*)this_)->surfaceEventType();
}
//  main block end
