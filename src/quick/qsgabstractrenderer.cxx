// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgabstractrenderer.h
// dst-file: /src/quick/qsgabstractrenderer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgabstractrenderer.h>


#include <qcolor.h>
#include <qrect.h>
#include <qmatrix4x4.h>
// <= header block end

// main block begin =>
void __keep_qsgabstractrenderer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 60, column 17>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setDeviceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QSize setDeviceRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 64, column 17>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setViewportRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QSize setViewportRect(const class QSize &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGAbstractRenderer_Class_Size()
{
  return sizeof(QSGAbstractRenderer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 68, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrix(const QMatrix4x4 & matrix);
// _ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4 setProjectionMatrix(const class QMatrix4x4 &)
extern "C"
void
C_ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4(void *qthis,
const QMatrix4x4* arg1) {
  ((QSGAbstractRenderer*)qthis)->setProjectionMatrix(*((const QMatrix4x4*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 57, column 10>
//   // proto:  void QSGAbstractRenderer::setRootNode(QSGRootNode * node);
// _ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode setRootNode(class QSGRootNode *)
extern "C"
void
C_ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode(void *qthis,
QSGRootNode * arg1) {
  ((QSGAbstractRenderer*)qthis)->setRootNode(arg1);
}
//   // proto:  void QSGAbstractRenderer::~QSGAbstractRenderer();
extern "C"
void C_ZN19QSGAbstractRendererD2Ev(void *qthis) {
  delete (QSGAbstractRenderer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 58, column 18>
//   // proto:  QSGRootNode * QSGAbstractRenderer::rootNode();
// _ZNK19QSGAbstractRenderer8rootNodeEv rootNode()
extern "C"
void*
C_ZNK19QSGAbstractRenderer8rootNodeEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->rootNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 59, column 10>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QRect & rect);
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QRect setDeviceRect(const class QRect &)
extern "C"
void
C_ZN19QSGAbstractRenderer13setDeviceRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QSGAbstractRenderer*)qthis)->setDeviceRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 72, column 12>
//   // proto:  QColor QSGAbstractRenderer::clearColor();
// _ZNK19QSGAbstractRenderer10clearColorEv clearColor()
extern "C"
QColor*
C_ZNK19QSGAbstractRenderer10clearColorEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->clearColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 80, column 10>
//   // proto:  void QSGAbstractRenderer::sceneGraphChanged();
// _ZN19QSGAbstractRenderer17sceneGraphChangedEv sceneGraphChanged()
extern "C"
void
C_ZN19QSGAbstractRenderer17sceneGraphChangedEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->sceneGraphChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 65, column 11>
//   // proto:  QRect QSGAbstractRenderer::viewportRect();
// _ZNK19QSGAbstractRenderer12viewportRectEv viewportRect()
extern "C"
QRect*
C_ZNK19QSGAbstractRenderer12viewportRectEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->viewportRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 60, column 17>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QSize & size);
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QSize setDeviceRect(const class QSize &)
extern "C"
void
C_ZN19QSGAbstractRenderer13setDeviceRectERK5QSize(void *qthis,
const QSize* arg1) {
  ((QSGAbstractRenderer*)qthis)->setDeviceRect(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 67, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrixToRect(const QRectF & rect);
// _ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF setProjectionMatrixToRect(const class QRectF &)
extern "C"
void
C_ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QSGAbstractRenderer*)qthis)->setProjectionMatrixToRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 64, column 17>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QSize & size);
// _ZN19QSGAbstractRenderer15setViewportRectERK5QSize setViewportRect(const class QSize &)
extern "C"
void
C_ZN19QSGAbstractRenderer15setViewportRectERK5QSize(void *qthis,
const QSize* arg1) {
  ((QSGAbstractRenderer*)qthis)->setViewportRect(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 61, column 11>
//   // proto:  QRect QSGAbstractRenderer::deviceRect();
// _ZNK19QSGAbstractRenderer10deviceRectEv deviceRect()
extern "C"
QRect*
C_ZNK19QSGAbstractRenderer10deviceRectEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->deviceRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 75, column 15>
//   // proto:  ClearMode QSGAbstractRenderer::clearMode();
// _ZNK19QSGAbstractRenderer9clearModeEv clearMode()
extern "C"
QFlags<QSGAbstractRenderer::ClearModeBit>*
C_ZNK19QSGAbstractRenderer9clearModeEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->clearMode();
  return new QFlags<QSGAbstractRenderer::ClearModeBit>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 77, column 18>
//   // proto:  void QSGAbstractRenderer::renderScene(GLuint fboId);
// _ZN19QSGAbstractRenderer11renderSceneEj renderScene(GLuint)
extern "C"
void
C_ZN19QSGAbstractRenderer11renderSceneEj(void *qthis,
GLuint arg1) {
  ((QSGAbstractRenderer*)qthis)->renderScene(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 45, column 5>
//   // proto:  const QMetaObject * QSGAbstractRenderer::metaObject();
// _ZNK19QSGAbstractRenderer10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QSGAbstractRenderer10metaObjectEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 74, column 10>
//   // proto:  void QSGAbstractRenderer::setClearMode(ClearMode mode);
// _ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE setClearMode(ClearMode)
extern "C"
void
C_ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE(void *qthis,
QSGAbstractRenderer::ClearMode arg1) {
  ((QSGAbstractRenderer*)qthis)->setClearMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 71, column 10>
//   // proto:  void QSGAbstractRenderer::setClearColor(const QColor & color);
// _ZN19QSGAbstractRenderer13setClearColorERK6QColor setClearColor(const class QColor &)
extern "C"
void
C_ZN19QSGAbstractRenderer13setClearColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QSGAbstractRenderer*)qthis)->setClearColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 69, column 16>
//   // proto:  QMatrix4x4 QSGAbstractRenderer::projectionMatrix();
// _ZNK19QSGAbstractRenderer16projectionMatrixEv projectionMatrix()
extern "C"
QMatrix4x4*
C_ZNK19QSGAbstractRenderer16projectionMatrixEv(void *qthis) {
  auto ret =
  ((QSGAbstractRenderer*)qthis)->projectionMatrix();
  return new QMatrix4x4(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 63, column 10>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QRect & rect);
// _ZN19QSGAbstractRenderer15setViewportRectERK5QRect setViewportRect(const class QRect &)
extern "C"
void
C_ZN19QSGAbstractRenderer15setViewportRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QSGAbstractRenderer*)qthis)->setViewportRect(*((const QRect*)arg1));
}
// <= ext block end

// body block begin =>
// QSGAbstractRenderer_SlotProxy here
class QSGAbstractRenderer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGAbstractRenderer_SlotProxy():QObject(){}

public slots:
  // sceneGraphChanged()
  void slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv();
public:
  void (*slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qsgabstractrenderer.moc"

extern "C" {
  QSGAbstractRenderer_SlotProxy* QSGAbstractRenderer_SlotProxy_new()
  {
    return new QSGAbstractRenderer_SlotProxy();
  }
};

void QSGAbstractRenderer_SlotProxy::slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv() {
  if (this->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv(this->rsfptr);
  }
}
extern "C"
void* QSGAbstractRenderer_SlotProxy_connect__ZN19QSGAbstractRenderer17sceneGraphChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSGAbstractRenderer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv = (decltype(that->slot_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv))ffifptr;
  QObject::connect((QSGAbstractRenderer*)sender, SIGNAL(sceneGraphChanged()), that, SLOT(slot_proxy_func__ZN19QSGAbstractRenderer17sceneGraphChangedEv()));
  return that;
}
extern "C"
void QSGAbstractRenderer_SlotProxy_disconnect__ZN19QSGAbstractRenderer17sceneGraphChangedEv(QSGAbstractRenderer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

