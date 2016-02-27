// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickview.h
// dst-file: /src/quick/qquickview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickview.h>


#include <qsize.h>
#include <qqmlerror.h>
#include <qlist.h>
#include <qnetworkinterface.h>
#include <qurl.h>
// <= header block end

// main block begin =>
void __keep_qquickview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickView_Class_Size()
{
  return sizeof(QQuickView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 71, column 16>
//   // proto:  QQuickView::ResizeMode QQuickView::resizeMode();
// _ZNK10QQuickView10resizeModeEv resizeMode()
extern "C"
QQuickView::ResizeMode
C_ZNK10QQuickView10resizeModeEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->resizeMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 83, column 10>
//   // proto:  void QQuickView::setSource(const QUrl & );
// _ZN10QQuickView9setSourceERK4QUrl setSource(const class QUrl &)
extern "C"
void
C_ZN10QQuickView9setSourceERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQuickView*)qthis)->setSource(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 60, column 5>
//   // proto:  void QQuickView::QQuickView(const QUrl & source, QWindow * parent);
extern "C"
QQuickView*
C_ZN10QQuickViewC2ERK4QUrlP7QWindow(const QUrl* arg1,
QWindow * arg2) {
  auto ret = new QQuickView(*((const QUrl*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 84, column 10>
//   // proto:  void QQuickView::setContent(const QUrl & url, QQmlComponent * component, QObject * item);
// _ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject setContent(const class QUrl &, class QQmlComponent *, class QObject *)
extern "C"
void
C_ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject(void *qthis,
const QUrl* arg1,
QQmlComponent * arg2,
QObject * arg3) {
  ((QQuickView*)qthis)->setContent(*((const QUrl*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 79, column 11>
//   // proto:  QSize QQuickView::sizeHint();
// _ZNK10QQuickView8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK10QQuickView8sizeHintEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QQuickView::~QQuickView();
extern "C"
void C_ZN10QQuickViewD2Ev(void *qthis) {
  delete (QQuickView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 65, column 17>
//   // proto:  QQmlEngine * QQuickView::engine();
// _ZNK10QQuickView6engineEv engine()
extern "C"
void*
C_ZNK10QQuickView6engineEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 77, column 22>
//   // proto:  QList<QQmlError> QQuickView::errors();
// _ZNK10QQuickView6errorsEv errors()
extern "C"
QList<QQmlError>*
C_ZNK10QQuickView6errorsEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->errors();
  return new QList<QQmlError>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickView::metaObject();
// _ZNK10QQuickView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QQuickView10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 58, column 14>
//   // proto:  void QQuickView::QQuickView(QWindow * parent);
extern "C"
QQuickView*
C_ZN10QQuickViewC2EP7QWindow(QWindow * arg1) {
  auto ret = new QQuickView(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 80, column 11>
//   // proto:  QSize QQuickView::initialSize();
// _ZNK10QQuickView11initialSizeEv initialSize()
extern "C"
QSize*
C_ZNK10QQuickView11initialSizeEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->initialSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 87, column 10>
//   // proto:  void QQuickView::statusChanged(QQuickView::Status );
// _ZN10QQuickView13statusChangedENS_6StatusE statusChanged(class QQuickView::Status)
extern "C"
void
C_ZN10QQuickView13statusChangedENS_6StatusE(void *qthis,
QQuickView::Status* arg1) {
  ((QQuickView*)qthis)->statusChanged(*((QQuickView::Status*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 63, column 10>
//   // proto:  QUrl QQuickView::source();
// _ZNK10QQuickView6sourceEv source()
extern "C"
QUrl*
C_ZNK10QQuickView6sourceEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->source();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 72, column 10>
//   // proto:  void QQuickView::setResizeMode(QQuickView::ResizeMode );
// _ZN10QQuickView13setResizeModeENS_10ResizeModeE setResizeMode(enum QQuickView::ResizeMode)
extern "C"
void
C_ZN10QQuickView13setResizeModeENS_10ResizeModeE(void *qthis,
QQuickView::ResizeMode arg1) {
  ((QQuickView*)qthis)->setResizeMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 68, column 17>
//   // proto:  QQuickItem * QQuickView::rootObject();
// _ZNK10QQuickView10rootObjectEv rootObject()
extern "C"
void*
C_ZNK10QQuickView10rootObjectEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->rootObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 59, column 5>
//   // proto:  void QQuickView::QQuickView(QQmlEngine * engine, QWindow * parent);
extern "C"
QQuickView*
C_ZN10QQuickViewC2EP10QQmlEngineP7QWindow(QQmlEngine * arg1,
QWindow * arg2) {
  auto ret = new QQuickView(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 66, column 18>
//   // proto:  QQmlContext * QQuickView::rootContext();
// _ZNK10QQuickView11rootContextEv rootContext()
extern "C"
void*
C_ZNK10QQuickView11rootContextEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->rootContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 75, column 12>
//   // proto:  QQuickView::Status QQuickView::status();
// _ZNK10QQuickView6statusEv status()
extern "C"
QQuickView::Status
C_ZNK10QQuickView6statusEv(void *qthis) {
  auto ret =
  ((QQuickView*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QQuickView_SlotProxy here
class QQuickView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickView_SlotProxy():QObject(){}

public slots:
  // statusChanged(class QQuickView::Status)
  void slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0);
public:
  void (*slot_func__ZN10QQuickView13statusChangedENS_6StatusE)(void* rsfptr, QQuickView::Status arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickview.moc"

extern "C" {
  QQuickView_SlotProxy* QQuickView_SlotProxy_new()
  {
    return new QQuickView_SlotProxy();
  }
};

void QQuickView_SlotProxy::slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0) {
  if (this->slot_func__ZN10QQuickView13statusChangedENS_6StatusE != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickView13statusChangedENS_6StatusE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickView_SlotProxy_connect__ZN10QQuickView13statusChangedENS_6StatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickView13statusChangedENS_6StatusE = (decltype(that->slot_func__ZN10QQuickView13statusChangedENS_6StatusE))ffifptr;
  QObject::connect((QQuickView*)sender, SIGNAL(statusChanged(class QQuickView::Status)), that, SLOT(slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0)));
  return that;
}
extern "C"
void QQuickView_SlotProxy_disconnect__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

