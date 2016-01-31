// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qsgengine.h
// dst-file: /src/quick/qsgengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgengine.h>

extern "C" {

int QSGEngine_Class_Size()
{
  return sizeof(QSGEngine);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgengine_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 49, column 5>
//   // proto:  const QMetaObject * QSGEngine::metaObject();
if (true) {
  auto f = [](QSGEngine flythis) {
    ((QSGEngine*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK9QSGEngine10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 62, column 10>
//   // proto:  void QSGEngine::initialize(QOpenGLContext * context);
if (true) {
  auto f = [](QSGEngine flythis, QOpenGLContext * arg1) {
    ((QSGEngine*)0)->initialize(arg1);
    flythis.initialize(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QSGEngine10initializeEP14QOpenGLContext initialize(class QOpenGLContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 67, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
if (true) {
  auto f = [](QSGEngine flythis, uint arg1, const QSize & arg2, QSGEngine::CreateTextureOptions arg3) {
    ((QSGEngine*)0)->createTextureFromId(arg1, arg2, arg3);
    flythis.createTextureFromId(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 65, column 26>
//   // proto:  QSGAbstractRenderer * QSGEngine::createRenderer();
if (true) {
  auto f = [](QSGEngine flythis) {
    ((QSGEngine*)0)->createRenderer();
    flythis.createRenderer();
  };
  if (f == nullptr){}
}
// _ZNK9QSGEngine14createRendererEv createRenderer()
//   // proto:  void QSGEngine::~QSGEngine();
if (true) {
  delete ((QSGEngine*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 66, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromImage(const QImage & image, CreateTextureOptions options);
if (true) {
  auto f = [](QSGEngine flythis, const QImage & arg1, QSGEngine::CreateTextureOptions arg2) {
    ((QSGEngine*)0)->createTextureFromImage(arg1, arg2);
    flythis.createTextureFromImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 59, column 5>
//   // proto:  void QSGEngine::QSGEngine(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QSGEngine(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 63, column 10>
//   // proto:  void QSGEngine::invalidate();
if (true) {
  auto f = [](QSGEngine flythis) {
    ((QSGEngine*)0)->invalidate();
    flythis.invalidate();
  };
  if (f == nullptr){}
}
// _ZN9QSGEngine10invalidateEv invalidate()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 49, column 5>
//   // proto:  const QMetaObject * QSGEngine::metaObject();
extern "C"
void C_ZNK9QSGEngine10metaObjectEv(void *qthis) {
  ((QSGEngine*)qthis)->metaObject();
}
// _ZNK9QSGEngine10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 62, column 10>
//   // proto:  void QSGEngine::initialize(QOpenGLContext * context);
extern "C"
void C_ZN9QSGEngine10initializeEP14QOpenGLContext(void *qthis, QOpenGLContext * arg1) {
  ((QSGEngine*)qthis)->initialize(arg1);
}
// _ZN9QSGEngine10initializeEP14QOpenGLContext initialize(class QOpenGLContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 67, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromId(uint id, const QSize & size, CreateTextureOptions options);
extern "C"
void C_ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *qthis, uint arg1, const QSize & arg2, QSGEngine::CreateTextureOptions arg3) {
  ((QSGEngine*)qthis)->createTextureFromId(arg1, arg2, arg3);
}
// _ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE createTextureFromId(uint, const class QSize &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 65, column 26>
//   // proto:  QSGAbstractRenderer * QSGEngine::createRenderer();
extern "C"
void C_ZNK9QSGEngine14createRendererEv(void *qthis) {
  ((QSGEngine*)qthis)->createRenderer();
}
// _ZNK9QSGEngine14createRendererEv createRenderer()
//   // proto:  void QSGEngine::~QSGEngine();
extern "C"
void C_ZN9QSGEngineD2Ev(void *qthis) {
  delete (QSGEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 66, column 17>
//   // proto:  QSGTexture * QSGEngine::createTextureFromImage(const QImage & image, CreateTextureOptions options);
extern "C"
void C_ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *qthis, const QImage & arg1, QSGEngine::CreateTextureOptions arg2) {
  ((QSGEngine*)qthis)->createTextureFromImage(arg1, arg2);
}
// _ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE createTextureFromImage(const class QImage &, CreateTextureOptions)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 59, column 5>
//   // proto:  void QSGEngine::QSGEngine(QObject * parent);
extern "C"
void C_ZN9QSGEngineC2EP7QObject(QObject * arg1) {
  new QSGEngine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgengine.h', line 63, column 10>
//   // proto:  void QSGEngine::invalidate();
extern "C"
void C_ZN9QSGEngine10invalidateEv(void *qthis) {
  ((QSGEngine*)qthis)->invalidate();
}
// _ZN9QSGEngine10invalidateEv invalidate()
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

