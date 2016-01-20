// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickpainteditem.h
// dst-file: /src/quick/qquickpainteditem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickpainteditem.h>

extern "C" {

int QQuickPaintedItem_Class_Size()
{
  return sizeof(QQuickPaintedItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickpainteditem_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickPaintedItem_SlotProxy here
class QQuickPaintedItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickPaintedItem_SlotProxy():QObject(){}

public slots:
  // renderTargetChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv)(void* rsfptr) = NULL;
public slots:
  // contentsScaleChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // contentsSizeChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv)(void* rsfptr) = NULL;
public slots:
  // fillColorChanged()
  void slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv();
public:
  void (*slot_func__ZN17QQuickPaintedItem16fillColorChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickpainteditem.moc"

extern "C" {
  QQuickPaintedItem_SlotProxy* QQuickPaintedItem_SlotProxy_new()
  {
    return new QQuickPaintedItem_SlotProxy();
  }
};

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem19renderTargetChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem19renderTargetChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(renderTargetChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem19renderTargetChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem19renderTargetChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem20contentsScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem20contentsScaleChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(contentsScaleChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem20contentsScaleChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem20contentsScaleChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem19contentsSizeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem19contentsSizeChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(contentsSizeChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem19contentsSizeChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem19contentsSizeChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickPaintedItem_SlotProxy::slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv() {
  if (this->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickPaintedItem_SlotProxy_connect__ZN17QQuickPaintedItem16fillColorChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickPaintedItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv = (decltype(that->slot_func__ZN17QQuickPaintedItem16fillColorChangedEv))ffifptr;
  QObject::connect((QQuickPaintedItem*)sender, SIGNAL(fillColorChanged()), that, SLOT(slot_proxy_func__ZN17QQuickPaintedItem16fillColorChangedEv()));
  return that;
}
extern "C"
void QQuickPaintedItem_SlotProxy_disconnect__ZN17QQuickPaintedItem16fillColorChangedEv(QQuickPaintedItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

