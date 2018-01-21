//  header block begin
// /usr/include/qt/QtGui/qoffscreensurface.h
#include <qoffscreensurface.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qoffscreensurface.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QOffscreenSurface10metaObjectEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:60
// void QOffscreenSurface(class QScreen *)
extern "C"
void* C_ZN17QOffscreenSurfaceC1EP7QScreen(QScreen * screen) {
  return new QOffscreenSurface(screen);
}
// virtual
// /usr/include/qt/QtGui/qoffscreensurface.h:61
// void ~QOffscreenSurface()
extern "C"
void C_ZN17QOffscreenSurfaceD1Ev(void *this_) {
  delete (QOffscreenSurface*)(this_);
}
// virtual
// /usr/include/qt/QtGui/qoffscreensurface.h:63
// QSurface::SurfaceType surfaceType()
extern "C"
void C_ZNK17QOffscreenSurface11surfaceTypeEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->surfaceType();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:65
// void create()
extern "C"
void C_ZN17QOffscreenSurface6createEv(void *this_) {
  ((QOffscreenSurface*)this_)->create();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:66
// void destroy()
extern "C"
void C_ZN17QOffscreenSurface7destroyEv(void *this_) {
  ((QOffscreenSurface*)this_)->destroy();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:68
// bool isValid()
extern "C"
void C_ZNK17QOffscreenSurface7isValidEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->isValid();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:70
// void setFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN17QOffscreenSurface9setFormatERK14QSurfaceFormat(void *this_, const QSurfaceFormat & format) {
  ((QOffscreenSurface*)this_)->setFormat(format);
}
// virtual
// /usr/include/qt/QtGui/qoffscreensurface.h:71
// QSurfaceFormat format()
extern "C"
void C_ZNK17QOffscreenSurface6formatEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->format();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:72
// QSurfaceFormat requestedFormat()
extern "C"
void C_ZNK17QOffscreenSurface15requestedFormatEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->requestedFormat();
}
// virtual
// /usr/include/qt/QtGui/qoffscreensurface.h:74
// QSize size()
extern "C"
void C_ZNK17QOffscreenSurface4sizeEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->size();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:76
// QScreen * screen()
extern "C"
void C_ZNK17QOffscreenSurface6screenEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->screen();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:77
// void setScreen(class QScreen *)
extern "C"
void C_ZN17QOffscreenSurface9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->setScreen(screen);
}
// /usr/include/qt/QtGui/qoffscreensurface.h:79
// QPlatformOffscreenSurface * handle()
extern "C"
void C_ZNK17QOffscreenSurface6handleEv(void *this_) {
  /*return*/ ((QOffscreenSurface*)this_)->handle();
}
// /usr/include/qt/QtGui/qoffscreensurface.h:82
// void screenChanged(class QScreen *)
extern "C"
void C_ZN17QOffscreenSurface13screenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QOffscreenSurface*)this_)->screenChanged(screen);
}
//  main block end
