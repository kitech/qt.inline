//  header block begin
// since 0x050400
// /usr/include/qt/QtQuick/qquickrendercontrol.h
#ifndef protected
#define protected public
#endif
#include <qquickrendercontrol.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickRenderControl is pure virtual: false
// QQuickRenderControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickRenderControl : public QQuickRenderControl {
public:
  virtual ~MyQQuickRenderControl() {}
// void QQuickRenderControl(QObject *)
MyQQuickRenderControl(QObject * parent) : QQuickRenderControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickRenderControl10metaObjectEv(void *this_) {
  return (void*)((QQuickRenderControl*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:58
// [-2] void QQuickRenderControl(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControlC2EP7QObject(QObject * parent) {
  return  new QQuickRenderControl(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:59
// [-2] void ~QQuickRenderControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControlD2Ev(void *this_) {
  delete (QQuickRenderControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:61
// [-2] void prepareThread(QThread *)
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl13prepareThreadEP7QThread(void *this_, QThread * targetThread) {
  ((QQuickRenderControl*)this_)->prepareThread(targetThread);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:63
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl10invalidateEv(void *this_) {
  ((QQuickRenderControl*)this_)->invalidate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:65
// [-2] void polishItems()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl11polishItemsEv(void *this_) {
  ((QQuickRenderControl*)this_)->polishItems();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:66
// [-2] void render()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl6renderEv(void *this_) {
  ((QQuickRenderControl*)this_)->render();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:67
// [1] bool sync()
extern "C" Q_DECL_EXPORT
bool C_ZN19QQuickRenderControl4syncEv(void *this_) {
  return (bool)((QQuickRenderControl*)this_)->sync();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:69
// [32] QImage grab()
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl4grabEv(void *this_) {
  auto rv = ((QQuickRenderControl*)this_)->grab();
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:71
// [8] QWindow * renderWindowFor(QQuickWindow *, QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl15renderWindowForEP12QQuickWindowP6QPoint(QQuickWindow * win, QPoint * offset) {
  return (void*)QQuickRenderControl::renderWindowFor(win, offset);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:72
// [8] QWindow * renderWindow(QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickRenderControl12renderWindowEP6QPoint(void *this_, QPoint * offset) {
  return (void*)((QQuickRenderControl*)this_)->renderWindow(offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:75
// [-2] void renderRequested()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl15renderRequestedEv(void *this_) {
  ((QQuickRenderControl*)this_)->renderRequested();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:76
// [-2] void sceneChanged()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickRenderControl12sceneChangedEv(void *this_) {
  ((QQuickRenderControl*)this_)->sceneChanged();
}

//  main block end
