// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qopenglwidget.h
// dst-file: /src/widgets/qopenglwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglwidget.h>


#include <qimage.h>
#include <qsurfaceformat.h>
// <= header block end

// main block begin =>
void __keep_qopenglwidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLWidget_Class_Size()
{
  return sizeof(QOpenGLWidget);
}

// <= use block end

// ext block begin =>
//   // proto:  void QOpenGLWidget::~QOpenGLWidget();
extern "C"
void C_ZN13QOpenGLWidgetD2Ev(void *qthis) {
  delete (QOpenGLWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 75, column 12>
//   // proto:  GLuint QOpenGLWidget::defaultFramebufferObject();
// _ZNK13QOpenGLWidget24defaultFramebufferObjectEv defaultFramebufferObject()
extern "C"
unsigned int
C_ZNK13QOpenGLWidget24defaultFramebufferObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->defaultFramebufferObject();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 83, column 10>
//   // proto:  void QOpenGLWidget::resized();
// _ZN13QOpenGLWidget7resizedEv resized()
extern "C"
void
C_ZN13QOpenGLWidget7resizedEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->resized();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 63, column 10>
//   // proto:  void QOpenGLWidget::setUpdateBehavior(QOpenGLWidget::UpdateBehavior updateBehavior);
// _ZN13QOpenGLWidget17setUpdateBehaviorENS_14UpdateBehaviorE setUpdateBehavior(enum QOpenGLWidget::UpdateBehavior)
extern "C"
void
C_ZN13QOpenGLWidget17setUpdateBehaviorENS_14UpdateBehaviorE(void *qthis,
QOpenGLWidget::UpdateBehavior arg1) {
  ((QOpenGLWidget*)qthis)->setUpdateBehavior(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 69, column 10>
//   // proto:  bool QOpenGLWidget::isValid();
// _ZNK13QOpenGLWidget7isValidEv isValid()
extern "C"
bool
C_ZNK13QOpenGLWidget7isValidEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 82, column 10>
//   // proto:  void QOpenGLWidget::aboutToResize();
// _ZN13QOpenGLWidget13aboutToResizeEv aboutToResize()
extern "C"
void
C_ZN13QOpenGLWidget13aboutToResizeEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->aboutToResize();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 64, column 20>
//   // proto:  QOpenGLWidget::UpdateBehavior QOpenGLWidget::updateBehavior();
// _ZNK13QOpenGLWidget14updateBehaviorEv updateBehavior()
extern "C"
QOpenGLWidget::UpdateBehavior
C_ZNK13QOpenGLWidget14updateBehaviorEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->updateBehavior();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 74, column 21>
//   // proto:  QOpenGLContext * QOpenGLWidget::context();
// _ZNK13QOpenGLWidget7contextEv context()
extern "C"
void*
C_ZNK13QOpenGLWidget7contextEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->context();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 72, column 10>
//   // proto:  void QOpenGLWidget::doneCurrent();
// _ZN13QOpenGLWidget11doneCurrentEv doneCurrent()
extern "C"
void
C_ZN13QOpenGLWidget11doneCurrentEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->doneCurrent();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 71, column 10>
//   // proto:  void QOpenGLWidget::makeCurrent();
// _ZN13QOpenGLWidget11makeCurrentEv makeCurrent()
extern "C"
void
C_ZN13QOpenGLWidget11makeCurrentEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->makeCurrent();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 77, column 12>
//   // proto:  QImage QOpenGLWidget::grabFramebuffer();
// _ZN13QOpenGLWidget15grabFramebufferEv grabFramebuffer()
extern "C"
QImage*
C_ZN13QOpenGLWidget15grabFramebufferEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->grabFramebuffer();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 60, column 14>
//   // proto:  void QOpenGLWidget::QOpenGLWidget(QWidget * parent, Qt::WindowFlags f);
extern "C"
QOpenGLWidget*
C_ZN13QOpenGLWidgetC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QOpenGLWidget(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 51, column 5>
//   // proto:  const QMetaObject * QOpenGLWidget::metaObject();
// _ZNK13QOpenGLWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QOpenGLWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 81, column 10>
//   // proto:  void QOpenGLWidget::frameSwapped();
// _ZN13QOpenGLWidget12frameSwappedEv frameSwapped()
extern "C"
void
C_ZN13QOpenGLWidget12frameSwappedEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->frameSwapped();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 80, column 10>
//   // proto:  void QOpenGLWidget::aboutToCompose();
// _ZN13QOpenGLWidget14aboutToComposeEv aboutToCompose()
extern "C"
void
C_ZN13QOpenGLWidget14aboutToComposeEv(void *qthis) {
  ((QOpenGLWidget*)qthis)->aboutToCompose();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 66, column 10>
//   // proto:  void QOpenGLWidget::setFormat(const QSurfaceFormat & format);
// _ZN13QOpenGLWidget9setFormatERK14QSurfaceFormat setFormat(const class QSurfaceFormat &)
extern "C"
void
C_ZN13QOpenGLWidget9setFormatERK14QSurfaceFormat(void *qthis,
const QSurfaceFormat* arg1) {
  ((QOpenGLWidget*)qthis)->setFormat(*((const QSurfaceFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qopenglwidget.h', line 67, column 20>
//   // proto:  QSurfaceFormat QOpenGLWidget::format();
// _ZNK13QOpenGLWidget6formatEv format()
extern "C"
QSurfaceFormat*
C_ZNK13QOpenGLWidget6formatEv(void *qthis) {
  auto ret =
  ((QOpenGLWidget*)qthis)->format();
  return new QSurfaceFormat(ret); // 5
}
// <= ext block end

// body block begin =>
// QOpenGLWidget_SlotProxy here
class QOpenGLWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLWidget_SlotProxy():QObject(){}

public slots:
  // aboutToResize()
  void slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv();
public:
  void (*slot_func__ZN13QOpenGLWidget13aboutToResizeEv)(void* rsfptr) = NULL;
public slots:
  // frameSwapped()
  void slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv();
public:
  void (*slot_func__ZN13QOpenGLWidget12frameSwappedEv)(void* rsfptr) = NULL;
public slots:
  // resized()
  void slot_proxy_func__ZN13QOpenGLWidget7resizedEv();
public:
  void (*slot_func__ZN13QOpenGLWidget7resizedEv)(void* rsfptr) = NULL;
public slots:
  // aboutToCompose()
  void slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv();
public:
  void (*slot_func__ZN13QOpenGLWidget14aboutToComposeEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qopenglwidget.moc"

extern "C" {
  QOpenGLWidget_SlotProxy* QOpenGLWidget_SlotProxy_new()
  {
    return new QOpenGLWidget_SlotProxy();
  }
};

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv() {
  if (this->slot_func__ZN13QOpenGLWidget13aboutToResizeEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget13aboutToResizeEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget13aboutToResizeEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWidget13aboutToResizeEv = (decltype(that->slot_func__ZN13QOpenGLWidget13aboutToResizeEv))ffifptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(aboutToResize()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget13aboutToResizeEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget13aboutToResizeEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv() {
  if (this->slot_func__ZN13QOpenGLWidget12frameSwappedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget12frameSwappedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget12frameSwappedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWidget12frameSwappedEv = (decltype(that->slot_func__ZN13QOpenGLWidget12frameSwappedEv))ffifptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(frameSwapped()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget12frameSwappedEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget12frameSwappedEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget7resizedEv() {
  if (this->slot_func__ZN13QOpenGLWidget7resizedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget7resizedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget7resizedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWidget7resizedEv = (decltype(that->slot_func__ZN13QOpenGLWidget7resizedEv))ffifptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(resized()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget7resizedEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget7resizedEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QOpenGLWidget_SlotProxy::slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv() {
  if (this->slot_func__ZN13QOpenGLWidget14aboutToComposeEv != NULL) {
    // do smth...
    this->slot_func__ZN13QOpenGLWidget14aboutToComposeEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLWidget_SlotProxy_connect__ZN13QOpenGLWidget14aboutToComposeEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QOpenGLWidget14aboutToComposeEv = (decltype(that->slot_func__ZN13QOpenGLWidget14aboutToComposeEv))ffifptr;
  QObject::connect((QOpenGLWidget*)sender, SIGNAL(aboutToCompose()), that, SLOT(slot_proxy_func__ZN13QOpenGLWidget14aboutToComposeEv()));
  return that;
}
extern "C"
void QOpenGLWidget_SlotProxy_disconnect__ZN13QOpenGLWidget14aboutToComposeEv(QOpenGLWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

