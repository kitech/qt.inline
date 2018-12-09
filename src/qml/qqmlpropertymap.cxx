//  header block begin

// /usr/include/qt/QtQml/qqmlpropertymap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlpropertymap.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyMap is pure virtual: false
// QQmlPropertyMap has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlPropertyMap_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlPropertyMap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlPropertyMap_t qt_meta_stringdata_MyQQmlPropertyMap = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQQmlPropertyMap"
  },
  "MyQQmlPropertyMap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlPropertyMap[] = {
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
class Q_DECL_EXPORT MyQQmlPropertyMap : public QQmlPropertyMap {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlPropertyMap::staticMetaObject,
  qt_meta_stringdata_MyQQmlPropertyMap.data,
  qt_meta_data_MyQQmlPropertyMap,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlPropertyMap.stringdata0))
      return static_cast<void*>(this);
  return QQmlPropertyMap::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlPropertyMap::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlPropertyMap() {}
// void QQmlPropertyMap(QObject *)
MyQQmlPropertyMap(QObject * parent) : QQmlPropertyMap(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [16] QVariant updateValue(const QString &, const QVariant &)
  virtual QVariant updateValue(const QString & key, const QVariant & input)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateValue", &handled, 2, (uint64_t)&key, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QQmlPropertyMap::updateValue(key, input);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QQmlPropertyMap_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlPropertyMap* qo = (MyQQmlPropertyMap*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:79
// [16] QVariant updateValue(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap11updateValueERK7QStringRK8QVariant(void *this_, QString* key, QVariant* input) {
  auto rv = ((QQmlPropertyMap*)this_)->QQmlPropertyMap::updateValue(*key, *input);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap10metaObjectEv(void *this_) {
  return (void*)((QQmlPropertyMap*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlPropertyMap*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QQmlPropertyMap11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlPropertyMap*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlPropertyMap::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMap6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlPropertyMap::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:58
// [-2] void QQmlPropertyMap(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMapC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQmlPropertyMap*)(0);
  return  new MyQQmlPropertyMap(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:59
// [-2] void ~QQmlPropertyMap()
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMapD2Ev(void *this_) {
  delete (QQmlPropertyMap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:61
// [16] QVariant value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap5valueERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->value(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:62
// [-2] void insert(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap6insertERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QQmlPropertyMap*)this_)->insert(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:63
// [-2] void clear(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap5clearERK7QString(void *this_, QString* key) {
  ((QQmlPropertyMap*)this_)->clear(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:65
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMap4keysEv(void *this_) {
  auto rv = ((QQmlPropertyMap*)this_)->keys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:67
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK15QQmlPropertyMap5countEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:68
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK15QQmlPropertyMap4sizeEv(void *this_) {
  return (int)((QQmlPropertyMap*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:69
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QQmlPropertyMap7isEmptyEv(void *this_) {
  return (bool)((QQmlPropertyMap*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:70
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QQmlPropertyMap8containsERK7QString(void *this_, QString* key) {
  return (bool)((QQmlPropertyMap*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:72
// [16] QVariant & operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto& rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:73
// [16] QVariant operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QQmlPropertyMapixERK7QString(void *this_, QString* key) {
  auto rv = ((QQmlPropertyMap*)this_)->operator[](*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertymap.h:76
// [-2] void valueChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QQmlPropertyMap12valueChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QQmlPropertyMap*)this_)->valueChanged(*key, *value);
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
