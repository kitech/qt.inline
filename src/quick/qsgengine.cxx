//  header block begin
// /usr/include/qt/QtQuick/qsgengine.h
#ifndef protected
#define protected public
#endif
#include <qsgengine.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGEngine is pure virtual: false
// QSGEngine has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGEngine : public QSGEngine {
public:
  virtual ~MyQSGEngine() {}
// void QSGEngine(class QObject *)
MyQSGEngine(QObject * parent) : QSGEngine(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine10metaObjectEv(void *this_) {
  return (void*)((QSGEngine*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:70
// [-2] void QSGEngine(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSGEngineC2EP7QObject(QObject * parent) {
  return  new QSGEngine(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:71
// [-2] void ~QSGEngine()
extern "C" Q_DECL_EXPORT
void C_ZN9QSGEngineD2Ev(void *this_) {
  delete (QSGEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:74
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN9QSGEngine10invalidateEv(void *this_) {
  ((QSGEngine*)this_)->invalidate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:76
// [8] QSGAbstractRenderer * createRenderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine14createRendererEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createRenderer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:77
// [8] QSGTexture * createTextureFromImage(const class QImage &, QSGEngine::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *this_, QImage* image, QFlags<QSGEngine::CreateTextureOption> options) {
  return (void*)((QSGEngine*)this_)->createTextureFromImage(*image, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:78
// [8] QSGTexture * createTextureFromId(uint, const class QSize &, QSGEngine::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *this_, uint id, QSize* size, QFlags<QSGEngine::CreateTextureOption> options) {
  return (void*)((QSGEngine*)this_)->createTextureFromId(id, *size, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:79
// [8] QSGRendererInterface * rendererInterface()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine17rendererInterfaceEv(void *this_) {
  return (void*)((QSGEngine*)this_)->rendererInterface();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:80
// [8] QSGRectangleNode * createRectangleNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createRectangleNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createRectangleNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:81
// [8] QSGImageNode * createImageNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine15createImageNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createImageNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:82
// [8] QSGNinePatchNode * createNinePatchNode()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createNinePatchNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createNinePatchNode();
}

//  main block end
