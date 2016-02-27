// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qsgengine.h
// dst-file: /src/quick/qsgengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsgengine.h>


// <= header block end

// main block begin =>
void __keep_qsgengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSGEngine_Class_Size()
{
  return sizeof(QSGEngine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 49, column 5>
//   // proto:  const QMetaObject * QSGEngine::metaObject();
// _ZNK9QSGEngine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QSGEngine10metaObjectEv(void *qthis) {
  auto ret =
  ((QSGEngine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 62, column 10>
//   // proto:  void QSGEngine::initialize(QOpenGLContext * context);
// _ZN9QSGEngine10initializeEP14QOpenGLContext initialize(class QOpenGLContext *)
extern "C"
void
C_ZN9QSGEngine10initializeEP14QOpenGLContext(void *qthis,
QOpenGLContext * arg1) {
  ((QSGEngine*)qthis)->initialize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 67, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
// _ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
extern "C"
void*
C_ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *qthis,
uint arg1,
const QSize* arg2,
QSGEngine::CreateTextureOptions arg3) {
  auto ret =
  ((QSGEngine*)qthis)->createTextureFromId(arg1,
*((const QSize*)arg2),
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 65, column 26>
//   // proto:  QSGAbstractRenderer * QSGEngine::createRenderer();
// _ZNK9QSGEngine14createRendererEv createRenderer()
extern "C"
void*
C_ZNK9QSGEngine14createRendererEv(void *qthis) {
  auto ret =
  ((QSGEngine*)qthis)->createRenderer();
  return (void*)ret;
}
//   // proto:  void QSGEngine::~QSGEngine();
extern "C"
void C_ZN9QSGEngineD2Ev(void *qthis) {
  delete (QSGEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 66, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromImage(const QImage & image, CreateTextureOptions options);
// _ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
extern "C"
void*
C_ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *qthis,
const QImage* arg1,
QSGEngine::CreateTextureOptions arg2) {
  auto ret =
  ((QSGEngine*)qthis)->createTextureFromImage(*((const QImage*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 59, column 5>
//   // proto:  void QSGEngine::QSGEngine(QObject * parent);
extern "C"
QSGEngine*
C_ZN9QSGEngineC2EP7QObject(QObject * arg1) {
  auto ret = new QSGEngine(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 63, column 10>
//   // proto:  void QSGEngine::invalidate();
// _ZN9QSGEngine10invalidateEv invalidate()
extern "C"
void
C_ZN9QSGEngine10invalidateEv(void *qthis) {
  ((QSGEngine*)qthis)->invalidate();
}
// <= ext block end

// body block begin =>
// QSGEngine_SlotProxy here
class QSGEngine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGEngine_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/quick/qsgengine.moc"

extern "C" {
  QSGEngine_SlotProxy* QSGEngine_SlotProxy_new()
  {
    return new QSGEngine_SlotProxy();
  }
};

// <= body block end

