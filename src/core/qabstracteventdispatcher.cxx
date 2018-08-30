//  header block begin
// /usr/include/qt/QtCore/qabstracteventdispatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracteventdispatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractEventDispatcher is pure virtual: true
// QAbstractEventDispatcher has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractEventDispatcher_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractEventDispatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractEventDispatcher_t qt_meta_stringdata_MyQAbstractEventDispatcher = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQAbstractEventDispatcher"
  },
  "MyQAbstractEventDispatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractEventDispatcher[] = {
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
class Q_DECL_EXPORT MyQAbstractEventDispatcher : public QAbstractEventDispatcher {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractEventDispatcher::staticMetaObject,
  qt_meta_stringdata_MyQAbstractEventDispatcher.data,
  qt_meta_data_MyQAbstractEventDispatcher,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractEventDispatcher.stringdata0))
      return static_cast<void*>(this);
  return QAbstractEventDispatcher::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractEventDispatcher::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractEventDispatcher() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
  virtual bool processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"processEvents", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool hasPendingEvents()
  virtual bool hasPendingEvents()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hasPendingEvents", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void registerSocketNotifier(QSocketNotifier *)
  virtual void registerSocketNotifier(QSocketNotifier * notifier)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registerSocketNotifier", &handled, 1, (uint64_t)notifier, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::registerSocketNotifier(notifier);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void unregisterSocketNotifier(QSocketNotifier *)
  virtual void unregisterSocketNotifier(QSocketNotifier * notifier)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unregisterSocketNotifier", &handled, 1, (uint64_t)notifier, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::unregisterSocketNotifier(notifier);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void registerTimer(int, int, Qt::TimerType, QObject *)
  virtual void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registerTimer", &handled, 4, (uint64_t)timerId, (uint64_t)interval, (uint64_t)timerType, (uint64_t)object, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::registerTimer(timerId, interval, timerType, object);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool unregisterTimer(int)
  virtual bool unregisterTimer(int timerId)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unregisterTimer", &handled, 1, (uint64_t)timerId, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool unregisterTimers(QObject *)
  virtual bool unregisterTimers(QObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unregisterTimers", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject *)
  virtual QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject * object) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"registeredTimers", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAbstractEventDispatcher::TimerInfo>){};}
    auto prv = (QList<QAbstractEventDispatcher::TimerInfo>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAbstractEventDispatcher::TimerInfo>
    } else {
    return (QList<QAbstractEventDispatcher::TimerInfo>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int remainingTime(int)
  virtual int remainingTime(int timerId)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"remainingTime", &handled, 1, (uint64_t)timerId, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void wakeUp()
  virtual void wakeUp()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wakeUp", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::wakeUp();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void interrupt()
  virtual void interrupt()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"interrupt", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::interrupt();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void flush()
  virtual void flush()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"flush", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractEventDispatcher::flush();
  }
  }

