//  header block begin

// /usr/include/qt/QtGui/qrasterwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrasterwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QRasterWindow is pure virtual: false false
// QRasterWindow has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRasterWindow_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRasterWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRasterWindow_t qt_meta_stringdata_MyQRasterWindow = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQRasterWindow"
  },
  "MyQRasterWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRasterWindow[] = {
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
class Q_DECL_EXPORT MyQRasterWindow : public QRasterWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRasterWindow::staticMetaObject,
  qt_meta_stringdata_MyQRasterWindow.data,
  qt_meta_data_MyQRasterWindow,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRasterWindow.stringdata0))
      return static_cast<void*>(this);
  return QRasterWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRasterWindow::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRasterWindow() {}
// void QRasterWindow(QWindow *)
MyQRasterWindow(QWindow * parent) : QRasterWindow(parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QRasterWindow::metric(metric);
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
    return QRasterWindow::redirected(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QRasterWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRasterWindow* qo = (MyQRasterWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrasterwindow(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm2744923513 (29)_ZN13QRasterWindow2trEPKcS1_i
//static
/*void qm2744923513(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRasterWindow::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRasterWindow::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QRasterWindowD2Ev(void *this_)*/ {
  delete (QRasterWindow*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrasterwindow
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
