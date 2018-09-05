//  header block begin
// since 0x040200
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfilesystemwatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSystemWatcher is pure virtual: false
// QFileSystemWatcher has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFileSystemWatcher_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileSystemWatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileSystemWatcher_t qt_meta_stringdata_MyQFileSystemWatcher = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQFileSystemWatcher"
  },
  "MyQFileSystemWatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileSystemWatcher[] = {
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
class Q_DECL_EXPORT MyQFileSystemWatcher : public QFileSystemWatcher {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFileSystemWatcher::staticMetaObject,
  qt_meta_stringdata_MyQFileSystemWatcher.data,
  qt_meta_data_MyQFileSystemWatcher,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFileSystemWatcher.stringdata0))
      return static_cast<void*>(this);
  return QFileSystemWatcher::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFileSystemWatcher::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFileSystemWatcher() {}
// void QFileSystemWatcher(QObject *)
MyQFileSystemWatcher(QObject * parent) : QFileSystemWatcher(parent) {}
// void QFileSystemWatcher(const QStringList &, QObject *)
MyQFileSystemWatcher(const QStringList & paths, QObject * parent) : QFileSystemWatcher(paths, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QFileSystemWatcher_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFileSystemWatcher* qo = (MyQFileSystemWatcher*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  return (void*)((QFileSystemWatcher*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileSystemWatcher*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QFileSystemWatcher11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileSystemWatcher*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemWatcher::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemWatcher::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcherC2EP7QObject(QObject * parent) {
  return  new MyQFileSystemWatcher(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const QStringList &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject(QStringList* paths, QObject * parent) {
  return  new MyQFileSystemWatcher(*paths, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:60
// [-2] void ~QFileSystemWatcher()
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcherD2Ev(void *this_) {
  delete (QFileSystemWatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:62
// [1] bool addPath(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher7addPathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->addPath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:63
// [8] QStringList addPaths(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher8addPathsERK11QStringList(void *this_, QStringList* files) {
  auto rv = ((QFileSystemWatcher*)this_)->addPaths(*files);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:64
// [1] bool removePath(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher10removePathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->removePath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:65
// [8] QStringList removePaths(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher11removePathsERK11QStringList(void *this_, QStringList* files) {
  auto rv = ((QFileSystemWatcher*)this_)->removePaths(*files);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:67
// [8] QStringList files()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher5filesEv(void *this_) {
  auto rv = ((QFileSystemWatcher*)this_)->files();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:68
// [8] QStringList directories()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher11directoriesEv(void *this_) {
  auto rv = ((QFileSystemWatcher*)this_)->directories();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:71
// [-2] void fileChanged(const QString &, QFileSystemWatcher::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcher11fileChangedERK7QStringNS_14QPrivateSignalE(void *this_, QString* path, QFileSystemWatcher::QPrivateSignal* arg1) {
  ((QFileSystemWatcher*)this_)->fileChanged(*path, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:72
// [-2] void directoryChanged(const QString &, QFileSystemWatcher::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcher16directoryChangedERK7QStringNS_14QPrivateSignalE(void *this_, QString* path, QFileSystemWatcher::QPrivateSignal* arg1) {
  ((QFileSystemWatcher*)this_)->directoryChanged(*path, *arg1);
}

//  main block end
