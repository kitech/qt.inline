//  header block begin

// /usr/include/qt/QtCore/qsignalmapper.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsignalmapper.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalMapper is pure virtual: false
// QSignalMapper has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSignalMapper_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSignalMapper_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSignalMapper_t qt_meta_stringdata_MyQSignalMapper = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSignalMapper"
  },
  "MyQSignalMapper"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSignalMapper[] = {
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
class Q_DECL_EXPORT MyQSignalMapper : public QSignalMapper {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSignalMapper::staticMetaObject,
  qt_meta_stringdata_MyQSignalMapper.data,
  qt_meta_data_MyQSignalMapper,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSignalMapper.stringdata0))
      return static_cast<void*>(this);
  return QSignalMapper::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSignalMapper::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSignalMapper() {}
// void QSignalMapper(QObject *)
MyQSignalMapper(QObject * parent) : QSignalMapper(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QSignalMapper_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSignalMapper* qo = (MyQSignalMapper*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSignalMapper10metaObjectEv(void *this_) {
  return (void*)((QSignalMapper*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSignalMapper11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSignalMapper*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QSignalMapper11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSignalMapper*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSignalMapper2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalMapper::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSignalMapper6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalMapper::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:56
// [-2] void QSignalMapper(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSignalMapperC2EP7QObject(QObject * parent) {
  return  new MyQSignalMapper(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:57
// [-2] void ~QSignalMapper()
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapperD2Ev(void *this_) {
  delete (QSignalMapper*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:59
// [-2] void setMapping(QObject *, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper10setMappingEP7QObjecti(void *this_, QObject * sender, int id) {
  ((QSignalMapper*)this_)->setMapping(sender, id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:60
// [-2] void setMapping(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper10setMappingEP7QObjectRK7QString(void *this_, QObject * sender, QString* text) {
  ((QSignalMapper*)this_)->setMapping(sender, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:61
// [-2] void setMapping(QObject *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper10setMappingEP7QObjectP7QWidget(void *this_, QObject * sender, QWidget * widget) {
  ((QSignalMapper*)this_)->setMapping(sender, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:62
// [-2] void setMapping(QObject *, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper10setMappingEP7QObjectS1_(void *this_, QObject * sender, QObject * object) {
  ((QSignalMapper*)this_)->setMapping(sender, object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:63
// [-2] void removeMappings(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper14removeMappingsEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->removeMappings(sender);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:65
// [8] QObject * mapping(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSignalMapper7mappingEi(void *this_, int id) {
  return (void*)((QSignalMapper*)this_)->mapping(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:66
// [8] QObject * mapping(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSignalMapper7mappingERK7QString(void *this_, QString* text) {
  return (void*)((QSignalMapper*)this_)->mapping(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:67
// [8] QObject * mapping(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSignalMapper7mappingEP7QWidget(void *this_, QWidget * widget) {
  return (void*)((QSignalMapper*)this_)->mapping(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:68
// [8] QObject * mapping(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSignalMapper7mappingEP7QObject(void *this_, QObject * object) {
  return (void*)((QSignalMapper*)this_)->mapping(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:71
// [-2] void mapped(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper6mappedEi(void *this_, int arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:72
// [-2] void mapped(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper6mappedERK7QString(void *this_, QString* arg0) {
  ((QSignalMapper*)this_)->mapped(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:73
// [-2] void mapped(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper6mappedEP7QWidget(void *this_, QWidget * arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:74
// [-2] void mapped(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper6mappedEP7QObject(void *this_, QObject * arg0) {
  ((QSignalMapper*)this_)->mapped(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:77
// [-2] void map()
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper3mapEv(void *this_) {
  ((QSignalMapper*)this_)->map();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:78
// [-2] void map(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSignalMapper3mapEP7QObject(void *this_, QObject * sender) {
  ((QSignalMapper*)this_)->map(sender);
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
