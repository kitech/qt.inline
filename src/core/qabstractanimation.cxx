//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qabstractanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractAnimation is pure virtual: true
// QAbstractAnimation has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractAnimation_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractAnimation_t qt_meta_stringdata_MyQAbstractAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQAbstractAnimation"
  },
  "MyQAbstractAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractAnimation[] = {
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
class Q_DECL_EXPORT MyQAbstractAnimation : public QAbstractAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractAnimation::staticMetaObject,
  qt_meta_stringdata_MyQAbstractAnimation.data,
  qt_meta_data_MyQAbstractAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractAnimation.stringdata0))
      return static_cast<void*>(this);
  return QAbstractAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractAnimation() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int duration()
  virtual int duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// void QAbstractAnimation(QObject *)
MyQAbstractAnimation(QObject * parent) : QAbstractAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAbstractAnimation::event(event);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAnimation::updateCurrentTime(currentTime);
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
    QAbstractAnimation::updateState(newState, oldState);
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
    QAbstractAnimation::updateDirection(direction);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QAbstractAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractAnimation* qo = (MyQAbstractAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:121
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QAbstractAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAbstractAnimation*)this_)->QAbstractAnimation::event(event);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:123
// [-2] void updateCurrentTime(int)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:124
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation11updateStateENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:125
// [-2] void updateDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation15updateDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->QAbstractAnimation::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractAnimation10metaObjectEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QAbstractAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:85
// [-2] void QAbstractAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAbstractAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAbstractAnimation*)(0);
  return  new MyQAbstractAnimation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:86
// [-2] void ~QAbstractAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimationD2Ev(void *this_) {
  delete (QAbstractAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:88
// [4] QAbstractAnimation::State state()
extern "C" Q_DECL_EXPORT
QAbstractAnimation::State C_ZNK18QAbstractAnimation5stateEv(void *this_) {
  return (QAbstractAnimation::State)((QAbstractAnimation*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:90
// [8] QAnimationGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAbstractAnimation5groupEv(void *this_) {
  return (void*)((QAbstractAnimation*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:92
// [4] QAbstractAnimation::Direction direction()
extern "C" Q_DECL_EXPORT
QAbstractAnimation::Direction C_ZNK18QAbstractAnimation9directionEv(void *this_) {
  return (QAbstractAnimation::Direction)((QAbstractAnimation*)this_)->direction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:93
// [-2] void setDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12setDirectionENS_9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QAbstractAnimation*)this_)->setDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:95
// [4] int currentTime()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation11currentTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:96
// [4] int currentLoopTime()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation15currentLoopTimeEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoopTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:98
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation9loopCountEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:99
// [-2] void setLoopCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12setLoopCountEi(void *this_, int loopCount) {
  ((QAbstractAnimation*)this_)->setLoopCount(loopCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:100
// [4] int currentLoop()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation11currentLoopEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->currentLoop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:102
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation8durationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:103
// [4] int totalDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK18QAbstractAnimation13totalDurationEv(void *this_) {
  return (int)((QAbstractAnimation*)this_)->totalDuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:106
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation8finishedEv(void *this_) {
  ((QAbstractAnimation*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:107
// [-2] void stateChanged(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation12stateChangedENS_5StateES0_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QAbstractAnimation*)this_)->stateChanged(newState, oldState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:108
// [-2] void currentLoopChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation18currentLoopChangedEi(void *this_, int currentLoop) {
  ((QAbstractAnimation*)this_)->currentLoopChanged(currentLoop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:109
// [-2] void directionChanged(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation16directionChangedENS_9DirectionE(void *this_, QAbstractAnimation::Direction arg0) {
  ((QAbstractAnimation*)this_)->directionChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:112
// [-2] void start(QAbstractAnimation::DeletionPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation5startENS_14DeletionPolicyE(void *this_, QAbstractAnimation::DeletionPolicy policy) {
  ((QAbstractAnimation*)this_)->start(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:113
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation5pauseEv(void *this_) {
  ((QAbstractAnimation*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:114
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation6resumeEv(void *this_) {
  ((QAbstractAnimation*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:115
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation9setPausedEb(void *this_, bool arg0) {
  ((QAbstractAnimation*)this_)->setPaused(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:116
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation4stopEv(void *this_) {
  ((QAbstractAnimation*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:117
// [-2] void setCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QAbstractAnimation14setCurrentTimeEi(void *this_, int msecs) {
  ((QAbstractAnimation*)this_)->setCurrentTime(msecs);
}

//  main block end
