// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qwindow.h
// dst-file: /src/gui/qwindow.cxx
//

// header block begin =>
#include <qwindow.h>

extern "C" {

int QWindow_Class_Size()
{
  return sizeof(QWindow);
}

// ~QWindow()
void dedtor_ZN7QWindowD0Ev(QWindow* that)
{
  QWindow* rthis = (QWindow*)that;
  delete rthis;
}

// QWindow(class QScreen *)
QWindow* dector_ZN7QWindowC1EP7QScreen(QScreen * screen)
{
  // static_assert(sizeof(QWindow) == 32, "tyszerr");
  QWindow* rthis = new QWindow(screen);
  return rthis;
}

// QWindow(class QWindow *)
QWindow* dector_ZN7QWindowC1EPS_(QWindow * parent)
{
  // static_assert(sizeof(QWindow) == 32, "tyszerr");
  QWindow* rthis = new QWindow(parent);
  return rthis;
}

  // proto:  int QWindow::minimumHeight();
int demth_ZNK7QWindow13minimumHeightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->minimumHeight();
}

  // proto:  int QWindow::maximumHeight();
int demth_ZNK7QWindow13maximumHeightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->maximumHeight();
}

  // proto:  int QWindow::y();
int demth_ZNK7QWindow1yEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->y();
}

  // proto:  int QWindow::width();
int demth_ZNK7QWindow5widthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->width();
}

  // proto:  int QWindow::minimumWidth();
int demth_ZNK7QWindow12minimumWidthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->minimumWidth();
}

  // proto:  int QWindow::x();
int demth_ZNK7QWindow1xEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->x();
}

  // proto:  int QWindow::height();
int demth_ZNK7QWindow6heightEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->height();
}

  // proto:  QSize QWindow::size();
QSize* demth_ZNK7QWindow4sizeEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  auto recret = cthat->size();
  return new QSize(recret);
}

  // proto:  int QWindow::maximumWidth();
int demth_ZNK7QWindow12maximumWidthEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  return cthat->maximumWidth();
}

  // proto:  QPoint QWindow::position();
QPoint* demth_ZNK7QWindow8positionEv(void *that)
{
  QWindow *cthat = (QWindow *)that;
  auto recret = cthat->position();
  return new QPoint(recret);
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
// QWindow_SlotProxy here
class QWindow_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QWindow_SlotProxy():QObject(){}

public slots:
  // screenChanged(class QScreen *)
  void slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN7QWindow13screenChangedEP7QScreen)(QScreen * arg0) = NULL;
public slots:
  // modalityChanged(Qt::WindowModality)
  void slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0);
public:
  void (*slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE)(Qt::WindowModality arg0) = NULL;
public slots:
  // windowStateChanged(Qt::WindowState)
  void slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0);
public:
  void (*slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE)(Qt::WindowState arg0) = NULL;
public slots:
  // windowTitleChanged(const class QString &)
  void slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN7QWindow18windowTitleChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // xChanged(int)
  void slot_proxy_func__ZN7QWindow8xChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8xChangedEi)(int arg0) = NULL;
public slots:
  // yChanged(int)
  void slot_proxy_func__ZN7QWindow8yChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8yChangedEi)(int arg0) = NULL;
public slots:
  // widthChanged(int)
  void slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow12widthChangedEi)(int arg0) = NULL;
public slots:
  // heightChanged(int)
  void slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow13heightChangedEi)(int arg0) = NULL;
public slots:
  // minimumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19minimumWidthChangedEi)(int arg0) = NULL;
public slots:
  // minimumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20minimumHeightChangedEi)(int arg0) = NULL;
public slots:
  // maximumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19maximumWidthChangedEi)(int arg0) = NULL;
public slots:
  // maximumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20maximumHeightChangedEi)(int arg0) = NULL;
public slots:
  // visibleChanged(_Bool)
  void slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0);
public:
  void (*slot_func__ZN7QWindow14visibleChangedEb)(bool arg0) = NULL;
public slots:
  // visibilityChanged(class QWindow::Visibility)
  void slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0);
public:
  void (*slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE)(QWindow::Visibility arg0) = NULL;
