//  header block begin

#ifndef QT_MINIMAL
// since 0x050c00
// /usr/include/qt/QtNetwork/qdtls.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdtls.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDtls is pure virtual: false
// QDtls has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDtls_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDtls_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDtls_t qt_meta_stringdata_MyQDtls = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQDtls"
  },
  "MyQDtls"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDtls[] = {
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
class Q_DECL_EXPORT MyQDtls : public QDtls {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDtls::staticMetaObject,
  qt_meta_stringdata_MyQDtls.data,
  qt_meta_data_MyQDtls,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDtls.stringdata0))
      return static_cast<void*>(this);
  return QDtls::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDtls::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDtls() {}
// void QDtls(QSslSocket::SslMode, QObject *)
MyQDtls(QSslSocket::SslMode mode, QObject * parent) : QDtls(mode, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QDtls_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDtls* qo = (MyQDtls*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:116
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls10metaObjectEv(void *this_) {
  return (void*)((QDtls*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:116
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDtls11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDtls*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:116
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN5QDtls11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDtls*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:116
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDtls2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDtls::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:116
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDtls6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDtls::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:128
// [-2] void QDtls(QSslSocket::SslMode, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDtlsC2EN10QSslSocket7SslModeEP7QObject(QSslSocket::SslMode mode, QObject * parent) {
  return  new MyQDtls(mode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:129
// [-2] void ~QDtls()
extern "C" Q_DECL_EXPORT
void C_ZN5QDtlsD2Ev(void *this_) {
  delete (QDtls*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:131
// [1] bool setPeer(const QHostAddress &, quint16, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls7setPeerERK12QHostAddresstRK7QString(void *this_, QHostAddress* address, quint16 port, QString* verificationName) {
  return (bool)((QDtls*)this_)->setPeer(*address, port, *verificationName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:133
// [1] bool setPeerVerificationName(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls23setPeerVerificationNameERK7QString(void *this_, QString* name) {
  return (bool)((QDtls*)this_)->setPeerVerificationName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:134
// [8] QHostAddress peerAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls11peerAddressEv(void *this_) {
  auto rv = ((QDtls*)this_)->peerAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:135
// [2] quint16 peerPort()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK5QDtls8peerPortEv(void *this_) {
  return (quint16)((QDtls*)this_)->peerPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:136
// [8] QString peerVerificationName()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls20peerVerificationNameEv(void *this_) {
  auto rv = ((QDtls*)this_)->peerVerificationName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:137
// [4] QSslSocket::SslMode sslMode()
extern "C" Q_DECL_EXPORT
QSslSocket::SslMode C_ZNK5QDtls7sslModeEv(void *this_) {
  return (QSslSocket::SslMode)((QDtls*)this_)->sslMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:139
// [-2] void setMtuHint(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN5QDtls10setMtuHintEt(void *this_, quint16 mtuHint) {
  ((QDtls*)this_)->setMtuHint(mtuHint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:140
// [2] quint16 mtuHint()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK5QDtls7mtuHintEv(void *this_) {
  return (quint16)((QDtls*)this_)->mtuHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:143
// [1] bool setCookieGeneratorParameters(const QDtls::GeneratorParameters &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls28setCookieGeneratorParametersERKN19QDtlsClientVerifier19GeneratorParametersE(void *this_, const QDtls::GeneratorParameters & params) {
  return (bool)((QDtls*)this_)->setCookieGeneratorParameters(params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:144
// [16] QDtls::GeneratorParameters cookieGeneratorParameters()
extern "C" Q_DECL_EXPORT
QDtls::GeneratorParameters* C_ZNK5QDtls25cookieGeneratorParametersEv(void *this_) {
  auto rv = ((QDtls*)this_)->cookieGeneratorParameters();
return new QDtls::GeneratorParameters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:146
// [1] bool setDtlsConfiguration(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls20setDtlsConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* configuration) {
  return (bool)((QDtls*)this_)->setDtlsConfiguration(*configuration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:147
// [8] QSslConfiguration dtlsConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls17dtlsConfigurationEv(void *this_) {
  auto rv = ((QDtls*)this_)->dtlsConfiguration();
return new QSslConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:149
// [4] QDtls::HandshakeState handshakeState()
extern "C" Q_DECL_EXPORT
QDtls::HandshakeState C_ZNK5QDtls14handshakeStateEv(void *this_) {
  return (QDtls::HandshakeState)((QDtls*)this_)->handshakeState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:151
// [1] bool doHandshake(QUdpSocket *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls11doHandshakeEP10QUdpSocketRK10QByteArray(void *this_, QUdpSocket * socket, QByteArray* dgram) {
  return (bool)((QDtls*)this_)->doHandshake(socket, *dgram);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:152
// [1] bool handleTimeout(QUdpSocket *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls13handleTimeoutEP10QUdpSocket(void *this_, QUdpSocket * socket) {
  return (bool)((QDtls*)this_)->handleTimeout(socket);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:153
// [1] bool resumeHandshake(QUdpSocket *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls15resumeHandshakeEP10QUdpSocket(void *this_, QUdpSocket * socket) {
  return (bool)((QDtls*)this_)->resumeHandshake(socket);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:154
// [1] bool abortHandshake(QUdpSocket *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls14abortHandshakeEP10QUdpSocket(void *this_, QUdpSocket * socket) {
  return (bool)((QDtls*)this_)->abortHandshake(socket);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:155
// [1] bool shutdown(QUdpSocket *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDtls8shutdownEP10QUdpSocket(void *this_, QUdpSocket * socket) {
  return (bool)((QDtls*)this_)->shutdown(socket);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:157
// [1] bool isConnectionEncrypted()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDtls21isConnectionEncryptedEv(void *this_) {
  return (bool)((QDtls*)this_)->isConnectionEncrypted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:158
// [8] QSslCipher sessionCipher()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls13sessionCipherEv(void *this_) {
  auto rv = ((QDtls*)this_)->sessionCipher();
return new QSslCipher(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:159
// [4] QSsl::SslProtocol sessionProtocol()
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK5QDtls15sessionProtocolEv(void *this_) {
  return (QSsl::SslProtocol)((QDtls*)this_)->sessionProtocol();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:161
// [8] qint64 writeDatagramEncrypted(QUdpSocket *, const QByteArray &)
extern "C" Q_DECL_EXPORT
qint64 C_ZN5QDtls22writeDatagramEncryptedEP10QUdpSocketRK10QByteArray(void *this_, QUdpSocket * socket, QByteArray* dgram) {
  return (qint64)((QDtls*)this_)->writeDatagramEncrypted(socket, *dgram);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:162
// [8] QByteArray decryptDatagram(QUdpSocket *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDtls15decryptDatagramEP10QUdpSocketRK10QByteArray(void *this_, QUdpSocket * socket, QByteArray* dgram) {
  auto rv = ((QDtls*)this_)->decryptDatagram(socket, *dgram);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:164
// [1] QDtlsError dtlsError()
extern "C" Q_DECL_EXPORT
QDtlsError C_ZNK5QDtls9dtlsErrorEv(void *this_) {
  return (QDtlsError)((QDtls*)this_)->dtlsError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:165
// [8] QString dtlsErrorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDtls15dtlsErrorStringEv(void *this_) {
  auto rv = ((QDtls*)this_)->dtlsErrorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:167
// [-2] QVector<QSslError> peerVerificationErrors()
extern "C" Q_DECL_EXPORT
void C_ZNK5QDtls22peerVerificationErrorsEv(void *this_) {
  auto rv = ((QDtls*)this_)->peerVerificationErrors();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:168
// [-2] void ignoreVerificationErrors(const QVector<QSslError> &)
extern "C" Q_DECL_EXPORT
void C_ZN5QDtls24ignoreVerificationErrorsERK7QVectorI9QSslErrorE(void *this_, QVector<QSslError>* errorsToIgnore) {
  ((QDtls*)this_)->ignoreVerificationErrors(*errorsToIgnore);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:172
// [-2] void pskRequired(QSslPreSharedKeyAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDtls11pskRequiredEP29QSslPreSharedKeyAuthenticator(void *this_, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QDtls*)this_)->pskRequired(authenticator);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:173
// [-2] void handshakeTimeout()
extern "C" Q_DECL_EXPORT
void C_ZN5QDtls16handshakeTimeoutEv(void *this_) {
  ((QDtls*)this_)->handshakeTimeout();
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
