//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtCore/qabstractanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QAnimationDriver is pure virtual: false
// QAnimationDriver has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAnimationDriver_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAnimationDriver_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAnimationDriver_t qt_meta_stringdata_MyQAnimationDriver = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQAnimationDriver"
  },
  "MyQAnimationDriver"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAnimationDriver[] = {
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
class Q_DECL_EXPORT MyQAnimationDriver : public QAnimationDriver {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAnimationDriver::staticMetaObject,
  qt_meta_stringdata_MyQAnimationDriver.data,
  qt_meta_data_MyQAnimationDriver,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAnimationDriver.stringdata0))
      return static_cast<void*>(this);
  return QAnimationDriver::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAnimationDriver::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAnimationDriver() {}
// void QAnimationDriver(QObject *)
MyQAnimationDriver(QObject * parent) : QAnimationDriver(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void start()
  virtual void start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAnimationDriver::start();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void stop()
  virtual void stop()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAnimationDriver::stop();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAnimationDriver_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAnimationDriver* qo = (MyQAnimationDriver*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:161
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver5startEv(void *this_) {
  ((QAnimationDriver*)this_)->QAnimationDriver::start();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:162
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver4stopEv(void *this_) {
  ((QAnimationDriver*)this_)->QAnimationDriver::stop();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:134
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAnimationDriver10metaObjectEv(void *this_) {
  return (void*)((QAnimationDriver*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:134
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAnimationDriver*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:134
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QAnimationDriver11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAnimationDriver*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:134
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationDriver::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:134
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationDriver::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:138
// [-2] void QAnimationDriver(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriverC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationDriver*)(0);
  return  new MyQAnimationDriver(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:139
// [-2] void ~QAnimationDriver()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriverD2Ev(void *this_) {
  delete (QAnimationDriver*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:141
// [-2] void advance()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7advanceEv(void *this_) {
  ((QAnimationDriver*)this_)->advance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:143
// [-2] void install()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7installEv(void *this_) {
  ((QAnimationDriver*)this_)->install();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:144
// [-2] void uninstall()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver9uninstallEv(void *this_) {
  ((QAnimationDriver*)this_)->uninstall();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:146
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAnimationDriver9isRunningEv(void *this_) {
  return (bool)((QAnimationDriver*)this_)->isRunning();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:148
// [8] qint64 elapsed()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QAnimationDriver7elapsedEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->elapsed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:151
// [-2] void setStartTime(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver12setStartTimeEx(void *this_, qint64 startTime) {
  ((QAnimationDriver*)this_)->setStartTime(startTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:152
// [8] qint64 startTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QAnimationDriver9startTimeEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->startTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:155
// [-2] void started()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7startedEv(void *this_) {
  ((QAnimationDriver*)this_)->started();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:156
// [-2] void stopped()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7stoppedEv(void *this_) {
  ((QAnimationDriver*)this_)->stopped();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
