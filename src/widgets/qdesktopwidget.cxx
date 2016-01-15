#include <qrect.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qdesktopwidget.h
// dst-file: /src/widgets/qdesktopwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qdesktopwidget.h>

extern "C" {

int QDesktopWidget_Class_Size()
{
  return sizeof(QDesktopWidget);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qdesktopwidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 68, column 17>
//   // proto:  const QRect QDesktopWidget::screenGeometry(const QPoint & point);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QDesktopWidget*)0)->screenGeometry(arg1);
  };
}
// _ZNK14QDesktopWidget14screenGeometryERK6QPoint screenGeometry(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 58, column 9>
//   // proto:  int QDesktopWidget::screenCount();
if (false) {
  auto f = []() {
    ((QDesktopWidget*)0)->screenCount();
  };
}
// _ZNK14QDesktopWidget11screenCountEv screenCount()
// <SourceLocation file '/usr/include/qt/QtWidgets/qdesktopwidget.h', line 73, column 17>
//   // proto:  const QRect QDesktopWidget::availableGeometry(const QPoint & point);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QDesktopWidget*)0)->availableGeometry(arg1);
  };
}
// _ZNK14QDesktopWidget17availableGeometryERK6QPoint availableGeometry(const class QPoint &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

