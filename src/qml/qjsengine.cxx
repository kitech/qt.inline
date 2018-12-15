//  header block begin

// since 0x050000
// /usr/include/qt/QtQml/qjsengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsengine.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSEngine is pure virtual: false
// QJSEngine has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJSEngine_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJSEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJSEngine_t qt_meta_stringdata_MyQJSEngine = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQJSEngine"
  },
  "MyQJSEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJSEngine[] = {
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
class Q_DECL_EXPORT MyQJSEngine : public QJSEngine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QJSEngine::staticMetaObject,
  qt_meta_stringdata_MyQJSEngine.data,
  qt_meta_data_MyQJSEngine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQJSEngine.stringdata0))
      return static_cast<void*>(this);
  return QJSEngine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QJSEngine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQJSEngine() {}
// void QJSEngine()
MyQJSEngine() : QJSEngine() {}
// void QJSEngine(QObject *)
MyQJSEngine(QObject * parent) : QJSEngine(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QJSEngine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQJSEngine* qo = (MyQJSEngine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine10metaObjectEv(void *this_) {
  return (void*)((QJSEngine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QJSEngine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QJSEngine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QJSEngine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QJSEngine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QJSEngine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:64
// [-2] void QJSEngine()
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngineC2Ev() {
  return  new MyQJSEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:65
// [-2] void QJSEngine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngineC2EP7QObject(QObject * parent) {
  return  new MyQJSEngine(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:66
// [-2] void ~QJSEngine()
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngineD2Ev(void *this_) {
  delete (QJSEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:68
// [8] QJSValue globalObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine12globalObjectEv(void *this_) {
  auto rv = ((QJSEngine*)this_)->globalObject();
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:70
// [8] QJSValue evaluate(const QString &, const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine8evaluateERK7QStringS2_i(void *this_, QString* program, QString* fileName, int lineNumber) {
  auto rv = ((QJSEngine*)this_)->evaluate(*program, *fileName, lineNumber);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtQml/qjsengine.h:72
// [8] QJSValue importModule(const QString &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine12importModuleERK7QString(void *this_, QString* fileName) {
  auto rv = ((QJSEngine*)this_)->importModule(*fileName);
return new QJSValue(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:74
// [8] QJSValue newObject()
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine9newObjectEv(void *this_) {
  auto rv = ((QJSEngine*)this_)->newObject();
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:75
// [8] QJSValue newArray(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine8newArrayEj(void *this_, uint length) {
  auto rv = ((QJSEngine*)this_)->newArray(length);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:77
// [8] QJSValue newQObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine10newQObjectEP7QObject(void *this_, QObject * object) {
  auto rv = ((QJSEngine*)this_)->newQObject(object);
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQml/qjsengine.h:79
// [8] QJSValue newQMetaObject(const QMetaObject *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine14newQMetaObjectEPK11QMetaObject(void *this_, const QMetaObject * metaObject) {
  auto rv = ((QJSEngine*)this_)->newQMetaObject(metaObject);
return new QJSValue(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtQml/qjsengine.h:87
// [8] QJSValue newErrorObject(QJSValue::ErrorType, const QString &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZN9QJSEngine14newErrorObjectEN8QJSValue9ErrorTypeERK7QString(void *this_, QJSValue::ErrorType errorType, QString* message) {
  auto rv = ((QJSEngine*)this_)->newErrorObject(errorType, *message);
return new QJSValue(rv);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:100
// [-2] void collectGarbage()
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine14collectGarbageEv(void *this_) {
  ((QJSEngine*)this_)->collectGarbage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:103
// [-2] void installTranslatorFunctions(const QJSValue &)
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue(void *this_, QJSValue* object) {
  ((QJSEngine*)this_)->installTranslatorFunctions(*object);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtQml/qjsengine.h:114
// [-2] void installExtensions(QJSEngine::Extensions, const QJSValue &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine17installExtensionsE6QFlagsINS_9ExtensionEERK8QJSValue(void *this_, QFlags<QJSEngine::Extension> extensions, QJSValue* object) {
  ((QJSEngine*)this_)->installExtensions(extensions, *object);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsengine.h:116
// [8] QV4::ExecutionEngine * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QJSEngine6handleEv(void *this_) {
  return (void*)((QJSEngine*)this_)->handle();
}

// Public Visibility=Default Availability=Available
// since Qt 5.12
// /usr/include/qt/QtQml/qjsengine.h:118
// [-2] void throwError(const QString &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine10throwErrorERK7QString(void *this_, QString* message) {
  ((QJSEngine*)this_)->throwError(*message);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// since Qt 5.12
// /usr/include/qt/QtQml/qjsengine.h:119
// [-2] void throwError(QJSValue::ErrorType, const QString &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN9QJSEngine10throwErrorEN8QJSValue9ErrorTypeERK7QString(void *this_, QJSValue::ErrorType errorType, QString* message) {
  ((QJSEngine*)this_)->throwError(errorType, *message);
}
#endif // QT_VERSION >= 0x050c00

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
