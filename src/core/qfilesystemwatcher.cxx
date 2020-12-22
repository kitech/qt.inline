//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(filesystemwatcher)
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfilesystemwatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSystemWatcher is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfilesystemwatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm2397733177 (34)_ZN18QFileSystemWatcher2trEPKcS1_i
//static
/*void qm2397733177(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFileSystemWatcher::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFileSystemWatcher::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(QObject *) 
// (11)qm222004831 (35)_ZN18QFileSystemWatcherC2EP7QObject
/*void* qm222004831(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QFileSystemWatcher(parent);
  this_ =  new MyQFileSystemWatcher(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const QStringList &, QObject *) 
// (12)qm1149889208 (50)_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject
/*void* qm1149889208(const QStringList & paths, QObject * parent)*/{
  const QStringList & paths = *(const QStringList *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QFileSystemWatcher(paths, parent);
  this_ =  new MyQFileSystemWatcher(paths, parent);
}


/*void C_ZN18QFileSystemWatcherD2Ev(void *this_)*/ {
  delete (QFileSystemWatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfilesystemwatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(filesystemwatcher)
#endif // #ifndef QT_MINIMAL
//  footer block end
