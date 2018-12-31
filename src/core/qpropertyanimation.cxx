//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(animation)
// since 0x040600
// /usr/include/qt/QtCore/qpropertyanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpropertyanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QPropertyAnimation is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:68
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QPropertyAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QPropertyAnimation*)this_)->QPropertyAnimation::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:69
// [-2] void updateCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateCurrentValue(*value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:70
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateState(newState, oldState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation10metaObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPropertyAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QPropertyAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPropertyAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPropertyAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPropertyAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:57
// [-2] void QPropertyAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:58
// [-2] void QPropertyAnimation(QObject *, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_(QObject * target, QByteArray* propertyName, QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(target, *propertyName, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:59
// [-2] void ~QPropertyAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimationD2Ev(void *this_) {
  delete (QPropertyAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:61
// [8] QObject * targetObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation12targetObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->targetObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:62
// [-2] void setTargetObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation15setTargetObjectEP7QObject(void *this_, QObject * target) {
  ((QPropertyAnimation*)this_)->setTargetObject(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:64
// [8] QByteArray propertyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation12propertyNameEv(void *this_) {
  auto rv = ((QPropertyAnimation*)this_)->propertyName();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:65
// [-2] void setPropertyName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *this_, QByteArray* propertyName) {
  ((QPropertyAnimation*)this_)->setPropertyName(*propertyName);
}

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
