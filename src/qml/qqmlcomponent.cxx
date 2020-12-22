//  header block begin

// /usr/include/qt/QtQml/qqmlcomponent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlcomponent.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlComponent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlcomponent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:67
// [8] QString tr(const char *, const char *, int) 
// (12)qm3816445801 (29)_ZN13QQmlComponent2trEPKcS1_i
//static
/*void qm3816445801(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlComponent::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlComponent::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:81
// [-2] void QQmlComponent(QObject *) 
// (12)qm1715292029 (30)_ZN13QQmlComponentC2EP7QObject
/*void* qm1715292029(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(parent);
  this_ =  new MyQQmlComponent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:82
// [-2] void QQmlComponent(QQmlEngine *, QObject *) 
// (12)qm1563286675 (43)_ZN13QQmlComponentC2EP10QQmlEngineP7QObject
/*void* qm1563286675(QQmlEngine * arg0, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, parent);
  this_ =  new MyQQmlComponent(arg0, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:83
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QObject *) 
// (12)qm1248525273 (53)_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject
/*void* qm1248525273(QQmlEngine * arg0, const QString & fileName, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & fileName = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, fileName, parent);
  this_ =  new MyQQmlComponent(arg0, fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:84
// [-2] void QQmlComponent(QQmlEngine *, const QString &, QQmlComponent::CompilationMode, QObject *) 
// (12)qm4056792889 (74)_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject
/*void* qm4056792889(QQmlEngine * arg0, const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QString & fileName = *(const QString *)this_; QQmlComponent::CompilationMode mode = *(QQmlComponent::CompilationMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, fileName, mode, parent);
  this_ =  new MyQQmlComponent(arg0, fileName, mode, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:85
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QObject *) 
// (11)qm122571752 (50)_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject
/*void* qm122571752(QQmlEngine * arg0, const QUrl & url, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & url = *(const QUrl *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, url, parent);
  this_ =  new MyQQmlComponent(arg0, url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:86
// [-2] void QQmlComponent(QQmlEngine *, const QUrl &, QQmlComponent::CompilationMode, QObject *) 
// (12)qm2772071660 (71)_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject
/*void* qm2772071660(QQmlEngine * arg0, const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent)*/{
  QQmlEngine * arg0 = *(QQmlEngine **)this_; const QUrl & url = *(const QUrl *)this_; QQmlComponent::CompilationMode mode = *(QQmlComponent::CompilationMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QQmlComponent(arg0, url, mode, parent);
  this_ =  new MyQQmlComponent(arg0, url, mode, parent);
}


/*void C_ZN13QQmlComponentD2Ev(void *this_)*/ {
  delete (QQmlComponent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlcomponent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
