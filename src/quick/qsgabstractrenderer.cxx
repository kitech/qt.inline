// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qsgabstractrenderer.h
// dst-file: /src/quick/qsgabstractrenderer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgabstractrenderer.h>

extern "C" {

int QSGAbstractRenderer_Class_Size()
{
  return sizeof(QSGAbstractRenderer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgabstractrenderer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 60, column 17>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setDeviceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QSize setDeviceRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 64, column 17>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setViewportRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QSize setViewportRect(const class QSize &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSGAbstractRenderer_SlotProxy here
class QSGAbstractRenderer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGAbstractRenderer_SlotProxy():QObject(){}

public slots:
  // sceneGraphChanged()
  void slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv();
public:
  void (*slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qsgabstractrenderer.moc"

extern "C" {
  QSGAbstractRenderer_SlotProxy* QSGAbstractRenderer_SlotProxy_new()
  {
    return new QSGAbstractRenderer_SlotProxy();
  }
};

void QSGAbstractRenderer_SlotProxy::slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv() {
  if (this->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv(this->rsfptr);
  }
}
extern "C"
void* QSGAbstractRenderer_SlotProxy_connect__ZN19QSGAbstractRenderer17sceneGraphChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSGAbstractRenderer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv = (decltype(that->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv))ffifptr;
  QObject::connect((QSGAbstractRenderer*)sender, SIGNAL(sceneGraphChanged()), that, SLOT(slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv()));
  return that;
}
extern "C"
void QSGAbstractRenderer_SlotProxy_disconnect__ZN19QSGAbstractRenderer17sceneGraphChangedEv(QSGAbstractRenderer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

