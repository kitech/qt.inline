//  header block begin
// since 0x050400
// /usr/include/qt/QtGui/qopenglwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLWindow is pure virtual: false
// QOpenGLWindow has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLWindow_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLWindow_t qt_meta_stringdata_MyQOpenGLWindow = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQOpenGLWindow"
  },
  "MyQOpenGLWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLWindow[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQOpenGLWindow : public QOpenGLWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLWindow::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLWindow.data,
  qt_meta_data_MyQOpenGLWindow,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLWindow.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLWindow::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQOpenGLWindow() {}
// void QOpenGLWindow(QOpenGLWindow::UpdateBehavior, QWindow *)
MyQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) : QOpenGLWindow(updateBehavior, parent) {}
// void QOpenGLWindow(QOpenGLContext *, QOpenGLWindow::UpdateBehavior, QWindow *)
MyQOpenGLWindow(QOpenGLContext * shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) : QOpenGLWindow(shareContext, updateBehavior, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void initializeGL()
  virtual void initializeGL()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeGL", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWindow::initializeGL();
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
    QOpenGLWindow::resizeGL(w, h);
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
    QOpenGLWindow::paintGL();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintUnderGL()
  virtual void paintUnderGL()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintUnderGL", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWindow::paintUnderGL();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintOverGL()
  virtual void paintOverGL()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintOverGL", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWindow::paintOverGL();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWindow::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QOpenGLWindow::resizeEvent(event);
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
    return QOpenGLWindow::metric(metric);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QPaintDevice * redirected(QPoint *)
  virtual QPaintDevice * redirected(QPoint * arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"redirected", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // Pointer Pointer QPaintDevice *
    } else {
    return QOpenGLWindow::redirected(arg0);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:88
// [-2] void initializeGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow12initializeGLEv(void *this_) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::initializeGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:89
// [-2] void resizeGL(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow8resizeGLEii(void *this_, int w, int h) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::resizeGL(w, h);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:90
// [-2] void paintGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow7paintGLEv(void *this_) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::paintGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:91
// [-2] void paintUnderGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow12paintUnderGLEv(void *this_) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::paintUnderGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:92
// [-2] void paintOverGL()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow11paintOverGLEv(void *this_) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::paintOverGL();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:94
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:95
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QOpenGLWindow*)this_)->QOpenGLWindow::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:96
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK13QOpenGLWindow6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QOpenGLWindow*)this_)->QOpenGLWindow::metric(metric);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:97
// [8] QPaintDevice * redirected(QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWindow10redirectedEP6QPoint(void *this_, QPoint * arg0) {
  return (void*)((QOpenGLWindow*)this_)->QOpenGLWindow::redirected(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWindow10metaObjectEv(void *this_) {
  return (void*)((QOpenGLWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QOpenGLWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:67
// [-2] void QOpenGLWindow(QOpenGLWindow::UpdateBehavior, QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindowC2ENS_14UpdateBehaviorEP7QWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) {
  auto _nilp = (MyQOpenGLWindow*)(0);
  return  new MyQOpenGLWindow(updateBehavior, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:68
// [-2] void QOpenGLWindow(QOpenGLContext *, QOpenGLWindow::UpdateBehavior, QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindowC2EP14QOpenGLContextNS_14UpdateBehaviorEP7QWindow(QOpenGLContext * shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) {
  auto _nilp = (MyQOpenGLWindow*)(0);
  return  new MyQOpenGLWindow(shareContext, updateBehavior, parent);
}

// Public virtual Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopenglwindow.h:69
// [-2] void ~QOpenGLWindow()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindowD2Ev(void *this_) {
  delete (QOpenGLWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:71
// [4] QOpenGLWindow::UpdateBehavior updateBehavior()
extern "C" Q_DECL_EXPORT
QOpenGLWindow::UpdateBehavior C_ZNK13QOpenGLWindow14updateBehaviorEv(void *this_) {
  return (QOpenGLWindow::UpdateBehavior)((QOpenGLWindow*)this_)->updateBehavior();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:72
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QOpenGLWindow7isValidEv(void *this_) {
  return (bool)((QOpenGLWindow*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:74
// [-2] void makeCurrent()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow11makeCurrentEv(void *this_) {
  ((QOpenGLWindow*)this_)->makeCurrent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:75
// [-2] void doneCurrent()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow11doneCurrentEv(void *this_) {
  ((QOpenGLWindow*)this_)->doneCurrent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:77
// [8] QOpenGLContext * context()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWindow7contextEv(void *this_) {
  return (void*)((QOpenGLWindow*)this_)->context();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:78
// [8] QOpenGLContext * shareContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QOpenGLWindow12shareContextEv(void *this_) {
  return (void*)((QOpenGLWindow*)this_)->shareContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:80
// [4] GLuint defaultFramebufferObject()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK13QOpenGLWindow24defaultFramebufferObjectEv(void *this_) {
  return (GLuint)((QOpenGLWindow*)this_)->defaultFramebufferObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:82
// [32] QImage grabFramebuffer()
extern "C" Q_DECL_EXPORT
void* C_ZN13QOpenGLWindow15grabFramebufferEv(void *this_) {
  auto rv = ((QOpenGLWindow*)this_)->grabFramebuffer();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:85
// [-2] void frameSwapped()
extern "C" Q_DECL_EXPORT
void C_ZN13QOpenGLWindow12frameSwappedEv(void *this_) {
  ((QOpenGLWindow*)this_)->frameSwapped();
}

//  main block end
