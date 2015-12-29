// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qgraphicseffect.h
// dst-file: /src/widgets/qgraphicseffect.cxx
//

// header block begin =>
#include <qgraphicseffect.h>

extern "C" {

int QGraphicsColorizeEffect_Class_Size()
{
  return sizeof(QGraphicsColorizeEffect);
}

// QGraphicsColorizeEffect(class QObject *)
QGraphicsColorizeEffect* dector_ZN23QGraphicsColorizeEffectC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsColorizeEffect) == 32, "tyszerr");
  QGraphicsColorizeEffect* rthis = new QGraphicsColorizeEffect(parent);
  return rthis;
}

// ~QGraphicsColorizeEffect()
void dedtor_ZN23QGraphicsColorizeEffectD0Ev(QGraphicsColorizeEffect* that)
{
  QGraphicsColorizeEffect* rthis = (QGraphicsColorizeEffect*)that;
  delete rthis;
}

int QGraphicsEffect_Class_Size()
{
  return sizeof(QGraphicsEffect);
}

int QGraphicsDropShadowEffect_Class_Size()
{
  return sizeof(QGraphicsDropShadowEffect);
}

// QGraphicsDropShadowEffect(class QObject *)
QGraphicsDropShadowEffect* dector_ZN25QGraphicsDropShadowEffectC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsDropShadowEffect) == 32, "tyszerr");
  QGraphicsDropShadowEffect* rthis = new QGraphicsDropShadowEffect(parent);
  return rthis;
}

// ~QGraphicsDropShadowEffect()
void dedtor_ZN25QGraphicsDropShadowEffectD0Ev(QGraphicsDropShadowEffect* that)
{
  QGraphicsDropShadowEffect* rthis = (QGraphicsDropShadowEffect*)that;
  delete rthis;
}

  // proto:  void QGraphicsDropShadowEffect::setYOffset(qreal dy);
void demth_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *that, double dy)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
   cthat->setYOffset(dy);
}

  // proto:  qreal QGraphicsDropShadowEffect::xOffset();
qreal demth_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *that)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
  return cthat->xOffset();
}

  // proto:  void QGraphicsDropShadowEffect::setOffset(qreal dx, qreal dy);
void demth_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *that, double dx, double dy)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
   cthat->setOffset(dx, dy);
}

  // proto:  void QGraphicsDropShadowEffect::setOffset(qreal d);
void demth_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *that, double d)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
   cthat->setOffset(d);
}

  // proto:  qreal QGraphicsDropShadowEffect::yOffset();
qreal demth_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *that)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
  return cthat->yOffset();
}

  // proto:  void QGraphicsDropShadowEffect::setXOffset(qreal dx);
void demth_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *that, double dx)
{
  QGraphicsDropShadowEffect *cthat = (QGraphicsDropShadowEffect *)that;
   cthat->setXOffset(dx);
}

int QGraphicsOpacityEffect_Class_Size()
{
  return sizeof(QGraphicsOpacityEffect);
}

// QGraphicsOpacityEffect(class QObject *)
QGraphicsOpacityEffect* dector_ZN22QGraphicsOpacityEffectC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsOpacityEffect) == 32, "tyszerr");
  QGraphicsOpacityEffect* rthis = new QGraphicsOpacityEffect(parent);
  return rthis;
}

// ~QGraphicsOpacityEffect()
void dedtor_ZN22QGraphicsOpacityEffectD0Ev(QGraphicsOpacityEffect* that)
{
  QGraphicsOpacityEffect* rthis = (QGraphicsOpacityEffect*)that;
  delete rthis;
}

int QGraphicsBlurEffect_Class_Size()
{
  return sizeof(QGraphicsBlurEffect);
}

// ~QGraphicsBlurEffect()
void dedtor_ZN19QGraphicsBlurEffectD0Ev(QGraphicsBlurEffect* that)
{
  QGraphicsBlurEffect* rthis = (QGraphicsBlurEffect*)that;
  delete rthis;
}

