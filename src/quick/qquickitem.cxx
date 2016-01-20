// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickitem.h
// dst-file: /src/quick/qquickitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickitem.h>

extern "C" {

int QQuickTransform_Class_Size()
{
  return sizeof(QQuickTransform);
}

int QQuickItem_Class_Size()
{
  return sizeof(QQuickItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickitem_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickTransform_SlotProxy here
class QQuickTransform_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickTransform_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QQuickTransform_SlotProxy* QQuickTransform_SlotProxy_new()
  {
    return new QQuickTransform_SlotProxy();
  }
};

// QQuickItem_SlotProxy here
class QQuickItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickItem_SlotProxy():QObject(){}

public slots:
  // opacityChanged()
  void slot_proxy_func__ZN10QQuickItem14opacityChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14opacityChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN10QQuickItem14visibleChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // heightChanged()
  void slot_proxy_func__ZN10QQuickItem13heightChangedEv();
public:
  void (*slot_func__ZN10QQuickItem13heightChangedEv)(void* rsfptr) = NULL;
public slots:
  // childrenRectChanged(const class QRectF &)
  void slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF)(void* rsfptr, const QRectF & arg0) = NULL;
public slots:
  // yChanged()
  void slot_proxy_func__ZN10QQuickItem8yChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8yChangedEv)(void* rsfptr) = NULL;
public slots:
  // antialiasingChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem19antialiasingChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // visibleChildrenChanged()
  void slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv();
public:
  void (*slot_func__ZN10QQuickItem22visibleChildrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // widthChanged()
  void slot_proxy_func__ZN10QQuickItem12widthChangedEv();
public:
  void (*slot_func__ZN10QQuickItem12widthChangedEv)(void* rsfptr) = NULL;
public slots:
  // rotationChanged()
  void slot_proxy_func__ZN10QQuickItem15rotationChangedEv();
public:
  void (*slot_func__ZN10QQuickItem15rotationChangedEv)(void* rsfptr) = NULL;
public slots:
  // smoothChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem13smoothChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // childrenChanged()
  void slot_proxy_func__ZN10QQuickItem15childrenChangedEv();
public:
  void (*slot_func__ZN10QQuickItem15childrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // transformOriginChanged(enum QQuickItem::TransformOrigin)
  void slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0);
public:
  void (*slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE)(void* rsfptr, QQuickItem::TransformOrigin arg0) = NULL;
public slots:
  // enabledChanged()
  void slot_proxy_func__ZN10QQuickItem14enabledChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14enabledChangedEv)(void* rsfptr) = NULL;
public slots:
  // implicitHeightChanged()
  void slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv();
public:
  void (*slot_func__ZN10QQuickItem21implicitHeightChangedEv)(void* rsfptr) = NULL;
public slots:
  // parentChanged(class QQuickItem *)
  void slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0);
public:
  void (*slot_func__ZN10QQuickItem13parentChangedEPS_)(void* rsfptr, QQuickItem * arg0) = NULL;
public slots:
  // xChanged()
  void slot_proxy_func__ZN10QQuickItem8xChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8xChangedEv)(void* rsfptr) = NULL;
public slots:
  // windowChanged(class QQuickWindow *)
  void slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0);
public:
  void (*slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow)(void* rsfptr, QQuickWindow * arg0) = NULL;
public slots:
  // clipChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem11clipChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // scaleChanged()
  void slot_proxy_func__ZN10QQuickItem12scaleChangedEv();
public:
  void (*slot_func__ZN10QQuickItem12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // focusChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem12focusChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // stateChanged(const class QString &)
  void slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QQuickItem12stateChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // implicitWidthChanged()
  void slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv();
public:
  void (*slot_func__ZN10QQuickItem20implicitWidthChangedEv)(void* rsfptr) = NULL;
public slots:
  // activeFocusChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem18activeFocusChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // baselineOffsetChanged(qreal)
  void slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0);
