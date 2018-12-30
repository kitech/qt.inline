//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(animation)
// since 0x040600
// /usr/include/qt/QtCore/qsequentialanimationgroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsequentialanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QSequentialAnimationGroup is pure virtual: false
// QSequentialAnimationGroup has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSequentialAnimationGroup_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSequentialAnimationGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSequentialAnimationGroup_t qt_meta_stringdata_MyQSequentialAnimationGroup = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQSequentialAnimationGroup"
  },
  "MyQSequentialAnimationGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSequentialAnimationGroup[] = {
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
class Q_DECL_EXPORT MyQSequentialAnimationGroup : public QSequentialAnimationGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSequentialAnimationGroup::staticMetaObject,
  qt_meta_stringdata_MyQSequentialAnimationGroup.data,
  qt_meta_data_MyQSequentialAnimationGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSequentialAnimationGroup.stringdata0))
      return static_cast<void*>(this);
  return QSequentialAnimationGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSequentialAnimationGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSequentialAnimationGroup() {}
// void QSequentialAnimationGroup(QObject *)
MyQSequentialAnimationGroup(QObject * parent) : QSequentialAnimationGroup(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSequentialAnimationGroup::event(event);
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
    QSequentialAnimationGroup::updateCurrentTime(arg0);
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
    QSequentialAnimationGroup::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateDirection(QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSequentialAnimationGroup::updateDirection(direction);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSequentialAnimationGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSequentialAnimationGroup* qo = (MyQSequentialAnimationGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:72
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN25QSequentialAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:74
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup17updateCurrentTimeEi(void *this_, int arg0) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateCurrentTime(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:75
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:76
// [-2] void updateDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QSequentialAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSequentialAnimationGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QSequentialAnimationGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSequentialAnimationGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSequentialAnimationGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSequentialAnimationGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:58
// [-2] void QSequentialAnimationGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSequentialAnimationGroup*)(0);
  return  new MyQSequentialAnimationGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:59
// [-2] void ~QSequentialAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroupD2Ev(void *this_) {
  delete (QSequentialAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:61
// [8] QPauseAnimation * addPause(int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup8addPauseEi(void *this_, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->addPause(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:62
// [8] QPauseAnimation * insertPause(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup11insertPauseEii(void *this_, int index, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->insertPause(index, msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:64
// [8] QAbstractAnimation * currentAnimation()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QSequentialAnimationGroup16currentAnimationEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->currentAnimation();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:65
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK25QSequentialAnimationGroup8durationEv(void *this_) {
  return (int)((QSequentialAnimationGroup*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:68
// [-2] void currentAnimationChanged(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(void *this_, QAbstractAnimation * current) {
  ((QSequentialAnimationGroup*)this_)->currentAnimationChanged(current);
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
