//  header block begin
// /usr/include/qt/QtCore/qfuturewatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuturewatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureWatcherBase is pure virtual: true
// QFutureWatcherBase has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFutureWatcherBase_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFutureWatcherBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFutureWatcherBase_t qt_meta_stringdata_MyQFutureWatcherBase = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQFutureWatcherBase"
  },
  "MyQFutureWatcherBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFutureWatcherBase[] = {
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
class Q_DECL_EXPORT MyQFutureWatcherBase : public QFutureWatcherBase {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFutureWatcherBase::staticMetaObject,
  qt_meta_stringdata_MyQFutureWatcherBase.data,
  qt_meta_data_MyQFutureWatcherBase,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFutureWatcherBase.stringdata0))
      return static_cast<void*>(this);
  return QFutureWatcherBase::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFutureWatcherBase::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFutureWatcherBase() {}
// Private purevirtual virtual Visibility=Default Availability=Available
// [16] const QFutureInterfaceBase & futureInterface()
  virtual const QFutureInterfaceBase & futureInterface() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"futureInterface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const QFutureInterfaceBase &)(irv);
      // LValueReference LValueReference const QFutureInterfaceBase &
    } else {
    auto orv = (const QFutureInterfaceBase){}; return orv;
  }
  }

// Private purevirtual virtual Visibility=Default Availability=Available
// [16] QFutureInterfaceBase & futureInterface()
  virtual QFutureInterfaceBase & futureInterface()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"futureInterface", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QFutureInterfaceBase &)(irv);
      // LValueReference LValueReference QFutureInterfaceBase &
    } else {
    auto orv = (QFutureInterfaceBase){}; return orv;
  }
  }

// void QFutureWatcherBase(QObject *)
MyQFutureWatcherBase(QObject * parent) : QFutureWatcherBase(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void connectNotify(const QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"connectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFutureWatcherBase::connectNotify(signal);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void disconnectNotify(const QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&signal, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFutureWatcherBase::disconnectNotify(signal);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QFutureWatcherBase_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFutureWatcherBase* qo = (MyQFutureWatcherBase*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Private purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:110
// [16] const QFutureInterfaceBase & futureInterface()
// Private purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:111
// [16] QFutureInterfaceBase & futureInterface()
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:101
// [-2] void connectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QFutureWatcherBase*)this_)->QFutureWatcherBase::connectNotify(*signal);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:102
// [-2] void disconnectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* signal) {
  ((QFutureWatcherBase*)this_)->QFutureWatcherBase::disconnectNotify(*signal);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFutureWatcherBase10metaObjectEv(void *this_) {
  return (void*)((QFutureWatcherBase*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFutureWatcherBase*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QFutureWatcherBase11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFutureWatcherBase*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFutureWatcherBase::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBase6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFutureWatcherBase::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:61
// [-2] void QFutureWatcherBase(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFutureWatcherBaseC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQFutureWatcherBase*)(0);
  return  new MyQFutureWatcherBase(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:64
// [4] int progressValue()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase13progressValueEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:65
// [4] int progressMinimum()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase15progressMinimumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMinimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:66
// [4] int progressMaximum()
extern "C" Q_DECL_EXPORT
int C_ZNK18QFutureWatcherBase15progressMaximumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMaximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:67
// [8] QString progressText()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFutureWatcherBase12progressTextEv(void *this_) {
  auto rv = ((QFutureWatcherBase*)this_)->progressText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:69
// [1] bool isStarted()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase9isStartedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:70
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase10isFinishedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:71
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase9isRunningEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:72
// [1] bool isCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase10isCanceledEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:73
// [1] bool isPaused()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QFutureWatcherBase8isPausedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isPaused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:75
// [-2] void waitForFinished()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase15waitForFinishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->waitForFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:77
// [-2] void setPendingResultsLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase22setPendingResultsLimitEi(void *this_, int limit) {
  ((QFutureWatcherBase*)this_)->setPendingResultsLimit(limit);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:79
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFutureWatcherBase5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QFutureWatcherBase*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:82
// [-2] void started()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase7startedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->started();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:83
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase8finishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:84
// [-2] void canceled()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase8canceledEv(void *this_) {
  ((QFutureWatcherBase*)this_)->canceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:85
// [-2] void paused()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6pausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->paused();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:86
// [-2] void resumed()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase7resumedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resumed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:87
// [-2] void resultReadyAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase13resultReadyAtEi(void *this_, int resultIndex) {
  ((QFutureWatcherBase*)this_)->resultReadyAt(resultIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:88
// [-2] void resultsReadyAt(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase14resultsReadyAtEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureWatcherBase*)this_)->resultsReadyAt(beginIndex, endIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:89
// [-2] void progressRangeChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase20progressRangeChangedEii(void *this_, int minimum, int maximum) {
  ((QFutureWatcherBase*)this_)->progressRangeChanged(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:90
// [-2] void progressValueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase20progressValueChangedEi(void *this_, int progressValue) {
  ((QFutureWatcherBase*)this_)->progressValueChanged(progressValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:91
// [-2] void progressTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase19progressTextChangedERK7QString(void *this_, QString* progressText) {
  ((QFutureWatcherBase*)this_)->progressTextChanged(*progressText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:94
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6cancelEv(void *this_) {
  ((QFutureWatcherBase*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:95
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase9setPausedEb(void *this_, bool paused) {
  ((QFutureWatcherBase*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:96
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase5pauseEv(void *this_) {
  ((QFutureWatcherBase*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:97
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase6resumeEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:98
// [-2] void togglePaused()
extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBase12togglePausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->togglePaused();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QFutureWatcherBaseD2Ev(void *this_) {
  delete (QFutureWatcherBase*)(this_);
}
//  main block end
