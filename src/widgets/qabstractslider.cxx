//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(abstractslider)
// /usr/include/qt/QtWidgets/qabstractslider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractslider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractSlider is pure virtual: true
// QAbstractSlider has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractSlider_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractSlider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractSlider_t qt_meta_stringdata_MyQAbstractSlider = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQAbstractSlider"
  },
  "MyQAbstractSlider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractSlider[] = {
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
class Q_DECL_EXPORT MyQAbstractSlider : public QAbstractSlider {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractSlider::staticMetaObject,
  qt_meta_stringdata_MyQAbstractSlider.data,
  qt_meta_data_MyQAbstractSlider,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractSlider.stringdata0))
      return static_cast<void*>(this);
  return QAbstractSlider::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractSlider::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractSlider() {}
// void QAbstractSlider(QWidget *)
MyQAbstractSlider(QWidget * parent) : QAbstractSlider(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractSlider::event(e);
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
    QAbstractSlider::sliderChange(change);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSlider::keyPressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSlider::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSlider::wheelEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractSlider::changeEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractSlider_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractSlider* qo = (MyQAbstractSlider*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:134
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSlider5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractSlider*)this_)->QAbstractSlider::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:145
// [-2] void sliderChange(QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12sliderChangeENS_12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QAbstractSlider*)this_)->QAbstractSlider::sliderChange(change);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:147
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * ev) {
  ((QAbstractSlider*)this_)->QAbstractSlider::keyPressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:148
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QAbstractSlider*)this_)->QAbstractSlider::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:150
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QAbstractSlider*)this_)->QAbstractSlider::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:152
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QAbstractSlider*)this_)->QAbstractSlider::changeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSlider10metaObjectEv(void *this_) {
  return (void*)((QAbstractSlider*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSlider11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractSlider*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QAbstractSlider11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractSlider*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSlider2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSlider::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSlider6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractSlider::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:70
// [-2] void QAbstractSlider(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSliderC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractSlider*)(0);
  return  new MyQAbstractSlider(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:71
// [-2] void ~QAbstractSlider()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSliderD2Ev(void *this_) {
  delete (QAbstractSlider*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:73
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK15QAbstractSlider11orientationEv(void *this_) {
  return (Qt::Orientation)((QAbstractSlider*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:75
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10setMinimumEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setMinimum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:76
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider7minimumEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:78
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10setMaximumEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setMaximum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:79
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider7maximumEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:81
// [-2] void setSingleStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13setSingleStepEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setSingleStep(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:82
// [4] int singleStep()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider10singleStepEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:84
// [-2] void setPageStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11setPageStepEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setPageStep(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:85
// [4] int pageStep()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider8pageStepEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->pageStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:87
// [-2] void setTracking(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11setTrackingEb(void *this_, bool enable) {
  ((QAbstractSlider*)this_)->setTracking(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:88
// [1] bool hasTracking()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider11hasTrackingEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->hasTracking();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:90
// [-2] void setSliderDown(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13setSliderDownEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setSliderDown(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:91
// [1] bool isSliderDown()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider12isSliderDownEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->isSliderDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:93
// [-2] void setSliderPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider17setSliderPositionEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setSliderPosition(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:94
// [4] int sliderPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider14sliderPositionEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->sliderPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:96
// [-2] void setInvertedAppearance(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider21setInvertedAppearanceEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setInvertedAppearance(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:97
// [1] bool invertedAppearance()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider18invertedAppearanceEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->invertedAppearance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:99
// [-2] void setInvertedControls(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider19setInvertedControlsEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setInvertedControls(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:100
// [1] bool invertedControls()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider16invertedControlsEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->invertedControls();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:113
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider5valueEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:115
// [-2] void triggerAction(QAbstractSlider::SliderAction)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13triggerActionENS_12SliderActionE(void *this_, QAbstractSlider::SliderAction action) {
  ((QAbstractSlider*)this_)->triggerAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:118
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider8setValueEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setValue(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:119
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QAbstractSlider*)this_)->setOrientation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:120
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider8setRangeEii(void *this_, int min, int max) {
  ((QAbstractSlider*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:123
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12valueChangedEi(void *this_, int value) {
  ((QAbstractSlider*)this_)->valueChanged(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:125
// [-2] void sliderPressed()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13sliderPressedEv(void *this_) {
  ((QAbstractSlider*)this_)->sliderPressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:126
// [-2] void sliderMoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11sliderMovedEi(void *this_, int position) {
  ((QAbstractSlider*)this_)->sliderMoved(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:127
// [-2] void sliderReleased()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider14sliderReleasedEv(void *this_) {
  ((QAbstractSlider*)this_)->sliderReleased();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:129
// [-2] void rangeChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12rangeChangedEii(void *this_, int min, int max) {
  ((QAbstractSlider*)this_)->rangeChanged(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:131
// [-2] void actionTriggered(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider15actionTriggeredEi(void *this_, int action) {
  ((QAbstractSlider*)this_)->actionTriggered(action);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(abstractslider)
#endif // #ifndef QT_MINIMAL
//  footer block end
