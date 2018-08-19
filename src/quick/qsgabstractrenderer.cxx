//  header block begin
// since 0x050400
// /usr/include/qt/QtQuick/qsgabstractrenderer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgabstractrenderer.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGAbstractRenderer is pure virtual: true
// QSGAbstractRenderer has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGAbstractRenderer : public QSGAbstractRenderer {
public:
  virtual ~MyQSGAbstractRenderer() {}
// void QSGAbstractRenderer(QObject *)
MyQSGAbstractRenderer(QObject * parent) : QSGAbstractRenderer(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// void nodeChanged(QSGNode *, QSGNode::DirtyState)
  virtual void nodeChanged(QSGNode * node, QFlags<QSGNode::DirtyStateBit> state) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nodeChanged", &handled, 2, (uint64_t)node, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // QSGAbstractRenderer::nodeChanged(node, state);
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:94
// [-2] void nodeChanged(QSGNode *, QSGNode::DirtyState)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer10metaObjectEv(void *this_) {
  return (void*)((QSGAbstractRenderer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QSGAbstractRenderer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGAbstractRenderer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QSGAbstractRenderer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGAbstractRenderer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QSGAbstractRenderer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGAbstractRenderer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QSGAbstractRenderer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGAbstractRenderer::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:65
// [-2] void ~QSGAbstractRenderer()
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRendererD2Ev(void *this_) {
  delete (QSGAbstractRenderer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:67
// [-2] void setRootNode(QSGRootNode *)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode(void *this_, QSGRootNode * node) {
  ((QSGAbstractRenderer*)this_)->setRootNode(node);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:68
// [8] QSGRootNode * rootNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer8rootNodeEv(void *this_) {
  return (void*)((QSGAbstractRenderer*)this_)->rootNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:69
// [-2] void setDeviceRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QRect(void *this_, QRect* rect) {
  ((QSGAbstractRenderer*)this_)->setDeviceRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:70
// [-2] void setDeviceRect(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QSize(void *this_, QSize* size) {
  ((QSGAbstractRenderer*)this_)->setDeviceRect(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:71
// [16] QRect deviceRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer10deviceRectEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->deviceRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:73
// [-2] void setViewportRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QRect(void *this_, QRect* rect) {
  ((QSGAbstractRenderer*)this_)->setViewportRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:74
// [-2] void setViewportRect(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QSize(void *this_, QSize* size) {
  ((QSGAbstractRenderer*)this_)->setViewportRect(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:75
// [16] QRect viewportRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer12viewportRectEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->viewportRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:77
// [-2] void setProjectionMatrixToRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGAbstractRenderer*)this_)->setProjectionMatrixToRect(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:78
// [-2] void setProjectionMatrix(const QMatrix4x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4(void *this_, QMatrix4x4* matrix) {
  ((QSGAbstractRenderer*)this_)->setProjectionMatrix(*matrix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:79
// [68] QMatrix4x4 projectionMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer16projectionMatrixEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->projectionMatrix();
return new QMatrix4x4(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:81
// [-2] void setClearColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer13setClearColorERK6QColor(void *this_, QColor* color) {
  ((QSGAbstractRenderer*)this_)->setClearColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:82
// [16] QColor clearColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSGAbstractRenderer10clearColorEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->clearColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:84
// [-2] void setClearMode(QSGAbstractRenderer::ClearMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE(void *this_, QFlags<QSGAbstractRenderer::ClearModeBit> mode) {
  ((QSGAbstractRenderer*)this_)->setClearMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:85
// [4] QSGAbstractRenderer::ClearMode clearMode()
extern "C" Q_DECL_EXPORT
QSGAbstractRenderer::ClearMode* C_ZNK19QSGAbstractRenderer9clearModeEv(void *this_) {
  auto rv = ((QSGAbstractRenderer*)this_)->clearMode();
return new QSGAbstractRenderer::ClearMode(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:87
// [-2] void renderScene(uint)
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer11renderSceneEj(void *this_, uint fboId) {
  ((QSGAbstractRenderer*)this_)->renderScene(fboId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:90
// [-2] void sceneGraphChanged()
extern "C" Q_DECL_EXPORT
void C_ZN19QSGAbstractRenderer17sceneGraphChangedEv(void *this_) {
  ((QSGAbstractRenderer*)this_)->sceneGraphChanged();
}

//  main block end
