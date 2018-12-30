//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(dial)
// /usr/include/qt/QtWidgets/qdial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdial.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDial is pure virtual: false
// QDial has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDial_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDial_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDial_t qt_meta_stringdata_MyQDial = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQDial"
  },
  "MyQDial"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDial[] = {
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
class Q_DECL_EXPORT MyQDial : public QDial {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDial::staticMetaObject,
  qt_meta_stringdata_MyQDial.data,
  qt_meta_data_MyQDial,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDial.stringdata0))
      return static_cast<void*>(this);
  return QDial::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDial::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDial() {}
// void QDial(QWidget *)
MyQDial(QWidget * parent) : QDial(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDial::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * re)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)re, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::resizeEvent(re);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * pe)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)pe, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::paintEvent(pe);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mousePressEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mouseReleaseEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * me)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::mouseMoveEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void sliderChange(QAbstractSlider::SliderChange)
  virtual void sliderChange(QAbstractSlider::SliderChange change)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sliderChange", &handled, 1, (uint64_t)change, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDial::sliderChange(change);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDial_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDial* qo = (MyQDial*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:84
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDial5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QDial*)this_)->QDial::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:85
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * re) {
  ((QDial*)this_)->QDial::resizeEvent(re);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:86
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial10paintEventEP11QPaintEvent(void *this_, QPaintEvent * pe) {
  ((QDial*)this_)->QDial::paintEvent(pe);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:88
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mousePressEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:89
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseReleaseEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:90
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseMoveEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:92
// [-2] void sliderChange(QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QDial*)this_)->QDial::sliderChange(change);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial10metaObjectEv(void *this_) {
  return (void*)((QDial*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDial*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN5QDial11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDial*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDial::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDial6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDial::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:64
// [-2] void QDial(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDialC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDial*)(0);
  return  new MyQDial(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:66
// [-2] void ~QDial()
extern "C" Q_DECL_EXPORT
void C_ZN5QDialD2Ev(void *this_) {
  delete (QDial*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:68
// [1] bool wrapping()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial8wrappingEv(void *this_) {
  return (bool)((QDial*)this_)->wrapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:70
// [4] int notchSize()
extern "C" Q_DECL_EXPORT
int C_ZNK5QDial9notchSizeEv(void *this_) {
  return (int)((QDial*)this_)->notchSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:72
// [-2] void setNotchTarget(double)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:73
// [8] qreal notchTarget()
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QDial11notchTargetEv(void *this_) {
  return (qreal)((QDial*)this_)->notchTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:74
// [1] bool notchesVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial14notchesVisibleEv(void *this_) {
  return (bool)((QDial*)this_)->notchesVisible();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:76
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial8sizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:77
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:80
// [-2] void setNotchesVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:81
// [-2] void setWrapping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dial)
#endif // #ifndef QT_MINIMAL
//  footer block end
