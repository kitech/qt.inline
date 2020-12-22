//  header block begin

// /usr/include/qt/QtQuick/qquickview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickview.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickView is pure virtual: false false
// QQuickView has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickView_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickView_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickView_t qt_meta_stringdata_MyQQuickView = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQQuickView"
  },
  "MyQQuickView"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickView[] = {
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
class Q_DECL_EXPORT MyQQuickView : public QQuickView {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickView::staticMetaObject,
  qt_meta_stringdata_MyQQuickView.data,
  qt_meta_data_MyQQuickView,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickView.stringdata0))
      return static_cast<void*>(this);
  return QQuickView::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickView::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickView() {}
// void QQuickView(QWindow *)
MyQQuickView(QWindow * parent) : QQuickView(parent) {}
// void QQuickView(QQmlEngine *, QWindow *)
MyQQuickView(QQmlEngine * engine, QWindow * parent) : QQuickView(engine, parent) {}
// void QQuickView(const QUrl &, QWindow *)
MyQQuickView(const QUrl & source, QWindow * parent) : QQuickView(source, parent) {}
// void QQuickView(const QUrl &, QQuickRenderControl *)
MyQQuickView(const QUrl & source, QQuickRenderControl * renderControl) : QQuickView(source, renderControl) {}
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QQuickView_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickView* qo = (MyQQuickView*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickview(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm4105720659 (26)_ZN10QQuickView2trEPKcS1_i
//static
/*void qm4105720659(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickView::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickView::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:62
// [-2] void QQuickView(QWindow *) 
// (12)qm2205093626 (27)_ZN10QQuickViewC2EP7QWindow
/*void* qm2205093626(QWindow * parent)*/{
  auto _nilp = (MyQQuickView*)(0);
  QWindow * parent = *(QWindow **)this_;
  this_ =  new QQuickView(parent);
  this_ =  new MyQQuickView(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:63
// [-2] void QQuickView(QQmlEngine *, QWindow *) 
// (12)qm4235128284 (40)_ZN10QQuickViewC2EP10QQmlEngineP7QWindow
/*void* qm4235128284(QQmlEngine * engine, QWindow * parent)*/{
  auto _nilp = (MyQQuickView*)(0);
  QQmlEngine * engine = *(QQmlEngine **)this_; QWindow * parent = *(QWindow **)this_;
  this_ =  new QQuickView(engine, parent);
  this_ =  new MyQQuickView(engine, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:64
// [-2] void QQuickView(const QUrl &, QWindow *) 
// (11)qm693196218 (34)_ZN10QQuickViewC2ERK4QUrlP7QWindow
/*void* qm693196218(const QUrl & source, QWindow * parent)*/{
  auto _nilp = (MyQQuickView*)(0);
  const QUrl & source = *(const QUrl *)this_; QWindow * parent = *(QWindow **)this_;
  this_ =  new QQuickView(source, parent);
  this_ =  new MyQQuickView(source, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickview.h:65
// [-2] void QQuickView(const QUrl &, QQuickRenderControl *) 
// (12)qm1731419650 (47)_ZN10QQuickViewC2ERK4QUrlP19QQuickRenderControl
/*void* qm1731419650(const QUrl & source, QQuickRenderControl * renderControl)*/{
  auto _nilp = (MyQQuickView*)(0);
  const QUrl & source = *(const QUrl *)this_; QQuickRenderControl * renderControl = *(QQuickRenderControl **)this_;
  this_ =  new QQuickView(source, renderControl);
  this_ =  new MyQQuickView(source, renderControl);
}


/*void C_ZN10QQuickViewD2Ev(void *this_)*/ {
  delete (QQuickView*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickview
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
