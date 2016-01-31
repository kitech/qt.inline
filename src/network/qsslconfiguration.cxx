#include <qsslkey.h>
#include <qsslcipher.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qabstractnetworkcache.h>
#include <qlist.h>
#include <qtextdocument.h>
#include <qvector.h>
#include <qsslsocket.h>
#include <qbytearray.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qsslconfiguration.h
// dst-file: /src/network/qsslconfiguration.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslconfiguration.h>

extern "C" {

int QSslConfiguration_Class_Size()
{
  return sizeof(QSslConfiguration);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslconfiguration_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 149, column 16>
//   // proto:  QByteArray QSslConfiguration::nextNegotiatedProtocol();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->nextNegotiatedProtocol();
    flythis.nextNegotiatedProtocol();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration22nextNegotiatedProtocolEv nextNegotiatedProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 118, column 10>
//   // proto:  void QSslConfiguration::setCaCertificates(const QList<QSslCertificate> & certificates);
if (true) {
  auto f = [](QSslConfiguration flythis, const QList<QSslCertificate> & arg1) {
    ((QSslConfiguration*)0)->setCaCertificates(arg1);
    flythis.setCaCertificates(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 89, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslConfiguration::peerVerifyMode();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->peerVerifyMode();
    flythis.peerVerifyMode();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration14peerVerifyModeEv peerVerifyMode()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 92, column 9>
//   // proto:  int QSslConfiguration::peerVerifyDepth();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->peerVerifyDepth();
    flythis.peerVerifyDepth();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration15peerVerifyDepthEv peerVerifyDepth()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 131, column 39>
//   // proto: static QVector<QSslEllipticCurve> QSslConfiguration::supportedEllipticCurves();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->supportedEllipticCurves();
    flythis.supportedEllipticCurves();
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration23supportedEllipticCurvesEv supportedEllipticCurves()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 147, column 23>
//   // proto:  QList<QByteArray> QSslConfiguration::allowedNextProtocols();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->allowedNextProtocols();
    flythis.allowedNextProtocols();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration20allowedNextProtocolsEv allowedNextProtocols()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 126, column 9>
//   // proto:  int QSslConfiguration::sessionTicketLifeTimeHint();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->sessionTicketLifeTimeHint();
    flythis.sessionTicketLifeTimeHint();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv sessionTicketLifeTimeHint()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 122, column 10>
//   // proto:  bool QSslConfiguration::testSslOption(QSsl::SslOption option);
if (true) {
  auto f = [](QSslConfiguration flythis, QSsl::SslOption arg1) {
    ((QSslConfiguration*)0)->testSslOption(arg1);
    flythis.testSslOption(arg1);
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE testSslOption(QSsl::SslOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 114, column 30>
//   // proto: static QList<QSslCipher> QSslConfiguration::supportedCiphers();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->supportedCiphers();
    flythis.supportedCiphers();
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration16supportedCiphersEv supportedCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 150, column 35>
//   // proto:  QSslConfiguration::NextProtocolNegotiationStatus QSslConfiguration::nextProtocolNegotiationStatus();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->nextProtocolNegotiationStatus();
    flythis.nextProtocolNegotiationStatus();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv nextProtocolNegotiationStatus()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 121, column 10>
//   // proto:  void QSslConfiguration::setSslOption(QSsl::SslOption option, bool on);
if (true) {
  auto f = [](QSslConfiguration flythis, QSsl::SslOption arg1, bool arg2) {
    ((QSslConfiguration*)0)->setSslOption(arg1, arg2);
    flythis.setSslOption(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb setSslOption(QSsl::SslOption, _Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 125, column 10>
//   // proto:  void QSslConfiguration::setSessionTicket(const QByteArray & sessionTicket);
if (true) {
  auto f = [](QSslConfiguration flythis, const QByteArray & arg1) {
    ((QSslConfiguration*)0)->setSessionTicket(arg1);
    flythis.setSessionTicket(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration16setSessionTicketERK10QByteArray setSessionTicket(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 72, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration(const QSslConfiguration & other);
if (true) {
  auto f = [](const QSslConfiguration & arg1) {
    new QSslConfiguration(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 96, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::localCertificateChain();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->localCertificateChain();
    flythis.localCertificateChain();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration21localCertificateChainEv localCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 103, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::peerCertificateChain();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->peerCertificateChain();
    flythis.peerCertificateChain();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration20peerCertificateChainEv peerCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 109, column 10>
//   // proto:  void QSslConfiguration::setPrivateKey(const QSslKey & key);
if (true) {
  auto f = [](QSslConfiguration flythis, const QSslKey & arg1) {
    ((QSslConfiguration*)0)->setPrivateKey(arg1);
    flythis.setPrivateKey(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 100, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificate(const QSslCertificate & certificate);
if (true) {
  auto f = [](QSslConfiguration flythis, const QSslCertificate & arg1) {
    ((QSslConfiguration*)0)->setLocalCertificate(arg1);
    flythis.setLocalCertificate(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 71, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration();
if (true) {
  auto f = []() {
    new QSslConfiguration();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 83, column 10>
//   // proto:  bool QSslConfiguration::isNull();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 119, column 35>
//   // proto: static QList<QSslCertificate> QSslConfiguration::systemCaCertificates();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->systemCaCertificates();
    flythis.systemCaCertificates();
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration20systemCaCertificatesEv systemCaCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 130, column 10>
//   // proto:  void QSslConfiguration::setEllipticCurves(const QVector<QSslEllipticCurve> & curves);
if (true) {
  auto f = [](QSslConfiguration flythis, const QVector<QSslEllipticCurve> & arg1) {
    ((QSslConfiguration*)0)->setEllipticCurves(arg1);
    flythis.setEllipticCurves(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration17setEllipticCurvesERK7QVectorI17QSslEllipticCurveE setEllipticCurves(const QVector<class QSslEllipticCurve> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 102, column 21>
//   // proto:  QSslCertificate QSslConfiguration::peerCertificate();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->peerCertificate();
    flythis.peerCertificate();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration15peerCertificateEv peerCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 93, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyDepth(int depth);
if (true) {
  auto f = [](QSslConfiguration flythis, int arg1) {
    ((QSslConfiguration*)0)->setPeerVerifyDepth(arg1);
    flythis.setPeerVerifyDepth(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration18setPeerVerifyDepthEi setPeerVerifyDepth(int)
//   // proto:  void QSslConfiguration::~QSslConfiguration();
if (true) {
  delete ((QSslConfiguration*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 117, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::caCertificates();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->caCertificates();
    flythis.caCertificates();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration14caCertificatesEv caCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 97, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
if (true) {
  auto f = [](QSslConfiguration flythis, const QList<QSslCertificate> & arg1) {
    ((QSslConfiguration*)0)->setLocalCertificateChain(arg1);
    flythis.setLocalCertificateChain(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 99, column 21>
//   // proto:  QSslCertificate QSslConfiguration::localCertificate();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->localCertificate();
    flythis.localCertificate();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration16localCertificateEv localCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 90, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
if (true) {
  auto f = [](QSslConfiguration flythis, QSslSocket::PeerVerifyMode arg1) {
    ((QSslConfiguration*)0)->setPeerVerifyMode(arg1);
    flythis.setPeerVerifyMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 86, column 10>
//   // proto:  void QSslConfiguration::setProtocol(QSsl::SslProtocol protocol);
if (true) {
  auto f = [](QSslConfiguration flythis, QSsl::SslProtocol arg1) {
    ((QSslConfiguration*)0)->setProtocol(arg1);
    flythis.setProtocol(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 85, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::protocol();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->protocol();
    flythis.protocol();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 124, column 16>
//   // proto:  QByteArray QSslConfiguration::sessionTicket();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->sessionTicket();
    flythis.sessionTicket();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration13sessionTicketEv sessionTicket()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 129, column 32>
//   // proto:  QVector<QSslEllipticCurve> QSslConfiguration::ellipticCurves();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->ellipticCurves();
    flythis.ellipticCurves();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration14ellipticCurvesEv ellipticCurves()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 112, column 23>
//   // proto:  QList<QSslCipher> QSslConfiguration::ciphers();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->ciphers();
    flythis.ciphers();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration7ciphersEv ciphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 104, column 16>
//   // proto:  QSslCipher QSslConfiguration::sessionCipher();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->sessionCipher();
    flythis.sessionCipher();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration13sessionCipherEv sessionCipher()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 108, column 13>
//   // proto:  QSslKey QSslConfiguration::privateKey();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->privateKey();
    flythis.privateKey();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration10privateKeyEv privateKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 133, column 30>
//   // proto: static QSslConfiguration QSslConfiguration::defaultConfiguration();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->defaultConfiguration();
    flythis.defaultConfiguration();
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration20defaultConfigurationEv defaultConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 105, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::sessionProtocol();
if (true) {
  auto f = [](QSslConfiguration flythis) {
    ((QSslConfiguration*)0)->sessionProtocol();
    flythis.sessionProtocol();
  };
  if (f == nullptr){}
}
// _ZNK17QSslConfiguration15sessionProtocolEv sessionProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 113, column 10>
//   // proto:  void QSslConfiguration::setCiphers(const QList<QSslCipher> & ciphers);
if (true) {
  auto f = [](QSslConfiguration flythis, const QList<QSslCipher> & arg1) {
    ((QSslConfiguration*)0)->setCiphers(arg1);
    flythis.setCiphers(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 134, column 17>
//   // proto: static void QSslConfiguration::setDefaultConfiguration(const QSslConfiguration & configuration);
if (true) {
  auto f = [](QSslConfiguration flythis, const QSslConfiguration & arg1) {
    ((QSslConfiguration*)0)->setDefaultConfiguration(arg1);
    flythis.setDefaultConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration23setDefaultConfigurationERKS_ setDefaultConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 145, column 10>
//   // proto:  void QSslConfiguration::setAllowedNextProtocols(QList<QByteArray> protocols);
if (true) {
  auto f = [](QSslConfiguration flythis, QList<QByteArray> arg1) {
    ((QSslConfiguration*)0)->setAllowedNextProtocols(arg1);
    flythis.setAllowedNextProtocols(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QSslConfiguration23setAllowedNextProtocolsE5QListI10QByteArrayE setAllowedNextProtocols(QList<class QByteArray>)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 149, column 16>
//   // proto:  QByteArray QSslConfiguration::nextNegotiatedProtocol();
extern "C"
void C_ZNK17QSslConfiguration22nextNegotiatedProtocolEv(void *qthis) {
  ((QSslConfiguration*)qthis)->nextNegotiatedProtocol();
}
// _ZNK17QSslConfiguration22nextNegotiatedProtocolEv nextNegotiatedProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 118, column 10>
//   // proto:  void QSslConfiguration::setCaCertificates(const QList<QSslCertificate> & certificates);
extern "C"
void C_ZN17QSslConfiguration17setCaCertificatesERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslConfiguration*)qthis)->setCaCertificates(arg1);
}
// _ZN17QSslConfiguration17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 89, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslConfiguration::peerVerifyMode();
extern "C"
void C_ZNK17QSslConfiguration14peerVerifyModeEv(void *qthis) {
  ((QSslConfiguration*)qthis)->peerVerifyMode();
}
// _ZNK17QSslConfiguration14peerVerifyModeEv peerVerifyMode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 76, column 17>
//   // proto:  void QSslConfiguration::swap(QSslConfiguration & other);
extern "C"
void C_ZN17QSslConfiguration4swapERS_(void *qthis, QSslConfiguration & arg1) {
  ((QSslConfiguration*)qthis)->swap(arg1);
}
// _ZN17QSslConfiguration4swapERS_ swap(class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 92, column 9>
//   // proto:  int QSslConfiguration::peerVerifyDepth();
extern "C"
void C_ZNK17QSslConfiguration15peerVerifyDepthEv(void *qthis) {
  ((QSslConfiguration*)qthis)->peerVerifyDepth();
}
// _ZNK17QSslConfiguration15peerVerifyDepthEv peerVerifyDepth()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 131, column 39>
//   // proto: static QVector<QSslEllipticCurve> QSslConfiguration::supportedEllipticCurves();
extern "C"
void C_ZN17QSslConfiguration23supportedEllipticCurvesEv(void *qthis) {
  ((QSslConfiguration*)qthis)->supportedEllipticCurves();
}
// _ZN17QSslConfiguration23supportedEllipticCurvesEv supportedEllipticCurves()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 147, column 23>
//   // proto:  QList<QByteArray> QSslConfiguration::allowedNextProtocols();
extern "C"
void C_ZNK17QSslConfiguration20allowedNextProtocolsEv(void *qthis) {
  ((QSslConfiguration*)qthis)->allowedNextProtocols();
}
// _ZNK17QSslConfiguration20allowedNextProtocolsEv allowedNextProtocols()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 126, column 9>
//   // proto:  int QSslConfiguration::sessionTicketLifeTimeHint();
extern "C"
void C_ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv(void *qthis) {
  ((QSslConfiguration*)qthis)->sessionTicketLifeTimeHint();
}
// _ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv sessionTicketLifeTimeHint()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 122, column 10>
//   // proto:  bool QSslConfiguration::testSslOption(QSsl::SslOption option);
extern "C"
void C_ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE(void *qthis, QSsl::SslOption arg1) {
  ((QSslConfiguration*)qthis)->testSslOption(arg1);
}
// _ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE testSslOption(QSsl::SslOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 114, column 30>
//   // proto: static QList<QSslCipher> QSslConfiguration::supportedCiphers();
extern "C"
void C_ZN17QSslConfiguration16supportedCiphersEv(void *qthis) {
  ((QSslConfiguration*)qthis)->supportedCiphers();
}
// _ZN17QSslConfiguration16supportedCiphersEv supportedCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 150, column 35>
//   // proto:  QSslConfiguration::NextProtocolNegotiationStatus QSslConfiguration::nextProtocolNegotiationStatus();
extern "C"
void C_ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv(void *qthis) {
  ((QSslConfiguration*)qthis)->nextProtocolNegotiationStatus();
}
// _ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv nextProtocolNegotiationStatus()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 121, column 10>
//   // proto:  void QSslConfiguration::setSslOption(QSsl::SslOption option, bool on);
extern "C"
void C_ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb(void *qthis, QSsl::SslOption arg1, bool arg2) {
  ((QSslConfiguration*)qthis)->setSslOption(arg1, arg2);
}
// _ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb setSslOption(QSsl::SslOption, _Bool)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 125, column 10>
//   // proto:  void QSslConfiguration::setSessionTicket(const QByteArray & sessionTicket);
extern "C"
void C_ZN17QSslConfiguration16setSessionTicketERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QSslConfiguration*)qthis)->setSessionTicket(arg1);
}
// _ZN17QSslConfiguration16setSessionTicketERK10QByteArray setSessionTicket(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 72, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration(const QSslConfiguration & other);
extern "C"
void C_ZN17QSslConfigurationC2ERKS_(const QSslConfiguration & arg1) {
  new QSslConfiguration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 96, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::localCertificateChain();
extern "C"
void C_ZNK17QSslConfiguration21localCertificateChainEv(void *qthis) {
  ((QSslConfiguration*)qthis)->localCertificateChain();
}
// _ZNK17QSslConfiguration21localCertificateChainEv localCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 103, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::peerCertificateChain();
extern "C"
void C_ZNK17QSslConfiguration20peerCertificateChainEv(void *qthis) {
  ((QSslConfiguration*)qthis)->peerCertificateChain();
}
// _ZNK17QSslConfiguration20peerCertificateChainEv peerCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 109, column 10>
//   // proto:  void QSslConfiguration::setPrivateKey(const QSslKey & key);
extern "C"
void C_ZN17QSslConfiguration13setPrivateKeyERK7QSslKey(void *qthis, const QSslKey & arg1) {
  ((QSslConfiguration*)qthis)->setPrivateKey(arg1);
}
// _ZN17QSslConfiguration13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 100, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificate(const QSslCertificate & certificate);
extern "C"
void C_ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate(void *qthis, const QSslCertificate & arg1) {
  ((QSslConfiguration*)qthis)->setLocalCertificate(arg1);
}
// _ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 71, column 5>
//   // proto:  void QSslConfiguration::QSslConfiguration();
extern "C"
void C_ZN17QSslConfigurationC2Ev() {
  new QSslConfiguration();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 83, column 10>
//   // proto:  bool QSslConfiguration::isNull();
extern "C"
void C_ZNK17QSslConfiguration6isNullEv(void *qthis) {
  ((QSslConfiguration*)qthis)->isNull();
}
// _ZNK17QSslConfiguration6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 119, column 35>
//   // proto: static QList<QSslCertificate> QSslConfiguration::systemCaCertificates();
extern "C"
void C_ZN17QSslConfiguration20systemCaCertificatesEv(void *qthis) {
  ((QSslConfiguration*)qthis)->systemCaCertificates();
}
// _ZN17QSslConfiguration20systemCaCertificatesEv systemCaCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 130, column 10>
//   // proto:  void QSslConfiguration::setEllipticCurves(const QVector<QSslEllipticCurve> & curves);
extern "C"
void C_ZN17QSslConfiguration17setEllipticCurvesERK7QVectorI17QSslEllipticCurveE(void *qthis, const QVector<QSslEllipticCurve> & arg1) {
  ((QSslConfiguration*)qthis)->setEllipticCurves(arg1);
}
// _ZN17QSslConfiguration17setEllipticCurvesERK7QVectorI17QSslEllipticCurveE setEllipticCurves(const QVector<class QSslEllipticCurve> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 102, column 21>
//   // proto:  QSslCertificate QSslConfiguration::peerCertificate();
extern "C"
void C_ZNK17QSslConfiguration15peerCertificateEv(void *qthis) {
  ((QSslConfiguration*)qthis)->peerCertificate();
}
// _ZNK17QSslConfiguration15peerCertificateEv peerCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 93, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyDepth(int depth);
extern "C"
void C_ZN17QSslConfiguration18setPeerVerifyDepthEi(void *qthis, int arg1) {
  ((QSslConfiguration*)qthis)->setPeerVerifyDepth(arg1);
}
// _ZN17QSslConfiguration18setPeerVerifyDepthEi setPeerVerifyDepth(int)
//   // proto:  void QSslConfiguration::~QSslConfiguration();
extern "C"
void C_ZN17QSslConfigurationD2Ev(void *qthis) {
  delete (QSslConfiguration*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 117, column 28>
//   // proto:  QList<QSslCertificate> QSslConfiguration::caCertificates();
extern "C"
void C_ZNK17QSslConfiguration14caCertificatesEv(void *qthis) {
  ((QSslConfiguration*)qthis)->caCertificates();
}
// _ZNK17QSslConfiguration14caCertificatesEv caCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 97, column 10>
//   // proto:  void QSslConfiguration::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
extern "C"
void C_ZN17QSslConfiguration24setLocalCertificateChainERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslConfiguration*)qthis)->setLocalCertificateChain(arg1);
}
// _ZN17QSslConfiguration24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 99, column 21>
//   // proto:  QSslCertificate QSslConfiguration::localCertificate();
extern "C"
void C_ZNK17QSslConfiguration16localCertificateEv(void *qthis) {
  ((QSslConfiguration*)qthis)->localCertificate();
}
// _ZNK17QSslConfiguration16localCertificateEv localCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 90, column 10>
//   // proto:  void QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
extern "C"
void C_ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE(void *qthis, QSslSocket::PeerVerifyMode arg1) {
  ((QSslConfiguration*)qthis)->setPeerVerifyMode(arg1);
}
// _ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 86, column 10>
//   // proto:  void QSslConfiguration::setProtocol(QSsl::SslProtocol protocol);
extern "C"
void C_ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE(void *qthis, QSsl::SslProtocol arg1) {
  ((QSslConfiguration*)qthis)->setProtocol(arg1);
}
// _ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 85, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::protocol();
extern "C"
void C_ZNK17QSslConfiguration8protocolEv(void *qthis) {
  ((QSslConfiguration*)qthis)->protocol();
}
// _ZNK17QSslConfiguration8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 124, column 16>
//   // proto:  QByteArray QSslConfiguration::sessionTicket();
extern "C"
void C_ZNK17QSslConfiguration13sessionTicketEv(void *qthis) {
  ((QSslConfiguration*)qthis)->sessionTicket();
}
// _ZNK17QSslConfiguration13sessionTicketEv sessionTicket()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 129, column 32>
//   // proto:  QVector<QSslEllipticCurve> QSslConfiguration::ellipticCurves();
extern "C"
void C_ZNK17QSslConfiguration14ellipticCurvesEv(void *qthis) {
  ((QSslConfiguration*)qthis)->ellipticCurves();
}
// _ZNK17QSslConfiguration14ellipticCurvesEv ellipticCurves()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 112, column 23>
//   // proto:  QList<QSslCipher> QSslConfiguration::ciphers();
extern "C"
void C_ZNK17QSslConfiguration7ciphersEv(void *qthis) {
  ((QSslConfiguration*)qthis)->ciphers();
}
// _ZNK17QSslConfiguration7ciphersEv ciphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 104, column 16>
//   // proto:  QSslCipher QSslConfiguration::sessionCipher();
extern "C"
void C_ZNK17QSslConfiguration13sessionCipherEv(void *qthis) {
  ((QSslConfiguration*)qthis)->sessionCipher();
}
// _ZNK17QSslConfiguration13sessionCipherEv sessionCipher()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 108, column 13>
//   // proto:  QSslKey QSslConfiguration::privateKey();
extern "C"
void C_ZNK17QSslConfiguration10privateKeyEv(void *qthis) {
  ((QSslConfiguration*)qthis)->privateKey();
}
// _ZNK17QSslConfiguration10privateKeyEv privateKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 133, column 30>
//   // proto: static QSslConfiguration QSslConfiguration::defaultConfiguration();
extern "C"
void C_ZN17QSslConfiguration20defaultConfigurationEv(void *qthis) {
  ((QSslConfiguration*)qthis)->defaultConfiguration();
}
// _ZN17QSslConfiguration20defaultConfigurationEv defaultConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 105, column 23>
//   // proto:  QSsl::SslProtocol QSslConfiguration::sessionProtocol();
extern "C"
void C_ZNK17QSslConfiguration15sessionProtocolEv(void *qthis) {
  ((QSslConfiguration*)qthis)->sessionProtocol();
}
// _ZNK17QSslConfiguration15sessionProtocolEv sessionProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 113, column 10>
//   // proto:  void QSslConfiguration::setCiphers(const QList<QSslCipher> & ciphers);
extern "C"
void C_ZN17QSslConfiguration10setCiphersERK5QListI10QSslCipherE(void *qthis, const QList<QSslCipher> & arg1) {
  ((QSslConfiguration*)qthis)->setCiphers(arg1);
}
// _ZN17QSslConfiguration10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 134, column 17>
//   // proto: static void QSslConfiguration::setDefaultConfiguration(const QSslConfiguration & configuration);
extern "C"
void C_ZN17QSslConfiguration23setDefaultConfigurationERKS_(void *qthis, const QSslConfiguration & arg1) {
  ((QSslConfiguration*)qthis)->setDefaultConfiguration(arg1);
}
// _ZN17QSslConfiguration23setDefaultConfigurationERKS_ setDefaultConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslconfiguration.h', line 145, column 10>
//   // proto:  void QSslConfiguration::setAllowedNextProtocols(QList<QByteArray> protocols);
extern "C"
void C_ZN17QSslConfiguration23setAllowedNextProtocolsE5QListI10QByteArrayE(void *qthis, QList<QByteArray> arg1) {
  ((QSslConfiguration*)qthis)->setAllowedNextProtocols(arg1);
}
// _ZN17QSslConfiguration23setAllowedNextProtocolsE5QListI10QByteArrayE setAllowedNextProtocols(QList<class QByteArray>)
// <= ext block end

// body block begin =>
// <= body block end

