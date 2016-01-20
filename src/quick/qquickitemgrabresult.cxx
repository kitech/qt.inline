// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickitemgrabresult.h
// dst-file: /src/quick/qquickitemgrabresult.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickitemgrabresult.h>

extern "C" {

int QQuickItemGrabResult_Class_Size()
{
  return sizeof(QQuickItemGrabResult);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickitemgrabresult_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickItemGrabResult_SlotProxy here
class QQuickItemGrabResult_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickItemGrabResult_SlotProxy():QObject(){}

public slots:
  // ready()
  void slot_proxy_func__ZN20QQuickItemGrabResult5readyEv();
public:
  void (*slot_func__ZN20QQuickItemGrabResult5readyEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickitemgrabresult.moc"

extern "C" {
  QQuickItemGrabResult_SlotProxy* QQuickItemGrabResult_SlotProxy_new()
  {
    return new QQuickItemGrabResult_SlotProxy();
  }
};

void QQuickItemGrabResult_SlotProxy::slot_proxy_func__ZN20QQuickItemGrabResult5readyEv() {
  if (this->slot_func__ZN20QQuickItemGrabResult5readyEv != NULL) {
    // do smth...
    this->slot_func__ZN20QQuickItemGrabResult5readyEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItemGrabResult_SlotProxy_connect__ZN20QQuickItemGrabResult5readyEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItemGrabResult_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN20QQuickItemGrabResult5readyEv = (decltype(that->slot_func__ZN20QQuickItemGrabResult5readyEv))ffifptr;
  QObject::connect((QQuickItemGrabResult*)sender, SIGNAL(ready()), that, SLOT(slot_proxy_func__ZN20QQuickItemGrabResult5readyEv()));
  return that;
}
extern "C"
void QQuickItemGrabResult_SlotProxy_disconnect__ZN20QQuickItemGrabResult5readyEv(QQuickItemGrabResult_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

