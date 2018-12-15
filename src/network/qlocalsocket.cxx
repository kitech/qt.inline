//  header block begin

#ifndef QT_MINIMAL
// since 0x040400
// /usr/include/qt/QtNetwork/qlocalsocket.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlocalsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QLocalSocket is pure virtual: false
// QLocalSocket has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLocalSocket_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLocalSocket_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLocalSocket_t qt_meta_stringdata_MyQLocalSocket = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQLocalSocket"
  },
  "MyQLocalSocket"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLocalSocket[] = {
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
class Q_DECL_EXPORT MyQLocalSocket : public QLocalSocket {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLocalSocket::staticMetaObject,
  qt_meta_stringdata_MyQLocalSocket.data,
  qt_meta_data_MyQLocalSocket,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLocalSocket.stringdata0))
      return static_cast<void*>(this);
  return QLocalSocket::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLocalSocket::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLocalSocket() {}
// void QLocalSocket(QObject *)
MyQLocalSocket(QObject * parent) : QLocalSocket(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * arg0, qint64 arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QLocalSocket::readData(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * arg0, qint64 arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QLocalSocket::writeData(arg0, arg1);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QLocalSocket_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQLocalSocket* qo = (MyQLocalSocket*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:124
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN12QLocalSocket8readDataEPcx(void *this_, char * arg0, qint64 arg1) {
  return (qint64)((QLocalSocket*)this_)->QLocalSocket::readData(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:125
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN12QLocalSocket9writeDataEPKcx(void *this_, const char * arg0, qint64 arg1) {
  return (qint64)((QLocalSocket*)this_)->QLocalSocket::writeData(arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket10metaObjectEv(void *this_) {
  return (void*)((QLocalSocket*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalSocket11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLocalSocket*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QLocalSocket11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLocalSocket*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalSocket2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLocalSocket::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalSocket6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLocalSocket::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:82
// [-2] void QLocalSocket(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalSocketC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQLocalSocket*)(0);
  return  new MyQLocalSocket(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:83
// [-2] void ~QLocalSocket()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocketD2Ev(void *this_) {
  delete (QLocalSocket*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qlocalsocket.h:85
// [-2] void connectToServer(QIODevice::OpenMode)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket15connectToServerE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QLocalSocket*)this_)->connectToServer(openMode);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:86
// [-2] void connectToServer(const QString &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket15connectToServerERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* name, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QLocalSocket*)this_)->connectToServer(*name, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:87
// [-2] void disconnectFromServer()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket20disconnectFromServerEv(void *this_) {
  ((QLocalSocket*)this_)->disconnectFromServer();
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtNetwork/qlocalsocket.h:89
// [-2] void setServerName(const QString &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket13setServerNameERK7QString(void *this_, QString* name) {
  ((QLocalSocket*)this_)->setServerName(*name);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:90
// [8] QString serverName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket10serverNameEv(void *this_) {
  auto rv = ((QLocalSocket*)this_)->serverName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:91
// [8] QString fullServerName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalSocket14fullServerNameEv(void *this_) {
  auto rv = ((QLocalSocket*)this_)->fullServerName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:93
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5abortEv(void *this_) {
  ((QLocalSocket*)this_)->abort();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:94
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket12isSequentialEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->isSequential();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:95
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket14bytesAvailableEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:96
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket12bytesToWriteEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->bytesToWrite();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:97
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket11canReadLineEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->canReadLine();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:98
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QLocalSocket*)this_)->open(openMode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:99
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5closeEv(void *this_) {
  ((QLocalSocket*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:100
// [4] QLocalSocket::LocalSocketError error()
extern "C" Q_DECL_EXPORT
QLocalSocket::LocalSocketError C_ZNK12QLocalSocket5errorEv(void *this_) {
  return (QLocalSocket::LocalSocketError)((QLocalSocket*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:101
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket5flushEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->flush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:102
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalSocket7isValidEv(void *this_) {
  return (bool)((QLocalSocket*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:103
// [8] qint64 readBufferSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QLocalSocket14readBufferSizeEv(void *this_) {
  return (qint64)((QLocalSocket*)this_)->readBufferSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:104
// [-2] void setReadBufferSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QLocalSocket*)this_)->setReadBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:106
// [1] bool setSocketDescriptor(qintptr, QLocalSocket::LocalSocketState, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19setSocketDescriptorExNS_16LocalSocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, qintptr socketDescriptor, QLocalSocket::LocalSocketState socketState, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QLocalSocket*)this_)->setSocketDescriptor(socketDescriptor, socketState, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:109
// [8] qintptr socketDescriptor()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK12QLocalSocket16socketDescriptorEv(void *this_) {
  return (qintptr)((QLocalSocket*)this_)->socketDescriptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:111
// [4] QLocalSocket::LocalSocketState state()
extern "C" Q_DECL_EXPORT
QLocalSocket::LocalSocketState C_ZNK12QLocalSocket5stateEv(void *this_) {
  return (QLocalSocket::LocalSocketState)((QLocalSocket*)this_)->state();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:112
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForBytesWritten(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:113
// [1] bool waitForConnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket16waitForConnectedEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForConnected(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:114
// [1] bool waitForDisconnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket19waitForDisconnectedEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForDisconnected(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:115
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalSocket16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QLocalSocket*)this_)->waitForReadyRead(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:118
// [-2] void connected()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket9connectedEv(void *this_) {
  ((QLocalSocket*)this_)->connected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:119
// [-2] void disconnected()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket12disconnectedEv(void *this_) {
  ((QLocalSocket*)this_)->disconnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:120
// [-2] void error(QLocalSocket::LocalSocketError)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket5errorENS_16LocalSocketErrorE(void *this_, QLocalSocket::LocalSocketError socketError) {
  ((QLocalSocket*)this_)->error(socketError);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalsocket.h:121
// [-2] void stateChanged(QLocalSocket::LocalSocketState)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalSocket12stateChangedENS_16LocalSocketStateE(void *this_, QLocalSocket::LocalSocketState socketState) {
  ((QLocalSocket*)this_)->stateChanged(socketState);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
