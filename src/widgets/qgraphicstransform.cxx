// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qgraphicstransform.h
// dst-file: /src/widgets/qgraphicstransform.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qgraphicstransform.h>

extern "C" {

int QGraphicsRotation_Class_Size()
{
  return sizeof(QGraphicsRotation);
}

int QGraphicsScale_Class_Size()
{
  return sizeof(QGraphicsScale);
}

int QGraphicsTransform_Class_Size()
{
  return sizeof(QGraphicsTransform);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qgraphicstransform_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QGraphicsRotation_SlotProxy here
class QGraphicsRotation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsRotation_SlotProxy():QObject(){}

public slots:
  // angleChanged()
  void slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation12angleChangedEv)(void* rsfptr) = NULL;
public slots:
  // axisChanged()
  void slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation11axisChangedEv)(void* rsfptr) = NULL;
public slots:
  // originChanged()
  void slot_proxy_func__ZN17QGraphicsRotation13originChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation13originChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsRotation_SlotProxy* QGraphicsRotation_SlotProxy_new()
  {
    return new QGraphicsRotation_SlotProxy();
  }
};

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation12angleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation12angleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation12angleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation12angleChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation12angleChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(angleChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation12angleChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation11axisChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation11axisChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation11axisChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation11axisChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation11axisChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(axisChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation11axisChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation13originChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation13originChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation13originChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation13originChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation13originChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation13originChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsScale_SlotProxy here
class QGraphicsScale_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsScale_SlotProxy():QObject(){}

public slots:
  // scaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // originChanged()
  void slot_proxy_func__ZN14QGraphicsScale13originChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13originChangedEv)(void* rsfptr) = NULL;
public slots:
  // zScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13zScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // yScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13yScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // xScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13xScaleChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsScale_SlotProxy* QGraphicsScale_SlotProxy_new()
  {
    return new QGraphicsScale_SlotProxy();
  }
};

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale12scaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale12scaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale12scaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13originChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13originChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13originChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13originChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13originChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13originChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13zScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13zScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13zScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13zScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13zScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(zScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13zScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13yScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13yScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13yScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13yScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13yScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(yScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13yScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13xScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13xScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13xScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13xScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13xScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(xScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13xScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsTransform_SlotProxy here
class QGraphicsTransform_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsTransform_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicstransform.moc"

extern "C" {
  QGraphicsTransform_SlotProxy* QGraphicsTransform_SlotProxy_new()
  {
    return new QGraphicsTransform_SlotProxy();
  }
};

// <= body block end

