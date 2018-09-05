//  header block begin
// since 0x050400
// /usr/include/qt/QtGui/qpaintdevicewindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintdevicewindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintDeviceWindow is pure virtual: false
// QPaintDeviceWindow has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPaintDeviceWindow_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPaintDeviceWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPaintDeviceWindow_t qt_meta_stringdata_MyQPaintDeviceWindow = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQPaintDeviceWindow"
  },
  "MyQPaintDeviceWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPaintDeviceWindow[] = {
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
class Q_DECL_EXPORT MyQPaintDeviceWindow : public QPaintDeviceWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPaintDeviceWindow::staticMetaObject,
  qt_meta_stringdata_MyQPaintDeviceWindow.data,
  qt_meta_data_MyQPaintDeviceWindow,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPaintDeviceWindow.stringdata0))
      return static_cast<void*>(this);
  return QPaintDeviceWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPaintDeviceWindow::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPaintDeviceWindow() {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPaintDeviceWindow::paintEvent(event);
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
    return QPaintDeviceWindow::metric(metric);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void exposeEvent(QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPaintDeviceWindow::exposeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPaintDeviceWindow::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPaintDeviceWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPaintDeviceWindow* qo = (MyQPaintDeviceWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:69
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QPaintDeviceWindow*)this_)->QPaintDeviceWindow::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:71
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QPaintDeviceWindow*)this_)->QPaintDeviceWindow::metric(metric);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:72
// [-2] void exposeEvent(QExposeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent(void *this_, QExposeEvent * arg0) {
  ((QPaintDeviceWindow*)this_)->QPaintDeviceWindow::exposeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:73
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QPaintDeviceWindow5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QPaintDeviceWindow*)this_)->QPaintDeviceWindow::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPaintDeviceWindow10metaObjectEv(void *this_) {
  return (void*)((QPaintDeviceWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPaintDeviceWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPaintDeviceWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QPaintDeviceWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPaintDeviceWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPaintDeviceWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPaintDeviceWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPaintDeviceWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPaintDeviceWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:58
// [-2] void update(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindow6updateERK5QRect(void *this_, QRect* rect) {
  ((QPaintDeviceWindow*)this_)->update(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:59
// [-2] void update(const QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindow6updateERK7QRegion(void *this_, QRegion* region) {
  ((QPaintDeviceWindow*)this_)->update(*region);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:66
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindow6updateEv(void *this_) {
  ((QPaintDeviceWindow*)this_)->update();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QPaintDeviceWindowD2Ev(void *this_) {
  delete (QPaintDeviceWindow*)(this_);
}
//  main block end
