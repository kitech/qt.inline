//  header block begin
// since 0x050000
// /usr/include/qt/QtQuick/qquickview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickview.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickView is pure virtual: false
// QQuickView has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickView : public QQuickView {
public:
  virtual ~MyQQuickView() {}
// void QQuickView(QWindow *)
MyQQuickView(QWindow * parent) : QQuickView(parent) {}
// void QQuickView(QQmlEngine *, QWindow *)
MyQQuickView(QQmlEngine * engine, QWindow * parent) : QQuickView(engine, parent) {}
// void QQuickView(const QUrl &, QWindow *)
MyQQuickView(const QUrl & source, QWindow * parent) : QQuickView(source, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickView::mouseMoveEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:100
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:101
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:103
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:104
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::keyReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:105
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:106
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:107
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QQuickView*)this_)->QQuickView::mouseMoveEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView10metaObjectEv(void *this_) {
  return (void*)((QQuickView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QQuickView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:63
// [-2] void QQuickView(QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickViewC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:64
// [-2] void QQuickView(QQmlEngine *, QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickViewC2EP10QQmlEngineP7QWindow(QQmlEngine * engine, QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(engine, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:65
// [-2] void QQuickView(const QUrl &, QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QQuickViewC2ERK4QUrlP7QWindow(QUrl* source, QWindow * parent) {
  auto _nilp = (MyQQuickView*)(0);
  return  new MyQQuickView(*source, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:66
// [-2] void ~QQuickView()
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickViewD2Ev(void *this_) {
  delete (QQuickView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:68
// [8] QUrl source()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView6sourceEv(void *this_) {
  auto rv = ((QQuickView*)this_)->source();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:70
// [8] QQmlEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView6engineEv(void *this_) {
  return (void*)((QQuickView*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:71
// [8] QQmlContext * rootContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView11rootContextEv(void *this_) {
  return (void*)((QQuickView*)this_)->rootContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:73
// [8] QQuickItem * rootObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView10rootObjectEv(void *this_) {
  return (void*)((QQuickView*)this_)->rootObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:77
// [4] QQuickView::ResizeMode resizeMode()
extern "C" Q_DECL_EXPORT
QQuickView::ResizeMode C_ZNK10QQuickView10resizeModeEv(void *this_) {
  return (QQuickView::ResizeMode)((QQuickView*)this_)->resizeMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:78
// [-2] void setResizeMode(QQuickView::ResizeMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView13setResizeModeENS_10ResizeModeE(void *this_, QQuickView::ResizeMode arg0) {
  ((QQuickView*)this_)->setResizeMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:82
// [4] QQuickView::Status status()
extern "C" Q_DECL_EXPORT
QQuickView::Status C_ZNK10QQuickView6statusEv(void *this_) {
  return (QQuickView::Status)((QQuickView*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:84
// [-2] QList<QQmlError> errors()
extern "C" Q_DECL_EXPORT
QList<QQmlError>* C_ZNK10QQuickView6errorsEv(void *this_) {
  auto rv = ((QQuickView*)this_)->errors();
return new QList<QQmlError>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:86
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView8sizeHintEv(void *this_) {
  auto rv = ((QQuickView*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:87
// [8] QSize initialSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QQuickView11initialSizeEv(void *this_) {
  auto rv = ((QQuickView*)this_)->initialSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:90
// [-2] void setSource(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView9setSourceERK4QUrl(void *this_, QUrl* arg0) {
  ((QQuickView*)this_)->setSource(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:91
// [-2] void setContent(const QUrl &, QQmlComponent *, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView10setContentERK4QUrlP13QQmlComponentP7QObject(void *this_, QUrl* url, QQmlComponent * component, QObject * item) {
  ((QQuickView*)this_)->setContent(*url, component, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:94
// [-2] void statusChanged(QQuickView::Status)
extern "C" Q_DECL_EXPORT
void C_ZN10QQuickView13statusChangedENS_6StatusE(void *this_, QQuickView::Status arg0) {
  ((QQuickView*)this_)->statusChanged(arg0);
}

//  main block end
