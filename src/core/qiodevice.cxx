//  header block begin

// /usr/include/qt/QtCore/qiodevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiodevice.h>
#include <QtCore>
#include "callback_inherit.h"

// QIODevice is pure virtual: true
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
// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:168
// [8] qint64 readData(char *, qint64)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:169
// [8] qint64 readLineData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice12readLineDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->QIODevice::readLineData(data, maxlen);
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:170
// [8] qint64 writeData(const char *, qint64)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QIODevice10metaObjectEv(void *this_) {
  return (void*)((QIODevice*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QIODevice*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QIODevice11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QIODevice*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIODevice::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIODevice::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:85
// [-2] void QIODevice()
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODeviceC2Ev() {
  auto _nilp = (MyQIODevice*)(0);
  return  new MyQIODevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:87
// [-2] void QIODevice(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODeviceC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQIODevice*)(0);
  return  new MyQIODevice(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:89
// [-2] void ~QIODevice()
extern "C" Q_DECL_EXPORT
void C_ZN9QIODeviceD2Ev(void *this_) {
  delete (QIODevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:91
// [4] QIODevice::OpenMode openMode()
extern "C" Q_DECL_EXPORT
QIODevice::OpenMode* C_ZNK9QIODevice8openModeEv(void *this_) {
  auto rv = ((QIODevice*)this_)->openMode();
return new QIODevice::OpenMode(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:93
// [-2] void setTextModeEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice18setTextModeEnabledEb(void *this_, bool enabled) {
  ((QIODevice*)this_)->setTextModeEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:94
// [1] bool isTextModeEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice17isTextModeEnabledEv(void *this_) {
  return (bool)((QIODevice*)this_)->isTextModeEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:96
// [1] bool isOpen()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice6isOpenEv(void *this_) {
  return (bool)((QIODevice*)this_)->isOpen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:97
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice10isReadableEv(void *this_) {
  return (bool)((QIODevice*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:98
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice10isWritableEv(void *this_) {
  return (bool)((QIODevice*)this_)->isWritable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:99
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice12isSequentialEv(void *this_) {
  return (bool)((QIODevice*)this_)->isSequential();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:101
// [4] int readChannelCount()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
int C_ZNK9QIODevice16readChannelCountEv(void *this_) {
  return (int)((QIODevice*)this_)->readChannelCount();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:102
// [4] int writeChannelCount()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
int C_ZNK9QIODevice17writeChannelCountEv(void *this_) {
  return (int)((QIODevice*)this_)->writeChannelCount();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:103
// [4] int currentReadChannel()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
int C_ZNK9QIODevice18currentReadChannelEv(void *this_) {
  return (int)((QIODevice*)this_)->currentReadChannel();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:104
// [-2] void setCurrentReadChannel(int)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice21setCurrentReadChannelEi(void *this_, int channel) {
  ((QIODevice*)this_)->setCurrentReadChannel(channel);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:105
// [4] int currentWriteChannel()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
int C_ZNK9QIODevice19currentWriteChannelEv(void *this_) {
  return (int)((QIODevice*)this_)->currentWriteChannel();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:106
// [-2] void setCurrentWriteChannel(int)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice22setCurrentWriteChannelEi(void *this_, int channel) {
  ((QIODevice*)this_)->setCurrentWriteChannel(channel);
}
#endif // QT_VERSION >= 0x050700

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:108
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice4openE6QFlagsINS_12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> mode) {
  return (bool)((QIODevice*)this_)->open(mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:109
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice5closeEv(void *this_) {
  ((QIODevice*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:113
// [8] qint64 pos()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QIODevice3posEv(void *this_) {
  return (qint64)((QIODevice*)this_)->pos();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:114
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QIODevice4sizeEv(void *this_) {
  return (qint64)((QIODevice*)this_)->size();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:115
// [1] bool seek(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice4seekEx(void *this_, qint64 pos) {
  return (bool)((QIODevice*)this_)->seek(pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:116
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice5atEndEv(void *this_) {
  return (bool)((QIODevice*)this_)->atEnd();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:117
// [1] bool reset()
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice5resetEv(void *this_) {
  return (bool)((QIODevice*)this_)->reset();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:119
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QIODevice14bytesAvailableEv(void *this_) {
  return (qint64)((QIODevice*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:120
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QIODevice12bytesToWriteEv(void *this_) {
  return (qint64)((QIODevice*)this_)->bytesToWrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:122
// [8] qint64 read(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice4readEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->read(data, maxlen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:123
// [8] QByteArray read(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice4readEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->read(maxlen);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:124
// [8] QByteArray readAll()
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice7readAllEv(void *this_) {
  auto rv = ((QIODevice*)this_)->readAll();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:125
// [8] qint64 readLine(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice8readLineEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->readLine(data, maxlen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:126
// [8] QByteArray readLine(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice8readLineEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->readLine(maxlen);
return new QByteArray(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:127
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice11canReadLineEv(void *this_) {
  return (bool)((QIODevice*)this_)->canReadLine();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:129
// [-2] void startTransaction()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice16startTransactionEv(void *this_) {
  ((QIODevice*)this_)->startTransaction();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:130
// [-2] void commitTransaction()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice17commitTransactionEv(void *this_) {
  ((QIODevice*)this_)->commitTransaction();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:131
// [-2] void rollbackTransaction()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice19rollbackTransactionEv(void *this_) {
  ((QIODevice*)this_)->rollbackTransaction();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:132
// [1] bool isTransactionStarted()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK9QIODevice20isTransactionStartedEv(void *this_) {
  return (bool)((QIODevice*)this_)->isTransactionStarted();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:134
// [8] qint64 write(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice5writeEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QIODevice*)this_)->write(data, len_);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qiodevice.h:135
// [8] qint64 write(const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice5writeEPKc(void *this_, const char * data) {
  return (qint64)((QIODevice*)this_)->write(data);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:136
// [8] qint64 write(const QByteArray &)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice5writeERK10QByteArray(void *this_, QByteArray* data) {
  return (qint64)((QIODevice*)this_)->write(*data);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qiodevice.h:139
// [8] qint64 peek(char *, qint64)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice4peekEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->peek(data, maxlen);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qiodevice.h:140
// [8] QByteArray peek(qint64)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN9QIODevice4peekEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->peek(maxlen);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qiodevice.h:141
// [8] qint64 skip(qint64)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QIODevice4skipEx(void *this_, qint64 maxSize) {
  return (qint64)((QIODevice*)this_)->skip(maxSize);
}
#endif // QT_VERSION >= 0x050a00

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:143
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QIODevice*)this_)->waitForReadyRead(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:144
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QIODevice*)this_)->waitForBytesWritten(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:146
// [-2] void ungetChar(char)
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice9ungetCharEc(void *this_, char c) {
  ((QIODevice*)this_)->ungetChar(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:147
// [1] bool putChar(char)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice7putCharEc(void *this_, char c) {
  return (bool)((QIODevice*)this_)->putChar(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:148
// [1] bool getChar(char *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QIODevice7getCharEPc(void *this_, char * c) {
  return (bool)((QIODevice*)this_)->getChar(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:150
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QIODevice11errorStringEv(void *this_) {
  auto rv = ((QIODevice*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:154
// [-2] void readyRead()
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice9readyReadEv(void *this_) {
  ((QIODevice*)this_)->readyRead();
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:155
// [-2] void channelReadyRead(int)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice16channelReadyReadEi(void *this_, int channel) {
  ((QIODevice*)this_)->channelReadyRead(channel);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:156
// [-2] void bytesWritten(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice12bytesWrittenEx(void *this_, qint64 bytes) {
  ((QIODevice*)this_)->bytesWritten(bytes);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qiodevice.h:157
// [-2] void channelBytesWritten(int, qint64)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice19channelBytesWrittenEix(void *this_, int channel, qint64 bytes) {
  ((QIODevice*)this_)->channelBytesWritten(channel, bytes);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:158
// [-2] void aboutToClose()
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice12aboutToCloseEv(void *this_) {
  ((QIODevice*)this_)->aboutToClose();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qiodevice.h:159
// [-2] void readChannelFinished()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN9QIODevice19readChannelFinishedEv(void *this_) {
  ((QIODevice*)this_)->readChannelFinished();
}
#endif // QT_VERSION >= 0x040400

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
