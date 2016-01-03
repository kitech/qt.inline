// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qtoolbar.h
// dst-file: /src/widgets/qtoolbar.cxx
//

// header block begin =>
#include <qtoolbar.h>

extern "C" {

int QToolBar_Class_Size()
{
  return sizeof(QToolBar);
}

// QToolBar(const class QString &, class QWidget *)
QToolBar* dector_ZN8QToolBarC1ERK7QStringP7QWidget(const QString & title, QWidget * parent)
{
  // static_assert(sizeof(QToolBar) == 32, "tyszerr");
  QToolBar* rthis = new QToolBar(title, parent);
  return rthis;
}

// QToolBar(class QWidget *)
QToolBar* dector_ZN8QToolBarC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QToolBar) == 32, "tyszerr");
  QToolBar* rthis = new QToolBar(parent);
  return rthis;
}

// ~QToolBar()
void dedtor_ZN8QToolBarD0Ev(QToolBar* that)
{
  QToolBar* rthis = (QToolBar*)that;
  delete rthis;
}

  // proto:  QAction * QToolBar::actionAt(int x, int y);
QAction * demth_ZNK8QToolBar8actionAtEii(void *that, int x, int y)
{
  QToolBar *cthat = (QToolBar *)that;
  return cthat->actionAt(x, y);
}

  // proto:  bool QToolBar::isAreaAllowed(Qt::ToolBarArea area);
bool demth_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE(void *that, Qt::ToolBarArea area)
{
  QToolBar *cthat = (QToolBar *)that;
  return cthat->isAreaAllowed(area);
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
// QToolBar_SlotProxy here
class QToolBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QToolBar_SlotProxy():QObject(){}

public slots:
  // actionTriggered(class QAction *)
  void slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QToolBar15actionTriggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // movableChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar14movableChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // visibilityChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar17visibilityChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN8QToolBar15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public slots:
  // orientationChanged(Qt::Orientation)
  void slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0);
public:
  void (*slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE)(void* rsfptr, Qt::Orientation arg0) = NULL;
public slots:
  // toolButtonStyleChanged(Qt::ToolButtonStyle)
  void slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0);
public:
  void (*slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE)(void* rsfptr, Qt::ToolButtonStyle arg0) = NULL;
public slots:
  // topLevelChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar15topLevelChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // allowedAreasChanged(Qt::ToolBarAreas)
  void slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0);
public:
  void (*slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE)(void* rsfptr, Qt::ToolBarAreas arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtoolbar.moc"

extern "C" {
  QToolBar_SlotProxy* QToolBar_SlotProxy_new()
  {
    return new QToolBar_SlotProxy();
  }
};

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QToolBar15actionTriggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15actionTriggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15actionTriggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15actionTriggeredEP7QAction = (decltype(that->slot_func__ZN8QToolBar15actionTriggeredEP7QAction))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(actionTriggered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15actionTriggeredEP7QAction(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar14movableChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar14movableChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar14movableChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar14movableChangedEb = (decltype(that->slot_func__ZN8QToolBar14movableChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(movableChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar14movableChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar17visibilityChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar17visibilityChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar17visibilityChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar17visibilityChangedEb = (decltype(that->slot_func__ZN8QToolBar17visibilityChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(visibilityChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar17visibilityChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15iconSizeChangedERK5QSize(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0) {
  if (this->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE = (decltype(that->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(orientationChanged(Qt::Orientation)), that, SLOT(slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0) {
  if (this->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE = (decltype(that->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), that, SLOT(slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar15topLevelChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15topLevelChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15topLevelChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15topLevelChangedEb = (decltype(that->slot_func__ZN8QToolBar15topLevelChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(topLevelChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15topLevelChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0) {
  if (this->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE = (decltype(that->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(allowedAreasChanged(Qt::ToolBarAreas)), that, SLOT(slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

