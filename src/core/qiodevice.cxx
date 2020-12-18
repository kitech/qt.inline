//  header block begin

// /usr/include/qt/QtCore/qiodevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiodevice.h>
#include <QtCore>
#include "callback_inherit.h"

// QIODevice is pure virtual: true true
// QIODevice has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIODevice_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIODevice_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIODevice_t qt_meta_stringdata_MyQIODevice = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQIODevice"
  },
  "MyQIODevice"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIODevice[] = {
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
class Q_DECL_EXPORT MyQIODevice : public QIODevice {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QIODevice::staticMetaObject,
  qt_meta_stringdata_MyQIODevice.data,
  qt_meta_data_MyQIODevice,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQIODevice.stringdata0))
      return static_cast<void*>(this);
  return QIODevice::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QIODevice::qt_metacall(_c, _id, _a);
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
  virtual ~MyQIODevice() {}
// void QIODevice()
MyQIODevice() : QIODevice() {}
// void QIODevice(QObject *)
MyQIODevice(QObject * parent) : QIODevice(parent) {}
// Protected purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readLineData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QIODevice::readLineData(data, maxlen);
  }
  }

// Protected purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QIODevice_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQIODevice* qo = (MyQIODevice*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qiodevice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] QString tr(const char *, const char *, int) 
// (12)qm3445072952 (24)_ZN9QIODevice2trEPKcS1_i
//static
/*void qm3445072952(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QIODevice::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QIODevice::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:136
// [8] qint64 write(const QByteArray &) 
// (12)qm3095376569 (34)_ZN9QIODevice5writeERK10QByteArray
//static
/*void qm3095376569(const QByteArray & data)*/ {
  const QByteArray & data = *(const QByteArray *)this_;
  (void) ((QIODevice*)this_)->write(data);
   auto xptr = (long long (QIODevice::*)(QByteArray const&) ) &QIODevice::write;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QIODeviceD2Ev(void *this_)*/ {
  delete (QIODevice*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qiodevice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
