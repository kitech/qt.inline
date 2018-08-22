//  header block begin
// since 0x050400
// /usr/include/qt/QtWidgets/qopenglwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QOpenGLWidget is pure virtual: false
// QOpenGLWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLWidget : public QOpenGLWidget {
public:
  virtual ~MyQOpenGLWidget() {}
// void QOpenGLWidget(QWidget *, Qt::WindowFlags)
MyQOpenGLWidget(QWidget * parent, QFlags<Qt::WindowType> f) : QOpenGLWidget(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void initializeGL()
  virtual void initializeGL()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeGL", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWidget::initializeGL();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeGL(int, int)
  virtual void resizeGL(int w, int h)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeGL", &handled, 2, (uint64_t)w, (uint64_t)h, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWidget::resizeGL(w, h);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintGL()
  virtual void paintGL()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintGL", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWidget::paintGL();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWidget::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWidget::resizeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QOpenGLWidget::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QOpenGLWidget::metric(metric);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QPaintDevice * redirected(QPoint *)
  virtual QPaintDevice * redirected(QPoint * p) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"redirected", &handled, 1, (uint64_t)p, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // Pointer Pointer QPaintDevice *
    } else {
    return QOpenGLWidget::redirected(p);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEngine", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine *)(irv);
      // Pointer Pointer QPaintEngine *
    } else {
    return QOpenGLWidget::paintEngine();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:95
// [-2] void initializeGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget12initializeGLEv(void *this_) {
  ((QOpenGLWidget*)this_)->QOpenGLWidget::initializeGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:96
// [-2] void resizeGL(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget8resizeGLEii(void *this_, int w, int h) {
  ((QOpenGLWidget*)this_)->QOpenGLWidget::resizeGL(w, h);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:97
// [-2] void paintGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget7paintGLEv(void *this_) {
  ((QOpenGLWidget*)this_)->QOpenGLWidget::paintGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:99
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QOpenGLWidget*)this_)->QOpenGLWidget::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:100
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QOpenGLWidget*)this_)->QOpenGLWidget::resizeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:101
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QOpenGLWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QOpenGLWidget*)this_)->QOpenGLWidget::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:103
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK13QOpenGLWidget6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QOpenGLWidget*)this_)->QOpenGLWidget::metric(metric);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:104
// [8] QPaintDevice * redirected(QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWidget10redirectedEP6QPoint(void *this_, QPoint * p) {
  return (void*)((QOpenGLWidget*)this_)->QOpenGLWidget::redirected(p);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:105
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWidget11paintEngineEv(void *this_) {
  return (void*)((QOpenGLWidget*)this_)->QOpenGLWidget::paintEngine();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWidget10metaObjectEv(void *this_) {
  return (void*)((QOpenGLWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QOpenGLWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:66
// [-2] void QOpenGLWidget(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWidgetC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQOpenGLWidget*)(0);
  return  new MyQOpenGLWidget(parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:67
// [-2] void ~QOpenGLWidget()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidgetD2Ev(void *this_) {
  delete (QOpenGLWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:69
// [-2] void setUpdateBehavior(QOpenGLWidget::UpdateBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget17setUpdateBehaviorENS_14UpdateBehaviorE(void *this_, QOpenGLWidget::UpdateBehavior updateBehavior) {
  ((QOpenGLWidget*)this_)->setUpdateBehavior(updateBehavior);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWidgets/qopenglwidget.h:70
// [4] QOpenGLWidget::UpdateBehavior updateBehavior()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QOpenGLWidget::UpdateBehavior C_ZNK13QOpenGLWidget14updateBehaviorEv(void *this_) {
  return (QOpenGLWidget::UpdateBehavior)((QOpenGLWidget*)this_)->updateBehavior();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:72
// [-2] void setFormat(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QOpenGLWidget*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:73
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWidget6formatEv(void *this_) {
  auto rv = ((QOpenGLWidget*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qopenglwidget.h:75
// [4] GLenum textureFormat()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
GLenum C_ZNK13QOpenGLWidget13textureFormatEv(void *this_) {
  return (GLenum)((QOpenGLWidget*)this_)->textureFormat();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtWidgets/qopenglwidget.h:76
// [-2] void setTextureFormat(GLenum)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget16setTextureFormatEj(void *this_, GLenum texFormat) {
  ((QOpenGLWidget*)this_)->setTextureFormat(texFormat);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:78
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QOpenGLWidget7isValidEv(void *this_) {
  return (bool)((QOpenGLWidget*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:80
// [-2] void makeCurrent()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget11makeCurrentEv(void *this_) {
  ((QOpenGLWidget*)this_)->makeCurrent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:81
// [-2] void doneCurrent()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget11doneCurrentEv(void *this_) {
  ((QOpenGLWidget*)this_)->doneCurrent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:83
// [8] QOpenGLContext * context()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWidget7contextEv(void *this_) {
  return (void*)((QOpenGLWidget*)this_)->context();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:84
// [4] GLuint defaultFramebufferObject()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK13QOpenGLWidget24defaultFramebufferObjectEv(void *this_) {
  return (GLuint)((QOpenGLWidget*)this_)->defaultFramebufferObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:86
// [32] QImage grabFramebuffer()
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWidget15grabFramebufferEv(void *this_) {
  auto rv = ((QOpenGLWidget*)this_)->grabFramebuffer();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:89
// [-2] void aboutToCompose()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget14aboutToComposeEv(void *this_) {
  ((QOpenGLWidget*)this_)->aboutToCompose();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:90
// [-2] void frameSwapped()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget12frameSwappedEv(void *this_) {
  ((QOpenGLWidget*)this_)->frameSwapped();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:91
// [-2] void aboutToResize()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget13aboutToResizeEv(void *this_) {
  ((QOpenGLWidget*)this_)->aboutToResize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qopenglwidget.h:92
// [-2] void resized()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWidget7resizedEv(void *this_) {
  ((QOpenGLWidget*)this_)->resized();
}

//  main block end
