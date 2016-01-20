// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickframebufferobject.h
// dst-file: /src/quick/qquickframebufferobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickframebufferobject.h>

extern "C" {

int QQuickFramebufferObject_Class_Size()
{
  return sizeof(QQuickFramebufferObject);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickframebufferobject_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickFramebufferObject_SlotProxy here
class QQuickFramebufferObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickFramebufferObject_SlotProxy():QObject(){}

public slots:
  // textureFollowsItemSizeChanged(_Bool)
  void slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0);
public:
  void (*slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickframebufferobject.moc"

extern "C" {
  QQuickFramebufferObject_SlotProxy* QQuickFramebufferObject_SlotProxy_new()
  {
    return new QQuickFramebufferObject_SlotProxy();
  }
};

void QQuickFramebufferObject_SlotProxy::slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0) {
  if (this->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickFramebufferObject_SlotProxy_connect__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickFramebufferObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb = (decltype(that->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb))ffifptr;
  QObject::connect((QQuickFramebufferObject*)sender, SIGNAL(textureFollowsItemSizeChanged(_Bool)), that, SLOT(slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickFramebufferObject_SlotProxy_disconnect__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(QQuickFramebufferObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