// QGraphicsBlurEffect(class QObject *)
QGraphicsBlurEffect* dector_ZN19QGraphicsBlurEffectC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QGraphicsBlurEffect) == 32, "tyszerr");
  QGraphicsBlurEffect* rthis = new QGraphicsBlurEffect(parent);
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
// QGraphicsColorizeEffect_SlotProxy here
class QGraphicsColorizeEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsColorizeEffect_SlotProxy():QObject(){}

public slots:
  // strengthChanged(qreal)
  void slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0);
public:
  void (*slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // colorChanged(const class QColor &)
  void slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsColorizeEffect_SlotProxy* QGraphicsColorizeEffect_SlotProxy_new()
  {
    return new QGraphicsColorizeEffect_SlotProxy();
  }
};

void QGraphicsColorizeEffect_SlotProxy::slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0) {
  if (this->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsColorizeEffect_SlotProxy_connect__ZN23QGraphicsColorizeEffect15strengthChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsColorizeEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd = (decltype(that->slot_func__ZN23QGraphicsColorizeEffect15strengthChangedEd))ffifptr;
  QObject::connect((QGraphicsColorizeEffect*)sender, SIGNAL(strengthChanged(qreal)), that, SLOT(slot_proxy_func__ZN23QGraphicsColorizeEffect15strengthChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsColorizeEffect_SlotProxy_disconnect__ZN23QGraphicsColorizeEffect15strengthChangedEd(QGraphicsColorizeEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsColorizeEffect_SlotProxy::slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsColorizeEffect_SlotProxy_connect__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsColorizeEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor = (decltype(that->slot_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor))ffifptr;
  QObject::connect((QGraphicsColorizeEffect*)sender, SIGNAL(colorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QGraphicsColorizeEffect_SlotProxy_disconnect__ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(QGraphicsColorizeEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsEffect_SlotProxy here
class QGraphicsEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsEffect_SlotProxy():QObject(){}

public slots:
  // enabledChanged(_Bool)
  void slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0);
public:
  void (*slot_func__ZN15QGraphicsEffect14enabledChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsEffect_SlotProxy* QGraphicsEffect_SlotProxy_new()
  {
    return new QGraphicsEffect_SlotProxy();
  }
};

void QGraphicsEffect_SlotProxy::slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0) {
  if (this->slot_func__ZN15QGraphicsEffect14enabledChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN15QGraphicsEffect14enabledChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsEffect_SlotProxy_connect__ZN15QGraphicsEffect14enabledChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGraphicsEffect14enabledChangedEb = (decltype(that->slot_func__ZN15QGraphicsEffect14enabledChangedEb))ffifptr;
  QObject::connect((QGraphicsEffect*)sender, SIGNAL(enabledChanged(_Bool)), that, SLOT(slot_proxy_func__ZN15QGraphicsEffect14enabledChangedEb(bool arg0)));
  return that;
}
extern "C"
void QGraphicsEffect_SlotProxy_disconnect__ZN15QGraphicsEffect14enabledChangedEb(QGraphicsEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsDropShadowEffect_SlotProxy here
class QGraphicsDropShadowEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsDropShadowEffect_SlotProxy():QObject(){}

public slots:
  // blurRadiusChanged(qreal)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // colorChanged(const class QColor &)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public slots:
  // offsetChanged(const class QPointF &)
  void slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0);
public:
  void (*slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF)(void* rsfptr, const QPointF & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsDropShadowEffect_SlotProxy* QGraphicsDropShadowEffect_SlotProxy_new()
  {
    return new QGraphicsDropShadowEffect_SlotProxy();
  }
};

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(blurRadiusChanged(qreal)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(colorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsDropShadowEffect_SlotProxy::slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0) {
  if (this->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF != NULL) {
    // do smth...
    this->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsDropShadowEffect_SlotProxy_connect__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsDropShadowEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF = (decltype(that->slot_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF))ffifptr;
  QObject::connect((QGraphicsDropShadowEffect*)sender, SIGNAL(offsetChanged(const class QPointF &)), that, SLOT(slot_proxy_func__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(const QPointF & arg0)));
  return that;
}
extern "C"
void QGraphicsDropShadowEffect_SlotProxy_disconnect__ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(QGraphicsDropShadowEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsOpacityEffect_SlotProxy here
class QGraphicsOpacityEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsOpacityEffect_SlotProxy():QObject(){}

public slots:
  // opacityChanged(qreal)
  void slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0);
public:
  void (*slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // opacityMaskChanged(const class QBrush &)
  void slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0);
public:
  void (*slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush)(void* rsfptr, const QBrush & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsOpacityEffect_SlotProxy* QGraphicsOpacityEffect_SlotProxy_new()
  {
    return new QGraphicsOpacityEffect_SlotProxy();
  }
};

void QGraphicsOpacityEffect_SlotProxy::slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0) {
  if (this->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsOpacityEffect_SlotProxy_connect__ZN22QGraphicsOpacityEffect14opacityChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsOpacityEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd = (decltype(that->slot_func__ZN22QGraphicsOpacityEffect14opacityChangedEd))ffifptr;
  QObject::connect((QGraphicsOpacityEffect*)sender, SIGNAL(opacityChanged(qreal)), that, SLOT(slot_proxy_func__ZN22QGraphicsOpacityEffect14opacityChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsOpacityEffect_SlotProxy_disconnect__ZN22QGraphicsOpacityEffect14opacityChangedEd(QGraphicsOpacityEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsOpacityEffect_SlotProxy::slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0) {
  if (this->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush != NULL) {
    // do smth...
    this->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsOpacityEffect_SlotProxy_connect__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsOpacityEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush = (decltype(that->slot_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush))ffifptr;
  QObject::connect((QGraphicsOpacityEffect*)sender, SIGNAL(opacityMaskChanged(const class QBrush &)), that, SLOT(slot_proxy_func__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(const QBrush & arg0)));
  return that;
}
extern "C"
void QGraphicsOpacityEffect_SlotProxy_disconnect__ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(QGraphicsOpacityEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsBlurEffect_SlotProxy here
class QGraphicsBlurEffect_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsBlurEffect_SlotProxy():QObject(){}

public slots:
  // blurHintsChanged(BlurHints)
  void slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0);
public:
  void (*slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE)(void* rsfptr, QGraphicsBlurEffect::BlurHints arg0) = NULL;
public slots:
  // blurRadiusChanged(qreal)
  void slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0);
public:
  void (*slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd)(void* rsfptr, qreal arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicseffect.moc"

extern "C" {
  QGraphicsBlurEffect_SlotProxy* QGraphicsBlurEffect_SlotProxy_new()
  {
    return new QGraphicsBlurEffect_SlotProxy();
  }
};

void QGraphicsBlurEffect_SlotProxy::slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0) {
  if (this->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE != NULL) {
    // do smth...
    this->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsBlurEffect_SlotProxy_connect__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsBlurEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE = (decltype(that->slot_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE))ffifptr;
  QObject::connect((QGraphicsBlurEffect*)sender, SIGNAL(blurHintsChanged(BlurHints)), that, SLOT(slot_proxy_func__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect::BlurHints arg0)));
  return that;
}
extern "C"
void QGraphicsBlurEffect_SlotProxy_disconnect__ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(QGraphicsBlurEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsBlurEffect_SlotProxy::slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0) {
  if (this->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QGraphicsBlurEffect_SlotProxy_connect__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsBlurEffect_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd = (decltype(that->slot_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd))ffifptr;
  QObject::connect((QGraphicsBlurEffect*)sender, SIGNAL(blurRadiusChanged(qreal)), that, SLOT(slot_proxy_func__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QGraphicsBlurEffect_SlotProxy_disconnect__ZN19QGraphicsBlurEffect17blurRadiusChangedEd(QGraphicsBlurEffect_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

