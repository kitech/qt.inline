//  header block begin
// since 0x050200
// /usr/include/qt/QtQuick/qquickframebufferobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickframebufferobject.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickFramebufferObject is pure virtual: true
// QQuickFramebufferObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickFramebufferObject : public QQuickFramebufferObject {
public:
  virtual ~MyQQuickFramebufferObject() {}
// void QQuickFramebufferObject(QQuickItem *)
MyQQuickFramebufferObject(QQuickItem * parent) : QQuickFramebufferObject(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void geometryChanged(const QRectF &, const QRectF &)
  virtual void geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"geometryChanged", &handled, 2, (uint64_t)&newGeometry, (uint64_t)&oldGeometry, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickFramebufferObject::geometryChanged(newGeometry, oldGeometry);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSGNode * updatePaintNode(QSGNode *, QQuickItem::UpdatePaintNodeData *)
  virtual QSGNode * updatePaintNode(QSGNode * arg0, QQuickItem::UpdatePaintNodeData * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updatePaintNode", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGNode *)(irv);
      // Pointer Pointer QSGNode *
    } else {
    return QQuickFramebufferObject::updatePaintNode(arg0, arg1);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:93
// [-2] void geometryChanged(const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject15geometryChangedERK6QRectFS2_(void *this_, QRectF* newGeometry, QRectF* oldGeometry) {
  ((QQuickFramebufferObject*)this_)->QQuickFramebufferObject::geometryChanged(*newGeometry, *oldGeometry);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:96
// [8] QSGNode * updatePaintNode(QSGNode *, QQuickItem::UpdatePaintNodeData *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObject15updatePaintNodeEP7QSGNodePN10QQuickItem19UpdatePaintNodeDataE(void *this_, QSGNode * arg0, QQuickItem::UpdatePaintNodeData * arg1) {
  return (void*)((QQuickFramebufferObject*)this_)->QQuickFramebufferObject::updatePaintNode(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject10metaObjectEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickFramebufferObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QQuickFramebufferObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickFramebufferObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickFramebufferObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickFramebufferObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:78
// [-2] void QQuickFramebufferObject(QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObjectC2EP10QQuickItem(QQuickItem * parent) {
  auto _nilp = (MyQQuickFramebufferObject*)(0);
  return 0; // new MyQQuickFramebufferObject(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:80
// [1] bool textureFollowsItemSize()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject22textureFollowsItemSizeEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->textureFollowsItemSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:81
// [-2] void setTextureFollowsItemSize(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject25setTextureFollowsItemSizeEb(void *this_, bool follows) {
  ((QQuickFramebufferObject*)this_)->setTextureFollowsItemSize(follows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:83
// [1] bool mirrorVertically()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject16mirrorVerticallyEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->mirrorVertically();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:84
// [-2] void setMirrorVertically(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject19setMirrorVerticallyEb(void *this_, bool enable) {
  ((QQuickFramebufferObject*)this_)->setMirrorVertically(enable);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:86
// [8] QQuickFramebufferObject::Renderer * createRenderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject14createRendererEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->createRenderer();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:88
// [1] bool isTextureProvider()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject17isTextureProviderEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->isTextureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:89
// [8] QSGTextureProvider * textureProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject15textureProviderEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->textureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:90
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject16releaseResourcesEv(void *this_) {
  ((QQuickFramebufferObject*)this_)->releaseResources();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:99
// [-2] void textureFollowsItemSizeChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(void *this_, bool arg0) {
  ((QQuickFramebufferObject*)this_)->textureFollowsItemSizeChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:100
// [-2] void mirrorVerticallyChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject23mirrorVerticallyChangedEb(void *this_, bool arg0) {
  ((QQuickFramebufferObject*)this_)->mirrorVerticallyChanged(arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObjectD2Ev(void *this_) {
  delete (QQuickFramebufferObject*)(this_);
}
//  main block end
