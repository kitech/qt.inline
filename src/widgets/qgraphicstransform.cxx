// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qgraphicstransform.h
// dst-file: /src/widgets/qgraphicstransform.cxx
//

// header block begin =>
#include <qgraphicstransform.h>

extern "C" {

int QGraphicsRotation_Class_Size()
{
  return sizeof(QGraphicsRotation);
}

// QGraphicsRotation(class QObject *)
QGraphicsRotation* dector_ZN17QGraphicsRotationC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsRotation) == 32, "tyszerr");
  QGraphicsRotation* rthis = new QGraphicsRotation(parent);
  return rthis;
}

// ~QGraphicsRotation()
void dedtor_ZN17QGraphicsRotationD0Ev(QGraphicsRotation* that)
{
  QGraphicsRotation* rthis = (QGraphicsRotation*)that;
  delete rthis;
}

int QGraphicsScale_Class_Size()
{
  return sizeof(QGraphicsScale);
}

// QGraphicsScale(class QObject *)
QGraphicsScale* dector_ZN14QGraphicsScaleC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsScale) == 32, "tyszerr");
  QGraphicsScale* rthis = new QGraphicsScale(parent);
  return rthis;
}

// ~QGraphicsScale()
void dedtor_ZN14QGraphicsScaleD0Ev(QGraphicsScale* that)
{
  QGraphicsScale* rthis = (QGraphicsScale*)that;
  delete rthis;
}

int QGraphicsTransform_Class_Size()
{
  return sizeof(QGraphicsTransform);
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
// QGraphicsRotation_SlotProxy here
class QGraphicsRotation_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QGraphicsRotation_SlotProxy():QObject(){}

public slots:
  // originChanged()
  void slot_proxy_func__ZN17QGraphicsRotation13originChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation13originChangedEv)() = NULL;
public slots:
  // angleChanged()
  void slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation12angleChangedEv)() = NULL;
public slots:
  // axisChanged()
  void slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation11axisChangedEv)() = NULL;
};

extern "C" {
  QGraphicsRotation_SlotProxy* QGraphicsRotation_SlotProxy_new()
  {
    return new QGraphicsRotation_SlotProxy();
  }
};

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation13originChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation13originChangedEv();
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation13originChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->slot_func__ZN17QGraphicsRotation13originChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation13originChangedEv))fptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation13originChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation12angleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation12angleChangedEv();
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation12angleChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->slot_func__ZN17QGraphicsRotation12angleChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation12angleChangedEv))fptr;
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
    this->slot_func__ZN17QGraphicsRotation11axisChangedEv();
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation11axisChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->slot_func__ZN17QGraphicsRotation11axisChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation11axisChangedEv))fptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(axisChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation11axisChangedEv(QGraphicsRotation_SlotProxy* that) {
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
  // originChanged()
  void slot_proxy_func__ZN14QGraphicsScale13originChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13originChangedEv)() = NULL;
public slots:
  // xScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13xScaleChangedEv)() = NULL;
public slots:
  // yScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13yScaleChangedEv)() = NULL;
public slots:
  // zScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13zScaleChangedEv)() = NULL;
public slots:
  // scaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale12scaleChangedEv)() = NULL;
};

extern "C" {
  QGraphicsScale_SlotProxy* QGraphicsScale_SlotProxy_new()
  {
    return new QGraphicsScale_SlotProxy();
  }
};

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13originChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13originChangedEv();
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13originChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->slot_func__ZN14QGraphicsScale13originChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13originChangedEv))fptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13originChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13xScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13xScaleChangedEv();
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13xScaleChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->slot_func__ZN14QGraphicsScale13xScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13xScaleChangedEv))fptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(xScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13xScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13yScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13yScaleChangedEv();
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13yScaleChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->slot_func__ZN14QGraphicsScale13yScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13yScaleChangedEv))fptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(yScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13yScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13zScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13zScaleChangedEv();
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13zScaleChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->slot_func__ZN14QGraphicsScale13zScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13zScaleChangedEv))fptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(zScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13zScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale12scaleChangedEv();
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale12scaleChangedEv(QObject* sender, void* fptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->slot_func__ZN14QGraphicsScale12scaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale12scaleChangedEv))fptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale12scaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsTransform_SlotProxy here
class QGraphicsTransform_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QGraphicsTransform_SlotProxy():QObject(){}

};
#include "src/widgets/qgraphicstransform.moc"

extern "C" {
  QGraphicsTransform_SlotProxy* QGraphicsTransform_SlotProxy_new()
  {
    return new QGraphicsTransform_SlotProxy();
  }
};

// <= body block end

