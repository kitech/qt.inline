//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(animation)
// /usr/include/qt/QtCore/qvariantanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariantanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantAnimation is pure virtual: false false
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
  virtual ~MyQVariantAnimation() {}
// void QVariantAnimation(QObject *)
MyQVariantAnimation(QObject * parent) : QVariantAnimation(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Indirect Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QVariantAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQVariantAnimation* qo = (MyQVariantAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvariantanimation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3708034203 (33)_ZN17QVariantAnimation2trEPKcS1_i
//static
/*void qm3708034203(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVariantAnimation::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVariantAnimation::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:67
// [-2] void QVariantAnimation(QObject *) 
// (11)qm900770310 (34)_ZN17QVariantAnimationC2EP7QObject
/*void* qm900770310(QObject * parent)*/{
  auto _nilp = (MyQVariantAnimation*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QVariantAnimation(parent);
  this_ =  new MyQVariantAnimation(parent);
}


/*void C_ZN17QVariantAnimationD2Ev(void *this_)*/ {
  delete (QVariantAnimation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvariantanimation
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(animation)
#endif // #ifndef QT_MINIMAL
//  footer block end
