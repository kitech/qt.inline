// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qopenglwidget.h
// dst-file: /src/widgets/qopenglwidget.cxx
//

// header block begin =>
#include <qopenglwidget.h>

extern "C" {

int QOpenGLWidget_Class_Size()
{
  return sizeof(QOpenGLWidget);
}

// ~QOpenGLWidget()
void dedtor_ZN13QOpenGLWidgetD0Ev(QOpenGLWidget* that)
{
  QOpenGLWidget* rthis = (QOpenGLWidget*)that;
  delete rthis;
}

// QOpenGLWidget(class QWidget *, Qt::WindowFlags)
QOpenGLWidget* dector_ZN13QOpenGLWidgetC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QOpenGLWidget) == 32, "tyszerr");
  QOpenGLWidget* rthis = new QOpenGLWidget(parent, f);
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
// QOpenGLWidget_SlotProxy here
class QOpenGLWidget_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QOpenGLWidget_SlotProxy():QObject(){}

public slots:
  // aboutToCompose()
  void slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv();
public:
  void (*slot_func__ZN13QOpenGLWidget14aboutToComposeEv)() = NULL;
public slots:
  // frameSwapped()
  void slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv();
public:
  void (*slot_func__ZN13QOpenGLWidget12frameSwappedEv)() = NULL;
public slots:
  // aboutToResize()
  void slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv();
public:
  void (*slot_func__ZN13QOpenGLWidget13aboutToResizeEv)() = NULL;
public slots:
  // resized()
  void slot_proxy_func__ZN13QOpenGLWidget7resizedEv();
public:
  void (*slot_func__ZN13QOpenGLWidget7resizedEv)() = NULL;
};
#include "src/widgets/qopenglwidget.moc"

extern "C" {
  QOpenGLWidget_SlotProxy* QOpenGLWidget_SlotProxy_new()
  {
    return new QOpenGLWidget_SlotProxy();
  }
};

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv() {
  if (this->slot_func__ZN13QOpenGLWidget14aboutToComposeEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget14aboutToComposeEv();
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget14aboutToComposeEv(QObject* sender, void* fptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->slot_func__ZN13QOpenGLWidget14aboutToComposeEv = (decltype(that->slot_func__ZN13QOpenGLWidget14aboutToComposeEv))fptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(aboutToCompose()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget14aboutToComposeEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv() {
  if (this->slot_func__ZN13QOpenGLWidget12frameSwappedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget12frameSwappedEv();
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget12frameSwappedEv(QObject* sender, void* fptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->slot_func__ZN13QOpenGLWidget12frameSwappedEv = (decltype(that->slot_func__ZN13QOpenGLWidget12frameSwappedEv))fptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(frameSwapped()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget12frameSwappedEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv() {
  if (this->slot_func__ZN13QOpenGLWidget13aboutToResizeEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget13aboutToResizeEv();
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget13aboutToResizeEv(QObject* sender, void* fptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->slot_func__ZN13QOpenGLWidget13aboutToResizeEv = (decltype(that->slot_func__ZN13QOpenGLWidget13aboutToResizeEv))fptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(aboutToResize()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget13aboutToResizeEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget7resizedEv() {
  if (this->slot_func__ZN13QOpenGLWidget7resizedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget7resizedEv();
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget7resizedEv(QObject* sender, void* fptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->slot_func__ZN13QOpenGLWidget7resizedEv = (decltype(that->slot_func__ZN13QOpenGLWidget7resizedEv))fptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(resized()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget7resizedEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget7resizedEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

