//  header block begin

// since 0x050000
// /usr/include/qt/QtCore/qfiledevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfiledevice.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileDevice is pure virtual: false
// QFileDevice has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileDevice_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileDevice_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileDevice_t qt_meta_stringdata_MyQFileDevice = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFileDevice"
  },
  "MyQFileDevice"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileDevice[] = {
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
class Q_DECL_EXPORT MyQFileDevice : public QFileDevice {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFileDevice::staticMetaObject,
  qt_meta_stringdata_MyQFileDevice.data,
  qt_meta_data_MyQFileDevice,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFileDevice.stringdata0))
      return static_cast<void*>(this);
  return QFileDevice::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFileDevice::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFileDevice() {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::writeData(data, len_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readLineData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::readLineData(data, maxlen);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QFileDevice_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFileDevice* qo = (MyQFileDevice*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:131
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:132
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::writeData(data, len_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:133
// [8] qint64 readLineData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice12readLineDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::readLineData(data, maxlen);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDevice10metaObjectEv(void *this_) {
  return (void*)((QFileDevice*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileDevice*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFileDevice11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileDevice*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileDevice::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileDevice::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:90
// [-2] void ~QFileDevice()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDeviceD2Ev(void *this_) {
  delete (QFileDevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:92
// [4] QFileDevice::FileError error()
extern "C" Q_DECL_EXPORT
QFileDevice::FileError C_ZNK11QFileDevice5errorEv(void *this_) {
  return (QFileDevice::FileError)((QFileDevice*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:93
// [-2] void unsetError()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDevice10unsetErrorEv(void *this_) {
  ((QFileDevice*)this_)->unsetError();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:95
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDevice5closeEv(void *this_) {
  ((QFileDevice*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:97
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDevice12isSequentialEv(void *this_) {
  return (bool)((QFileDevice*)this_)->isSequential();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:99
// [4] int handle()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFileDevice6handleEv(void *this_) {
  return (int)((QFileDevice*)this_)->handle();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:100
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDevice8fileNameEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->fileName();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:102
// [8] qint64 pos()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QFileDevice3posEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->pos();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:103
// [1] bool seek(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice4seekEx(void *this_, qint64 offset) {
  return (bool)((QFileDevice*)this_)->seek(offset);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:104
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDevice5atEndEv(void *this_) {
  return (bool)((QFileDevice*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:105
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice5flushEv(void *this_) {
  return (bool)((QFileDevice*)this_)->flush();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:107
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QFileDevice4sizeEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->size();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:109
// [1] bool resize(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice6resizeEx(void *this_, qint64 sz) {
  return (bool)((QFileDevice*)this_)->resize(sz);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:110
// [4] QFileDevice::Permissions permissions()
extern "C" Q_DECL_EXPORT
QFileDevice::Permissions* C_ZNK11QFileDevice11permissionsEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->permissions();
return new QFileDevice::Permissions(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:111
// [1] bool setPermissions(QFileDevice::Permissions)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  return (bool)((QFileDevice*)this_)->setPermissions(permissionSpec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:119
// [8] uchar * map(qint64, qint64, QFileDevice::MemoryMapFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE(void *this_, qint64 offset, qint64 size, QFileDevice::MemoryMapFlags flags) {
  return (void*)((QFileDevice*)this_)->map(offset, size, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:120
// [1] bool unmap(uchar *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice5unmapEPh(void *this_, uchar * address) {
  return (bool)((QFileDevice*)this_)->unmap(address);
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
