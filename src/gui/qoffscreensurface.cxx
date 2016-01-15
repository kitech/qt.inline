// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qoffscreensurface.h
// dst-file: /src/gui/qoffscreensurface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qoffscreensurface.h>

extern "C" {

int QOffscreenSurface_Class_Size()
{
  return sizeof(QOffscreenSurface);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qoffscreensurface_inline_symbols() {
} // <= main block end

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

