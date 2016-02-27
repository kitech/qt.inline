// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslconfiguration.h
// dst-file: /src/network/qsslconfiguration.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslconfiguration.h>


#include <qbytearray.h>
#include <qsslsocket.h>
#include <qsslellipticcurve.h>
#include <qvector.h>
#include <qtextdocument.h>
#include <qlist.h>
#include <qsslcipher.h>
#include <qabstractnetworkcache.h>
#include <qsslcertificate.h>
#include <qssl.h>
#include <qsslkey.h>
// <= header block end

// main block begin =>
void __keep_qsslconfiguration_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 76, column 17>
//   // proto:  void QSslConfiguration::swap(QSslConfiguration & other);
if (true) {
  auto f = [](QSslConfiguration flythis, QSslConfiguration & arg1) {
    ((QSslConfiguration*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration4swapERS_ swap(class QSslConfiguration &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslConfiguration_Class_Size()
{
  return sizeof(QSslConfiguration);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 149, column 16>
//   // proto:  QByteArray QSslConfiguration::nextNegotiatedProtocol();
// _ZNK17QSslConfiguration22nextNegotiatedProtocolEv nextNegotiatedProtocol()
extern "C"
QByteArray*
C_ZNK17QSslConfiguration22nextNegotiatedProtocolEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->nextNegotiatedProtocol();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 118, column 10>
//   // proto:  void QSslConfiguration::setCaCertificates(const QList<QSslCertificate> & certificates);
// _ZN17QSslConfiguration17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN17QSslConfiguration17setCaCertificatesERK5QListI15QSslCertificateE(void *qthis,
const QList<QSslCertificate>* arg1) {
  ((QSslConfiguration*)qthis)->setCaCertificates(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 89, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslConfiguration::peerVerifyMode();
// _ZNK17QSslConfiguration14peerVerifyModeEv peerVerifyMode()
extern "C"
QSslSocket::PeerVerifyMode
C_ZNK17QSslConfiguration14peerVerifyModeEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->peerVerifyMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 76, column 17>
//   // proto:  void QSslConfiguration::swap(QSslConfiguration & other);
// _ZN17QSslConfiguration4swapERS_ swap(class QSslConfiguration &)
extern "C"
void
C_ZN17QSslConfiguration4swapERS_(void *qthis,
QSslConfiguration* arg1) {
  ((QSslConfiguration*)qthis)->swap(*((QSslConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 92, column 9>
//   // proto:  int QSslConfiguration::peerVerifyDepth();
// _ZNK17QSslConfiguration15peerVerifyDepthEv peerVerifyDepth()
extern "C"
int
C_ZNK17QSslConfiguration15peerVerifyDepthEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->peerVerifyDepth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 131, column 39>
//   // proto: static QVector<QSslEllipticCurve> QSslConfiguration::supportedEllipticCurves();
// _ZN17QSslConfiguration23supportedEllipticCurvesEv supportedEllipticCurves()
extern "C"
QVector<QSslEllipticCurve>*
C_ZN17QSslConfiguration23supportedEllipticCurvesEv() {
  auto ret =
  QSslConfiguration::supportedEllipticCurves();
  return new QVector<QSslEllipticCurve>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 147, column 23>
//   // proto:  QList<QByteArray> QSslConfiguration::allowedNextProtocols();
// _ZNK17QSslConfiguration20allowedNextProtocolsEv allowedNextProtocols()
extern "C"
QList<QByteArray>*
C_ZNK17QSslConfiguration20allowedNextProtocolsEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->allowedNextProtocols();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 126, column 9>
//   // proto:  int QSslConfiguration::sessionTicketLifeTimeHint();
// _ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv sessionTicketLifeTimeHint()
extern "C"
int
C_ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->sessionTicketLifeTimeHint();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 122, column 10>
//   // proto:  bool QSslConfiguration::testSslOption(QSsl::SslOption option);
// _ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE testSslOption(QSsl::SslOption)
extern "C"
bool
C_ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE(void *qthis,
QSsl::SslOption* arg1) {
  auto ret =
  ((QSslConfiguration*)qthis)->testSslOption(*((QSsl::SslOption*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 114, column 30>
//   // proto: static QList<QSslCipher> QSslConfiguration::supportedCiphers();
// _ZN17QSslConfiguration16supportedCiphersEv supportedCiphers()
extern "C"
QList<QSslCipher>*
C_ZN17QSslConfiguration16supportedCiphersEv() {
  auto ret =
  QSslConfiguration::supportedCiphers();
  return new QList<QSslCipher>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 150, column 35>
//   // proto:  QSslConfiguration::NextProtocolNegotiationStatus QSslConfiguration::nextProtocolNegotiationStatus();
// _ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv nextProtocolNegotiationStatus()
extern "C"
QSslConfiguration::NextProtocolNegotiationStatus
C_ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->nextProtocolNegotiationStatus();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 121, column 10>
//   // proto:  void QSslConfiguration::setSslOption(QSsl::SslOption option, bool on);
// _ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb setSslOption(QSsl::SslOption, _Bool)
extern "C"
void
C_ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb(void *qthis,
QSsl::SslOption* arg1,
bool arg2) {
  ((QSslConfiguration*)qthis)->setSslOption(*((QSsl::SslOption*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 125, column 10>
//   // proto:  void QSslConfiguration::setSessionTicket(const QByteArray & sessionTicket);
// _ZN17QSslConfiguration16setSessionTicketERK10QByteArray setSessionTicket(const class QByteArray &)
extern "C"
void
C_ZN17QSslConfiguration16setSessionTicketERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QSslConfiguration*)qthis)->setSessionTicket(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 72, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration(const QSslConfiguration & other);
extern "C"
QSslConfiguration*
C_ZN17QSslConfigurationC2ERKS_(const QSslConfiguration* arg1) {
  auto ret = new QSslConfiguration(*((const QSslConfiguration*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 96, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::localCertificateChain();
// _ZNK17QSslConfiguration21localCertificateChainEv localCertificateChain()
extern "C"
QList<QSslCertificate>*
C_ZNK17QSslConfiguration21localCertificateChainEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->localCertificateChain();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 103, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::peerCertificateChain();
// _ZNK17QSslConfiguration20peerCertificateChainEv peerCertificateChain()
extern "C"
QList<QSslCertificate>*
C_ZNK17QSslConfiguration20peerCertificateChainEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->peerCertificateChain();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 109, column 10>
//   // proto:  void QSslConfiguration::setPrivateKey(const QSslKey & key);
// _ZN17QSslConfiguration13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
extern "C"
void
C_ZN17QSslConfiguration13setPrivateKeyERK7QSslKey(void *qthis,
const QSslKey* arg1) {
  ((QSslConfiguration*)qthis)->setPrivateKey(*((const QSslKey*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 100, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificate(const QSslCertificate & certificate);
// _ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
extern "C"
void
C_ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate(void *qthis,
const QSslCertificate* arg1) {
  ((QSslConfiguration*)qthis)->setLocalCertificate(*((const QSslCertificate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 71, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration();
extern "C"
QSslConfiguration*
C_ZN17QSslConfigurationC2Ev() {
  auto ret = new QSslConfiguration();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 83, column 10>
//   // proto:  bool QSslConfiguration::isNull();
// _ZNK17QSslConfiguration6isNullEv isNull()
extern "C"
bool
C_ZNK17QSslConfiguration6isNullEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 119, column 35>
//   // proto: static QList<QSslCertificate> QSslConfiguration::systemCaCertificates();
// _ZN17QSslConfiguration20systemCaCertificatesEv systemCaCertificates()
extern "C"
QList<QSslCertificate>*
C_ZN17QSslConfiguration20systemCaCertificatesEv() {
  auto ret =
  QSslConfiguration::systemCaCertificates();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 130, column 10>
//   // proto:  void QSslConfiguration::setEllipticCurves(const QVector<QSslEllipticCurve> & curves);
// _ZN17QSslConfiguration17setEllipticCurvesERK7QVectorI17QSslEllipticCurveE setEllipticCurves(const QVector<class QSslEllipticCurve> &)
extern "C"
void
C_ZN17QSslConfiguration17setEllipticCurvesERK7QVectorI17QSslEllipticCurveE(void *qthis,
const QVector<QSslEllipticCurve>* arg1) {
  ((QSslConfiguration*)qthis)->setEllipticCurves(*((const QVector<QSslEllipticCurve>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 102, column 21>
//   // proto:  QSslCertificate QSslConfiguration::peerCertificate();
// _ZNK17QSslConfiguration15peerCertificateEv peerCertificate()
extern "C"
QSslCertificate*
C_ZNK17QSslConfiguration15peerCertificateEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->peerCertificate();
  return new QSslCertificate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 93, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyDepth(int depth);
// _ZN17QSslConfiguration18setPeerVerifyDepthEi setPeerVerifyDepth(int)
extern "C"
void
C_ZN17QSslConfiguration18setPeerVerifyDepthEi(void *qthis,
int arg1) {
  ((QSslConfiguration*)qthis)->setPeerVerifyDepth(arg1);
}
//   // proto:  void QSslConfiguration::~QSslConfiguration();
extern "C"
void C_ZN17QSslConfigurationD2Ev(void *qthis) {
  delete (QSslConfiguration*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 117, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::caCertificates();
// _ZNK17QSslConfiguration14caCertificatesEv caCertificates()
extern "C"
QList<QSslCertificate>*
C_ZNK17QSslConfiguration14caCertificatesEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->caCertificates();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 97, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
// _ZN17QSslConfiguration24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN17QSslConfiguration24setLocalCertificateChainERK5QListI15QSslCertificateE(void *qthis,
const QList<QSslCertificate>* arg1) {
  ((QSslConfiguration*)qthis)->setLocalCertificateChain(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 99, column 21>
//   // proto:  QSslCertificate QSslConfiguration::localCertificate();
// _ZNK17QSslConfiguration16localCertificateEv localCertificate()
extern "C"
QSslCertificate*
C_ZNK17QSslConfiguration16localCertificateEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->localCertificate();
  return new QSslCertificate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 90, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
// _ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
extern "C"
void
C_ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE(void *qthis,
QSslSocket::PeerVerifyMode* arg1) {
  ((QSslConfiguration*)qthis)->setPeerVerifyMode(*((QSslSocket::PeerVerifyMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 86, column 10>
//   // proto:  void QSslConfiguration::setProtocol(QSsl::SslProtocol protocol);
// _ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
extern "C"
void
C_ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE(void *qthis,
QSsl::SslProtocol* arg1) {
  ((QSslConfiguration*)qthis)->setProtocol(*((QSsl::SslProtocol*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 85, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::protocol();
// _ZNK17QSslConfiguration8protocolEv protocol()
extern "C"
QSsl::SslProtocol
C_ZNK17QSslConfiguration8protocolEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->protocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 124, column 16>
//   // proto:  QByteArray QSslConfiguration::sessionTicket();
// _ZNK17QSslConfiguration13sessionTicketEv sessionTicket()
extern "C"
QByteArray*
C_ZNK17QSslConfiguration13sessionTicketEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->sessionTicket();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 129, column 32>
//   // proto:  QVector<QSslEllipticCurve> QSslConfiguration::ellipticCurves();
// _ZNK17QSslConfiguration14ellipticCurvesEv ellipticCurves()
extern "C"
QVector<QSslEllipticCurve>*
C_ZNK17QSslConfiguration14ellipticCurvesEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->ellipticCurves();
  return new QVector<QSslEllipticCurve>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 112, column 23>
//   // proto:  QList<QSslCipher> QSslConfiguration::ciphers();
// _ZNK17QSslConfiguration7ciphersEv ciphers()
extern "C"
QList<QSslCipher>*
C_ZNK17QSslConfiguration7ciphersEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->ciphers();
  return new QList<QSslCipher>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 104, column 16>
//   // proto:  QSslCipher QSslConfiguration::sessionCipher();
// _ZNK17QSslConfiguration13sessionCipherEv sessionCipher()
extern "C"
QSslCipher*
C_ZNK17QSslConfiguration13sessionCipherEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->sessionCipher();
  return new QSslCipher(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 108, column 13>
//   // proto:  QSslKey QSslConfiguration::privateKey();
// _ZNK17QSslConfiguration10privateKeyEv privateKey()
extern "C"
QSslKey*
C_ZNK17QSslConfiguration10privateKeyEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->privateKey();
  return new QSslKey(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 133, column 30>
//   // proto: static QSslConfiguration QSslConfiguration::defaultConfiguration();
// _ZN17QSslConfiguration20defaultConfigurationEv defaultConfiguration()
extern "C"
QSslConfiguration*
C_ZN17QSslConfiguration20defaultConfigurationEv() {
  auto ret =
  QSslConfiguration::defaultConfiguration();
  return new QSslConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 105, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::sessionProtocol();
// _ZNK17QSslConfiguration15sessionProtocolEv sessionProtocol()
extern "C"
QSsl::SslProtocol
C_ZNK17QSslConfiguration15sessionProtocolEv(void *qthis) {
  auto ret =
  ((QSslConfiguration*)qthis)->sessionProtocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 113, column 10>
//   // proto:  void QSslConfiguration::setCiphers(const QList<QSslCipher> & ciphers);
// _ZN17QSslConfiguration10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
extern "C"
void
C_ZN17QSslConfiguration10setCiphersERK5QListI10QSslCipherE(void *qthis,
const QList<QSslCipher>* arg1) {
  ((QSslConfiguration*)qthis)->setCiphers(*((const QList<QSslCipher>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 134, column 17>
//   // proto: static void QSslConfiguration::setDefaultConfiguration(const QSslConfiguration & configuration);
// _ZN17QSslConfiguration23setDefaultConfigurationERKS_ setDefaultConfiguration(const class QSslConfiguration &)
extern "C"
void
C_ZN17QSslConfiguration23setDefaultConfigurationERKS_(const QSslConfiguration* arg1) {
  QSslConfiguration::setDefaultConfiguration(*((const QSslConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 145, column 10>
//   // proto:  void QSslConfiguration::setAllowedNextProtocols(QList<QByteArray> protocols);
// _ZN17QSslConfiguration23setAllowedNextProtocolsE5QListI10QByteArrayE setAllowedNextProtocols(QList<class QByteArray>)
extern "C"
void
C_ZN17QSslConfiguration23setAllowedNextProtocolsE5QListI10QByteArrayE(void *qthis,
QList<QByteArray>* arg1) {
  ((QSslConfiguration*)qthis)->setAllowedNextProtocols(*((QList<QByteArray>*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

