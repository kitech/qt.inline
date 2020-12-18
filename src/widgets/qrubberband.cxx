//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(rubberband)
// /usr/include/qt/QtWidgets/qrubberband.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrubberband.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRubberBand is pure virtual: false false
// QRubberBand has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRubberBand_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRubberBand_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRubberBand_t qt_meta_stringdata_MyQRubberBand = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQRubberBand"
  },
  "MyQRubberBand"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRubberBand[] = {
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
class Q_DECL_EXPORT MyQRubberBand : public QRubberBand {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRubberBand::staticMetaObject,
  qt_meta_stringdata_MyQRubberBand.data,
  qt_meta_data_MyQRubberBand,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRubberBand.stringdata0))
      return static_cast<void*>(this);
  return QRubberBand::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRubberBand::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRubberBand() {}
// void QRubberBand(QRubberBand::Shape, QWidget *)
MyQRubberBand(QRubberBand::Shape arg0, QWidget * arg1) : QRubberBand(arg0, arg1) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QRubberBand::event(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::paintEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::changeEvent(arg0);
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
    QRubberBand::showEvent(arg0);
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
    QRubberBand::resizeEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QRubberBand::moveEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QRubberBand_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRubberBand* qo = (MyQRubberBand*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrubberband(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2764361438 (27)_ZN11QRubberBand2trEPKcS1_i
//static
/*void qm2764361438(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRubberBand::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRubberBand::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:66
// [-2] void setGeometry(int, int, int, int) 
// (12)qm3425424011 (34)_ZN11QRubberBand11setGeometryEiiii
//static
/*void qm3425424011(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QRubberBand*)this_)->setGeometry(x, y, w, h);
   auto xptr = (void (QRubberBand::*)(int, int, int, int) ) &QRubberBand::setGeometry;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:67
// [-2] void move(int, int) 
// (12)qm1055472514 (24)_ZN11QRubberBand4moveEii
//static
/*void qm1055472514(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QRubberBand*)this_)->move(x, y);
   auto xptr = (void (QRubberBand::*)(int, int) ) &QRubberBand::move;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:68
// [-2] void move(const QPoint &) 
// (12)qm1920508628 (31)_ZN11QRubberBand4moveERK6QPoint
//static
/*void qm1920508628(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRubberBand*)this_)->move(p);
   auto xptr = (void (QRubberBand::*)(QPoint const&) ) &QRubberBand::move;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:70
// [-2] void resize(int, int) 
// (12)qm3799037707 (26)_ZN11QRubberBand6resizeEii
//static
/*void qm3799037707(int w, int h)*/ {
  int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QRubberBand*)this_)->resize(w, h);
   auto xptr = (void (QRubberBand::*)(int, int) ) &QRubberBand::resize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:72
// [-2] void resize(const QSize &) 
// (11)qm525099653 (32)_ZN11QRubberBand6resizeERK5QSize
//static
/*void qm525099653(const QSize & s)*/ {
  const QSize & s = *(const QSize *)this_;
  (void) ((QRubberBand*)this_)->resize(s);
   auto xptr = (void (QRubberBand::*)(QSize const&) ) &QRubberBand::resize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QRubberBandD2Ev(void *this_)*/ {
  delete (QRubberBand*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrubberband
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(rubberband)
#endif // #ifndef QT_MINIMAL
//  footer block end
