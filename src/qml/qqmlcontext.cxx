//  header block begin
// /usr/include/qt/QtQml/qqmlcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcontext.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlContext is pure virtual: false
// QQmlContext has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlContext_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlContext_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlContext_t qt_meta_stringdata_MyQQmlContext = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQQmlContext"
  },
  "MyQQmlContext"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlContext[] = {
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
class Q_DECL_EXPORT MyQQmlContext : public QQmlContext {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlContext::staticMetaObject,
  qt_meta_stringdata_MyQQmlContext.data,
  qt_meta_data_MyQQmlContext,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlContext.stringdata0))
      return static_cast<void*>(this);
  return QQmlContext::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlContext::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlContext() {}
// void QQmlContext(QQmlEngine *, QObject *)
MyQQmlContext(QQmlEngine * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
// void QQmlContext(QQmlContext *, QObject *)
MyQQmlContext(QQmlContext * parent, QObject * objParent) : QQmlContext(parent, objParent) {}
};

extern "C" Q_DECL_EXPORT
void C_QQmlContext_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlContext* qo = (MyQQmlContext*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext10metaObjectEv(void *this_) {
  return (void*)((QQmlContext*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContext11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlContext*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QQmlContext11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlContext*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContext2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlContext::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContext6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlContext::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:65
// [-2] void QQmlContext(QQmlEngine *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContextC2EP10QQmlEngineP7QObject(QQmlEngine * parent, QObject * objParent) {
  return  new MyQQmlContext(parent, objParent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:66
// [-2] void QQmlContext(QQmlContext *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContextC2EPS_P7QObject(QQmlContext * parent, QObject * objParent) {
  return  new MyQQmlContext(parent, objParent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:67
// [-2] void ~QQmlContext()
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlContextD2Ev(void *this_) {
  delete (QQmlContext*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:69
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QQmlContext7isValidEv(void *this_) {
  return (bool)((QQmlContext*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:71
// [8] QQmlEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext6engineEv(void *this_) {
  return (void*)((QQmlContext*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:72
// [8] QQmlContext * parentContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext13parentContextEv(void *this_) {
  return (void*)((QQmlContext*)this_)->parentContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:74
// [8] QObject * contextObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext13contextObjectEv(void *this_) {
  return (void*)((QQmlContext*)this_)->contextObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:75
// [-2] void setContextObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlContext16setContextObjectEP7QObject(void *this_, QObject * arg0) {
  ((QQmlContext*)this_)->setContextObject(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:77
// [16] QVariant contextProperty(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext15contextPropertyERK7QString(void *this_, QString* arg0) {
  auto rv = ((QQmlContext*)this_)->contextProperty(*arg0);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:78
// [-2] void setContextProperty(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlContext18setContextPropertyERK7QStringP7QObject(void *this_, QString* arg0, QObject * arg1) {
  ((QQmlContext*)this_)->setContextProperty(*arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:79
// [-2] void setContextProperty(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant(void *this_, QString* arg0, QVariant* arg1) {
  ((QQmlContext*)this_)->setContextProperty(*arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:82
// [8] QString nameForObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext13nameForObjectEP7QObject(void *this_, QObject * arg0) {
  auto rv = ((QQmlContext*)this_)->nameForObject(arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:84
// [8] QUrl resolvedUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QQmlContext11resolvedUrlERK4QUrl(void *this_, QUrl* arg0) {
  auto rv = ((QQmlContext*)this_)->resolvedUrl(*arg0);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:86
// [-2] void setBaseUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN11QQmlContext10setBaseUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlContext*)this_)->setBaseUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcontext.h:87
// [8] QUrl baseUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QQmlContext7baseUrlEv(void *this_) {
  auto rv = ((QQmlContext*)this_)->baseUrl();
return new QUrl(rv);
}

//  main block end
