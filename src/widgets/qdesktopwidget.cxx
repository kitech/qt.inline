// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qdesktopwidget.h
// dst-file: /src/widgets/qdesktopwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdesktopwidget.h>


#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qdesktopwidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 68, column 17>
//   // proto:  const QRect QDesktopWidget::screenGeometry(const QPoint & point);
if (true) {
  auto f = [](QDesktopWidget flythis, const QPoint & arg1) {
    ((QDesktopWidget*)0)->screenGeometry(arg1);
    flythis.screenGeometry(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QDesktopWidget14screenGeometryERK6QPoint screenGeometry(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 58, column 9>
//   // proto:  int QDesktopWidget::screenCount();
if (true) {
  auto f = [](QDesktopWidget flythis) {
    ((QDesktopWidget*)0)->screenCount();
    flythis.screenCount();
  };
  if (f == nullptr){}
}
// _ZNK14QDesktopWidget11screenCountEv screenCount()
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 73, column 17>
//   // proto:  const QRect QDesktopWidget::availableGeometry(const QPoint & point);
if (true) {
  auto f = [](QDesktopWidget flythis, const QPoint & arg1) {
    ((QDesktopWidget*)0)->availableGeometry(arg1);
    flythis.availableGeometry(arg1);
  };
  if (f == nullptr){}
}
// _ZNK14QDesktopWidget17availableGeometryERK6QPoint availableGeometry(const class QPoint &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDesktopWidget_Class_Size()
{
  return sizeof(QDesktopWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 68, column 17>
//   // proto:  const QRect QDesktopWidget::screenGeometry(const QPoint & point);
// _ZNK14QDesktopWidget14screenGeometryERK6QPoint screenGeometry(const class QPoint &)
extern "C"
QRect*
C_ZNK14QDesktopWidget14screenGeometryERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenGeometry(*((const QPoint*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 64, column 14>
//   // proto:  QWidget * QDesktopWidget::screen(int screen);
// _ZN14QDesktopWidget6screenEi screen(int)
extern "C"
void*
C_ZN14QDesktopWidget6screenEi(void *qthis,
int arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screen(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 67, column 17>
//   // proto:  const QRect QDesktopWidget::screenGeometry(const QWidget * widget);
// _ZNK14QDesktopWidget14screenGeometryEPK7QWidget screenGeometry(const class QWidget *)
extern "C"
QRect*
C_ZNK14QDesktopWidget14screenGeometryEPK7QWidget(void *qthis,
const QWidget * arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 79, column 10>
//   // proto:  void QDesktopWidget::screenCountChanged(int );
// _ZN14QDesktopWidget18screenCountChangedEi screenCountChanged(int)
extern "C"
void
C_ZN14QDesktopWidget18screenCountChangedEi(void *qthis,
int arg1) {
  ((QDesktopWidget*)qthis)->screenCountChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 57, column 9>
//   // proto:  int QDesktopWidget::numScreens();
// _ZNK14QDesktopWidget10numScreensEv numScreens()
extern "C"
int
C_ZNK14QDesktopWidget10numScreensEv(void *qthis) {
  auto ret =
  ((QDesktopWidget*)qthis)->numScreens();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QDesktopWidget::~QDesktopWidget();
extern "C"
void C_ZN14QDesktopWidgetD2Ev(void *qthis) {
  delete (QDesktopWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 66, column 17>
//   // proto:  const QRect QDesktopWidget::screenGeometry(int screen);
// _ZNK14QDesktopWidget14screenGeometryEi screenGeometry(int)
extern "C"
QRect*
C_ZNK14QDesktopWidget14screenGeometryEi(void *qthis,
int arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 72, column 17>
//   // proto:  const QRect QDesktopWidget::availableGeometry(const QWidget * widget);
// _ZNK14QDesktopWidget17availableGeometryEPK7QWidget availableGeometry(const class QWidget *)
extern "C"
QRect*
C_ZNK14QDesktopWidget17availableGeometryEPK7QWidget(void *qthis,
const QWidget * arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->availableGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 77, column 10>
//   // proto:  void QDesktopWidget::resized(int );
// _ZN14QDesktopWidget7resizedEi resized(int)
extern "C"
void
C_ZN14QDesktopWidget7resizedEi(void *qthis,
int arg1) {
  ((QDesktopWidget*)qthis)->resized(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 62, column 9>
//   // proto:  int QDesktopWidget::screenNumber(const QPoint & );
// _ZNK14QDesktopWidget12screenNumberERK6QPoint screenNumber(const class QPoint &)
extern "C"
int
C_ZNK14QDesktopWidget12screenNumberERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenNumber(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 58, column 9>
//   // proto:  int QDesktopWidget::screenCount();
// _ZNK14QDesktopWidget11screenCountEv screenCount()
extern "C"
int
C_ZNK14QDesktopWidget11screenCountEv(void *qthis) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 55, column 10>
//   // proto:  bool QDesktopWidget::isVirtualDesktop();
// _ZNK14QDesktopWidget16isVirtualDesktopEv isVirtualDesktop()
extern "C"
bool
C_ZNK14QDesktopWidget16isVirtualDesktopEv(void *qthis) {
  auto ret =
  ((QDesktopWidget*)qthis)->isVirtualDesktop();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 61, column 9>
//   // proto:  int QDesktopWidget::screenNumber(const QWidget * widget);
// _ZNK14QDesktopWidget12screenNumberEPK7QWidget screenNumber(const class QWidget *)
extern "C"
int
C_ZNK14QDesktopWidget12screenNumberEPK7QWidget(void *qthis,
const QWidget * arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->screenNumber(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 59, column 9>
//   // proto:  int QDesktopWidget::primaryScreen();
// _ZNK14QDesktopWidget13primaryScreenEv primaryScreen()
extern "C"
int
C_ZNK14QDesktopWidget13primaryScreenEv(void *qthis) {
  auto ret =
  ((QDesktopWidget*)qthis)->primaryScreen();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 52, column 5>
//   // proto:  void QDesktopWidget::QDesktopWidget();
extern "C"
QDesktopWidget*
C_ZN14QDesktopWidgetC2Ev() {
  auto ret = new QDesktopWidget();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 73, column 17>
//   // proto:  const QRect QDesktopWidget::availableGeometry(const QPoint & point);
// _ZNK14QDesktopWidget17availableGeometryERK6QPoint availableGeometry(const class QPoint &)
extern "C"
QRect*
C_ZNK14QDesktopWidget17availableGeometryERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->availableGeometry(*((const QPoint*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 71, column 17>
//   // proto:  const QRect QDesktopWidget::availableGeometry(int screen);
// _ZNK14QDesktopWidget17availableGeometryEi availableGeometry(int)
extern "C"
QRect*
C_ZNK14QDesktopWidget17availableGeometryEi(void *qthis,
int arg1) {
  auto ret =
  ((QDesktopWidget*)qthis)->availableGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 47, column 5>
//   // proto:  const QMetaObject * QDesktopWidget::metaObject();
// _ZNK14QDesktopWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QDesktopWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QDesktopWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 78, column 10>
//   // proto:  void QDesktopWidget::workAreaResized(int );
// _ZN14QDesktopWidget15workAreaResizedEi workAreaResized(int)
extern "C"
void
C_ZN14QDesktopWidget15workAreaResizedEi(void *qthis,
int arg1) {
  ((QDesktopWidget*)qthis)->workAreaResized(arg1);
}
// <= ext block end

// body block begin =>
// QDesktopWidget_SlotProxy here
class QDesktopWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDesktopWidget_SlotProxy():QObject(){}

public slots:
  // screenCountChanged(int)
  void slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget18screenCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // resized(int)
  void slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget7resizedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // workAreaResized(int)
  void slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0);
public:
  void (*slot_func__ZN14QDesktopWidget15workAreaResizedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdesktopwidget.moc"

extern "C" {
  QDesktopWidget_SlotProxy* QDesktopWidget_SlotProxy_new()
  {
    return new QDesktopWidget_SlotProxy();
  }
};

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget18screenCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget18screenCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget18screenCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QDesktopWidget18screenCountChangedEi = (decltype(that->slot_func__ZN14QDesktopWidget18screenCountChangedEi))ffifptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(screenCountChanged(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget18screenCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget18screenCountChangedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget7resizedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget7resizedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget7resizedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QDesktopWidget7resizedEi = (decltype(that->slot_func__ZN14QDesktopWidget7resizedEi))ffifptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(resized(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget7resizedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget7resizedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDesktopWidget_SlotProxy::slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0) {
  if (this->slot_func__ZN14QDesktopWidget15workAreaResizedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QDesktopWidget15workAreaResizedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDesktopWidget_SlotProxy_connect__ZN14QDesktopWidget15workAreaResizedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDesktopWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QDesktopWidget15workAreaResizedEi = (decltype(that->slot_func__ZN14QDesktopWidget15workAreaResizedEi))ffifptr;
  QObject::connect((QDesktopWidget*)sender, SIGNAL(workAreaResized(int)), that, SLOT(slot_proxy_func__ZN14QDesktopWidget15workAreaResizedEi(int arg0)));
  return that;
}
extern "C"
void QDesktopWidget_SlotProxy_disconnect__ZN14QDesktopWidget15workAreaResizedEi(QDesktopWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

