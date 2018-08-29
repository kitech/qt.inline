//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qsharedmemory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsharedmemory.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedMemory is pure virtual: false
// QSharedMemory has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSharedMemory_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSharedMemory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSharedMemory_t qt_meta_stringdata_MyQSharedMemory = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSharedMemory"
  },
  "MyQSharedMemory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSharedMemory[] = {
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
class Q_DECL_EXPORT MyQSharedMemory : public QSharedMemory {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSharedMemory::staticMetaObject,
  qt_meta_stringdata_MyQSharedMemory.data,
  qt_meta_data_MyQSharedMemory,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSharedMemory.stringdata0))
      return static_cast<void*>(this);
  return QSharedMemory::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSharedMemory::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSharedMemory() {}
// void QSharedMemory(QObject *)
MyQSharedMemory(QObject * parent) : QSharedMemory(parent) {}
// void QSharedMemory(const QString &, QObject *)
MyQSharedMemory(const QString & key, QObject * parent) : QSharedMemory(key, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory10metaObjectEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemory11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSharedMemory*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QSharedMemory11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSharedMemory*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemory2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSharedMemory::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemory6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSharedMemory::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:77
// [-2] void QSharedMemory(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemoryC2EP7QObject(QObject * parent) {
  return  new MyQSharedMemory(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:78
// [-2] void QSharedMemory(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemoryC2ERK7QStringP7QObject(QString* key, QObject * parent) {
  return  new MyQSharedMemory(*key, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:79
// [-2] void ~QSharedMemory()
extern "C" Q_DECL_EXPORT
void C_ZN13QSharedMemoryD2Ev(void *this_) {
  delete (QSharedMemory*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:81
// [-2] void setKey(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSharedMemory6setKeyERK7QString(void *this_, QString* key) {
  ((QSharedMemory*)this_)->setKey(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:82
// [8] QString key()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory3keyEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->key();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qsharedmemory.h:83
// [-2] void setNativeKey(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN13QSharedMemory12setNativeKeyERK7QString(void *this_, QString* key) {
  ((QSharedMemory*)this_)->setNativeKey(*key);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qsharedmemory.h:84
// [8] QString nativeKey()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory9nativeKeyEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->nativeKey();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:86
// [1] bool create(int, QSharedMemory::AccessMode)
extern "C" Q_DECL_EXPORT
bool C_ZN13QSharedMemory6createEiNS_10AccessModeE(void *this_, int size, QSharedMemory::AccessMode mode) {
  return (bool)((QSharedMemory*)this_)->create(size, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:87
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK13QSharedMemory4sizeEv(void *this_) {
  return (int)((QSharedMemory*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:89
// [1] bool attach(QSharedMemory::AccessMode)
extern "C" Q_DECL_EXPORT
bool C_ZN13QSharedMemory6attachENS_10AccessModeE(void *this_, QSharedMemory::AccessMode mode) {
  return (bool)((QSharedMemory*)this_)->attach(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:90
// [1] bool isAttached()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QSharedMemory10isAttachedEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->isAttached();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:91
// [1] bool detach()
extern "C" Q_DECL_EXPORT
bool C_ZN13QSharedMemory6detachEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:93
// [8] void * data()
extern "C" Q_DECL_EXPORT
void* C_ZN13QSharedMemory4dataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:94
// [8] const void * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory9constDataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->constData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:95
// [8] const void * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory4dataEv(void *this_) {
  return (void*)((QSharedMemory*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:98
// [1] bool lock()
extern "C" Q_DECL_EXPORT
bool C_ZN13QSharedMemory4lockEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->lock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:99
// [1] bool unlock()
extern "C" Q_DECL_EXPORT
bool C_ZN13QSharedMemory6unlockEv(void *this_) {
  return (bool)((QSharedMemory*)this_)->unlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:102
// [4] QSharedMemory::SharedMemoryError error()
extern "C" Q_DECL_EXPORT
QSharedMemory::SharedMemoryError C_ZNK13QSharedMemory5errorEv(void *this_) {
  return (QSharedMemory::SharedMemoryError)((QSharedMemory*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedmemory.h:103
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSharedMemory11errorStringEv(void *this_) {
  auto rv = ((QSharedMemory*)this_)->errorString();
return new QString(rv);
}

//  main block end
