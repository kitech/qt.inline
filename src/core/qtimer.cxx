//  header block begin

// /usr/include/qt/QtCore/qtimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimer is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtimer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm3435408827 (21)_ZN6QTimer2trEPKcS1_i
//static
/*void qm3435408827(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTimer::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTimer::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:69
// [1] bool isActive() const
// (12)qm3287094984 (22)_ZNK6QTimer8isActiveEv
//static
/*void qm3287094984()*/ {
  ;
  (void) ((QTimer*)this_)->isActive();
   auto xptr = (bool (QTimer::*)() const ) &QTimer::isActive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:70
// [4] int timerId() const
// (12)qm1808601636 (21)_ZNK6QTimer7timerIdEv
//static
/*void qm1808601636()*/ {
  ;
  (void) ((QTimer*)this_)->timerId();
   auto xptr = (int (QTimer::*)() const ) &QTimer::timerId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:73
// [4] int interval() const
// (12)qm3328797738 (22)_ZNK6QTimer8intervalEv
//static
/*void qm3328797738()*/ {
  ;
  (void) ((QTimer*)this_)->interval();
   auto xptr = (int (QTimer::*)() const ) &QTimer::interval;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:77
// [-2] void setTimerType(Qt::TimerType) 
// (12)qm3962326318 (40)_ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE
//static
/*void qm3962326318(Qt::TimerType atype)*/ {
  Qt::TimerType atype = *(Qt::TimerType*)this_;
  (void) ((QTimer*)this_)->setTimerType(atype);
   auto xptr = (void (QTimer::*)(Qt::TimerType) ) &QTimer::setTimerType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:78
// [4] Qt::TimerType timerType() const
// (12)qm1618739783 (23)_ZNK6QTimer9timerTypeEv
//static
/*void qm1618739783()*/ {
  ;
  (void) ((QTimer*)this_)->timerType();
   auto xptr = (Qt::TimerType (QTimer::*)() const ) &QTimer::timerType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:80
// [-2] void setSingleShot(bool) 
// (12)qm2601156269 (27)_ZN6QTimer13setSingleShotEb
//static
/*void qm2601156269(bool singleShot)*/ {
  bool singleShot = *(bool*)this_;
  (void) ((QTimer*)this_)->setSingleShot(singleShot);
   auto xptr = (void (QTimer::*)(bool) ) &QTimer::setSingleShot;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:81
// [1] bool isSingleShot() const
// (12)qm2001099030 (27)_ZNK6QTimer12isSingleShotEv
//static
/*void qm2001099030()*/ {
  ;
  (void) ((QTimer*)this_)->isSingleShot();
   auto xptr = (bool (QTimer::*)() const ) &QTimer::isSingleShot;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:181
// [-2] void setInterval(std::chrono::milliseconds) 
// (12)qm2613152838 (68)_ZN6QTimer11setIntervalENSt6chrono8durationIlSt5ratioILl1ELl1000EEEE
//static
/*void qm2613152838(std::chrono::duration<long, std::ratio<1, 1000>> value)*/ {
  std::chrono::duration<long, std::ratio<1, 1000>> value = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_;
  (void) ((QTimer*)this_)->setInterval(value);
   auto xptr = (void (QTimer::*)(std::chrono::duration<long, std::ratio<1l, 1000l> >) ) &QTimer::setInterval;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:186
// [8] std::chrono::milliseconds intervalAsDuration() const
// (11)qm266677923 (33)_ZNK6QTimer18intervalAsDurationEv
//static
/*void qm266677923()*/ {
  ;
  (void) ((QTimer*)this_)->intervalAsDuration();
   auto xptr = (std::chrono::duration<long, std::ratio<1, 1000>> (QTimer::*)() const ) &QTimer::intervalAsDuration;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:191
// [8] std::chrono::milliseconds remainingTimeAsDuration() const
// (10)qm27407793 (38)_ZNK6QTimer23remainingTimeAsDurationEv
//static
/*void qm27407793()*/ {
  ;
  (void) ((QTimer*)this_)->remainingTimeAsDuration();
   auto xptr = (std::chrono::duration<long, std::ratio<1, 1000>> (QTimer::*)() const ) &QTimer::remainingTimeAsDuration;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:196
// [-2] void singleShot(std::chrono::milliseconds, const QObject *, const char *) 
// (12)qm2113894416 (80)_ZN6QTimer10singleShotENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEPK7QObjectPKc
//static
/*void qm2113894416(std::chrono::duration<long, std::ratio<1, 1000>> value, const QObject * receiver, const char * member)*/ {
  std::chrono::duration<long, std::ratio<1, 1000>> value = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_; const QObject * receiver = *(const QObject **)this_; const char * member = *(const char **)this_;
  (void) QTimer::singleShot(value, receiver, member);
   auto xptr = (void (*)(std::chrono::duration<long, std::ratio<1l, 1000l> >, QObject const*, char const*) ) &QTimer::singleShot;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:201
// [-2] void singleShot(std::chrono::milliseconds, Qt::TimerType, const QObject *, const char *) 
// (12)qm2747542502 (95)_ZN6QTimer10singleShotENSt6chrono8durationIlSt5ratioILl1ELl1000EEEEN2Qt9TimerTypeEPK7QObjectPKc
//static
/*void qm2747542502(std::chrono::duration<long, std::ratio<1, 1000>> value, Qt::TimerType timerType, const QObject * receiver, const char * member)*/ {
  std::chrono::duration<long, std::ratio<1, 1000>> value = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_; Qt::TimerType timerType = *(Qt::TimerType*)this_; const QObject * receiver = *(const QObject **)this_; const char * member = *(const char **)this_;
  (void) QTimer::singleShot(value, timerType, receiver, member);
   auto xptr = (void (*)(std::chrono::duration<long, std::ratio<1l, 1000l> >, Qt::TimerType, QObject const*, char const*) ) &QTimer::singleShot;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimer.h:206
// [-2] void start(std::chrono::milliseconds) 
// (12)qm2015982606 (61)_ZN6QTimer5startENSt6chrono8durationIlSt5ratioILl1ELl1000EEEE
//static
/*void qm2015982606(std::chrono::duration<long, std::ratio<1, 1000>> value)*/ {
  std::chrono::duration<long, std::ratio<1, 1000>> value = *(std::chrono::duration<long, std::ratio<1, 1000>>*)this_;
  (void) ((QTimer*)this_)->start(value);
   auto xptr = (void (QTimer::*)(std::chrono::duration<long, std::ratio<1l, 1000l> >) ) &QTimer::start;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QTimerD2Ev(void *this_)*/ {
  delete (QTimer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtimer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
