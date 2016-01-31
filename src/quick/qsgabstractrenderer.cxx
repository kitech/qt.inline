#include <qmatrix4x4.h>
#include <qrect.h>
#include <qcolor.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qsgabstractrenderer.h
// dst-file: /src/quick/qsgabstractrenderer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgabstractrenderer.h>

extern "C" {

int QSGAbstractRenderer_Class_Size()
{
  return sizeof(QSGAbstractRenderer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgabstractrenderer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 68, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrix(const QMatrix4x4 & matrix);
if (true) {
  auto f = [](const QMatrix4x4 & arg1) {
    ((QSGAbstractRenderer*)0)->setProjectionMatrix(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4 setProjectionMatrix(const class QMatrix4x4 &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 57, column 10>
//   // proto:  void QSGAbstractRenderer::setRootNode(QSGRootNode * node);
if (true) {
  auto f = [](QSGRootNode * arg1) {
    ((QSGAbstractRenderer*)0)->setRootNode(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode setRootNode(class QSGRootNode *)
//   // proto:  void QSGAbstractRenderer::~QSGAbstractRenderer();
if (true) {
  delete ((QSGAbstractRenderer*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 58, column 18>
//   // proto:  QSGRootNode * QSGAbstractRenderer::rootNode();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->rootNode();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer8rootNodeEv rootNode()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 59, column 10>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QRect & rect);
if (true) {
  auto f = [](const QRect & arg1) {
    ((QSGAbstractRenderer*)0)->setDeviceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QRect setDeviceRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 72, column 12>
//   // proto:  QColor QSGAbstractRenderer::clearColor();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->clearColor();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer10clearColorEv clearColor()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 80, column 10>
//   // proto:  void QSGAbstractRenderer::sceneGraphChanged();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->sceneGraphChanged();
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer17sceneGraphChangedEv sceneGraphChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 65, column 11>
//   // proto:  QRect QSGAbstractRenderer::viewportRect();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->viewportRect();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer12viewportRectEv viewportRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 60, column 17>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setDeviceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QSize setDeviceRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 67, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrixToRect(const QRectF & rect);
if (true) {
  auto f = [](const QRectF & arg1) {
    ((QSGAbstractRenderer*)0)->setProjectionMatrixToRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF setProjectionMatrixToRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 64, column 17>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QSize & size);
if (true) {
  auto f = [](const QSize & arg1) {
    ((QSGAbstractRenderer*)0)->setViewportRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QSize setViewportRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 61, column 11>
//   // proto:  QRect QSGAbstractRenderer::deviceRect();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->deviceRect();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer10deviceRectEv deviceRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 75, column 15>
//   // proto:  ClearMode QSGAbstractRenderer::clearMode();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->clearMode();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer9clearModeEv clearMode()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 77, column 18>
//   // proto:  void QSGAbstractRenderer::renderScene(GLuint fboId);
if (true) {
  auto f = [](GLuint arg1) {
    ((QSGAbstractRenderer*)0)->renderScene(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer11renderSceneEj renderScene(GLuint)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 45, column 5>
//   // proto:  const QMetaObject * QSGAbstractRenderer::metaObject();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 74, column 10>
//   // proto:  void QSGAbstractRenderer::setClearMode(ClearMode mode);
if (true) {
  auto f = [](QSGAbstractRenderer::ClearMode arg1) {
    ((QSGAbstractRenderer*)0)->setClearMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE setClearMode(ClearMode)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 71, column 10>
//   // proto:  void QSGAbstractRenderer::setClearColor(const QColor & color);
if (true) {
  auto f = [](const QColor & arg1) {
    ((QSGAbstractRenderer*)0)->setClearColor(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer13setClearColorERK6QColor setClearColor(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 69, column 16>
//   // proto:  QMatrix4x4 QSGAbstractRenderer::projectionMatrix();
if (true) {
  auto f = []() {
    ((QSGAbstractRenderer*)0)->projectionMatrix();
  };
  if (f == nullptr){}
}
// _ZNK19QSGAbstractRenderer16projectionMatrixEv projectionMatrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 63, column 10>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QRect & rect);
if (true) {
  auto f = [](const QRect & arg1) {
    ((QSGAbstractRenderer*)0)->setViewportRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QRect setViewportRect(const class QRect &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 68, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrix(const QMatrix4x4 & matrix);
extern "C"
void C_ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4(void *qthis, const QMatrix4x4 & arg1) {
  ((QSGAbstractRenderer*)qthis)->setProjectionMatrix(arg1);
}
// _ZN19QSGAbstractRenderer19setProjectionMatrixERK10QMatrix4x4 setProjectionMatrix(const class QMatrix4x4 &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 57, column 10>
//   // proto:  void QSGAbstractRenderer::setRootNode(QSGRootNode * node);
extern "C"
void C_ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode(void *qthis, QSGRootNode * arg1) {
  ((QSGAbstractRenderer*)qthis)->setRootNode(arg1);
}
// _ZN19QSGAbstractRenderer11setRootNodeEP11QSGRootNode setRootNode(class QSGRootNode *)
//   // proto:  void QSGAbstractRenderer::~QSGAbstractRenderer();
extern "C"
void C_ZN19QSGAbstractRendererD2Ev(void *qthis) {
  delete (QSGAbstractRenderer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 58, column 18>
//   // proto:  QSGRootNode * QSGAbstractRenderer::rootNode();
extern "C"
void C_ZNK19QSGAbstractRenderer8rootNodeEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->rootNode();
}
// _ZNK19QSGAbstractRenderer8rootNodeEv rootNode()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 59, column 10>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QRect & rect);
extern "C"
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QRect(void *qthis, const QRect & arg1) {
  ((QSGAbstractRenderer*)qthis)->setDeviceRect(arg1);
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QRect setDeviceRect(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 72, column 12>
//   // proto:  QColor QSGAbstractRenderer::clearColor();
extern "C"
void C_ZNK19QSGAbstractRenderer10clearColorEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->clearColor();
}
// _ZNK19QSGAbstractRenderer10clearColorEv clearColor()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 80, column 10>
//   // proto:  void QSGAbstractRenderer::sceneGraphChanged();
extern "C"
void C_ZN19QSGAbstractRenderer17sceneGraphChangedEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->sceneGraphChanged();
}
// _ZN19QSGAbstractRenderer17sceneGraphChangedEv sceneGraphChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 65, column 11>
//   // proto:  QRect QSGAbstractRenderer::viewportRect();
extern "C"
void C_ZNK19QSGAbstractRenderer12viewportRectEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->viewportRect();
}
// _ZNK19QSGAbstractRenderer12viewportRectEv viewportRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 60, column 17>
//   // proto:  void QSGAbstractRenderer::setDeviceRect(const QSize & size);
extern "C"
void C_ZN19QSGAbstractRenderer13setDeviceRectERK5QSize(void *qthis, const QSize & arg1) {
  ((QSGAbstractRenderer*)qthis)->setDeviceRect(arg1);
}
// _ZN19QSGAbstractRenderer13setDeviceRectERK5QSize setDeviceRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 67, column 10>
//   // proto:  void QSGAbstractRenderer::setProjectionMatrixToRect(const QRectF & rect);
extern "C"
void C_ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF(void *qthis, const QRectF & arg1) {
  ((QSGAbstractRenderer*)qthis)->setProjectionMatrixToRect(arg1);
}
// _ZN19QSGAbstractRenderer25setProjectionMatrixToRectERK6QRectF setProjectionMatrixToRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 64, column 17>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QSize & size);
extern "C"
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QSize(void *qthis, const QSize & arg1) {
  ((QSGAbstractRenderer*)qthis)->setViewportRect(arg1);
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QSize setViewportRect(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 61, column 11>
//   // proto:  QRect QSGAbstractRenderer::deviceRect();
extern "C"
void C_ZNK19QSGAbstractRenderer10deviceRectEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->deviceRect();
}
// _ZNK19QSGAbstractRenderer10deviceRectEv deviceRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 75, column 15>
//   // proto:  ClearMode QSGAbstractRenderer::clearMode();
extern "C"
void C_ZNK19QSGAbstractRenderer9clearModeEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->clearMode();
}
// _ZNK19QSGAbstractRenderer9clearModeEv clearMode()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 77, column 18>
//   // proto:  void QSGAbstractRenderer::renderScene(GLuint fboId);
extern "C"
void C_ZN19QSGAbstractRenderer11renderSceneEj(void *qthis, GLuint arg1) {
  ((QSGAbstractRenderer*)qthis)->renderScene(arg1);
}
// _ZN19QSGAbstractRenderer11renderSceneEj renderScene(GLuint)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 45, column 5>
//   // proto:  const QMetaObject * QSGAbstractRenderer::metaObject();
extern "C"
void C_ZNK19QSGAbstractRenderer10metaObjectEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->metaObject();
}
// _ZNK19QSGAbstractRenderer10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 74, column 10>
//   // proto:  void QSGAbstractRenderer::setClearMode(ClearMode mode);
extern "C"
void C_ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE(void *qthis, QSGAbstractRenderer::ClearMode arg1) {
  ((QSGAbstractRenderer*)qthis)->setClearMode(arg1);
}
// _ZN19QSGAbstractRenderer12setClearModeE6QFlagsINS_12ClearModeBitEE setClearMode(ClearMode)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 71, column 10>
//   // proto:  void QSGAbstractRenderer::setClearColor(const QColor & color);
extern "C"
void C_ZN19QSGAbstractRenderer13setClearColorERK6QColor(void *qthis, const QColor & arg1) {
  ((QSGAbstractRenderer*)qthis)->setClearColor(arg1);
}
// _ZN19QSGAbstractRenderer13setClearColorERK6QColor setClearColor(const class QColor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 69, column 16>
//   // proto:  QMatrix4x4 QSGAbstractRenderer::projectionMatrix();
extern "C"
void C_ZNK19QSGAbstractRenderer16projectionMatrixEv(void *qthis) {
  ((QSGAbstractRenderer*)qthis)->projectionMatrix();
}
// _ZNK19QSGAbstractRenderer16projectionMatrixEv projectionMatrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgabstractrenderer.h', line 63, column 10>
//   // proto:  void QSGAbstractRenderer::setViewportRect(const QRect & rect);
extern "C"
void C_ZN19QSGAbstractRenderer15setViewportRectERK5QRect(void *qthis, const QRect & arg1) {
  ((QSGAbstractRenderer*)qthis)->setViewportRect(arg1);
}
// _ZN19QSGAbstractRenderer15setViewportRectERK5QRect setViewportRect(const class QRect &)
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

