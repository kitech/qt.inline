//  header block begin
// since 0x050100
// /usr/include/qt/QtQml/qqmlapplicationengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlapplicationengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlApplicationEngine is pure virtual: false
// QQmlApplicationEngine has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlApplicationEngine_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlApplicationEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlApplicationEngine_t qt_meta_stringdata_MyQQmlApplicationEngine = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQQmlApplicationEngine"
  },
  "MyQQmlApplicationEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlApplicationEngine[] = {
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
class Q_DECL_EXPORT MyQQmlApplicationEngine : public QQmlApplicationEngine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlApplicationEngine::staticMetaObject,
  qt_meta_stringdata_MyQQmlApplicationEngine.data,
  qt_meta_data_MyQQmlApplicationEngine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlApplicationEngine.stringdata0))
      return static_cast<void*>(this);
  return QQmlApplicationEngine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlApplicationEngine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlApplicationEngine() {}
// void QQmlApplicationEngine(QObject *)
MyQQmlApplicationEngine(QObject * parent) : QQmlApplicationEngine(parent) {}
// void QQmlApplicationEngine(const QUrl &, QObject *)
MyQQmlApplicationEngine(const QUrl & url, QObject * parent) : QQmlApplicationEngine(url, parent) {}
// void QQmlApplicationEngine(const QString &, QObject *)
MyQQmlApplicationEngine(const QString & filePath, QObject * parent) : QQmlApplicationEngine(filePath, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQmlApplicationEngine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlApplicationEngine* qo = (MyQQmlApplicationEngine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQmlApplicationEngine10metaObjectEv(void *this_) {
  return (void*)((QQmlApplicationEngine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlApplicationEngine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QQmlApplicationEngine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlApplicationEngine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlApplicationEngine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlApplicationEngine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:56
// [-2] void QQmlApplicationEngine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2EP7QObject(QObject * parent) {
  return  new MyQQmlApplicationEngine(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:57
// [-2] void QQmlApplicationEngine(const QUrl &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2ERK4QUrlP7QObject(QUrl* url, QObject * parent) {
  return  new MyQQmlApplicationEngine(*url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:58
// [-2] void QQmlApplicationEngine(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQmlApplicationEngineC2ERK7QStringP7QObject(QString* filePath, QObject * parent) {
  return  new MyQQmlApplicationEngine(*filePath, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:59
// [-2] void ~QQmlApplicationEngine()
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngineD2Ev(void *this_) {
  delete (QQmlApplicationEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:62
// [8] QList<QObject *> rootObjects()
extern "C" Q_DECL_EXPORT
QList<QObject *>* C_ZN21QQmlApplicationEngine11rootObjectsEv(void *this_) {
  auto rv = ((QQmlApplicationEngine*)this_)->rootObjects();
return new QList<QObject *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:64
// [8] QList<QObject *> rootObjects()
extern "C" Q_DECL_EXPORT
QList<QObject *>* C_ZNK21QQmlApplicationEngine11rootObjectsEv(void *this_) {
  auto rv = ((QQmlApplicationEngine*)this_)->rootObjects();
return new QList<QObject *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:67
// [-2] void load(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine4loadERK4QUrl(void *this_, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->load(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:68
// [-2] void load(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine4loadERK7QString(void *this_, QString* filePath) {
  ((QQmlApplicationEngine*)this_)->load(*filePath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:69
// [-2] void loadData(const QByteArray &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine8loadDataERK10QByteArrayRK4QUrl(void *this_, QByteArray* data, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->loadData(*data, *url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlapplicationengine.h:72
// [-2] void objectCreated(QObject *, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQmlApplicationEngine13objectCreatedEP7QObjectRK4QUrl(void *this_, QObject * object, QUrl* url) {
  ((QQmlApplicationEngine*)this_)->objectCreated(object, *url);
}

//  main block end
