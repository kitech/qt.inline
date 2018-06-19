//  header block begin
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h
#ifndef protected
#define protected public
#endif
#include <qvideorenderercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoRendererControl is pure virtual: true
// QVideoRendererControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoRendererControl : public QVideoRendererControl {
public:
  virtual ~MyQVideoRendererControl() {}
// void QVideoRendererControl(QObject *)
MyQVideoRendererControl(QObject * parent) : QVideoRendererControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl10metaObjectEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:53
// [-2] void ~QVideoRendererControl()
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControlD2Ev(void *this_) {
  delete (QVideoRendererControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:55
// [8] QAbstractVideoSurface * surface()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QVideoRendererControl7surfaceEv(void *this_) {
  return (void*)((QVideoRendererControl*)this_)->surface();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideorenderercontrol.h:56
// [-2] void setSurface(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN21QVideoRendererControl10setSurfaceEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QVideoRendererControl*)this_)->setSurface(surface);
}

//  main block end