public:
  void (*slot_func__ZN10QQuickItem21baselineOffsetChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // activeFocusOnTabChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // zChanged()
  void slot_proxy_func__ZN10QQuickItem8zChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8zChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickitem.moc"

extern "C" {
  QQuickItem_SlotProxy* QQuickItem_SlotProxy_new()
  {
    return new QQuickItem_SlotProxy();
  }
};

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14opacityChangedEv() {
  if (this->slot_func__ZN10QQuickItem14opacityChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14opacityChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14opacityChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14opacityChangedEv = (decltype(that->slot_func__ZN10QQuickItem14opacityChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(opacityChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14opacityChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14opacityChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14visibleChangedEv() {
  if (this->slot_func__ZN10QQuickItem14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14visibleChangedEv = (decltype(that->slot_func__ZN10QQuickItem14visibleChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14visibleChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14visibleChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13heightChangedEv() {
  if (this->slot_func__ZN10QQuickItem13heightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13heightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13heightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13heightChangedEv = (decltype(that->slot_func__ZN10QQuickItem13heightChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(heightChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem13heightChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13heightChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem19childrenRectChangedERK6QRectF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF = (decltype(that->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(childrenRectChanged(const class QRectF &)), that, SLOT(slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem19childrenRectChangedERK6QRectF(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8yChangedEv() {
  if (this->slot_func__ZN10QQuickItem8yChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8yChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8yChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8yChangedEv = (decltype(that->slot_func__ZN10QQuickItem8yChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(yChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8yChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8yChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem19antialiasingChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem19antialiasingChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem19antialiasingChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem19antialiasingChangedEb = (decltype(that->slot_func__ZN10QQuickItem19antialiasingChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(antialiasingChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem19antialiasingChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv() {
  if (this->slot_func__ZN10QQuickItem22visibleChildrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem22visibleChildrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem22visibleChildrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem22visibleChildrenChangedEv = (decltype(that->slot_func__ZN10QQuickItem22visibleChildrenChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(visibleChildrenChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem22visibleChildrenChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12widthChangedEv() {
  if (this->slot_func__ZN10QQuickItem12widthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12widthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12widthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12widthChangedEv = (decltype(that->slot_func__ZN10QQuickItem12widthChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(widthChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem12widthChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12widthChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem15rotationChangedEv() {
  if (this->slot_func__ZN10QQuickItem15rotationChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem15rotationChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem15rotationChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem15rotationChangedEv = (decltype(that->slot_func__ZN10QQuickItem15rotationChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(rotationChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem15rotationChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem15rotationChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem13smoothChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13smoothChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13smoothChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13smoothChangedEb = (decltype(that->slot_func__ZN10QQuickItem13smoothChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(smoothChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13smoothChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem15childrenChangedEv() {
  if (this->slot_func__ZN10QQuickItem15childrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem15childrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem15childrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem15childrenChangedEv = (decltype(that->slot_func__ZN10QQuickItem15childrenChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(childrenChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem15childrenChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem15childrenChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0) {
  if (this->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE = (decltype(that->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(transformOriginChanged(enum QQuickItem::TransformOrigin)), that, SLOT(slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14enabledChangedEv() {
  if (this->slot_func__ZN10QQuickItem14enabledChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14enabledChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14enabledChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14enabledChangedEv = (decltype(that->slot_func__ZN10QQuickItem14enabledChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(enabledChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14enabledChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14enabledChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv() {
  if (this->slot_func__ZN10QQuickItem21implicitHeightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem21implicitHeightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem21implicitHeightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem21implicitHeightChangedEv = (decltype(that->slot_func__ZN10QQuickItem21implicitHeightChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(implicitHeightChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem21implicitHeightChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0) {
  if (this->slot_func__ZN10QQuickItem13parentChangedEPS_ != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13parentChangedEPS_(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13parentChangedEPS_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13parentChangedEPS_ = (decltype(that->slot_func__ZN10QQuickItem13parentChangedEPS_))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(parentChanged(class QQuickItem *)), that, SLOT(slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13parentChangedEPS_(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8xChangedEv() {
  if (this->slot_func__ZN10QQuickItem8xChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8xChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8xChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8xChangedEv = (decltype(that->slot_func__ZN10QQuickItem8xChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(xChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8xChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8xChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0) {
  if (this->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13windowChangedEP12QQuickWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow = (decltype(that->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(windowChanged(class QQuickWindow *)), that, SLOT(slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem11clipChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem11clipChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem11clipChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem11clipChangedEb = (decltype(that->slot_func__ZN10QQuickItem11clipChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(clipChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem11clipChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12scaleChangedEv() {
  if (this->slot_func__ZN10QQuickItem12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12scaleChangedEv = (decltype(that->slot_func__ZN10QQuickItem12scaleChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem12scaleChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12scaleChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem12focusChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12focusChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12focusChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12focusChangedEb = (decltype(that->slot_func__ZN10QQuickItem12focusChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(focusChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12focusChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QQuickItem12stateChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12stateChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12stateChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12stateChangedERK7QString = (decltype(that->slot_func__ZN10QQuickItem12stateChangedERK7QString))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(stateChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12stateChangedERK7QString(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv() {
  if (this->slot_func__ZN10QQuickItem20implicitWidthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem20implicitWidthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem20implicitWidthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem20implicitWidthChangedEv = (decltype(that->slot_func__ZN10QQuickItem20implicitWidthChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(implicitWidthChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem20implicitWidthChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem18activeFocusChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem18activeFocusChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem18activeFocusChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem18activeFocusChangedEb = (decltype(that->slot_func__ZN10QQuickItem18activeFocusChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(activeFocusChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem18activeFocusChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0) {
  if (this->slot_func__ZN10QQuickItem21baselineOffsetChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem21baselineOffsetChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem21baselineOffsetChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem21baselineOffsetChangedEd = (decltype(that->slot_func__ZN10QQuickItem21baselineOffsetChangedEd))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(baselineOffsetChanged(qreal)), that, SLOT(slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem21baselineOffsetChangedEd(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem23activeFocusOnTabChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb = (decltype(that->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(activeFocusOnTabChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem23activeFocusOnTabChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8zChangedEv() {
  if (this->slot_func__ZN10QQuickItem8zChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8zChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8zChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8zChangedEv = (decltype(that->slot_func__ZN10QQuickItem8zChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(zChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8zChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8zChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

