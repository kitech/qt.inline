//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(animation)
// /usr/include/qt/QtCore/qpropertyanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpropertyanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QPropertyAnimation is pure virtual: false false
// QPropertyAnimation has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPropertyAnimation_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPropertyAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPropertyAnimation_t qt_meta_stringdata_MyQPropertyAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQPropertyAnimation"
  },
  "MyQPropertyAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPropertyAnimation[] = {
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
class Q_DECL_EXPORT MyQPropertyAnimation : public QPropertyAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPropertyAnimation::staticMetaObject,
  qt_meta_stringdata_MyQPropertyAnimation.data,
  qt_meta_data_MyQPropertyAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPropertyAnimation.stringdata0))
      return static_cast<void*>(this);
  return QPropertyAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPropertyAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPropertyAnimation() {}
// void QPropertyAnimation(QObject *)
MyQPropertyAnimation(QObject * parent) : QPropertyAnimation(parent) {}
// void QPropertyAnimation(QObject *, const QByteArray &, QObject *)
MyQPropertyAnimation(QObject * target, const QByteArray & propertyName, QObject * parent) : QPropertyAnimation(target, propertyName, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPropertyAnimation::event(event);
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
    QPropertyAnimation::updateCurrentValue(value);
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
    QPropertyAnimation::updateState(newState, oldState);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPropertyAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPropertyAnimation* qo = (MyQPropertyAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpropertyanimation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [8] QString tr(const char *, const char *, int) 
// (11)qm604106812 (34)_ZN18QPropertyAnimation2trEPKcS1_i
//static
/*void qm604106812(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPropertyAnimation::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPropertyAnimation::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:57
// [-2] void QPropertyAnimation(QObject *) 
// (12)qm2113640865 (35)_ZN18QPropertyAnimationC2EP7QObject
/*void* qm2113640865(QObject * parent)*/{
  auto _nilp = (MyQPropertyAnimation*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QPropertyAnimation(parent);
  this_ =  new MyQPropertyAnimation(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:58
// [-2] void QPropertyAnimation(QObject *, const QByteArray &, QObject *) 
// (11)qm523784609 (52)_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_
/*void* qm523784609(QObject * target, const QByteArray & propertyName, QObject * parent)*/{
  auto _nilp = (MyQPropertyAnimation*)(0);
  QObject * target = *(QObject **)this_; const QByteArray & propertyName = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QPropertyAnimation(target, propertyName, parent);
  this_ =  new MyQPropertyAnimation(target, propertyName, parent);
}


/*void C_ZN18QPropertyAnimationD2Ev(void *this_)*/ {
  delete (QPropertyAnimation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpropertyanimation
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
