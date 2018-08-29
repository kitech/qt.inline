//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qvariantanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariantanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantAnimation is pure virtual: false
// QVariantAnimation has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQVariantAnimation_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVariantAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVariantAnimation_t qt_meta_stringdata_MyQVariantAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQVariantAnimation"
  },
  "MyQVariantAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVariantAnimation[] = {
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
class Q_DECL_EXPORT MyQVariantAnimation : public QVariantAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVariantAnimation::staticMetaObject,
  qt_meta_stringdata_MyQVariantAnimation.data,
  qt_meta_data_MyQVariantAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQVariantAnimation.stringdata0))
      return static_cast<void*>(this);
  return QVariantAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVariantAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQVariantAnimation() {}
// void QVariantAnimation(QObject *)
MyQVariantAnimation(QObject * parent) : QVariantAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QVariantAnimation::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QVariantAnimation::updateCurrentTime(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QVariantAnimation::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateCurrentValue(const QVariant &)
  virtual void updateCurrentValue(const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QVariantAnimation::updateCurrentValue(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant interpolated(const QVariant &, const QVariant &, qreal)
  virtual QVariant interpolated(const QVariant & from, const QVariant & to, qreal progress) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"interpolated", &handled, 3, (uint64_t)&from, (uint64_t)&to, (uint64_t)&progress, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QVariantAnimation::interpolated(from, to, progress);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:98
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QVariantAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QVariantAnimation*)this_)->QVariantAnimation::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:100
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation17updateCurrentTimeEi(void *this_, int arg0) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateCurrentTime(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:101
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:103
// [-2] void updateCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation18updateCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateCurrentValue(*value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:104
// [16] QVariant interpolated(const QVariant &, const QVariant &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation12interpolatedERK8QVariantS2_d(void *this_, QVariant* from, QVariant* to, qreal progress) {
  auto rv = ((QVariantAnimation*)this_)->QVariantAnimation::interpolated(*from, *to, progress);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10metaObjectEv(void *this_) {
  return (void*)((QVariantAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QVariantAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVariantAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QVariantAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVariantAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QVariantAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVariantAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QVariantAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVariantAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:68
// [-2] void QVariantAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QVariantAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQVariantAnimation*)(0);
  return  new MyQVariantAnimation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:69
// [-2] void ~QVariantAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimationD2Ev(void *this_) {
  delete (QVariantAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:71
// [16] QVariant startValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10startValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->startValue();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:72
// [-2] void setStartValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation13setStartValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setStartValue(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:74
// [16] QVariant endValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation8endValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->endValue();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:75
// [-2] void setEndValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11setEndValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setEndValue(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:77
// [16] QVariant keyValueAt(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10keyValueAtEd(void *this_, qreal step) {
  auto rv = ((QVariantAnimation*)this_)->keyValueAt(step);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:78
// [-2] void setKeyValueAt(qreal, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant(void *this_, qreal step, QVariant* value) {
  ((QVariantAnimation*)this_)->setKeyValueAt(step, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:80
// [-2] QVariantAnimation::KeyValues keyValues()
extern "C" Q_DECL_EXPORT
QVariantAnimation::KeyValues* C_ZNK17QVariantAnimation9keyValuesEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->keyValues();
return new QVariantAnimation::KeyValues(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:81
// [-2] void setKeyValues(const QVariantAnimation::KeyValues &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation12setKeyValuesERK7QVectorI5QPairId8QVariantEE(void *this_, const QVariantAnimation::KeyValues & values) {
  ((QVariantAnimation*)this_)->setKeyValues(values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:83
// [16] QVariant currentValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation12currentValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->currentValue();
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:85
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK17QVariantAnimation8durationEv(void *this_) {
  return (int)((QVariantAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:86
// [-2] void setDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11setDurationEi(void *this_, int msecs) {
  ((QVariantAnimation*)this_)->setDuration(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:88
// [8] QEasingCurve easingCurve()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation11easingCurveEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->easingCurve();
return new QEasingCurve(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:89
// [-2] void setEasingCurve(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve(void *this_, QEasingCurve* easing) {
  ((QVariantAnimation*)this_)->setEasingCurve(*easing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:94
// [-2] void valueChanged(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation12valueChangedERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->valueChanged(*value);
}

//  main block end
