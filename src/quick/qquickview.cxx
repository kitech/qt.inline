//  header block begin
// /usr/include/qt/QtQuick/qquickview.h
#include <qquickview.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickView is pure virtual: false
// QQuickView has virtual projected: true
//  header block end

//  main block begin

class MyQQuickView : public QQuickView {
public:
  virtual ~MyQQuickView() {}
// void QQuickView(class QWindow *)
MyQQuickView(QWindow * parent) : QQuickView(parent) {}
// void QQuickView(class QQmlEngine *, class QWindow *)
MyQQuickView(QQmlEngine * engine, QWindow * parent) : QQuickView(engine, parent) {}
// void QQuickView(const class QUrl &, class QWindow *)
MyQQuickView(const QUrl & source, QWindow * parent) : QQuickView(source, parent) {}
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::resizeEvent(arg0);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::timerEvent(arg0);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::keyPressEvent(arg0);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::keyReleaseEvent(arg0);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::mousePressEvent(arg0);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::mouseReleaseEvent(arg0);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickView::mouseMoveEvent(arg0);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QQuickView10metaObjectEv(void *this_) {
  return (void*)((QQuickView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:63
// [-2] void QQuickView(class QWindow *)
extern "C"
void* C_ZN10QQuickViewC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:64
// [-2] void QQuickView(class QQmlEngine *, class QWindow *)
extern "C"
void* C_ZN10QQuickViewC2EP10QQmlEngineP7QWindow(QQmlEngine * engine, QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(engine, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:65
// [-2] void QQuickView(const class QUrl &, class QWindow *)
extern "C"
void* C_ZN10QQuickViewC2ERK4QUrlP7QWindow(QUrl* source, QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(*source, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:66
// [-2] void ~QQuickView()
extern "C"
void C_ZN10QQuickViewD2Ev(void *this_) {
  delete (QQuickView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:68
// [8] QUrl source()
extern "C"
void* C_ZNK10QQuickView6sourceEv(void *this_) {
  auto rv = ((QQuickView*)this_)->source();
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:70
// [8] QQmlEngine * engine()
extern "C"
void* C_ZNK10QQuickView6engineEv(void *this_) {
  return (void*)((QQuickView*)this_)->engine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:71
// [8] QQmlContext * rootContext()
extern "C"
void* C_ZNK10QQuickView11rootContextEv(void *this_) {
  return (void*)((QQuickView*)this_)->rootContext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:73
// [8] QQuickItem * rootObject()
extern "C"
void* C_ZNK10QQuickView10rootObjectEv(void *this_) {
  return (void*)((QQuickView*)this_)->rootObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:77
// [4] QQuickView::ResizeMode resizeMode()
extern "C"
QQuickView::ResizeMode C_ZNK10QQuickView10resizeModeEv(void *this_) {
  return (QQuickView::ResizeMode)((QQuickView*)this_)->resizeMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:78
// [-2] void setResizeMode(enum QQuickView::ResizeMode)
extern "C"
void C_ZN10QQuickView13setResizeModeENS_10ResizeModeE(void *this_, QQuickView::ResizeMode arg0) {
  ((QQuickView*)this_)->setResizeMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:82
// [4] QQuickView::Status status()
extern "C"
QQuickView::Status C_ZNK10QQuickView6statusEv(void *this_) {
  return (QQuickView::Status)((QQuickView*)this_)->status();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:86
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QQuickView8sizeHintEv(void *this_) {
  auto rv = ((QQuickView*)this_)->sizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:87
// [8] QSize initialSize()
extern "C"
void* C_ZNK10QQuickView11initialSizeEv(void *this_) {
  auto rv = ((QQuickView*)this_)->initialSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:90
// [-2] void setSource(const class QUrl &)
extern "C"
void C_ZN10QQuickView9setSourceERK4QUrl(void *this_, QUrl* arg0) {
  ((QQuickView*)this_)->setSource(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:91
// [-2] void setContent(const class QUrl &, class QQmlComponent *, class QObject *)
extern "C"
void C_ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject(void *this_, QUrl* url, QQmlComponent * component, QObject * item) {
  ((QQuickView*)this_)->setContent(*url, component, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:94
// [-2] void statusChanged(class QQuickView::Status)
extern "C"
void C_ZN10QQuickView13statusChangedENS_6StatusE(void *this_, QQuickView::Status arg0) {
  ((QQuickView*)this_)->statusChanged(arg0);
}
//  main block end
