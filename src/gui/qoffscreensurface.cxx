//  header block begin
// /usr/include/qt/QtGui/qoffscreensurface.h
#include <qoffscreensurface.h>
#include <QtGui>

// QOffscreenSurface is pure virtual: false
//  header block end

//  main block begin

class MyQOffscreenSurface : public QOffscreenSurface {
public:
MyQOffscreenSurface(QScreen * screen, QObject * parent) : QOffscreenSurface(screen, parent) {}
MyQOffscreenSurface(QScreen * screen) : QOffscreenSurface(screen) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QOffscreenSurface10metaObjectEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:61
// [-2] void QOffscreenSurface(class QScreen *, class QObject *)
extern "C"
void* C_ZN17QOffscreenSurfaceC1EP7QScreenP7QObject(QScreen * screen, QObject * parent) {
  (MyQOffscreenSurface*)(0);
  return  new MyQOffscreenSurface(screen, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:62
// [-2] void QOffscreenSurface(class QScreen *)
extern "C"
void* C_ZN17QOffscreenSurfaceC1EP7QScreen(QScreen * screen) {
  (MyQOffscreenSurface*)(0);
  return  new MyQOffscreenSurface(screen);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:63
// [-2] void ~QOffscreenSurface()
extern "C"
void C_ZN17QOffscreenSurfaceD1Ev(void *this_) {
  delete (QOffscreenSurface*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:65
// [4] QSurface::SurfaceType surfaceType()
extern "C"
QSurface::SurfaceType C_ZNK17QOffscreenSurface11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QOffscreenSurface*)this_)->surfaceType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:67
// [-2] void create()
extern "C"
void C_ZN17QOffscreenSurface6createEv(void *this_) {
  ((QOffscreenSurface*)this_)->create();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:68
// [-2] void destroy()
extern "C"
void C_ZN17QOffscreenSurface7destroyEv(void *this_) {
  ((QOffscreenSurface*)this_)->destroy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:70
// [1] bool isValid()
extern "C"
bool C_ZNK17QOffscreenSurface7isValidEv(void *this_) {
  return (bool)((QOffscreenSurface*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:72
// [-2] void setFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN17QOffscreenSurface9setFormatERK14QSurfaceFormat(void *this_, const QSurfaceFormat & format) {
  ((QOffscreenSurface*)this_)->setFormat(format);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:73
// [8] QSurfaceFormat format()
extern "C"
void* C_ZNK17QOffscreenSurface6formatEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->format();
return new QSurfaceFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:74
// [8] QSurfaceFormat requestedFormat()
extern "C"
void* C_ZNK17QOffscreenSurface15requestedFormatEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->requestedFormat();
return new QSurfaceFormat(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:76
// [8] QSize size()
extern "C"
void* C_ZNK17QOffscreenSurface4sizeEv(void *this_) {
  auto rv = ((QOffscreenSurface*)this_)->size();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:78
// [8] QScreen * screen()
extern "C"
void* C_ZNK17QOffscreenSurface6screenEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->screen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:79
// [-2] void setScreen(class QScreen *)
extern "C"
void C_ZN17QOffscreenSurface9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->setScreen(screen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:83
// [8] void * nativeHandle()
extern "C"
void* C_ZNK17QOffscreenSurface12nativeHandleEv(void *this_) {
  return (void*)((QOffscreenSurface*)this_)->nativeHandle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:84
// [-2] void setNativeHandle(void *)
extern "C"
void C_ZN17QOffscreenSurface15setNativeHandleEPv(void *this_, void * handle) {
  ((QOffscreenSurface*)this_)->setNativeHandle(handle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:87
// [-2] void screenChanged(class QScreen *)
extern "C"
void C_ZN17QOffscreenSurface13screenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->screenChanged(screen);
}
//  main block end
