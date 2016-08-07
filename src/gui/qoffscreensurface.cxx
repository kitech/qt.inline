// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qoffscreensurface.h
// dst-file: /src/gui/qoffscreensurface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qoffscreensurface.h>


#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qoffscreensurface_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOffscreenSurface_Class_Size()
{
  return sizeof(QOffscreenSurface);
}

// <= use block end

// ext block begin =>
//   // proto:  void QOffscreenSurface::~QOffscreenSurface();
extern "C"
void C_ZN17QOffscreenSurfaceD2Ev(void *qthis) {
  delete (QOffscreenSurface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 82, column 10>
//   // proto:  void QOffscreenSurface::screenChanged(QScreen * screen);
// _ZN17QOffscreenSurface13screenChangedEP7QScreen screenChanged(class QScreen *)
extern "C"
void
C_ZN17QOffscreenSurface13screenChangedEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QOffscreenSurface*)qthis)->screenChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 60, column 14>
//   // proto:  void QOffscreenSurface::QOffscreenSurface(QScreen * screen);
extern "C"
QOffscreenSurface*
C_ZN17QOffscreenSurfaceC2EP7QScreen(QScreen * arg1) {
  auto ret = new QOffscreenSurface(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 76, column 14>
//   // proto:  QScreen * QOffscreenSurface::screen();
// _ZNK17QOffscreenSurface6screenEv screen()
extern "C"
void*
C_ZNK17QOffscreenSurface6screenEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->screen();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 63, column 17>
//   // proto:  QSurface::SurfaceType QOffscreenSurface::surfaceType();
// _ZNK17QOffscreenSurface11surfaceTypeEv surfaceType()
extern "C"
QSurface::SurfaceType
C_ZNK17QOffscreenSurface11surfaceTypeEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->surfaceType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 70, column 10>
//   // proto:  void QOffscreenSurface::setFormat(const QSurfaceFormat & format);
// _ZN17QOffscreenSurface9setFormatERK14QSurfaceFormat setFormat(const class QSurfaceFormat &)
extern "C"
void
C_ZN17QOffscreenSurface9setFormatERK14QSurfaceFormat(void *qthis,
const QSurfaceFormat* arg1) {
  ((QOffscreenSurface*)qthis)->setFormat(*((const QSurfaceFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 77, column 10>
//   // proto:  void QOffscreenSurface::setScreen(QScreen * screen);
// _ZN17QOffscreenSurface9setScreenEP7QScreen setScreen(class QScreen *)
extern "C"
void
C_ZN17QOffscreenSurface9setScreenEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QOffscreenSurface*)qthis)->setScreen(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 72, column 20>
//   // proto:  QSurfaceFormat QOffscreenSurface::requestedFormat();
// _ZNK17QOffscreenSurface15requestedFormatEv requestedFormat()
extern "C"
QSurfaceFormat*
C_ZNK17QOffscreenSurface15requestedFormatEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->requestedFormat();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 71, column 20>
//   // proto:  QSurfaceFormat QOffscreenSurface::format();
// _ZNK17QOffscreenSurface6formatEv format()
extern "C"
QSurfaceFormat*
C_ZNK17QOffscreenSurface6formatEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->format();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 79, column 32>
//   // proto:  QPlatformOffscreenSurface * QOffscreenSurface::handle();
// _ZNK17QOffscreenSurface6handleEv handle()
extern "C"
void*
C_ZNK17QOffscreenSurface6handleEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 55, column 5>
//   // proto:  const QMetaObject * QOffscreenSurface::metaObject();
// _ZNK17QOffscreenSurface10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QOffscreenSurface10metaObjectEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 66, column 10>
//   // proto:  void QOffscreenSurface::destroy();
// _ZN17QOffscreenSurface7destroyEv destroy()
extern "C"
void
C_ZN17QOffscreenSurface7destroyEv(void *qthis) {
  ((QOffscreenSurface*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 68, column 10>
//   // proto:  bool QOffscreenSurface::isValid();
// _ZNK17QOffscreenSurface7isValidEv isValid()
extern "C"
bool
C_ZNK17QOffscreenSurface7isValidEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 74, column 11>
//   // proto:  QSize QOffscreenSurface::size();
// _ZNK17QOffscreenSurface4sizeEv size()
extern "C"
QSize*
C_ZNK17QOffscreenSurface4sizeEv(void *qthis) {
  auto ret =
  ((QOffscreenSurface*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qoffscreensurface.h', line 65, column 10>
//   // proto:  void QOffscreenSurface::create();
// _ZN17QOffscreenSurface6createEv create()
extern "C"
void
C_ZN17QOffscreenSurface6createEv(void *qthis) {
  ((QOffscreenSurface*)qthis)->create();
}
// <= ext block end

// body block begin =>
// QOffscreenSurface_SlotProxy here
class QOffscreenSurface_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOffscreenSurface_SlotProxy():QObject(){}

public slots:
  // screenChanged(class QScreen *)
  void slot_proxy_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qoffscreensurface.moc"

extern "C" {
  QOffscreenSurface_SlotProxy* QOffscreenSurface_SlotProxy_new()
  {
    return new QOffscreenSurface_SlotProxy();
  }
};

void QOffscreenSurface_SlotProxy::slot_proxy_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QOffscreenSurface_SlotProxy_connect__ZN17QOffscreenSurface13screenChangedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOffscreenSurface_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen = (decltype(that->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen))ffifptr;
  QObject::connect((QOffscreenSurface*)sender, SIGNAL(screenChanged(class QScreen *)), that, SLOT(slot_proxy_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QOffscreenSurface_SlotProxy_disconnect__ZN17QOffscreenSurface13screenChangedEP7QScreen(QOffscreenSurface_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

