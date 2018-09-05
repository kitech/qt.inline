//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoop is pure virtual: false
// QEventLoop has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQEventLoop_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEventLoop_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEventLoop_t qt_meta_stringdata_MyQEventLoop = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQEventLoop"
  },
  "MyQEventLoop"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEventLoop[] = {
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
class Q_DECL_EXPORT MyQEventLoop : public QEventLoop {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QEventLoop::staticMetaObject,
  qt_meta_stringdata_MyQEventLoop.data,
  qt_meta_data_MyQEventLoop,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQEventLoop.stringdata0))
      return static_cast<void*>(this);
  return QEventLoop::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QEventLoop::qt_metacall(_c, _id, _a);
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
  virtual ~MyQEventLoop() {}
// void QEventLoop(QObject *)
MyQEventLoop(QObject * parent) : QEventLoop(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QEventLoop_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQEventLoop* qo = (MyQEventLoop*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QEventLoop10metaObjectEv(void *this_) {
  return (void*)((QEventLoop*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QEventLoop*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QEventLoop11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QEventLoop*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventLoop::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoop6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventLoop::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:56
// [-2] void QEventLoop(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QEventLoopC2EP7QObject(QObject * parent) {
  return  new MyQEventLoop(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:57
// [-2] void ~QEventLoop()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoopD2Ev(void *this_) {
  delete (QEventLoop*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:70
// [1] bool processEvents(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (bool)((QEventLoop*)this_)->processEvents(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:71
// [-2] void processEvents(QEventLoop::ProcessEventsFlags, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime) {
  ((QEventLoop*)this_)->processEvents(flags, maximumTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:73
// [4] int exec(QEventLoop::ProcessEventsFlags)
extern "C" Q_DECL_EXPORT
int C_ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void *this_, QFlags<QEventLoop::ProcessEventsFlag> flags) {
  return (int)((QEventLoop*)this_)->exec(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:74
// [-2] void exit(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop4exitEi(void *this_, int returnCode) {
  ((QEventLoop*)this_)->exit(returnCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:75
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QEventLoop9isRunningEv(void *this_) {
  return (bool)((QEventLoop*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:77
// [-2] void wakeUp()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop6wakeUpEv(void *this_) {
  ((QEventLoop*)this_)->wakeUp();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:79
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QEventLoop5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QEventLoop*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:82
// [-2] void quit()
extern "C" Q_DECL_EXPORT
void C_ZN10QEventLoop4quitEv(void *this_) {
  ((QEventLoop*)this_)->quit();
}

//  main block end
