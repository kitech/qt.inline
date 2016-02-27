// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickframebufferobject.h
// dst-file: /src/quick/qquickframebufferobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickframebufferobject.h>


// <= header block end

// main block begin =>
void __keep_qquickframebufferobject_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickFramebufferObject_Class_Size()
{
  return sizeof(QQuickFramebufferObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 73, column 10>
//   // proto:  bool QQuickFramebufferObject::textureFollowsItemSize();
// _ZNK23QQuickFramebufferObject22textureFollowsItemSizeEv textureFollowsItemSize()
extern "C"
bool
C_ZNK23QQuickFramebufferObject22textureFollowsItemSizeEv(void *qthis) {
  auto ret =
  ((QQuickFramebufferObject*)qthis)->textureFollowsItemSize();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 74, column 10>
//   // proto:  void QQuickFramebufferObject::setTextureFollowsItemSize(bool follows);
// _ZN23QQuickFramebufferObject25setTextureFollowsItemSizeEb setTextureFollowsItemSize(_Bool)
extern "C"
void
C_ZN23QQuickFramebufferObject25setTextureFollowsItemSizeEb(void *qthis,
bool arg1) {
  ((QQuickFramebufferObject*)qthis)->setTextureFollowsItemSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 48, column 5>
//   // proto:  const QMetaObject * QQuickFramebufferObject::metaObject();
// _ZNK23QQuickFramebufferObject10metaObjectEv metaObject()
extern "C"
void*
C_ZNK23QQuickFramebufferObject10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickFramebufferObject*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 71, column 5>
//   // proto:  void QQuickFramebufferObject::QQuickFramebufferObject(QQuickItem * parent);
extern "C"
QQuickFramebufferObject*
C_ZN23QQuickFramebufferObjectC2EP10QQuickItem(QQuickItem * arg1) {
  // auto ret = new QQuickFramebufferObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 76, column 23>
//   // proto:  QQuickFramebufferObject::Renderer * QQuickFramebufferObject::createRenderer();
// _ZNK23QQuickFramebufferObject14createRendererEv createRenderer()
extern "C"
void*
C_ZNK23QQuickFramebufferObject14createRendererEv(void *qthis) {
  auto ret =
  ((QQuickFramebufferObject*)qthis)->createRenderer();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 78, column 10>
//   // proto:  bool QQuickFramebufferObject::isTextureProvider();
// _ZNK23QQuickFramebufferObject17isTextureProviderEv isTextureProvider()
extern "C"
bool
C_ZNK23QQuickFramebufferObject17isTextureProviderEv(void *qthis) {
  auto ret =
  ((QQuickFramebufferObject*)qthis)->isTextureProvider();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 79, column 25>
//   // proto:  QSGTextureProvider * QQuickFramebufferObject::textureProvider();
// _ZNK23QQuickFramebufferObject15textureProviderEv textureProvider()
extern "C"
void*
C_ZNK23QQuickFramebufferObject15textureProviderEv(void *qthis) {
  auto ret =
  ((QQuickFramebufferObject*)qthis)->textureProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 89, column 10>
//   // proto:  void QQuickFramebufferObject::textureFollowsItemSizeChanged(bool );
// _ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb textureFollowsItemSizeChanged(_Bool)
extern "C"
void
C_ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(void *qthis,
bool arg1) {
  ((QQuickFramebufferObject*)qthis)->textureFollowsItemSizeChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickframebufferobject.h', line 80, column 10>
//   // proto:  void QQuickFramebufferObject::releaseResources();
// _ZN23QQuickFramebufferObject16releaseResourcesEv releaseResources()
extern "C"
void
C_ZN23QQuickFramebufferObject16releaseResourcesEv(void *qthis) {
  ((QQuickFramebufferObject*)qthis)->releaseResources();
}
// <= ext block end

// body block begin =>
// QQuickFramebufferObject_SlotProxy here
class QQuickFramebufferObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickFramebufferObject_SlotProxy():QObject(){}

public slots:
  // textureFollowsItemSizeChanged(_Bool)
  void slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0);
public:
  void (*slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickframebufferobject.moc"

extern "C" {
  QQuickFramebufferObject_SlotProxy* QQuickFramebufferObject_SlotProxy_new()
  {
    return new QQuickFramebufferObject_SlotProxy();
  }
};

void QQuickFramebufferObject_SlotProxy::slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0) {
  if (this->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickFramebufferObject_SlotProxy_connect__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickFramebufferObject_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb = (decltype(that->slot_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb))ffifptr;
  QObject::connect((QQuickFramebufferObject*)sender, SIGNAL(textureFollowsItemSizeChanged(_Bool)), that, SLOT(slot_proxy_func__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickFramebufferObject_SlotProxy_disconnect__ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(QQuickFramebufferObject_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

