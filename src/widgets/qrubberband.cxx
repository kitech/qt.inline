//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qrubberband.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrubberband.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRubberBand is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:76
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QRubberBand5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QRubberBand*)this_)->QRubberBand::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:77
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:78
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:79
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:80
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:81
// [-2] void moveEvent(QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand9moveEventEP10QMoveEvent(void *this_, QMoveEvent * arg0) {
  ((QRubberBand*)this_)->QRubberBand::moveEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRubberBand10metaObjectEv(void *this_) {
  return (void*)((QRubberBand*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRubberBand*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QRubberBand11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRubberBand*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRubberBand::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBand6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRubberBand::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:59
// [-2] void QRubberBand(QRubberBand::Shape, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRubberBandC2ENS_5ShapeEP7QWidget(QRubberBand::Shape arg0, QWidget * arg1) {
  auto _nilp = (MyQRubberBand*)(0);
  return  new MyQRubberBand(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:60
// [-2] void ~QRubberBand()
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBandD2Ev(void *this_) {
  delete (QRubberBand*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:62
// [4] QRubberBand::Shape shape()
extern "C" Q_DECL_EXPORT
QRubberBand::Shape C_ZNK11QRubberBand5shapeEv(void *this_) {
  return (QRubberBand::Shape)((QRubberBand*)this_)->shape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:64
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11setGeometryERK5QRect(void *this_, QRect* r) {
  ((QRubberBand*)this_)->setGeometry(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:66
// [-2] void setGeometry(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QRubberBand*)this_)->setGeometry(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:67
// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand4moveEii(void *this_, int x, int y) {
  ((QRubberBand*)this_)->move(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:68
// [-2] void move(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand4moveERK6QPoint(void *this_, QPoint* p) {
  ((QRubberBand*)this_)->move(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:70
// [-2] void resize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand6resizeEii(void *this_, int w, int h) {
  ((QRubberBand*)this_)->resize(w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qrubberband.h:72
// [-2] void resize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN11QRubberBand6resizeERK5QSize(void *this_, QSize* s) {
  ((QRubberBand*)this_)->resize(*s);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
