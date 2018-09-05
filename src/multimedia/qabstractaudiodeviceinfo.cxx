//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioDeviceInfo is pure virtual: true
// QAbstractAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractAudioDeviceInfo_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractAudioDeviceInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractAudioDeviceInfo_t qt_meta_stringdata_MyQAbstractAudioDeviceInfo = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQAbstractAudioDeviceInfo"
  },
  "MyQAbstractAudioDeviceInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractAudioDeviceInfo[] = {
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
class Q_DECL_EXPORT MyQAbstractAudioDeviceInfo : public QAbstractAudioDeviceInfo {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractAudioDeviceInfo::staticMetaObject,
  qt_meta_stringdata_MyQAbstractAudioDeviceInfo.data,
  qt_meta_data_MyQAbstractAudioDeviceInfo,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractAudioDeviceInfo.stringdata0))
      return static_cast<void*>(this);
  return QAbstractAudioDeviceInfo::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractAudioDeviceInfo::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractAudioDeviceInfo() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAudioFormat preferredFormat()
  virtual QAudioFormat preferredFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"preferredFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioFormat){};}
    auto prv = (QAudioFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioFormat
    } else {
    return (QAudioFormat){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFormatSupported(const QAudioFormat &)
  virtual bool isFormatSupported(const QAudioFormat & format) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFormatSupported", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceName()
  virtual QString deviceName() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceName", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedCodecs()
  virtual QStringList supportedCodecs()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedCodecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> supportedSampleRates()
  virtual QList<int> supportedSampleRates()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedSampleRates", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> supportedChannelCounts()
  virtual QList<int> supportedChannelCounts()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedChannelCounts", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> supportedSampleSizes()
  virtual QList<int> supportedSampleSizes()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedSampleSizes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAudioFormat::Endian> supportedByteOrders()
  virtual QList<QAudioFormat::Endian> supportedByteOrders()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedByteOrders", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAudioFormat::Endian>){};}
    auto prv = (QList<QAudioFormat::Endian>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAudioFormat::Endian>
    } else {
    return (QList<QAudioFormat::Endian>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QAudioFormat::SampleType> supportedSampleTypes()
  virtual QList<QAudioFormat::SampleType> supportedSampleTypes()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedSampleTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QAudioFormat::SampleType>){};}
    auto prv = (QList<QAudioFormat::SampleType>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QAudioFormat::SampleType>
    } else {
    return (QList<QAudioFormat::SampleType>){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractAudioDeviceInfo_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractAudioDeviceInfo* qo = (MyQAbstractAudioDeviceInfo*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:62
// [8] QAudioFormat preferredFormat()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:63
// [1] bool isFormatSupported(const QAudioFormat &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:64
// [8] QString deviceName()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:65
// [8] QStringList supportedCodecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:66
// [-2] QList<int> supportedSampleRates()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:67
// [-2] QList<int> supportedChannelCounts()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:68
// [-2] QList<int> supportedSampleSizes()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:69
// [-2] QList<QAudioFormat::Endian> supportedByteOrders()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:70
// [-2] QList<QAudioFormat::SampleType> supportedSampleTypes()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioDeviceInfo*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractAudioDeviceInfo11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAudioDeviceInfo*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QAbstractAudioDeviceInfo11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAudioDeviceInfo*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractAudioDeviceInfo2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioDeviceInfo::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractAudioDeviceInfo6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioDeviceInfo::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:62
// [8] QAudioFormat preferredFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo15preferredFormatEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->preferredFormat();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:63
// [1] bool isFormatSupported(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK24QAbstractAudioDeviceInfo17isFormatSupportedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  return (bool)((QAbstractAudioDeviceInfo*)this_)->isFormatSupported(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:64
// [8] QString deviceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo10deviceNameEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->deviceName();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:65
// [8] QStringList supportedCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractAudioDeviceInfo15supportedCodecsEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedCodecs();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:66
// [-2] QList<int> supportedSampleRates()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZN24QAbstractAudioDeviceInfo20supportedSampleRatesEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedSampleRates();
return new QList<int>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:67
// [-2] QList<int> supportedChannelCounts()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZN24QAbstractAudioDeviceInfo22supportedChannelCountsEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedChannelCounts();
return new QList<int>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:68
// [-2] QList<int> supportedSampleSizes()
extern "C" Q_DECL_EXPORT
QList<int>* C_ZN24QAbstractAudioDeviceInfo20supportedSampleSizesEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedSampleSizes();
return new QList<int>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:69
// [-2] QList<QAudioFormat::Endian> supportedByteOrders()
extern "C" Q_DECL_EXPORT
QList<QAudioFormat::Endian>* C_ZN24QAbstractAudioDeviceInfo19supportedByteOrdersEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedByteOrders();
return new QList<QAudioFormat::Endian>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:70
// [-2] QList<QAudioFormat::SampleType> supportedSampleTypes()
extern "C" Q_DECL_EXPORT
QList<QAudioFormat::SampleType>* C_ZN24QAbstractAudioDeviceInfo20supportedSampleTypesEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedSampleTypes();
return new QList<QAudioFormat::SampleType>(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractAudioDeviceInfoD2Ev(void *this_) {
  delete (QAbstractAudioDeviceInfo*)(this_);
}
//  main block end