public slots:
  // activeChanged()
  void slot_proxy_func__ZN7QWindow13activeChangedEv();
public:
  void (*slot_func__ZN7QWindow13activeChangedEv)() = NULL;
public slots:
  // contentOrientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE)(Qt::ScreenOrientation arg0) = NULL;
public slots:
  // focusObjectChanged(class QObject *)
  void slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN7QWindow18focusObjectChangedEP7QObject)(QObject * arg0) = NULL;
public slots:
  // opacityChanged(qreal)
  void slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QWindow14opacityChangedEd)(qreal arg0) = NULL;
};
#include "src/gui/qwindow.moc"

extern "C" {
  QWindow_SlotProxy* QWindow_SlotProxy_new()
  {
    return new QWindow_SlotProxy();
  }
};

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN7QWindow13screenChangedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13screenChangedEP7QScreen(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13screenChangedEP7QScreen(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow13screenChangedEP7QScreen = (decltype(that->slot_func__ZN7QWindow13screenChangedEP7QScreen))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(screenChanged(class QScreen *)), that, SLOT(slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13screenChangedEP7QScreen(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0) {
  if (this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE = (decltype(that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(modalityChanged(Qt::WindowModality)), that, SLOT(slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0) {
  if (this->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE = (decltype(that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowStateChanged(Qt::WindowState)), that, SLOT(slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN7QWindow18windowTitleChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18windowTitleChangedERK7QString(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowTitleChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow18windowTitleChangedERK7QString = (decltype(that->slot_func__ZN7QWindow18windowTitleChangedERK7QString))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowTitleChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowTitleChangedERK7QString(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8xChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8xChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8xChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8xChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow8xChangedEi = (decltype(that->slot_func__ZN7QWindow8xChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(xChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8xChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8xChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8yChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8yChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8yChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8yChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow8yChangedEi = (decltype(that->slot_func__ZN7QWindow8yChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(yChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8yChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8yChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow12widthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow12widthChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow12widthChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow12widthChangedEi = (decltype(that->slot_func__ZN7QWindow12widthChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(widthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow12widthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow13heightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13heightChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13heightChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow13heightChangedEi = (decltype(that->slot_func__ZN7QWindow13heightChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(heightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13heightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19minimumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19minimumWidthChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19minimumWidthChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow19minimumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19minimumWidthChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19minimumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20minimumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20minimumHeightChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20minimumHeightChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow20minimumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20minimumHeightChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20minimumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19maximumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19maximumWidthChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19maximumWidthChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow19maximumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19maximumWidthChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19maximumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20maximumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20maximumHeightChangedEi(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20maximumHeightChangedEi(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow20maximumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20maximumHeightChangedEi))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20maximumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0) {
  if (this->slot_func__ZN7QWindow14visibleChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14visibleChangedEb(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14visibleChangedEb(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow14visibleChangedEb = (decltype(that->slot_func__ZN7QWindow14visibleChangedEb))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibleChanged(_Bool)), that, SLOT(slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14visibleChangedEb(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0) {
  if (this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE = (decltype(that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibilityChanged(class QWindow::Visibility)), that, SLOT(slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13activeChangedEv() {
  if (this->slot_func__ZN7QWindow13activeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13activeChangedEv();
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13activeChangedEv(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow13activeChangedEv = (decltype(that->slot_func__ZN7QWindow13activeChangedEv))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(activeChanged()), that, SLOT(slot_proxy_func__ZN7QWindow13activeChangedEv()));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13activeChangedEv(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(contentOrientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18focusObjectChangedEP7QObject(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject = (decltype(that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(focusObjectChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18focusObjectChangedEP7QObject(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QWindow14opacityChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14opacityChangedEd(arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14opacityChangedEd(QObject* sender, void* fptr){
  auto that = new QWindow_SlotProxy();
  that->slot_func__ZN7QWindow14opacityChangedEd = (decltype(that->slot_func__ZN7QWindow14opacityChangedEd))fptr;
  QObject::connect((QWindow*)sender, SIGNAL(opacityChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14opacityChangedEd(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

