//  header block begin

// /usr/include/qt/QtCore/qabstracteventdispatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracteventdispatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractEventDispatcher is pure virtual: true true
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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
void* C_QAbstractEventDispatcher_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractEventDispatcher* qo = (MyQAbstractEventDispatcher*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstracteventdispatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstracteventdispatcher.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm1317368131 (40)_ZN24QAbstractEventDispatcher2trEPKcS1_i
//static
/*void qm1317368131(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractEventDispatcher::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractEventDispatcher::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QAbstractEventDispatcherD2Ev(void *this_)*/ {
  delete (QAbstractEventDispatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstracteventdispatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
