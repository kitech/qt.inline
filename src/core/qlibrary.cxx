//  header block begin
// /usr/include/qt/QtCore/qlibrary.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlibrary.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibrary is pure virtual: false
// QLibrary has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQLibrary_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLibrary_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLibrary_t qt_meta_stringdata_MyQLibrary = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQLibrary"
  },
  "MyQLibrary"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLibrary[] = {
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
class Q_DECL_EXPORT MyQLibrary : public QLibrary {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLibrary::staticMetaObject,
  qt_meta_stringdata_MyQLibrary.data,
  qt_meta_data_MyQLibrary,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLibrary.stringdata0))
      return static_cast<void*>(this);
  return QLibrary::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLibrary::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLibrary() {}
// void QLibrary(QObject *)
MyQLibrary(QObject * parent) : QLibrary(parent) {}
// void QLibrary(const QString &, QObject *)
MyQLibrary(const QString & fileName, QObject * parent) : QLibrary(fileName, parent) {}
// void QLibrary(const QString &, int, QObject *)
MyQLibrary(const QString & fileName, int verNum, QObject * parent) : QLibrary(fileName, verNum, parent) {}
// void QLibrary(const QString &, const QString &, QObject *)
MyQLibrary(const QString & fileName, const QString & version, QObject * parent) : QLibrary(fileName, version, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QLibrary_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQLibrary* qo = (MyQLibrary*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QLibrary10metaObjectEv(void *this_) {
  return (void*)((QLibrary*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibrary11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLibrary*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QLibrary11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLibrary*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibrary2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLibrary::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibrary6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLibrary::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:68
// [-2] void QLibrary(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibraryC2EP7QObject(QObject * parent) {
  return  new MyQLibrary(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:69
// [-2] void QLibrary(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibraryC2ERK7QStringP7QObject(QString* fileName, QObject * parent) {
  return  new MyQLibrary(*fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:70
// [-2] void QLibrary(const QString &, int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibraryC2ERK7QStringiP7QObject(QString* fileName, int verNum, QObject * parent) {
  return  new MyQLibrary(*fileName, verNum, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:71
// [-2] void QLibrary(const QString &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QLibraryC2ERK7QStringS2_P7QObject(QString* fileName, QString* version, QObject * parent) {
  return  new MyQLibrary(*fileName, *version, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:72
// [-2] void ~QLibrary()
extern "C" Q_DECL_EXPORT
void C_ZN8QLibraryD2Ev(void *this_) {
  delete (QLibrary*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:74
// [8] QFunctionPointer resolve(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary7resolveEPKc(void *this_, const char * symbol) {
  auto rv = ((QLibrary*)this_)->resolve(symbol);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:75
// [8] QFunctionPointer resolve(const QString &, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary7resolveERK7QStringPKc(QString* fileName, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, symbol);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:76
// [8] QFunctionPointer resolve(const QString &, int, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary7resolveERK7QStringiPKc(QString* fileName, int verNum, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, verNum, symbol);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlibrary.h:77
// [8] QFunctionPointer resolve(const QString &, const QString &, const char *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary7resolveERK7QStringS2_PKc(QString* fileName, QString* version, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, *version, symbol);
/*return rv;*/
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:79
// [1] bool load()
extern "C" Q_DECL_EXPORT
bool C_ZN8QLibrary4loadEv(void *this_) {
  return (bool)((QLibrary*)this_)->load();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:80
// [1] bool unload()
extern "C" Q_DECL_EXPORT
bool C_ZN8QLibrary6unloadEv(void *this_) {
  return (bool)((QLibrary*)this_)->unload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:81
// [1] bool isLoaded()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QLibrary8isLoadedEv(void *this_) {
  return (bool)((QLibrary*)this_)->isLoaded();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:83
// [1] bool isLibrary(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QLibrary9isLibraryERK7QString(QString* fileName) {
  return (bool)QLibrary::isLibrary(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:85
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QLibrary*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:86
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QLibrary8fileNameEv(void *this_) {
  auto rv = ((QLibrary*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:88
// [-2] void setFileNameAndVersion(const QString &, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringi(void *this_, QString* fileName, int verNum) {
  ((QLibrary*)this_)->setFileNameAndVersion(*fileName, verNum);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qlibrary.h:89
// [-2] void setFileNameAndVersion(const QString &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringS2_(void *this_, QString* fileName, QString* version) {
  ((QLibrary*)this_)->setFileNameAndVersion(*fileName, *version);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qlibrary.h:90
// [8] QString errorString()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK8QLibrary11errorStringEv(void *this_) {
  auto rv = ((QLibrary*)this_)->errorString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:92
// [-2] void setLoadHints(QLibrary::LoadHints)
extern "C" Q_DECL_EXPORT
void C_ZN8QLibrary12setLoadHintsE6QFlagsINS_8LoadHintEE(void *this_, QFlags<QLibrary::LoadHint> hints) {
  ((QLibrary*)this_)->setLoadHints(hints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:93
// [4] QLibrary::LoadHints loadHints()
extern "C" Q_DECL_EXPORT
QLibrary::LoadHints* C_ZNK8QLibrary9loadHintsEv(void *this_) {
  auto rv = ((QLibrary*)this_)->loadHints();
return new QLibrary::LoadHints(rv);
}

//  main block end
