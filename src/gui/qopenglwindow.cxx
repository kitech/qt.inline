//  header block begin

// /usr/include/qt/QtGui/qopenglwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLWindow is pure virtual: false false
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
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQOpenGLWindow() {}
// void QOpenGLWindow(QOpenGLWindow::UpdateBehavior, QWindow *)
MyQOpenGLWindow(QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) : QOpenGLWindow(updateBehavior, parent) {}
// void QOpenGLWindow(QOpenGLContext *, QOpenGLWindow::UpdateBehavior, QWindow *)
MyQOpenGLWindow(QOpenGLContext * shareContext, QOpenGLWindow::UpdateBehavior updateBehavior, QWindow * parent) : QOpenGLWindow(shareContext, updateBehavior, parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Direct Visibility=Default Availability=Available
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

// Protected virtual Direct Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QOpenGLWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLWindow* qo = (MyQOpenGLWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglwindow(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglwindow.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm3042250656 (29)_ZN13QOpenGLWindow2trEPKcS1_i
//static
/*void qm3042250656(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLWindow::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLWindow::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QOpenGLWindowD2Ev(void *this_)*/ {
  delete (QOpenGLWindow*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglwindow
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
