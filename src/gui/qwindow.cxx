#include <qpoint.h>
#include <qsize.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qwindow.h
// dst-file: /src/gui/qwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qwindow.h>

extern "C" {

int QWindow_Class_Size()
{
  return sizeof(QWindow);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qwindow_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 189, column 16>
//   // proto:  int QWindow::minimumHeight();
if (false) {
  auto f = []() {
    ((QWindow*)0)->minimumHeight();
  };
}
// _ZNK7QWindow13minimumHeightEv minimumHeight()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 191, column 16>
//   // proto:  int QWindow::maximumHeight();
if (false) {
  auto f = []() {
    ((QWindow*)0)->maximumHeight();
  };
}
// _ZNK7QWindow13maximumHeightEv maximumHeight()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 216, column 16>
//   // proto:  int QWindow::y();
if (false) {
  auto f = []() {
    ((QWindow*)0)->y();
  };
}
// _ZNK7QWindow1yEv y()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 213, column 16>
//   // proto:  int QWindow::width();
if (false) {
  auto f = []() {
    ((QWindow*)0)->width();
  };
}
// _ZNK7QWindow5widthEv width()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 188, column 16>
//   // proto:  int QWindow::minimumWidth();
if (false) {
  auto f = []() {
    ((QWindow*)0)->minimumWidth();
  };
}
// _ZNK7QWindow12minimumWidthEv minimumWidth()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 215, column 16>
//   // proto:  int QWindow::x();
if (false) {
  auto f = []() {
    ((QWindow*)0)->x();
  };
}
// _ZNK7QWindow1xEv x()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 214, column 16>
//   // proto:  int QWindow::height();
if (false) {
  auto f = []() {
    ((QWindow*)0)->height();
  };
}
// _ZNK7QWindow6heightEv height()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 218, column 11>
//   // proto:  QSize QWindow::size();
if (false) {
  auto f = []() {
    ((QWindow*)0)->size();
  };
}
// _ZNK7QWindow4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 190, column 16>
//   // proto:  int QWindow::maximumWidth();
if (false) {
  auto f = []() {
    ((QWindow*)0)->maximumWidth();
  };
}
// _ZNK7QWindow12maximumWidthEv maximumWidth()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 219, column 19>
//   // proto:  QPoint QWindow::position();
if (false) {
  auto f = []() {
    ((QWindow*)0)->position();
  };
}
// _ZNK7QWindow8positionEv position()
} // <= main block end

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
  // xChanged(int)
  void slot_proxy_func__ZN7QWindow8xChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8xChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // widthChanged(int)
  void slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow12widthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // contentOrientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // modalityChanged(Qt::WindowModality)
  void slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0);
public:
  void (*slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE)(void* rsfptr, Qt::WindowModality arg0) = NULL;
public slots:
  // windowStateChanged(Qt::WindowState)
  void slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0);
public:
  void (*slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE)(void* rsfptr, Qt::WindowState arg0) = NULL;
public slots:
  // visibilityChanged(class QWindow::Visibility)
  void slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0);
public:
  void (*slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE)(void* rsfptr, QWindow::Visibility arg0) = NULL;
public slots:
  // opacityChanged(qreal)
  void slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QWindow14opacityChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // yChanged(int)
  void slot_proxy_func__ZN7QWindow8yChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8yChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // minimumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20minimumHeightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // heightChanged(int)
  void slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow13heightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // maximumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19maximumWidthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // screenChanged(class QScreen *)
  void slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN7QWindow13screenChangedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // minimumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19minimumWidthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // windowTitleChanged(const class QString &)
  void slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN7QWindow18windowTitleChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // focusObjectChanged(class QObject *)
  void slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN7QWindow18focusObjectChangedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // visibleChanged(_Bool)
  void slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0);
public:
  void (*slot_func__ZN7QWindow14visibleChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // maximumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20maximumHeightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // activeChanged()
  void slot_proxy_func__ZN7QWindow13activeChangedEv();
public:
  void (*slot_func__ZN7QWindow13activeChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qwindow.moc"

extern "C" {
  QWindow_SlotProxy* QWindow_SlotProxy_new()
  {
    return new QWindow_SlotProxy();
  }
};

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8xChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8xChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8xChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8xChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow8xChangedEi = (decltype(that->slot_func__ZN7QWindow8xChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(xChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8xChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8xChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow12widthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow12widthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow12widthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow12widthChangedEi = (decltype(that->slot_func__ZN7QWindow12widthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(widthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow12widthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(contentOrientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0) {
  if (this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE = (decltype(that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE))ffifptr;
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
    this->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE = (decltype(that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowStateChanged(Qt::WindowState)), that, SLOT(slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0) {
  if (this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE = (decltype(that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibilityChanged(class QWindow::Visibility)), that, SLOT(slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QWindow14opacityChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14opacityChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14opacityChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow14opacityChangedEd = (decltype(that->slot_func__ZN7QWindow14opacityChangedEd))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(opacityChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14opacityChangedEd(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8yChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8yChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8yChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8yChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow8yChangedEi = (decltype(that->slot_func__ZN7QWindow8yChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(yChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8yChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8yChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20minimumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20minimumHeightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20minimumHeightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow20minimumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20minimumHeightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20minimumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow13heightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13heightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13heightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13heightChangedEi = (decltype(that->slot_func__ZN7QWindow13heightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(heightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13heightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19maximumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19maximumWidthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19maximumWidthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow19maximumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19maximumWidthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19maximumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN7QWindow13screenChangedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13screenChangedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13screenChangedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13screenChangedEP7QScreen = (decltype(that->slot_func__ZN7QWindow13screenChangedEP7QScreen))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(screenChanged(class QScreen *)), that, SLOT(slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13screenChangedEP7QScreen(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19minimumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19minimumWidthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19minimumWidthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow19minimumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19minimumWidthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19minimumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN7QWindow18windowTitleChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18windowTitleChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowTitleChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18windowTitleChangedERK7QString = (decltype(that->slot_func__ZN7QWindow18windowTitleChangedERK7QString))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowTitleChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowTitleChangedERK7QString(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18focusObjectChangedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject = (decltype(that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(focusObjectChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18focusObjectChangedEP7QObject(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0) {
  if (this->slot_func__ZN7QWindow14visibleChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14visibleChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14visibleChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow14visibleChangedEb = (decltype(that->slot_func__ZN7QWindow14visibleChangedEb))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibleChanged(_Bool)), that, SLOT(slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14visibleChangedEb(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20maximumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20maximumHeightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20maximumHeightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow20maximumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20maximumHeightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20maximumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13activeChangedEv() {
  if (this->slot_func__ZN7QWindow13activeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13activeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13activeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13activeChangedEv = (decltype(that->slot_func__ZN7QWindow13activeChangedEv))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(activeChanged()), that, SLOT(slot_proxy_func__ZN7QWindow13activeChangedEv()));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13activeChangedEv(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

