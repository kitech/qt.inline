//  header block begin

// /usr/include/qt/QtCore/qtranslator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtranslator.h>
#include <QtCore>
#include "callback_inherit.h"

// QTranslator is pure virtual: false
// QTranslator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTranslator_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTranslator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTranslator_t qt_meta_stringdata_MyQTranslator = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTranslator"
  },
  "MyQTranslator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTranslator[] = {
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
class Q_DECL_EXPORT MyQTranslator : public QTranslator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTranslator::staticMetaObject,
  qt_meta_stringdata_MyQTranslator.data,
  qt_meta_data_MyQTranslator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTranslator.stringdata0))
      return static_cast<void*>(this);
  return QTranslator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTranslator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTranslator() {}
// void QTranslator(QObject *)
MyQTranslator(QObject * parent) : QTranslator(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QTranslator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTranslator* qo = (MyQTranslator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTranslator10metaObjectEv(void *this_) {
  return (void*)((QTranslator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTranslator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTranslator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTranslator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTranslator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTranslator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTranslator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTranslator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTranslator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:58
// [-2] void QTranslator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTranslatorC2EP7QObject(QObject * parent) {
  return  new MyQTranslator(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:59
// [-2] void ~QTranslator()
extern "C" Q_DECL_EXPORT
void C_ZN11QTranslatorD2Ev(void *this_) {
  delete (QTranslator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:61
// [8] QString translate(const char *, const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTranslator9translateEPKcS1_S1_i(void *this_, const char * context, const char * sourceText, const char * disambiguation, int n) {
  auto rv = ((QTranslator*)this_)->translate(context, sourceText, disambiguation, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:64
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTranslator7isEmptyEv(void *this_) {
  return (bool)((QTranslator*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:66
// [1] bool load(const QString &, const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTranslator4loadERK7QStringS2_S2_S2_(void *this_, QString* filename, QString* directory, QString* search_delimiters, QString* suffix) {
  return (bool)((QTranslator*)this_)->load(*filename, *directory, *search_delimiters, *suffix);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qtranslator.h:70
// [1] bool load(const QLocale &, const QString &, const QString &, const QString &, const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZN11QTranslator4loadERK7QLocaleRK7QStringS5_S5_S5_(void *this_, QLocale* locale, QString* filename, QString* prefix, QString* directory, QString* suffix) {
  return (bool)((QTranslator*)this_)->load(*locale, *filename, *prefix, *directory, *suffix);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:75
// [1] bool load(const uchar *, int, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTranslator4loadEPKhiRK7QString(void *this_, const uchar * data, int len_, QString* directory) {
  return (bool)((QTranslator*)this_)->load(data, len_, *directory);
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
