// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qoffscreensurface.h
// dst-file: /src/gui/qoffscreensurface.cxx
//

// header block begin =>
#include <qoffscreensurface.h>

extern "C" {

int QOffscreenSurface_Class_Size()
{
  return sizeof(QOffscreenSurface);
}

// ~QOffscreenSurface()
void dedtor_ZN17QOffscreenSurfaceD0Ev(QOffscreenSurface* that)
{
  QOffscreenSurface* rthis = (QOffscreenSurface*)that;
  delete rthis;
}

// QOffscreenSurface(class QScreen *)
QOffscreenSurface* dector_ZN17QOffscreenSurfaceC1EP7QScreen(QScreen * screen)
{
  // static_assert(sizeof(QOffscreenSurface) == 32, "tyszerr");
  QOffscreenSurface* rthis = new QOffscreenSurface(screen);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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
  void (*slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen)(QScreen * arg0) = NULL;
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
    this->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(arg0);
  }
}
extern "C"
void* QOffscreenSurface_SlotProxy_connect__ZN17QOffscreenSurface13screenChangedEP7QScreen(QObject* sender, void* fptr){
  auto that = new QOffscreenSurface_SlotProxy();
  that->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen = (decltype(that->slot_func__ZN17QOffscreenSurface13screenChangedEP7QScreen))fptr;
  QObject::connect((QOffscreenSurface*)sender, SIGNAL(screenChanged(class QScreen *)), that, SLOT(slot_proxy_func__ZN17QOffscreenSurface13screenChangedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QOffscreenSurface_SlotProxy_disconnect__ZN17QOffscreenSurface13screenChangedEP7QScreen(QOffscreenSurface_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

