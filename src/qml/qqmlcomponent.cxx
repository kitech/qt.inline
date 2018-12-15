//  header block begin

// since 0x050000
// /usr/include/qt/QtQml/qqmlcomponent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcomponent.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlComponent is pure virtual: false
// QQmlComponent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlComponent_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlComponent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlComponent_t qt_meta_stringdata_MyQQmlComponent = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQQmlComponent"
  },
  "MyQQmlComponent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlComponent[] = {
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
class Q_DECL_EXPORT MyQQmlComponent : public QQmlComponent {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlComponent::staticMetaObject,
  qt_meta_stringdata_MyQQmlComponent.data,
  qt_meta_data_MyQQmlComponent,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlComponent.stringdata0))
      return static_cast<void*>(this);
  return QQmlComponent::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlComponent::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlComponent() {}
// void QQmlComponent(QObject *)
MyQQmlComponent(QObject * parent) : QQmlComponent(parent) {}
// void QQmlComponent(QQmlEngine *, QObject *)
MyQQmlComponent(QQmlEngine * arg0, QObject * parent) : QQmlComponent(arg0, parent) {}
// void QQmlComponent(QQmlEngine *, const QString &, QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QString & fileName, QObject * parent) : QQmlComponent(arg0, fileName, parent) {}
// void QQmlComponent(QQmlEngine *, const QString &, QQmlComponent::CompilationMode, QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent) : QQmlComponent(arg0, fileName, mode, parent) {}
// void QQmlComponent(QQmlEngine *, const QUrl &, QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QUrl & url, QObject * parent) : QQmlComponent(arg0, url, parent) {}
// void QQmlComponent(QQmlEngine *, const QUrl &, QQmlComponent::CompilationMode, QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent) : QQmlComponent(arg0, url, mode, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQmlComponent_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlComponent* qo = (MyQQmlComponent*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent10metaObjectEv(void *this_) {
  return (void*)((QQmlComponent*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlComponent*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QQmlComponent11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlComponent*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlComponent::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlComponent::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:80
// [-2] void QQmlComponent(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP7QObject(QObject * parent) {
  return  new MyQQmlComponent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:81
// [-2] void QQmlComponent(QQmlEngine *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineP7QObject(QQmlEngine * arg0, QObject * parent) {
  return  new MyQQmlComponent(arg0, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:82
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject(QQmlEngine * arg0, QString* fileName, QObject * parent) {
  return  new MyQQmlComponent(arg0, *fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:83
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QQmlComponent::CompilationMode, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject(QQmlEngine * arg0, QString* fileName, QQmlComponent::CompilationMode mode, QObject * parent) {
  return  new MyQQmlComponent(arg0, *fileName, mode, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:84
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject(QQmlEngine * arg0, QUrl* url, QObject * parent) {
  return  new MyQQmlComponent(arg0, *url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:85
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QQmlComponent::CompilationMode, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject(QQmlEngine * arg0, QUrl* url, QQmlComponent::CompilationMode mode, QObject * parent) {
  return  new MyQQmlComponent(arg0, *url, mode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:86
// [-2] void ~QQmlComponent()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponentD2Ev(void *this_) {
  delete (QQmlComponent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:90
// [4] QQmlComponent::Status status()
extern "C" Q_DECL_EXPORT
QQmlComponent::Status C_ZNK13QQmlComponent6statusEv(void *this_) {
  return (QQmlComponent::Status)((QQmlComponent*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:92
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent6isNullEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:93
// [1] bool isReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent7isReadyEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:94
// [1] bool isError()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent7isErrorEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:95
// [1] bool isLoading()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent9isLoadingEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isLoading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:97
// [-2] QList<QQmlError> errors()
extern "C" Q_DECL_EXPORT
QList<QQmlError>* C_ZNK13QQmlComponent6errorsEv(void *this_) {
  auto rv = ((QQmlComponent*)this_)->errors();
return new QList<QQmlError>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:98
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent11errorStringEv(void *this_) {
  auto rv = ((QQmlComponent*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:100
// [8] qreal progress()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QQmlComponent8progressEv(void *this_) {
  return (qreal)((QQmlComponent*)this_)->progress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:102
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent3urlEv(void *this_) {
  auto rv = ((QQmlComponent*)this_)->url();
return new QUrl(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:104
// [8] QObject * create(QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent6createEP11QQmlContext(void *this_, QQmlContext * context) {
  return (void*)((QQmlComponent*)this_)->create(context);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:105
// [8] QObject * beginCreate(QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent11beginCreateEP11QQmlContext(void *this_, QQmlContext * arg0) {
  return (void*)((QQmlComponent*)this_)->beginCreate(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:106
// [-2] void completeCreate()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent14completeCreateEv(void *this_) {
  ((QQmlComponent*)this_)->completeCreate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:108
// [-2] void create(QQmlIncubator &, QQmlContext *, QQmlContext *)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_(void *this_, QQmlIncubator* arg0, QQmlContext * context, QQmlContext * forContext) {
  ((QQmlComponent*)this_)->create(*arg0, context, forContext);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:111
// [8] QQmlContext * creationContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent15creationContextEv(void *this_) {
  return (void*)((QQmlComponent*)this_)->creationContext();
}

// Public Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtQml/qqmlcomponent.h:112
// [8] QQmlEngine * engine()
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent6engineEv(void *this_) {
  return (void*)((QQmlComponent*)this_)->engine();
}
#endif // QT_VERSION >= 0x050c00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:114
// [8] QQmlComponentAttached * qmlAttachedProperties(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject(QObject * arg0) {
  return (void*)QQmlComponent::qmlAttachedProperties(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:117
// [-2] void loadUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7loadUrlERK4QUrl(void *this_, QUrl* url) {
  ((QQmlComponent*)this_)->loadUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:118
// [-2] void loadUrl(const QUrl &, QQmlComponent::CompilationMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE(void *this_, QUrl* url, QQmlComponent::CompilationMode mode) {
  ((QQmlComponent*)this_)->loadUrl(*url, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:119
// [-2] void setData(const QByteArray &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl(void *this_, QByteArray* arg0, QUrl* baseUrl) {
  ((QQmlComponent*)this_)->setData(*arg0, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:122
// [-2] void statusChanged(QQmlComponent::Status)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent13statusChangedENS_6StatusE(void *this_, QQmlComponent::Status arg0) {
  ((QQmlComponent*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:123
// [-2] void progressChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent15progressChangedEd(void *this_, qreal arg0) {
  ((QQmlComponent*)this_)->progressChanged(arg0);
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