// void QAbstractEventDispatcher(QObject *)
MyQAbstractEventDispatcher(QObject * parent) : QAbstractEventDispatcher(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QAbstractEventDispatcher_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractEventDispatcher* qo = (MyQAbstractEventDispatcher*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:78
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:79
// [1] bool hasPendingEvents()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:81
// [-2] void registerSocketNotifier(QSocketNotifier *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:82
// [-2] void unregisterSocketNotifier(QSocketNotifier *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:91
// [-2] void registerTimer(int, int, Qt::TimerType, QObject *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:92
// [1] bool unregisterTimer(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:93
// [1] bool unregisterTimers(QObject *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:94
// [-2] QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:96
// [4] int remainingTime(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:103
// [-2] void wakeUp()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:104
// [-2] void interrupt()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:105
// [-2] void flush()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractEventDispatcher10metaObjectEv(void *this_) {
  return (void*)((QAbstractEventDispatcher*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcher11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractEventDispatcher*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractEventDispatcher11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractEventDispatcher*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcher2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractEventDispatcher::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcher6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractEventDispatcher::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:73
// [-2] void QAbstractEventDispatcher(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcherC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractEventDispatcher(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:74
// [-2] void ~QAbstractEventDispatcher()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcherD2Ev(void *this_) {
  delete (QAbstractEventDispatcher*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:76
// [8] QAbstractEventDispatcher * instance(QThread *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractEventDispatcher8instanceEP7QThread(QThread * thread) {
  return (void*)QAbstractEventDispatcher::instance(thread);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:78
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (bool)((QAbstractEventDispatcher*)this_)->processEvents(flags);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:79
// [1] bool hasPendingEvents()
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher16hasPendingEventsEv(void *this_) {
  return (bool)((QAbstractEventDispatcher*)this_)->hasPendingEvents();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:81
// [-2] void registerSocketNotifier(QSocketNotifier *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher22registerSocketNotifierEP15QSocketNotifier(void *this_, QSocketNotifier * notifier) {
  ((QAbstractEventDispatcher*)this_)->registerSocketNotifier(notifier);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:82
// [-2] void unregisterSocketNotifier(QSocketNotifier *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher24unregisterSocketNotifierEP15QSocketNotifier(void *this_, QSocketNotifier * notifier) {
  ((QAbstractEventDispatcher*)this_)->unregisterSocketNotifier(notifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:90
// [4] int registerTimer(int, Qt::TimerType, QObject *)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractEventDispatcher13registerTimerEiN2Qt9TimerTypeEP7QObject(void *this_, int interval, Qt::TimerType timerType, QObject * object) {
  return (int)((QAbstractEventDispatcher*)this_)->registerTimer(interval, timerType, object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:91
// [-2] void registerTimer(int, int, Qt::TimerType, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher13registerTimerEiiN2Qt9TimerTypeEP7QObject(void *this_, int timerId, int interval, Qt::TimerType timerType, QObject * object) {
  ((QAbstractEventDispatcher*)this_)->registerTimer(timerId, interval, timerType, object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:92
// [1] bool unregisterTimer(int)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher15unregisterTimerEi(void *this_, int timerId) {
  return (bool)((QAbstractEventDispatcher*)this_)->unregisterTimer(timerId);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:93
// [1] bool unregisterTimers(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher16unregisterTimersEP7QObject(void *this_, QObject * object) {
  return (bool)((QAbstractEventDispatcher*)this_)->unregisterTimers(object);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:94
// [-2] QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject *)
extern "C" Q_DECL_EXPORT
QList<QAbstractEventDispatcher::TimerInfo>* C_ZNK24QAbstractEventDispatcher16registeredTimersEP7QObject(void *this_, QObject * object) {
  auto rv = ((QAbstractEventDispatcher*)this_)->registeredTimers(object);
return new QList<QAbstractEventDispatcher::TimerInfo>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:96
// [4] int remainingTime(int)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractEventDispatcher13remainingTimeEi(void *this_, int timerId) {
  return (int)((QAbstractEventDispatcher*)this_)->remainingTime(timerId);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:103
// [-2] void wakeUp()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher6wakeUpEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->wakeUp();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:104
// [-2] void interrupt()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher9interruptEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->interrupt();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:105
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher5flushEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->flush();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:107
// [-2] void startingUp()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher10startingUpEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->startingUp();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:108
// [-2] void closingDown()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher11closingDownEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->closingDown();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:110
// [-2] void installNativeEventFilter(QAbstractNativeEventFilter *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher24installNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QAbstractEventDispatcher*)this_)->installNativeEventFilter(filterObj);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:111
// [-2] void removeNativeEventFilter(QAbstractNativeEventFilter *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher23removeNativeEventFilterEP26QAbstractNativeEventFilter(void *this_, QAbstractNativeEventFilter * filterObj) {
  ((QAbstractEventDispatcher*)this_)->removeNativeEventFilter(filterObj);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:112
// [1] bool filterNativeEvent(const QByteArray &, void *, long *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractEventDispatcher17filterNativeEventERK10QByteArrayPvPl(void *this_, QByteArray* eventType, void * message, long * result) {
  return (bool)((QAbstractEventDispatcher*)this_)->filterNativeEvent(*eventType, message, result);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:119
// [-2] void aboutToBlock()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher12aboutToBlockEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->aboutToBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:120
// [-2] void awake()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractEventDispatcher5awakeEv(void *this_) {
  ((QAbstractEventDispatcher*)this_)->awake();
}

//  main block end
