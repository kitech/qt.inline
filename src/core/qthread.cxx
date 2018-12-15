//  header block begin

// /usr/include/qt/QtCore/qthread.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qthread.h>
#include <QtCore>
#include "callback_inherit.h"

// QThread is pure virtual: false
// QThread has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQThread_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQThread_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQThread_t qt_meta_stringdata_MyQThread = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQThread"
  },
  "MyQThread"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQThread[] = {
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
class Q_DECL_EXPORT MyQThread : public QThread {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QThread::staticMetaObject,
  qt_meta_stringdata_MyQThread.data,
  qt_meta_data_MyQThread,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQThread.stringdata0))
      return static_cast<void*>(this);
  return QThread::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QThread::qt_metacall(_c, _id, _a);
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
  virtual ~MyQThread() {}
// void QThread(QObject *)
MyQThread(QObject * parent) : QThread(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void run()
  virtual void run()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QThread::run();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QThread_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQThread* qo = (MyQThread*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:150
// [-2] void run()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread3runEv(void *this_) {
  ((QThread*)this_)->QThread::run();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:71
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QThread10metaObjectEv(void *this_) {
  return (void*)((QThread*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:71
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QThread11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QThread*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:71
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QThread11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QThread*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:71
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QThread2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QThread::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:71
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QThread6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QThread::trUtf8(s, c, n);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:73
// [8] Qt::HANDLE currentThreadId()
extern "C" Q_DECL_EXPORT
Qt::HANDLE C_ZN7QThread15currentThreadIdEv() {
  return (Qt::HANDLE)QThread::currentThreadId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:74
// [8] QThread * currentThread()
extern "C" Q_DECL_EXPORT
void* C_ZN7QThread13currentThreadEv() {
  return (void*)QThread::currentThread();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:75
// [4] int idealThreadCount()
extern "C" Q_DECL_EXPORT
int C_ZN7QThread16idealThreadCountEv() {
  return (int)QThread::idealThreadCount();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:76
// [-2] void yieldCurrentThread()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread18yieldCurrentThreadEv() {
  QThread::yieldCurrentThread();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:78
// [-2] void QThread(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QThreadC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQThread*)(0);
  return  new MyQThread(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:79
// [-2] void ~QThread()
extern "C" Q_DECL_EXPORT
void C_ZN7QThreadD2Ev(void *this_) {
  delete (QThread*)(this_);
}
// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qthread.h:95
// [-2] void setPriority(QThread::Priority)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN7QThread11setPriorityENS_8PriorityE(void *this_, QThread::Priority priority) {
  ((QThread*)this_)->setPriority(priority);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qthread.h:96
// [4] QThread::Priority priority()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
QThread::Priority C_ZNK7QThread8priorityEv(void *this_) {
  return (QThread::Priority)((QThread*)this_)->priority();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:98
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread10isFinishedEv(void *this_) {
  return (bool)((QThread*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:99
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread9isRunningEv(void *this_) {
  return (bool)((QThread*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qthread.h:101
// [-2] void requestInterruption()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN7QThread19requestInterruptionEv(void *this_) {
  ((QThread*)this_)->requestInterruption();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qthread.h:102
// [1] bool isInterruptionRequested()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZNK7QThread23isInterruptionRequestedEv(void *this_) {
  return (bool)((QThread*)this_)->isInterruptionRequested();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:104
// [-2] void setStackSize(uint)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread12setStackSizeEj(void *this_, uint stackSize) {
  ((QThread*)this_)->setStackSize(stackSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:105
// [4] uint stackSize()
extern "C" Q_DECL_EXPORT
uint C_ZNK7QThread9stackSizeEv(void *this_) {
  return (uint)((QThread*)this_)->stackSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:107
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread4exitEi(void *this_, int retcode) {
  ((QThread*)this_)->exit(retcode);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qthread.h:109
// [8] QAbstractEventDispatcher * eventDispatcher()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK7QThread15eventDispatcherEv(void *this_) {
  return (void*)((QThread*)this_)->eventDispatcher();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qthread.h:110
// [-2] void setEventDispatcher(QAbstractEventDispatcher *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QThread18setEventDispatcherEP24QAbstractEventDispatcher(void *this_, QAbstractEventDispatcher * eventDispatcher) {
  ((QThread*)this_)->setEventDispatcher(eventDispatcher);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:112
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QThread5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QThread*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qthread.h:113
// [4] int loopLevel()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
int C_ZNK7QThread9loopLevelEv(void *this_) {
  return (int)((QThread*)this_)->loopLevel();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:133
// [-2] void start(QThread::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread5startENS_8PriorityE(void *this_, QThread::Priority arg0) {
  ((QThread*)this_)->start(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:134
// [-2] void terminate()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread9terminateEv(void *this_) {
  ((QThread*)this_)->terminate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:135
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN7QThread4quitEv(void *this_) {
  ((QThread*)this_)->quit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:139
// [1] bool wait(unsigned long)
extern "C" Q_DECL_EXPORT
bool C_ZN7QThread4waitEm(void *this_, unsigned long time) {
  return (bool)((QThread*)this_)->wait(time);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:141
// [-2] void sleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread5sleepEm(unsigned long arg0) {
  QThread::sleep(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:142
// [-2] void msleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread6msleepEm(unsigned long arg0) {
  QThread::msleep(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:143
// [-2] void usleep(unsigned long)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread6usleepEm(unsigned long arg0) {
  QThread::usleep(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:146
// [-2] void started(QThread::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread7startedENS_14QPrivateSignalE(void *this_, QThread::QPrivateSignal* arg0) {
  ((QThread*)this_)->started(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qthread.h:147
// [-2] void finished(QThread::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN7QThread8finishedENS_14QPrivateSignalE(void *this_, QThread::QPrivateSignal* arg0) {
  ((QThread*)this_)->finished(*arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
