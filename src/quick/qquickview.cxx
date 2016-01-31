#include <qurl.h>
#include <qnetworkinterface.h>
#include <qlist.h>
#include <qsize.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qquickview.h
// dst-file: /src/quick/qquickview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickview.h>

extern "C" {

int QQuickView_Class_Size()
{
  return sizeof(QQuickView);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickview_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 71, column 16>
//   // proto:  QQuickView::ResizeMode QQuickView::resizeMode();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->resizeMode();
    flythis.resizeMode();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView10resizeModeEv resizeMode()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 83, column 10>
//   // proto:  void QQuickView::setSource(const QUrl & );
if (true) {
  auto f = [](QQuickView flythis, const QUrl & arg1) {
    ((QQuickView*)0)->setSource(arg1);
    flythis.setSource(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickView9setSourceERK4QUrl setSource(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 60, column 5>
//   // proto:  void QQuickView::QQuickView(const QUrl & source, QWindow * parent);
if (true) {
  auto f = [](const QUrl & arg1, QWindow * arg2) {
    new QQuickView(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 84, column 10>
//   // proto:  void QQuickView::setContent(const QUrl & url, QQmlComponent * component, QObject * item);
if (true) {
  auto f = [](QQuickView flythis, const QUrl & arg1, QQmlComponent * arg2, QObject * arg3) {
    ((QQuickView*)0)->setContent(arg1, arg2, arg3);
    flythis.setContent(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject setContent(const class QUrl &, class QQmlComponent *, class QObject *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 79, column 11>
//   // proto:  QSize QQuickView::sizeHint();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->sizeHint();
    flythis.sizeHint();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView8sizeHintEv sizeHint()
//   // proto:  void QQuickView::~QQuickView();
if (true) {
  delete ((QQuickView*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 65, column 17>
//   // proto:  QQmlEngine * QQuickView::engine();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->engine();
    flythis.engine();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 77, column 22>
//   // proto:  QList<QQmlError> QQuickView::errors();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->errors();
    flythis.errors();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickView::metaObject();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 58, column 14>
//   // proto:  void QQuickView::QQuickView(QWindow * parent);
if (true) {
  auto f = [](QWindow * arg1) {
    new QQuickView(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 80, column 11>
//   // proto:  QSize QQuickView::initialSize();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->initialSize();
    flythis.initialSize();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView11initialSizeEv initialSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 87, column 10>
//   // proto:  void QQuickView::statusChanged(QQuickView::Status );
if (true) {
  auto f = [](QQuickView flythis, QQuickView::Status arg1) {
    ((QQuickView*)0)->statusChanged(arg1);
    flythis.statusChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickView13statusChangedENS_6StatusE statusChanged(class QQuickView::Status)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 63, column 10>
//   // proto:  QUrl QQuickView::source();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->source();
    flythis.source();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView6sourceEv source()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 72, column 10>
//   // proto:  void QQuickView::setResizeMode(QQuickView::ResizeMode );
if (true) {
  auto f = [](QQuickView flythis, QQuickView::ResizeMode arg1) {
    ((QQuickView*)0)->setResizeMode(arg1);
    flythis.setResizeMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickView13setResizeModeENS_10ResizeModeE setResizeMode(enum QQuickView::ResizeMode)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 68, column 17>
//   // proto:  QQuickItem * QQuickView::rootObject();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->rootObject();
    flythis.rootObject();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView10rootObjectEv rootObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 59, column 5>
//   // proto:  void QQuickView::QQuickView(QQmlEngine * engine, QWindow * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, QWindow * arg2) {
    new QQuickView(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 66, column 18>
//   // proto:  QQmlContext * QQuickView::rootContext();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->rootContext();
    flythis.rootContext();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView11rootContextEv rootContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 75, column 12>
//   // proto:  QQuickView::Status QQuickView::status();
if (true) {
  auto f = [](QQuickView flythis) {
    ((QQuickView*)0)->status();
    flythis.status();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickView6statusEv status()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 71, column 16>
//   // proto:  QQuickView::ResizeMode QQuickView::resizeMode();
extern "C"
void C_ZNK10QQuickView10resizeModeEv(void *qthis) {
  ((QQuickView*)qthis)->resizeMode();
}
// _ZNK10QQuickView10resizeModeEv resizeMode()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 83, column 10>
//   // proto:  void QQuickView::setSource(const QUrl & );
extern "C"
void C_ZN10QQuickView9setSourceERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QQuickView*)qthis)->setSource(arg1);
}
// _ZN10QQuickView9setSourceERK4QUrl setSource(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 60, column 5>
//   // proto:  void QQuickView::QQuickView(const QUrl & source, QWindow * parent);
extern "C"
void C_ZN10QQuickViewC2ERK4QUrlP7QWindow(const QUrl & arg1, QWindow * arg2) {
  new QQuickView(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 84, column 10>
//   // proto:  void QQuickView::setContent(const QUrl & url, QQmlComponent * component, QObject * item);
extern "C"
void C_ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject(void *qthis, const QUrl & arg1, QQmlComponent * arg2, QObject * arg3) {
  ((QQuickView*)qthis)->setContent(arg1, arg2, arg3);
}
// _ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject setContent(const class QUrl &, class QQmlComponent *, class QObject *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 79, column 11>
//   // proto:  QSize QQuickView::sizeHint();
extern "C"
void C_ZNK10QQuickView8sizeHintEv(void *qthis) {
  ((QQuickView*)qthis)->sizeHint();
}
// _ZNK10QQuickView8sizeHintEv sizeHint()
//   // proto:  void QQuickView::~QQuickView();
extern "C"
void C_ZN10QQuickViewD2Ev(void *qthis) {
  delete (QQuickView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 65, column 17>
//   // proto:  QQmlEngine * QQuickView::engine();
extern "C"
void C_ZNK10QQuickView6engineEv(void *qthis) {
  ((QQuickView*)qthis)->engine();
}
// _ZNK10QQuickView6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 77, column 22>
//   // proto:  QList<QQmlError> QQuickView::errors();
extern "C"
void C_ZNK10QQuickView6errorsEv(void *qthis) {
  ((QQuickView*)qthis)->errors();
}
// _ZNK10QQuickView6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 52, column 5>
//   // proto:  const QMetaObject * QQuickView::metaObject();
extern "C"
void C_ZNK10QQuickView10metaObjectEv(void *qthis) {
  ((QQuickView*)qthis)->metaObject();
}
// _ZNK10QQuickView10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 58, column 14>
//   // proto:  void QQuickView::QQuickView(QWindow * parent);
extern "C"
void C_ZN10QQuickViewC2EP7QWindow(QWindow * arg1) {
  new QQuickView(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 80, column 11>
//   // proto:  QSize QQuickView::initialSize();
extern "C"
void C_ZNK10QQuickView11initialSizeEv(void *qthis) {
  ((QQuickView*)qthis)->initialSize();
}
// _ZNK10QQuickView11initialSizeEv initialSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 87, column 10>
//   // proto:  void QQuickView::statusChanged(QQuickView::Status );
extern "C"
void C_ZN10QQuickView13statusChangedENS_6StatusE(void *qthis, QQuickView::Status arg1) {
  ((QQuickView*)qthis)->statusChanged(arg1);
}
// _ZN10QQuickView13statusChangedENS_6StatusE statusChanged(class QQuickView::Status)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 63, column 10>
//   // proto:  QUrl QQuickView::source();
extern "C"
void C_ZNK10QQuickView6sourceEv(void *qthis) {
  ((QQuickView*)qthis)->source();
}
// _ZNK10QQuickView6sourceEv source()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 72, column 10>
//   // proto:  void QQuickView::setResizeMode(QQuickView::ResizeMode );
extern "C"
void C_ZN10QQuickView13setResizeModeENS_10ResizeModeE(void *qthis, QQuickView::ResizeMode arg1) {
  ((QQuickView*)qthis)->setResizeMode(arg1);
}
// _ZN10QQuickView13setResizeModeENS_10ResizeModeE setResizeMode(enum QQuickView::ResizeMode)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 68, column 17>
//   // proto:  QQuickItem * QQuickView::rootObject();
extern "C"
void C_ZNK10QQuickView10rootObjectEv(void *qthis) {
  ((QQuickView*)qthis)->rootObject();
}
// _ZNK10QQuickView10rootObjectEv rootObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 59, column 5>
//   // proto:  void QQuickView::QQuickView(QQmlEngine * engine, QWindow * parent);
extern "C"
void C_ZN10QQuickViewC2EP10QQmlEngineP7QWindow(QQmlEngine * arg1, QWindow * arg2) {
  new QQuickView(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 66, column 18>
//   // proto:  QQmlContext * QQuickView::rootContext();
extern "C"
void C_ZNK10QQuickView11rootContextEv(void *qthis) {
  ((QQuickView*)qthis)->rootContext();
}
// _ZNK10QQuickView11rootContextEv rootContext()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickview.h', line 75, column 12>
//   // proto:  QQuickView::Status QQuickView::status();
extern "C"
void C_ZNK10QQuickView6statusEv(void *qthis) {
  ((QQuickView*)qthis)->status();
}
// _ZNK10QQuickView6statusEv status()
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

