// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qguiapplication.h
// dst-file: /src/gui/qguiapplication.cxx
//

// header block begin =>
#include <qguiapplication.h>

extern "C" {

int QGuiApplication_Class_Size()
{
  return sizeof(QGuiApplication);
}

// ~QGuiApplication()
void dedtor_ZN15QGuiApplicationD0Ev(QGuiApplication* that)
{
  QGuiApplication* rthis = (QGuiApplication*)that;
  delete rthis;
}

// QGuiApplication(int &, char **, int)
QGuiApplication* dector_ZN15QGuiApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QGuiApplication) == 32, "tyszerr");
  QGuiApplication* rthis = new QGuiApplication(argc, argv, arg3);
  return rthis;
}

  // proto: static bool QGuiApplication::isRightToLeft();
bool demth_ZN15QGuiApplication13isRightToLeftEv(void *that)
{
  QGuiApplication *cthat = (QGuiApplication *)that;
  return cthat->isRightToLeft();
}

  // proto: static bool QGuiApplication::isLeftToRight();
bool demth_ZN15QGuiApplication13isLeftToRightEv(void *that)
{
  QGuiApplication *cthat = (QGuiApplication *)that;
  return cthat->isLeftToRight();
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
// QGuiApplication_SlotProxy here
class QGuiApplication_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGuiApplication_SlotProxy():QObject(){}

public slots:
  // focusObjectChanged(class QObject *)
  void slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // fontDatabaseChanged()
  void slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv();
public:
  void (*slot_func__ZN15QGuiApplication19fontDatabaseChangedEv)(void* rsfptr) = NULL;
public slots:
  // applicationStateChanged(Qt::ApplicationState)
  void slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0);
public:
  void (*slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE)(void* rsfptr, Qt::ApplicationState arg0) = NULL;
public slots:
  // layoutDirectionChanged(Qt::LayoutDirection)
  void slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0);
public:
  void (*slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE)(void* rsfptr, Qt::LayoutDirection arg0) = NULL;
public slots:
  // commitDataRequest(class QSessionManager &)
  void slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0);
public:
  void (*slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager)(void* rsfptr, QSessionManager & arg0) = NULL;
public slots:
  // paletteChanged(const class QPalette &)
  void slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0);
public:
  void (*slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette)(void* rsfptr, const QPalette & arg0) = NULL;
public slots:
  // screenRemoved(class QScreen *)
  void slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // focusWindowChanged(class QWindow *)
  void slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0);
public:
  void (*slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow)(void* rsfptr, QWindow * arg0) = NULL;
public slots:
  // lastWindowClosed()
  void slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv();
public:
  void (*slot_func__ZN15QGuiApplication16lastWindowClosedEv)(void* rsfptr) = NULL;
public slots:
  // screenAdded(class QScreen *)
  void slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN15QGuiApplication11screenAddedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // saveStateRequest(class QSessionManager &)
  void slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0);
public:
  void (*slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager)(void* rsfptr, QSessionManager & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qguiapplication.moc"

extern "C" {
  QGuiApplication_SlotProxy* QGuiApplication_SlotProxy_new()
  {
    return new QGuiApplication_SlotProxy();
  }
};

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject = (decltype(that->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(focusObjectChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication18focusObjectChangedEP7QObject(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv() {
  if (this->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication19fontDatabaseChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv = (decltype(that->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(fontDatabaseChanged()), that, SLOT(slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv()));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication19fontDatabaseChangedEv(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0) {
  if (this->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE = (decltype(that->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(applicationStateChanged(Qt::ApplicationState)), that, SLOT(slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0) {
  if (this->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE = (decltype(that->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(layoutDirectionChanged(Qt::LayoutDirection)), that, SLOT(slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0) {
  if (this->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager = (decltype(that->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(commitDataRequest(class QSessionManager &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0) {
  if (this->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication14paletteChangedERK8QPalette(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette = (decltype(that->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(paletteChanged(const class QPalette &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication14paletteChangedERK8QPalette(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication13screenRemovedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen = (decltype(that->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(screenRemoved(class QScreen *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication13screenRemovedEP7QScreen(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0) {
  if (this->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow = (decltype(that->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(focusWindowChanged(class QWindow *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv() {
  if (this->slot_func__ZN15QGuiApplication16lastWindowClosedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication16lastWindowClosedEv(this->rsfptr);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication16lastWindowClosedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication16lastWindowClosedEv = (decltype(that->slot_func__ZN15QGuiApplication16lastWindowClosedEv))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(lastWindowClosed()), that, SLOT(slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv()));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication16lastWindowClosedEv(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication11screenAddedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen = (decltype(that->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(screenAdded(class QScreen *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication11screenAddedEP7QScreen(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0) {
  if (this->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager = (decltype(that->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(saveStateRequest(class QSessionManager &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

