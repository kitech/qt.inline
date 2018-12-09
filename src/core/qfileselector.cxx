//  header block begin

// since 0x050200
// /usr/include/qt/QtCore/qfileselector.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileselector.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSelector is pure virtual: false
// QFileSelector has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileSelector_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileSelector_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileSelector_t qt_meta_stringdata_MyQFileSelector = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQFileSelector"
  },
  "MyQFileSelector"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileSelector[] = {
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
class Q_DECL_EXPORT MyQFileSelector : public QFileSelector {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFileSelector::staticMetaObject,
  qt_meta_stringdata_MyQFileSelector.data,
  qt_meta_data_MyQFileSelector,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFileSelector.stringdata0))
      return static_cast<void*>(this);
  return QFileSelector::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFileSelector::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFileSelector() {}
// void QFileSelector(QObject *)
MyQFileSelector(QObject * parent) : QFileSelector(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QFileSelector_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFileSelector* qo = (MyQFileSelector*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector10metaObjectEv(void *this_) {
  return (void*)((QFileSelector*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileSelector*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QFileSelector11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileSelector*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSelector::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSelector::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:53
// [-2] void QFileSelector(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelectorC2EP7QObject(QObject * parent) {
  return  new MyQFileSelector(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:54
// [-2] void ~QFileSelector()
extern "C" Q_DECL_EXPORT
void C_ZN13QFileSelectorD2Ev(void *this_) {
  delete (QFileSelector*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:56
// [8] QString select(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector6selectERK7QString(void *this_, QString* filePath) {
  auto rv = ((QFileSelector*)this_)->select(*filePath);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:57
// [8] QUrl select(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector6selectERK4QUrl(void *this_, QUrl* filePath) {
  auto rv = ((QFileSelector*)this_)->select(*filePath);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:59
// [8] QStringList extraSelectors()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector14extraSelectorsEv(void *this_) {
  auto rv = ((QFileSelector*)this_)->extraSelectors();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:60
// [-2] void setExtraSelectors(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFileSelector17setExtraSelectorsERK11QStringList(void *this_, QStringList* list) {
  ((QFileSelector*)this_)->setExtraSelectors(*list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:62
// [8] QStringList allSelectors()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector12allSelectorsEv(void *this_) {
  auto rv = ((QFileSelector*)this_)->allSelectors();
return new QStringList(rv);
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
