// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickrendercontrol.h
// dst-file: /src/quick/qquickrendercontrol.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickrendercontrol.h>

extern "C" {

int QQuickRenderControl_Class_Size()
{
  return sizeof(QQuickRenderControl);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickrendercontrol_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquickrendercontrol.h', line 66, column 22>
//   // proto:  QWindow * QQuickRenderControl::renderWindow(QPoint * offset);
if (true) {
  auto f = [](QQuickRenderControl flythis, QPoint * arg1) {
    ((QQuickRenderControl*)0)->renderWindow(arg1);
    flythis.renderWindow(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QQuickRenderControl12renderWindowEP6QPoint renderWindow(class QPoint *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickRenderControl_SlotProxy here
class QQuickRenderControl_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickRenderControl_SlotProxy():QObject(){}

public slots:
  // sceneChanged()
  void slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv();
public:
  void (*slot_func__ZN19QQuickRenderControl12sceneChangedEv)(void* rsfptr) = NULL;
public slots:
  // renderRequested()
  void slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv();
public:
  void (*slot_func__ZN19QQuickRenderControl15renderRequestedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickrendercontrol.moc"

extern "C" {
  QQuickRenderControl_SlotProxy* QQuickRenderControl_SlotProxy_new()
  {
    return new QQuickRenderControl_SlotProxy();
  }
};

void QQuickRenderControl_SlotProxy::slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv() {
  if (this->slot_func__ZN19QQuickRenderControl12sceneChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QQuickRenderControl12sceneChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickRenderControl_SlotProxy_connect__ZN19QQuickRenderControl12sceneChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickRenderControl_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QQuickRenderControl12sceneChangedEv = (decltype(that->slot_func__ZN19QQuickRenderControl12sceneChangedEv))ffifptr;
  QObject::connect((QQuickRenderControl*)sender, SIGNAL(sceneChanged()), that, SLOT(slot_proxy_func__ZN19QQuickRenderControl12sceneChangedEv()));
  return that;
}
extern "C"
void QQuickRenderControl_SlotProxy_disconnect__ZN19QQuickRenderControl12sceneChangedEv(QQuickRenderControl_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickRenderControl_SlotProxy::slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv() {
  if (this->slot_func__ZN19QQuickRenderControl15renderRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QQuickRenderControl15renderRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickRenderControl_SlotProxy_connect__ZN19QQuickRenderControl15renderRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickRenderControl_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QQuickRenderControl15renderRequestedEv = (decltype(that->slot_func__ZN19QQuickRenderControl15renderRequestedEv))ffifptr;
  QObject::connect((QQuickRenderControl*)sender, SIGNAL(renderRequested()), that, SLOT(slot_proxy_func__ZN19QQuickRenderControl15renderRequestedEv()));
  return that;
}
extern "C"
void QQuickRenderControl_SlotProxy_disconnect__ZN19QQuickRenderControl15renderRequestedEv(QQuickRenderControl_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

