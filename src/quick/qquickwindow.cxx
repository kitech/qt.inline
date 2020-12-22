//  header block begin

// /usr/include/qt/QtQuick/qquickwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickwindow.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickWindow is pure virtual: false false
// QQuickWindow has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickWindow_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickWindow_t qt_meta_stringdata_MyQQuickWindow = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQQuickWindow"
  },
  "MyQQuickWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickWindow[] = {
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
class Q_DECL_EXPORT MyQQuickWindow : public QQuickWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickWindow::staticMetaObject,
  qt_meta_stringdata_MyQQuickWindow.data,
  qt_meta_data_MyQQuickWindow,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickWindow.stringdata0))
      return static_cast<void*>(this);
  return QQuickWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickWindow::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickWindow() {}
// void QQuickWindow(QWindow *)
MyQQuickWindow(QWindow * parent) : QQuickWindow(parent) {}
// void QQuickWindow(QQuickRenderControl *)
MyQQuickWindow(QQuickRenderControl * renderControl) : QQuickWindow(renderControl) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void exposeEvent(QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::exposeEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::resizeEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::showEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::hideEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::focusInEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::focusOutEvent(arg0);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QQuickWindow::event(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::keyPressEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::keyReleaseEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mousePressEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseDoubleClickEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::wheelEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void tabletEvent(QTabletEvent *)
  virtual void tabletEvent(QTabletEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabletEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWindow::tabletEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QQuickWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickWindow* qo = (MyQQuickWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickwindow(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:73
// [8] QString tr(const char *, const char *, int) 
// (12)qm2092066527 (28)_ZN12QQuickWindow2trEPKcS1_i
//static
/*void qm2092066527(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickWindow::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickWindow::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:117
// [-2] void QQuickWindow(QWindow *) 
// (12)qm1743375300 (29)_ZN12QQuickWindowC2EP7QWindow
/*void* qm1743375300(QWindow * parent)*/{
  auto _nilp = (MyQQuickWindow*)(0);
  QWindow * parent = *(QWindow **)this_;
  this_ =  new QQuickWindow(parent);
  this_ =  new MyQQuickWindow(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickwindow.h:118
// [-2] void QQuickWindow(QQuickRenderControl *) 
// (12)qm3354712033 (42)_ZN12QQuickWindowC2EP19QQuickRenderControl
/*void* qm3354712033(QQuickRenderControl * renderControl)*/{
  auto _nilp = (MyQQuickWindow*)(0);
  QQuickRenderControl * renderControl = *(QQuickRenderControl **)this_;
  this_ =  new QQuickWindow(renderControl);
  this_ =  new MyQQuickWindow(renderControl);
}


/*void C_ZN12QQuickWindowD2Ev(void *this_)*/ {
  delete (QQuickWindow*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickwindow
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
