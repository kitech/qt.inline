//  header block begin
// /usr/include/qt/QtCore/qtimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimer is pure virtual: false
// QTimer has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTimer_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimer_t qt_meta_stringdata_MyQTimer = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQTimer"
  },
  "MyQTimer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimer[] = {
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
class Q_DECL_EXPORT MyQTimer : public QTimer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTimer::staticMetaObject,
  qt_meta_stringdata_MyQTimer.data,
  qt_meta_data_MyQTimer,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTimer.stringdata0))
      return static_cast<void*>(this);
  return QTimer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTimer::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTimer() {}
// void QTimer(QObject *)
MyQTimer(QObject * parent) : QTimer(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTimer::timerEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTimer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTimer* qo = (MyQTimer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:200
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QTimer*)this_)->QTimer::timerEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QTimer10metaObjectEv(void *this_) {
  return (void*)((QTimer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QTimer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTimer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QTimer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTimer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QTimer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QTimer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:66
// [-2] void QTimer(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QTimerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTimer*)(0);
  return  new MyQTimer(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:67
// [-2] void ~QTimer()
extern "C" Q_DECL_EXPORT
void C_ZN6QTimerD2Ev(void *this_) {
  delete (QTimer*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:69
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QTimer8isActiveEv(void *this_) {
  return (bool)((QTimer*)this_)->isActive();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:70
// [4] int timerId()
extern "C" Q_DECL_EXPORT
int C_ZNK6QTimer7timerIdEv(void *this_) {
  return (int)((QTimer*)this_)->timerId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:72
// [-2] void setInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer11setIntervalEi(void *this_, int msec) {
  ((QTimer*)this_)->setInterval(msec);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:73
// [4] int interval()
extern "C" Q_DECL_EXPORT
int C_ZNK6QTimer8intervalEv(void *this_) {
  return (int)((QTimer*)this_)->interval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:75
// [4] int remainingTime()
extern "C" Q_DECL_EXPORT
int C_ZNK6QTimer13remainingTimeEv(void *this_) {
  return (int)((QTimer*)this_)->remainingTime();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:77
// [-2] void setTimerType(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE(void *this_, Qt::TimerType atype) {
  ((QTimer*)this_)->setTimerType(atype);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:78
// [4] Qt::TimerType timerType()
extern "C" Q_DECL_EXPORT
Qt::TimerType C_ZNK6QTimer9timerTypeEv(void *this_) {
  return (Qt::TimerType)((QTimer*)this_)->timerType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:80
// [-2] void setSingleShot(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer13setSingleShotEb(void *this_, bool singleShot) {
  ((QTimer*)this_)->setSingleShot(singleShot);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:81
// [1] bool isSingleShot()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QTimer12isSingleShotEv(void *this_) {
  return (bool)((QTimer*)this_)->isSingleShot();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:83
// [-2] void singleShot(int, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer10singleShotEiPK7QObjectPKc(int msec, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, receiver, member);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:84
// [-2] void singleShot(int, Qt::TimerType, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer10singleShotEiN2Qt9TimerTypeEPK7QObjectPKc(int msec, Qt::TimerType timerType, const QObject * receiver, const char * member) {
  QTimer::singleShot(msec, timerType, receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:158
// [-2] void start(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer5startEi(void *this_, int msec) {
  ((QTimer*)this_)->start(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:160
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer5startEv(void *this_) {
  ((QTimer*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:161
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer4stopEv(void *this_) {
  ((QTimer*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:164
// [-2] void timeout(QTimer::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer7timeoutENS_14QPrivateSignalE(void *this_, QTimer::QPrivateSignal* arg0) {
  ((QTimer*)this_)->timeout(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:168
// [-2] void setInterval(std::chrono::milliseconds)
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer11setIntervalENSt6chrono8durationIlSt5ratioILl1ELl1000EEEE(void *this_, std::chrono::milliseconds value) {
  ((QTimer*)this_)->setInterval(value);
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qtimer.h:173
// [8] std::chrono::milliseconds intervalAsDuration()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
std::chrono::milliseconds C_ZNK6QTimer18intervalAsDurationEv(void *this_) {
  return (std::chrono::milliseconds)((QTimer*)this_)->intervalAsDuration();
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qtimer.h:178
// [8] std::chrono::milliseconds remainingTimeAsDuration()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
std::chrono::milliseconds C_ZNK6QTimer23remainingTimeAsDurationEv(void *this_) {
  return (std::chrono::milliseconds)((QTimer*)this_)->remainingTimeAsDuration();
}
#endif // QT_VERSION >= 0x050800

// Public static inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qtimer.h:183
// [-2] void singleShot(std::chrono::milliseconds, const QObject *, const char *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer10singleShotENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEPK7QObjectPKc(std::chrono::milliseconds value, const QObject * receiver, const char * member) {
  QTimer::singleShot(value, receiver, member);
}
#endif // QT_VERSION >= 0x050800

// Public static inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qtimer.h:188
// [-2] void singleShot(std::chrono::milliseconds, Qt::TimerType, const QObject *, const char *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer10singleShotENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEN2Qt9TimerTypeEPK7QObjectPKc(std::chrono::milliseconds value, Qt::TimerType timerType, const QObject * receiver, const char * member) {
  QTimer::singleShot(value, timerType, receiver, member);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qtimer.h:193
// [-2] void start(std::chrono::milliseconds)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN6QTimer5startENSt6chrono8durationIlSt5ratioILl1ELl1000EEEE(void *this_, std::chrono::milliseconds value) {
  ((QTimer*)this_)->start(value);
}
#endif // QT_VERSION >= 0x050800

//  main block end
