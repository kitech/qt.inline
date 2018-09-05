//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qlocalserver.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlocalserver.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QLocalServer is pure virtual: false
// QLocalServer has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQLocalServer_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLocalServer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLocalServer_t qt_meta_stringdata_MyQLocalServer = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQLocalServer"
  },
  "MyQLocalServer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLocalServer[] = {
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
class Q_DECL_EXPORT MyQLocalServer : public QLocalServer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLocalServer::staticMetaObject,
  qt_meta_stringdata_MyQLocalServer.data,
  qt_meta_data_MyQLocalServer,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLocalServer.stringdata0))
      return static_cast<void*>(this);
  return QLocalServer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLocalServer::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLocalServer() {}
// void QLocalServer(QObject *)
MyQLocalServer(QObject * parent) : QLocalServer(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void incomingConnection(quintptr)
  virtual void incomingConnection(quintptr socketDescriptor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"incomingConnection", &handled, 1, (uint64_t)socketDescriptor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLocalServer::incomingConnection(socketDescriptor);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QLocalServer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQLocalServer* qo = (MyQLocalServer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:98
// [-2] void incomingConnection(quintptr)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer18incomingConnectionEy(void *this_, quintptr socketDescriptor) {
  ((QLocalServer*)this_)->QLocalServer::incomingConnection(socketDescriptor);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer10metaObjectEv(void *this_) {
  return (void*)((QLocalServer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLocalServer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QLocalServer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLocalServer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLocalServer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLocalServer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:60
// [-2] void newConnection()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer13newConnectionEv(void *this_) {
  ((QLocalServer*)this_)->newConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:74
// [-2] void QLocalServer(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServerC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQLocalServer*)(0);
  return  new MyQLocalServer(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:75
// [-2] void ~QLocalServer()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServerD2Ev(void *this_) {
  delete (QLocalServer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:77
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer5closeEv(void *this_) {
  ((QLocalServer*)this_)->close();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:78
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer11errorStringEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->errorString();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:79
// [1] bool hasPendingConnections()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalServer21hasPendingConnectionsEv(void *this_) {
  return (bool)((QLocalServer*)this_)->hasPendingConnections();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:80
// [1] bool isListening()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QLocalServer11isListeningEv(void *this_) {
  return (bool)((QLocalServer*)this_)->isListening();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:81
// [1] bool listen(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer6listenERK7QString(void *this_, QString* name) {
  return (bool)((QLocalServer*)this_)->listen(*name);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qlocalserver.h:82
// [1] bool listen(qintptr)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer6listenEx(void *this_, qintptr socketDescriptor) {
  return (bool)((QLocalServer*)this_)->listen(socketDescriptor);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:83
// [4] int maxPendingConnections()
extern "C" Q_DECL_EXPORT
int C_ZNK12QLocalServer21maxPendingConnectionsEv(void *this_) {
  return (int)((QLocalServer*)this_)->maxPendingConnections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:84
// [8] QLocalSocket * nextPendingConnection()
extern "C" Q_DECL_EXPORT
void* C_ZN12QLocalServer21nextPendingConnectionEv(void *this_) {
  return (void*)((QLocalServer*)this_)->nextPendingConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:85
// [8] QString serverName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer10serverNameEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->serverName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:86
// [8] QString fullServerName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QLocalServer14fullServerNameEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->fullServerName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qlocalserver.h:87
// [1] bool removeServer(const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer12removeServerERK7QString(QString* name) {
  return (bool)QLocalServer::removeServer(*name);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:88
// [4] QAbstractSocket::SocketError serverError()
extern "C" Q_DECL_EXPORT
QAbstractSocket::SocketError C_ZNK12QLocalServer11serverErrorEv(void *this_) {
  return (QAbstractSocket::SocketError)((QLocalServer*)this_)->serverError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:89
// [-2] void setMaxPendingConnections(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer24setMaxPendingConnectionsEi(void *this_, int numConnections) {
  ((QLocalServer*)this_)->setMaxPendingConnections(numConnections);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:90
// [1] bool waitForNewConnection(int, bool *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QLocalServer20waitForNewConnectionEiPb(void *this_, int msec, bool * timedOut) {
  return (bool)((QLocalServer*)this_)->waitForNewConnection(msec, timedOut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:92
// [-2] void setSocketOptions(QLocalServer::SocketOptions)
extern "C" Q_DECL_EXPORT
void C_ZN12QLocalServer16setSocketOptionsE6QFlagsINS_12SocketOptionEE(void *this_, QFlags<QLocalServer::SocketOption> options) {
  ((QLocalServer*)this_)->setSocketOptions(options);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qlocalserver.h:93
// [4] QLocalServer::SocketOptions socketOptions()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QLocalServer::SocketOptions* C_ZNK12QLocalServer13socketOptionsEv(void *this_) {
  auto rv = ((QLocalServer*)this_)->socketOptions();
return new QLocalServer::SocketOptions(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtNetwork/qlocalserver.h:95
// [8] qintptr socketDescriptor()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
qintptr C_ZNK12QLocalServer16socketDescriptorEv(void *this_) {
  return (qintptr)((QLocalServer*)this_)->socketDescriptor();
}
#endif // QT_VERSION >= 0x050a00

//  main block end
