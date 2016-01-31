#include <qsslkey.h>
#include <qsslconfiguration.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsslcipher.h>
#include <qglobal.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qabstractnetworkcache.h>
#include <qlist.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qsslsocket.h
// dst-file: /src/network/qsslsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslsocket.h>

extern "C" {

int QSslSocket_Class_Size()
{
  return sizeof(QSslSocket);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslsocket_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 152, column 44>
//   // proto: static QList<QSslCipher> QSslSocket::defaultCiphers();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->defaultCiphers();
    flythis.defaultCiphers();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket14defaultCiphersEv defaultCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 148, column 75>
//   // proto:  QList<QSslCipher> QSslSocket::ciphers();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->ciphers();
    flythis.ciphers();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket7ciphersEv ciphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 151, column 31>
//   // proto: static void QSslSocket::setDefaultCiphers(const QList<QSslCipher> & ciphers);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCipher> & arg1) {
    ((QSslSocket*)0)->setDefaultCiphers(arg1);
    flythis.setDefaultCiphers(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17setDefaultCiphersERK5QListI10QSslCipherE setDefaultCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 194, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->ignoreSslErrors();
    flythis.ignoreSslErrors();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket15ignoreSslErrorsEv ignoreSslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 111, column 10>
//   // proto:  void QSslSocket::close();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->close();
    flythis.close();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 134, column 21>
//   // proto:  QSslCertificate QSslSocket::peerCertificate();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->peerCertificate();
    flythis.peerCertificate();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket15peerCertificateEv peerCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 95, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::protocol();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->protocol();
    flythis.protocol();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 192, column 10>
//   // proto:  void QSslSocket::startClientEncryption();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->startClientEncryption();
    flythis.startClientEncryption();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket21startClientEncryptionEv startClientEncryption()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 93, column 10>
//   // proto:  bool QSslSocket::isEncrypted();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->isEncrypted();
    flythis.isEncrypted();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket11isEncryptedEv isEncrypted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 128, column 10>
//   // proto:  void QSslSocket::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCertificate> & arg1) {
    ((QSslSocket*)0)->setLocalCertificateChain(arg1);
    flythis.setLocalCertificateChain(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 149, column 65>
//   // proto:  void QSslSocket::setCiphers(const QList<QSslCipher> & ciphers);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCipher> & arg1) {
    ((QSslSocket*)0)->setCiphers(arg1);
    flythis.setCiphers(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 189, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors(const QList<QSslError> & errors);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslError> & arg1) {
    ((QSslSocket*)0)->ignoreSslErrors(arg1);
    flythis.ignoreSslErrors(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket15ignoreSslErrorsERK5QListI9QSslErrorE ignoreSslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 108, column 12>
//   // proto:  qint64 QSslSocket::bytesAvailable();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->bytesAvailable();
    flythis.bytesAvailable();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 141, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QString & fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, const QByteArray & passPhrase);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, const QByteArray & arg4) {
    ((QSslSocket*)0)->setPrivateKey(arg1, arg2, arg3, arg4);
    flythis.setPrivateKey(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray setPrivateKey(const class QString &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 121, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesToWrite();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->encryptedBytesToWrite();
    flythis.encryptedBytesToWrite();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket21encryptedBytesToWriteEv encryptedBytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 89, column 18>
//   // proto:  void QSslSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
if (true) {
  auto f = [](QSslSocket flythis, QAbstractSocket::SocketOption arg1, const QVariant & arg2) {
    ((QSslSocket*)0)->setSocketOption(arg1, arg2);
    flythis.setSocketOption(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 86, column 10>
//   // proto:  void QSslSocket::connectToHost(const QString & hostName, quint16 port, OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
    ((QSslSocket*)0)->connectToHost(arg1, arg2, arg3, arg4);
    flythis.connectToHost(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 136, column 16>
//   // proto:  QSslCipher QSslSocket::sessionCipher();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sessionCipher();
    flythis.sessionCipher();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket13sessionCipherEv sessionCipher()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 160, column 10>
//   // proto:  void QSslSocket::addCaCertificates(const QList<QSslCertificate> & certificates);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCertificate> & arg1) {
    ((QSslSocket*)0)->addCaCertificates(arg1);
    flythis.addCaCertificates(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17addCaCertificatesERK5QListI15QSslCertificateE addCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 117, column 10>
//   // proto:  void QSslSocket::setReadBufferSize(qint64 size);
if (true) {
  auto f = [](QSslSocket flythis, qint64 arg1) {
    ((QSslSocket*)0)->setReadBufferSize(arg1);
    flythis.setReadBufferSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 104, column 13>
//   // proto:  QString QSslSocket::peerVerifyName();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->peerVerifyName();
    flythis.peerVerifyName();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket14peerVerifyNameEv peerVerifyName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 198, column 10>
//   // proto:  void QSslSocket::peerVerifyError(const QSslError & error);
if (true) {
  auto f = [](QSslSocket flythis, const QSslError & arg1) {
    ((QSslSocket*)0)->peerVerifyError(arg1);
    flythis.peerVerifyError(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket15peerVerifyErrorERK9QSslError peerVerifyError(const class QSslError &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 101, column 9>
//   // proto:  int QSslSocket::peerVerifyDepth();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->peerVerifyDepth();
    flythis.peerVerifyDepth();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket15peerVerifyDepthEv peerVerifyDepth()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 172, column 100>
//   // proto: static QList<QSslCertificate> QSslSocket::systemCaCertificates();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->systemCaCertificates();
    flythis.systemCaCertificates();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket20systemCaCertificatesEv systemCaCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 133, column 21>
//   // proto:  QSslCertificate QSslSocket::localCertificate();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->localCertificate();
    flythis.localCertificate();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket16localCertificateEv localCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 110, column 10>
//   // proto:  bool QSslSocket::canReadLine();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->canReadLine();
    flythis.canReadLine();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 178, column 10>
//   // proto:  bool QSslSocket::waitForBytesWritten(int msecs);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->waitForBytesWritten(arg1);
    flythis.waitForBytesWritten(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 125, column 10>
//   // proto:  void QSslSocket::setSslConfiguration(const QSslConfiguration & config);
if (true) {
  auto f = [](QSslSocket flythis, const QSslConfiguration & arg1) {
    ((QSslSocket*)0)->setSslConfiguration(arg1);
    flythis.setSslConfiguration(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 162, column 72>
//   // proto:  void QSslSocket::setCaCertificates(const QList<QSslCertificate> & certificates);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCertificate> & arg1) {
    ((QSslSocket*)0)->setCaCertificates(arg1);
    flythis.setCaCertificates(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 87, column 10>
//   // proto:  void QSslSocket::disconnectFromHost();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->disconnectFromHost();
    flythis.disconnectFromHost();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket18disconnectFromHostEv disconnectFromHost()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 80, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
    ((QSslSocket*)0)->connectToHostEncrypted(arg1, arg2, arg3, arg4);
    flythis.connectToHostEncrypted(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 167, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificate(const QSslCertificate & certificate);
if (true) {
  auto f = [](QSslSocket flythis, const QSslCertificate & arg1) {
    ((QSslSocket*)0)->addDefaultCaCertificate(arg1);
    flythis.addDefaultCaCertificate(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate addDefaultCaCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 120, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesAvailable();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->encryptedBytesAvailable();
    flythis.encryptedBytesAvailable();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket23encryptedBytesAvailableEv encryptedBytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 184, column 17>
//   // proto: static long QSslSocket::sslLibraryVersionNumber();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslLibraryVersionNumber();
    flythis.sslLibraryVersionNumber();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket23sslLibraryVersionNumberEv sslLibraryVersionNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 176, column 10>
//   // proto:  bool QSslSocket::waitForEncrypted(int msecs);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->waitForEncrypted(arg1);
    flythis.waitForEncrypted(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket16waitForEncryptedEi waitForEncrypted(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 193, column 10>
//   // proto:  void QSslSocket::startServerEncryption();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->startServerEncryption();
    flythis.startServerEncryption();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket21startServerEncryptionEv startServerEncryption()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 131, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QSslCertificate & certificate);
if (true) {
  auto f = [](QSslSocket flythis, const QSslCertificate & arg1) {
    ((QSslSocket*)0)->setLocalCertificate(arg1);
    flythis.setLocalCertificate(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 129, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::localCertificateChain();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->localCertificateChain();
    flythis.localCertificateChain();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket21localCertificateChainEv localCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 165, column 17>
//   // proto: static bool QSslSocket::addDefaultCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
    ((QSslSocket*)0)->addDefaultCaCertificates(arg1, arg2, arg3);
    flythis.addDefaultCaCertificates(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addDefaultCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 197, column 10>
//   // proto:  void QSslSocket::encrypted();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->encrypted();
    flythis.encrypted();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket9encryptedEv encrypted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 92, column 13>
//   // proto:  QSslSocket::SslMode QSslSocket::mode();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->mode();
    flythis.mode();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket4modeEv mode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 177, column 10>
//   // proto:  bool QSslSocket::waitForReadyRead(int msecs);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->waitForReadyRead(arg1);
    flythis.waitForReadyRead(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket16waitForReadyReadEi waitForReadyRead(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 99, column 10>
//   // proto:  void QSslSocket::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
if (true) {
  auto f = [](QSslSocket flythis, QSslSocket::PeerVerifyMode arg1) {
    ((QSslSocket*)0)->setPeerVerifyMode(arg1);
    flythis.setPeerVerifyMode(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 153, column 91>
//   // proto: static QList<QSslCipher> QSslSocket::supportedCiphers();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->supportedCiphers();
    flythis.supportedCiphers();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket16supportedCiphersEv supportedCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 159, column 10>
//   // proto:  void QSslSocket::addCaCertificate(const QSslCertificate & certificate);
if (true) {
  auto f = [](QSslSocket flythis, const QSslCertificate & arg1) {
    ((QSslSocket*)0)->addCaCertificate(arg1);
    flythis.addCaCertificate(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket16addCaCertificateERK15QSslCertificate addCaCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 105, column 10>
//   // proto:  void QSslSocket::setPeerVerifyName(const QString & hostName);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1) {
    ((QSslSocket*)0)->setPeerVerifyName(arg1);
    flythis.setPeerVerifyName(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17setPeerVerifyNameERK7QString setPeerVerifyName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 135, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::peerCertificateChain();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->peerCertificateChain();
    flythis.peerCertificateChain();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket20peerCertificateChainEv peerCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 77, column 10>
//   // proto:  void QSslSocket::resume();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->resume();
    flythis.resume();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket6resumeEv resume()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 90, column 22>
//   // proto:  QVariant QSslSocket::socketOption(QAbstractSocket::SocketOption option);
if (true) {
  auto f = [](QSslSocket flythis, QAbstractSocket::SocketOption arg1) {
    ((QSslSocket*)0)->socketOption(arg1);
    flythis.socketOption(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 114, column 10>
//   // proto:  void QSslSocket::abort();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->abort();
    flythis.abort();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 96, column 10>
//   // proto:  void QSslSocket::setProtocol(QSsl::SslProtocol protocol);
if (true) {
  auto f = [](QSslSocket flythis, QSsl::SslProtocol arg1) {
    ((QSslSocket*)0)->setProtocol(arg1);
    flythis.setProtocol(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 137, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::sessionProtocol();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sessionProtocol();
    flythis.sessionProtocol();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket15sessionProtocolEv sessionProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 186, column 17>
//   // proto: static long QSslSocket::sslLibraryBuildVersionNumber();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslLibraryBuildVersionNumber();
    flythis.sslLibraryBuildVersionNumber();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket28sslLibraryBuildVersionNumberEv sslLibraryBuildVersionNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 187, column 20>
//   // proto: static QString QSslSocket::sslLibraryBuildVersionString();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslLibraryBuildVersionString();
    flythis.sslLibraryBuildVersionString();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket28sslLibraryBuildVersionStringEv sslLibraryBuildVersionString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 157, column 10>
//   // proto:  bool QSslSocket::addCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
    ((QSslSocket*)0)->addCaCertificates(arg1, arg2, arg3);
    flythis.addCaCertificates(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 150, column 24>
//   // proto:  void QSslSocket::setCiphers(const QString & ciphers);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1) {
    ((QSslSocket*)0)->setCiphers(arg1);
    flythis.setCiphers(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket10setCiphersERK7QString setCiphers(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 132, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QString & fileName, QSsl::EncodingFormat format);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, QSsl::EncodingFormat arg2) {
    ((QSslSocket*)0)->setLocalCertificate(arg1, arg2);
    flythis.setLocalCertificate(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE setLocalCertificate(const class QString &, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 81, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, const QString & sslPeerName, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
if (true) {
  auto f = [](QSslSocket flythis, const QString & arg1, quint16 arg2, const QString & arg3, QIODevice::OpenMode arg4, QAbstractSocket::NetworkLayerProtocol arg5) {
    ((QSslSocket*)0)->connectToHostEncrypted(arg1, arg2, arg3, arg4, arg5);
    flythis.connectToHostEncrypted(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, const class QString &, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 168, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificates(const QList<QSslCertificate> & certificates);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCertificate> & arg1) {
    ((QSslSocket*)0)->addDefaultCaCertificates(arg1);
    flythis.addDefaultCaCertificates(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket24addDefaultCaCertificatesERK5QListI15QSslCertificateE addDefaultCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 113, column 10>
//   // proto:  bool QSslSocket::flush();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->flush();
    flythis.flush();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 109, column 12>
//   // proto:  qint64 QSslSocket::bytesToWrite();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->bytesToWrite();
    flythis.bytesToWrite();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 140, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QSslKey & key);
if (true) {
  auto f = [](QSslSocket flythis, const QSslKey & arg1) {
    ((QSslSocket*)0)->setPrivateKey(arg1);
    flythis.setPrivateKey(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 175, column 10>
//   // proto:  bool QSslSocket::waitForConnected(int msecs);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->waitForConnected(arg1);
    flythis.waitForConnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 112, column 10>
//   // proto:  bool QSslSocket::atEnd();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->atEnd();
    flythis.atEnd();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket5atEndEv atEnd()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 179, column 10>
//   // proto:  bool QSslSocket::waitForDisconnected(int msecs);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->waitForDisconnected(arg1);
    flythis.waitForDisconnected(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19waitForDisconnectedEi waitForDisconnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 183, column 17>
//   // proto: static bool QSslSocket::supportsSsl();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->supportsSsl();
    flythis.supportsSsl();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket11supportsSslEv supportsSsl()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 170, column 31>
//   // proto: static void QSslSocket::setDefaultCaCertificates(const QList<QSslCertificate> & certificates);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslCertificate> & arg1) {
    ((QSslSocket*)0)->setDefaultCaCertificates(arg1);
    flythis.setDefaultCaCertificates(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket24setDefaultCaCertificatesERK5QListI15QSslCertificateE setDefaultCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 124, column 23>
//   // proto:  QSslConfiguration QSslSocket::sslConfiguration();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslConfiguration();
    flythis.sslConfiguration();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 199, column 10>
//   // proto:  void QSslSocket::sslErrors(const QList<QSslError> & errors);
if (true) {
  auto f = [](QSslSocket flythis, const QList<QSslError> & arg1) {
    ((QSslSocket*)0)->sslErrors(arg1);
    flythis.sslErrors(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket9sslErrorsERK5QListI9QSslErrorE sslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 200, column 10>
//   // proto:  void QSslSocket::modeChanged(QSslSocket::SslMode newMode);
if (true) {
  auto f = [](QSslSocket flythis, QSslSocket::SslMode arg1) {
    ((QSslSocket*)0)->modeChanged(arg1);
    flythis.modeChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket11modeChangedENS_7SslModeE modeChanged(class QSslSocket::SslMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 82, column 10>
//   // proto:  bool QSslSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
if (true) {
  auto f = [](QSslSocket flythis, qintptr arg1, QAbstractSocket::SocketState arg2, QIODevice::OpenMode arg3) {
    ((QSslSocket*)0)->setSocketDescriptor(arg1, arg2, arg3);
    flythis.setSocketDescriptor(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket19setSocketDescriptorEiN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 163, column 87>
//   // proto:  QList<QSslCertificate> QSslSocket::caCertificates();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->caCertificates();
    flythis.caCertificates();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket14caCertificatesEv caCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 75, column 14>
//   // proto:  void QSslSocket::QSslSocket(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QSslSocket(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 102, column 10>
//   // proto:  void QSslSocket::setPeerVerifyDepth(int depth);
if (true) {
  auto f = [](QSslSocket flythis, int arg1) {
    ((QSslSocket*)0)->setPeerVerifyDepth(arg1);
    flythis.setPeerVerifyDepth(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket18setPeerVerifyDepthEi setPeerVerifyDepth(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 98, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslSocket::peerVerifyMode();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->peerVerifyMode();
    flythis.peerVerifyMode();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket14peerVerifyModeEv peerVerifyMode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 185, column 20>
//   // proto: static QString QSslSocket::sslLibraryVersionString();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslLibraryVersionString();
    flythis.sslLibraryVersionString();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket23sslLibraryVersionStringEv sslLibraryVersionString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 60, column 5>
//   // proto:  const QMetaObject * QSslSocket::metaObject();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 202, column 10>
//   // proto:  void QSslSocket::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * authenticator);
if (true) {
  auto f = [](QSslSocket flythis, QSslPreSharedKeyAuthenticator * arg1) {
    ((QSslSocket*)0)->preSharedKeyAuthenticationRequired(arg1);
    flythis.preSharedKeyAuthenticationRequired(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 171, column 49>
//   // proto: static QList<QSslCertificate> QSslSocket::defaultCaCertificates();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->defaultCaCertificates();
    flythis.defaultCaCertificates();
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket21defaultCaCertificatesEv defaultCaCertificates()
//   // proto:  void QSslSocket::~QSslSocket();
if (true) {
  delete ((QSslSocket*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 144, column 13>
//   // proto:  QSslKey QSslSocket::privateKey();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->privateKey();
    flythis.privateKey();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket10privateKeyEv privateKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 181, column 22>
//   // proto:  QList<QSslError> QSslSocket::sslErrors();
if (true) {
  auto f = [](QSslSocket flythis) {
    ((QSslSocket*)0)->sslErrors();
    flythis.sslErrors();
  };
  if (f == nullptr){}
}
// _ZNK10QSslSocket9sslErrorsEv sslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 201, column 10>
//   // proto:  void QSslSocket::encryptedBytesWritten(qint64 totalBytes);
if (true) {
  auto f = [](QSslSocket flythis, qint64 arg1) {
    ((QSslSocket*)0)->encryptedBytesWritten(arg1);
    flythis.encryptedBytesWritten(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QSslSocket21encryptedBytesWrittenEx encryptedBytesWritten(qint64)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 152, column 44>
//   // proto: static QList<QSslCipher> QSslSocket::defaultCiphers();
extern "C"
void C_ZN10QSslSocket14defaultCiphersEv(void *qthis) {
  ((QSslSocket*)qthis)->defaultCiphers();
}
// _ZN10QSslSocket14defaultCiphersEv defaultCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 148, column 75>
//   // proto:  QList<QSslCipher> QSslSocket::ciphers();
extern "C"
void C_ZNK10QSslSocket7ciphersEv(void *qthis) {
  ((QSslSocket*)qthis)->ciphers();
}
// _ZNK10QSslSocket7ciphersEv ciphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 151, column 31>
//   // proto: static void QSslSocket::setDefaultCiphers(const QList<QSslCipher> & ciphers);
extern "C"
void C_ZN10QSslSocket17setDefaultCiphersERK5QListI10QSslCipherE(void *qthis, const QList<QSslCipher> & arg1) {
  ((QSslSocket*)qthis)->setDefaultCiphers(arg1);
}
// _ZN10QSslSocket17setDefaultCiphersERK5QListI10QSslCipherE setDefaultCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 194, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors();
extern "C"
void C_ZN10QSslSocket15ignoreSslErrorsEv(void *qthis) {
  ((QSslSocket*)qthis)->ignoreSslErrors();
}
// _ZN10QSslSocket15ignoreSslErrorsEv ignoreSslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 111, column 10>
//   // proto:  void QSslSocket::close();
extern "C"
void C_ZN10QSslSocket5closeEv(void *qthis) {
  ((QSslSocket*)qthis)->close();
}
// _ZN10QSslSocket5closeEv close()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 134, column 21>
//   // proto:  QSslCertificate QSslSocket::peerCertificate();
extern "C"
void C_ZNK10QSslSocket15peerCertificateEv(void *qthis) {
  ((QSslSocket*)qthis)->peerCertificate();
}
// _ZNK10QSslSocket15peerCertificateEv peerCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 95, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::protocol();
extern "C"
void C_ZNK10QSslSocket8protocolEv(void *qthis) {
  ((QSslSocket*)qthis)->protocol();
}
// _ZNK10QSslSocket8protocolEv protocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 192, column 10>
//   // proto:  void QSslSocket::startClientEncryption();
extern "C"
void C_ZN10QSslSocket21startClientEncryptionEv(void *qthis) {
  ((QSslSocket*)qthis)->startClientEncryption();
}
// _ZN10QSslSocket21startClientEncryptionEv startClientEncryption()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 93, column 10>
//   // proto:  bool QSslSocket::isEncrypted();
extern "C"
void C_ZNK10QSslSocket11isEncryptedEv(void *qthis) {
  ((QSslSocket*)qthis)->isEncrypted();
}
// _ZNK10QSslSocket11isEncryptedEv isEncrypted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 128, column 10>
//   // proto:  void QSslSocket::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
extern "C"
void C_ZN10QSslSocket24setLocalCertificateChainERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslSocket*)qthis)->setLocalCertificateChain(arg1);
}
// _ZN10QSslSocket24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 149, column 65>
//   // proto:  void QSslSocket::setCiphers(const QList<QSslCipher> & ciphers);
extern "C"
void C_ZN10QSslSocket10setCiphersERK5QListI10QSslCipherE(void *qthis, const QList<QSslCipher> & arg1) {
  ((QSslSocket*)qthis)->setCiphers(arg1);
}
// _ZN10QSslSocket10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 189, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors(const QList<QSslError> & errors);
extern "C"
void C_ZN10QSslSocket15ignoreSslErrorsERK5QListI9QSslErrorE(void *qthis, const QList<QSslError> & arg1) {
  ((QSslSocket*)qthis)->ignoreSslErrors(arg1);
}
// _ZN10QSslSocket15ignoreSslErrorsERK5QListI9QSslErrorE ignoreSslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 108, column 12>
//   // proto:  qint64 QSslSocket::bytesAvailable();
extern "C"
void C_ZNK10QSslSocket14bytesAvailableEv(void *qthis) {
  ((QSslSocket*)qthis)->bytesAvailable();
}
// _ZNK10QSslSocket14bytesAvailableEv bytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 141, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QString & fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, const QByteArray & passPhrase);
extern "C"
void C_ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray(void *qthis, const QString & arg1, QSsl::KeyAlgorithm arg2, QSsl::EncodingFormat arg3, const QByteArray & arg4) {
  ((QSslSocket*)qthis)->setPrivateKey(arg1, arg2, arg3, arg4);
}
// _ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray setPrivateKey(const class QString &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 121, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesToWrite();
extern "C"
void C_ZNK10QSslSocket21encryptedBytesToWriteEv(void *qthis) {
  ((QSslSocket*)qthis)->encryptedBytesToWrite();
}
// _ZNK10QSslSocket21encryptedBytesToWriteEv encryptedBytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 89, column 18>
//   // proto:  void QSslSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
extern "C"
void C_ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant(void *qthis, QAbstractSocket::SocketOption arg1, const QVariant & arg2) {
  ((QSslSocket*)qthis)->setSocketOption(arg1, arg2);
}
// _ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 86, column 10>
//   // proto:  void QSslSocket::connectToHost(const QString & hostName, quint16 port, OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol);
extern "C"
void C_ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis, const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QSslSocket*)qthis)->connectToHost(arg1, arg2, arg3, arg4);
}
// _ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 136, column 16>
//   // proto:  QSslCipher QSslSocket::sessionCipher();
extern "C"
void C_ZNK10QSslSocket13sessionCipherEv(void *qthis) {
  ((QSslSocket*)qthis)->sessionCipher();
}
// _ZNK10QSslSocket13sessionCipherEv sessionCipher()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 160, column 10>
//   // proto:  void QSslSocket::addCaCertificates(const QList<QSslCertificate> & certificates);
extern "C"
void C_ZN10QSslSocket17addCaCertificatesERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslSocket*)qthis)->addCaCertificates(arg1);
}
// _ZN10QSslSocket17addCaCertificatesERK5QListI15QSslCertificateE addCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 117, column 10>
//   // proto:  void QSslSocket::setReadBufferSize(qint64 size);
extern "C"
void C_ZN10QSslSocket17setReadBufferSizeEx(void *qthis, qint64 arg1) {
  ((QSslSocket*)qthis)->setReadBufferSize(arg1);
}
// _ZN10QSslSocket17setReadBufferSizeEx setReadBufferSize(qint64)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 104, column 13>
//   // proto:  QString QSslSocket::peerVerifyName();
extern "C"
void C_ZNK10QSslSocket14peerVerifyNameEv(void *qthis) {
  ((QSslSocket*)qthis)->peerVerifyName();
}
// _ZNK10QSslSocket14peerVerifyNameEv peerVerifyName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 198, column 10>
//   // proto:  void QSslSocket::peerVerifyError(const QSslError & error);
extern "C"
void C_ZN10QSslSocket15peerVerifyErrorERK9QSslError(void *qthis, const QSslError & arg1) {
  ((QSslSocket*)qthis)->peerVerifyError(arg1);
}
// _ZN10QSslSocket15peerVerifyErrorERK9QSslError peerVerifyError(const class QSslError &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 101, column 9>
//   // proto:  int QSslSocket::peerVerifyDepth();
extern "C"
void C_ZNK10QSslSocket15peerVerifyDepthEv(void *qthis) {
  ((QSslSocket*)qthis)->peerVerifyDepth();
}
// _ZNK10QSslSocket15peerVerifyDepthEv peerVerifyDepth()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 172, column 100>
//   // proto: static QList<QSslCertificate> QSslSocket::systemCaCertificates();
extern "C"
void C_ZN10QSslSocket20systemCaCertificatesEv(void *qthis) {
  ((QSslSocket*)qthis)->systemCaCertificates();
}
// _ZN10QSslSocket20systemCaCertificatesEv systemCaCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 133, column 21>
//   // proto:  QSslCertificate QSslSocket::localCertificate();
extern "C"
void C_ZNK10QSslSocket16localCertificateEv(void *qthis) {
  ((QSslSocket*)qthis)->localCertificate();
}
// _ZNK10QSslSocket16localCertificateEv localCertificate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 110, column 10>
//   // proto:  bool QSslSocket::canReadLine();
extern "C"
void C_ZNK10QSslSocket11canReadLineEv(void *qthis) {
  ((QSslSocket*)qthis)->canReadLine();
}
// _ZNK10QSslSocket11canReadLineEv canReadLine()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 178, column 10>
//   // proto:  bool QSslSocket::waitForBytesWritten(int msecs);
extern "C"
void C_ZN10QSslSocket19waitForBytesWrittenEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->waitForBytesWritten(arg1);
}
// _ZN10QSslSocket19waitForBytesWrittenEi waitForBytesWritten(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 125, column 10>
//   // proto:  void QSslSocket::setSslConfiguration(const QSslConfiguration & config);
extern "C"
void C_ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration(void *qthis, const QSslConfiguration & arg1) {
  ((QSslSocket*)qthis)->setSslConfiguration(arg1);
}
// _ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 162, column 72>
//   // proto:  void QSslSocket::setCaCertificates(const QList<QSslCertificate> & certificates);
extern "C"
void C_ZN10QSslSocket17setCaCertificatesERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslSocket*)qthis)->setCaCertificates(arg1);
}
// _ZN10QSslSocket17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 87, column 10>
//   // proto:  void QSslSocket::disconnectFromHost();
extern "C"
void C_ZN10QSslSocket18disconnectFromHostEv(void *qthis) {
  ((QSslSocket*)qthis)->disconnectFromHost();
}
// _ZN10QSslSocket18disconnectFromHostEv disconnectFromHost()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 80, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
extern "C"
void C_ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis, const QString & arg1, quint16 arg2, QIODevice::OpenMode arg3, QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QSslSocket*)qthis)->connectToHostEncrypted(arg1, arg2, arg3, arg4);
}
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 167, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificate(const QSslCertificate & certificate);
extern "C"
void C_ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate(void *qthis, const QSslCertificate & arg1) {
  ((QSslSocket*)qthis)->addDefaultCaCertificate(arg1);
}
// _ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate addDefaultCaCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 120, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesAvailable();
extern "C"
void C_ZNK10QSslSocket23encryptedBytesAvailableEv(void *qthis) {
  ((QSslSocket*)qthis)->encryptedBytesAvailable();
}
// _ZNK10QSslSocket23encryptedBytesAvailableEv encryptedBytesAvailable()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 184, column 17>
//   // proto: static long QSslSocket::sslLibraryVersionNumber();
extern "C"
void C_ZN10QSslSocket23sslLibraryVersionNumberEv(void *qthis) {
  ((QSslSocket*)qthis)->sslLibraryVersionNumber();
}
// _ZN10QSslSocket23sslLibraryVersionNumberEv sslLibraryVersionNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 176, column 10>
//   // proto:  bool QSslSocket::waitForEncrypted(int msecs);
extern "C"
void C_ZN10QSslSocket16waitForEncryptedEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->waitForEncrypted(arg1);
}
// _ZN10QSslSocket16waitForEncryptedEi waitForEncrypted(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 193, column 10>
//   // proto:  void QSslSocket::startServerEncryption();
extern "C"
void C_ZN10QSslSocket21startServerEncryptionEv(void *qthis) {
  ((QSslSocket*)qthis)->startServerEncryption();
}
// _ZN10QSslSocket21startServerEncryptionEv startServerEncryption()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 131, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QSslCertificate & certificate);
extern "C"
void C_ZN10QSslSocket19setLocalCertificateERK15QSslCertificate(void *qthis, const QSslCertificate & arg1) {
  ((QSslSocket*)qthis)->setLocalCertificate(arg1);
}
// _ZN10QSslSocket19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 129, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::localCertificateChain();
extern "C"
void C_ZNK10QSslSocket21localCertificateChainEv(void *qthis) {
  ((QSslSocket*)qthis)->localCertificateChain();
}
// _ZNK10QSslSocket21localCertificateChainEv localCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 165, column 17>
//   // proto: static bool QSslSocket::addDefaultCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
extern "C"
void C_ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(void *qthis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
  ((QSslSocket*)qthis)->addDefaultCaCertificates(arg1, arg2, arg3);
}
// _ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addDefaultCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 197, column 10>
//   // proto:  void QSslSocket::encrypted();
extern "C"
void C_ZN10QSslSocket9encryptedEv(void *qthis) {
  ((QSslSocket*)qthis)->encrypted();
}
// _ZN10QSslSocket9encryptedEv encrypted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 92, column 13>
//   // proto:  QSslSocket::SslMode QSslSocket::mode();
extern "C"
void C_ZNK10QSslSocket4modeEv(void *qthis) {
  ((QSslSocket*)qthis)->mode();
}
// _ZNK10QSslSocket4modeEv mode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 177, column 10>
//   // proto:  bool QSslSocket::waitForReadyRead(int msecs);
extern "C"
void C_ZN10QSslSocket16waitForReadyReadEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->waitForReadyRead(arg1);
}
// _ZN10QSslSocket16waitForReadyReadEi waitForReadyRead(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 99, column 10>
//   // proto:  void QSslSocket::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
extern "C"
void C_ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE(void *qthis, QSslSocket::PeerVerifyMode arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyMode(arg1);
}
// _ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 153, column 91>
//   // proto: static QList<QSslCipher> QSslSocket::supportedCiphers();
extern "C"
void C_ZN10QSslSocket16supportedCiphersEv(void *qthis) {
  ((QSslSocket*)qthis)->supportedCiphers();
}
// _ZN10QSslSocket16supportedCiphersEv supportedCiphers()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 159, column 10>
//   // proto:  void QSslSocket::addCaCertificate(const QSslCertificate & certificate);
extern "C"
void C_ZN10QSslSocket16addCaCertificateERK15QSslCertificate(void *qthis, const QSslCertificate & arg1) {
  ((QSslSocket*)qthis)->addCaCertificate(arg1);
}
// _ZN10QSslSocket16addCaCertificateERK15QSslCertificate addCaCertificate(const class QSslCertificate &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 105, column 10>
//   // proto:  void QSslSocket::setPeerVerifyName(const QString & hostName);
extern "C"
void C_ZN10QSslSocket17setPeerVerifyNameERK7QString(void *qthis, const QString & arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyName(arg1);
}
// _ZN10QSslSocket17setPeerVerifyNameERK7QString setPeerVerifyName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 135, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::peerCertificateChain();
extern "C"
void C_ZNK10QSslSocket20peerCertificateChainEv(void *qthis) {
  ((QSslSocket*)qthis)->peerCertificateChain();
}
// _ZNK10QSslSocket20peerCertificateChainEv peerCertificateChain()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 77, column 10>
//   // proto:  void QSslSocket::resume();
extern "C"
void C_ZN10QSslSocket6resumeEv(void *qthis) {
  ((QSslSocket*)qthis)->resume();
}
// _ZN10QSslSocket6resumeEv resume()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 90, column 22>
//   // proto:  QVariant QSslSocket::socketOption(QAbstractSocket::SocketOption option);
extern "C"
void C_ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE(void *qthis, QAbstractSocket::SocketOption arg1) {
  ((QSslSocket*)qthis)->socketOption(arg1);
}
// _ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 114, column 10>
//   // proto:  void QSslSocket::abort();
extern "C"
void C_ZN10QSslSocket5abortEv(void *qthis) {
  ((QSslSocket*)qthis)->abort();
}
// _ZN10QSslSocket5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 96, column 10>
//   // proto:  void QSslSocket::setProtocol(QSsl::SslProtocol protocol);
extern "C"
void C_ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE(void *qthis, QSsl::SslProtocol arg1) {
  ((QSslSocket*)qthis)->setProtocol(arg1);
}
// _ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 137, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::sessionProtocol();
extern "C"
void C_ZNK10QSslSocket15sessionProtocolEv(void *qthis) {
  ((QSslSocket*)qthis)->sessionProtocol();
}
// _ZNK10QSslSocket15sessionProtocolEv sessionProtocol()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 186, column 17>
//   // proto: static long QSslSocket::sslLibraryBuildVersionNumber();
extern "C"
void C_ZN10QSslSocket28sslLibraryBuildVersionNumberEv(void *qthis) {
  ((QSslSocket*)qthis)->sslLibraryBuildVersionNumber();
}
// _ZN10QSslSocket28sslLibraryBuildVersionNumberEv sslLibraryBuildVersionNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 187, column 20>
//   // proto: static QString QSslSocket::sslLibraryBuildVersionString();
extern "C"
void C_ZN10QSslSocket28sslLibraryBuildVersionStringEv(void *qthis) {
  ((QSslSocket*)qthis)->sslLibraryBuildVersionString();
}
// _ZN10QSslSocket28sslLibraryBuildVersionStringEv sslLibraryBuildVersionString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 157, column 10>
//   // proto:  bool QSslSocket::addCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
extern "C"
void C_ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(void *qthis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
  ((QSslSocket*)qthis)->addCaCertificates(arg1, arg2, arg3);
}
// _ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 150, column 24>
//   // proto:  void QSslSocket::setCiphers(const QString & ciphers);
extern "C"
void C_ZN10QSslSocket10setCiphersERK7QString(void *qthis, const QString & arg1) {
  ((QSslSocket*)qthis)->setCiphers(arg1);
}
// _ZN10QSslSocket10setCiphersERK7QString setCiphers(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 132, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QString & fileName, QSsl::EncodingFormat format);
extern "C"
void C_ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE(void *qthis, const QString & arg1, QSsl::EncodingFormat arg2) {
  ((QSslSocket*)qthis)->setLocalCertificate(arg1, arg2);
}
// _ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE setLocalCertificate(const class QString &, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 81, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, const QString & sslPeerName, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
extern "C"
void C_ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis, const QString & arg1, quint16 arg2, const QString & arg3, QIODevice::OpenMode arg4, QAbstractSocket::NetworkLayerProtocol arg5) {
  ((QSslSocket*)qthis)->connectToHostEncrypted(arg1, arg2, arg3, arg4, arg5);
}
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, const class QString &, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 168, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificates(const QList<QSslCertificate> & certificates);
extern "C"
void C_ZN10QSslSocket24addDefaultCaCertificatesERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslSocket*)qthis)->addDefaultCaCertificates(arg1);
}
// _ZN10QSslSocket24addDefaultCaCertificatesERK5QListI15QSslCertificateE addDefaultCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 113, column 10>
//   // proto:  bool QSslSocket::flush();
extern "C"
void C_ZN10QSslSocket5flushEv(void *qthis) {
  ((QSslSocket*)qthis)->flush();
}
// _ZN10QSslSocket5flushEv flush()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 109, column 12>
//   // proto:  qint64 QSslSocket::bytesToWrite();
extern "C"
void C_ZNK10QSslSocket12bytesToWriteEv(void *qthis) {
  ((QSslSocket*)qthis)->bytesToWrite();
}
// _ZNK10QSslSocket12bytesToWriteEv bytesToWrite()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 140, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QSslKey & key);
extern "C"
void C_ZN10QSslSocket13setPrivateKeyERK7QSslKey(void *qthis, const QSslKey & arg1) {
  ((QSslSocket*)qthis)->setPrivateKey(arg1);
}
// _ZN10QSslSocket13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 175, column 10>
//   // proto:  bool QSslSocket::waitForConnected(int msecs);
extern "C"
void C_ZN10QSslSocket16waitForConnectedEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->waitForConnected(arg1);
}
// _ZN10QSslSocket16waitForConnectedEi waitForConnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 112, column 10>
//   // proto:  bool QSslSocket::atEnd();
extern "C"
void C_ZNK10QSslSocket5atEndEv(void *qthis) {
  ((QSslSocket*)qthis)->atEnd();
}
// _ZNK10QSslSocket5atEndEv atEnd()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 179, column 10>
//   // proto:  bool QSslSocket::waitForDisconnected(int msecs);
extern "C"
void C_ZN10QSslSocket19waitForDisconnectedEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->waitForDisconnected(arg1);
}
// _ZN10QSslSocket19waitForDisconnectedEi waitForDisconnected(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 183, column 17>
//   // proto: static bool QSslSocket::supportsSsl();
extern "C"
void C_ZN10QSslSocket11supportsSslEv(void *qthis) {
  ((QSslSocket*)qthis)->supportsSsl();
}
// _ZN10QSslSocket11supportsSslEv supportsSsl()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 170, column 31>
//   // proto: static void QSslSocket::setDefaultCaCertificates(const QList<QSslCertificate> & certificates);
extern "C"
void C_ZN10QSslSocket24setDefaultCaCertificatesERK5QListI15QSslCertificateE(void *qthis, const QList<QSslCertificate> & arg1) {
  ((QSslSocket*)qthis)->setDefaultCaCertificates(arg1);
}
// _ZN10QSslSocket24setDefaultCaCertificatesERK5QListI15QSslCertificateE setDefaultCaCertificates(const QList<class QSslCertificate> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 124, column 23>
//   // proto:  QSslConfiguration QSslSocket::sslConfiguration();
extern "C"
void C_ZNK10QSslSocket16sslConfigurationEv(void *qthis) {
  ((QSslSocket*)qthis)->sslConfiguration();
}
// _ZNK10QSslSocket16sslConfigurationEv sslConfiguration()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 199, column 10>
//   // proto:  void QSslSocket::sslErrors(const QList<QSslError> & errors);
extern "C"
void C_ZN10QSslSocket9sslErrorsERK5QListI9QSslErrorE(void *qthis, const QList<QSslError> & arg1) {
  ((QSslSocket*)qthis)->sslErrors(arg1);
}
// _ZN10QSslSocket9sslErrorsERK5QListI9QSslErrorE sslErrors(const QList<class QSslError> &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 200, column 10>
//   // proto:  void QSslSocket::modeChanged(QSslSocket::SslMode newMode);
extern "C"
void C_ZN10QSslSocket11modeChangedENS_7SslModeE(void *qthis, QSslSocket::SslMode arg1) {
  ((QSslSocket*)qthis)->modeChanged(arg1);
}
// _ZN10QSslSocket11modeChangedENS_7SslModeE modeChanged(class QSslSocket::SslMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 82, column 10>
//   // proto:  bool QSslSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
extern "C"
void C_ZN10QSslSocket19setSocketDescriptorEiN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis, qintptr arg1, QAbstractSocket::SocketState arg2, QIODevice::OpenMode arg3) {
  ((QSslSocket*)qthis)->setSocketDescriptor(arg1, arg2, arg3);
}
// _ZN10QSslSocket19setSocketDescriptorEiN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 163, column 87>
//   // proto:  QList<QSslCertificate> QSslSocket::caCertificates();
extern "C"
void C_ZNK10QSslSocket14caCertificatesEv(void *qthis) {
  ((QSslSocket*)qthis)->caCertificates();
}
// _ZNK10QSslSocket14caCertificatesEv caCertificates()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 75, column 14>
//   // proto:  void QSslSocket::QSslSocket(QObject * parent);
extern "C"
void C_ZN10QSslSocketC2EP7QObject(QObject * arg1) {
  new QSslSocket(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 102, column 10>
//   // proto:  void QSslSocket::setPeerVerifyDepth(int depth);
extern "C"
void C_ZN10QSslSocket18setPeerVerifyDepthEi(void *qthis, int arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyDepth(arg1);
}
// _ZN10QSslSocket18setPeerVerifyDepthEi setPeerVerifyDepth(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 98, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslSocket::peerVerifyMode();
extern "C"
void C_ZNK10QSslSocket14peerVerifyModeEv(void *qthis) {
  ((QSslSocket*)qthis)->peerVerifyMode();
}
// _ZNK10QSslSocket14peerVerifyModeEv peerVerifyMode()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 185, column 20>
//   // proto: static QString QSslSocket::sslLibraryVersionString();
extern "C"
void C_ZN10QSslSocket23sslLibraryVersionStringEv(void *qthis) {
  ((QSslSocket*)qthis)->sslLibraryVersionString();
}
// _ZN10QSslSocket23sslLibraryVersionStringEv sslLibraryVersionString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 60, column 5>
//   // proto:  const QMetaObject * QSslSocket::metaObject();
extern "C"
void C_ZNK10QSslSocket10metaObjectEv(void *qthis) {
  ((QSslSocket*)qthis)->metaObject();
}
// _ZNK10QSslSocket10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 202, column 10>
//   // proto:  void QSslSocket::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * authenticator);
extern "C"
void C_ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *qthis, QSslPreSharedKeyAuthenticator * arg1) {
  ((QSslSocket*)qthis)->preSharedKeyAuthenticationRequired(arg1);
}
// _ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 171, column 49>
//   // proto: static QList<QSslCertificate> QSslSocket::defaultCaCertificates();
extern "C"
void C_ZN10QSslSocket21defaultCaCertificatesEv(void *qthis) {
  ((QSslSocket*)qthis)->defaultCaCertificates();
}
// _ZN10QSslSocket21defaultCaCertificatesEv defaultCaCertificates()
//   // proto:  void QSslSocket::~QSslSocket();
extern "C"
void C_ZN10QSslSocketD2Ev(void *qthis) {
  delete (QSslSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 144, column 13>
//   // proto:  QSslKey QSslSocket::privateKey();
extern "C"
void C_ZNK10QSslSocket10privateKeyEv(void *qthis) {
  ((QSslSocket*)qthis)->privateKey();
}
// _ZNK10QSslSocket10privateKeyEv privateKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 181, column 22>
//   // proto:  QList<QSslError> QSslSocket::sslErrors();
extern "C"
void C_ZNK10QSslSocket9sslErrorsEv(void *qthis) {
  ((QSslSocket*)qthis)->sslErrors();
}
// _ZNK10QSslSocket9sslErrorsEv sslErrors()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 201, column 10>
//   // proto:  void QSslSocket::encryptedBytesWritten(qint64 totalBytes);
extern "C"
void C_ZN10QSslSocket21encryptedBytesWrittenEx(void *qthis, qint64 arg1) {
  ((QSslSocket*)qthis)->encryptedBytesWritten(arg1);
}
// _ZN10QSslSocket21encryptedBytesWrittenEx encryptedBytesWritten(qint64)
// <= ext block end

// body block begin =>
// QSslSocket_SlotProxy here
class QSslSocket_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSslSocket_SlotProxy():QObject(){}

public slots:
  // peerVerifyError(const class QSslError &)
  void slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0);
public:
  void (*slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError)(void* rsfptr, const QSslError & arg0) = NULL;
public slots:
  // modeChanged(class QSslSocket::SslMode)
  void slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0);
public:
  void (*slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE)(void* rsfptr, QSslSocket::SslMode arg0) = NULL;
public slots:
  // encrypted()
  void slot_proxy_func__ZN10QSslSocket9encryptedEv();
public:
  void (*slot_func__ZN10QSslSocket9encryptedEv)(void* rsfptr) = NULL;
public slots:
  // preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
  void slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0);
public:
  void (*slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator)(void* rsfptr, QSslPreSharedKeyAuthenticator * arg0) = NULL;
public slots:
  // encryptedBytesWritten(qint64)
  void slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0);
public:
  void (*slot_func__ZN10QSslSocket21encryptedBytesWrittenEx)(void* rsfptr, qint64 arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qsslsocket.moc"

extern "C" {
  QSslSocket_SlotProxy* QSslSocket_SlotProxy_new()
  {
    return new QSslSocket_SlotProxy();
  }
};

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0) {
  if (this->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket15peerVerifyErrorERK9QSslError(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError = (decltype(that->slot_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(peerVerifyError(const class QSslError &)), that, SLOT(slot_proxy_func__ZN10QSslSocket15peerVerifyErrorERK9QSslError(const QSslError & arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket15peerVerifyErrorERK9QSslError(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0) {
  if (this->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket11modeChangedENS_7SslModeE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE = (decltype(that->slot_func__ZN10QSslSocket11modeChangedENS_7SslModeE))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(modeChanged(class QSslSocket::SslMode)), that, SLOT(slot_proxy_func__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket::SslMode arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket11modeChangedENS_7SslModeE(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket9encryptedEv() {
  if (this->slot_func__ZN10QSslSocket9encryptedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket9encryptedEv(this->rsfptr);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket9encryptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket9encryptedEv = (decltype(that->slot_func__ZN10QSslSocket9encryptedEv))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(encrypted()), that, SLOT(slot_proxy_func__ZN10QSslSocket9encryptedEv()));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket9encryptedEv(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0) {
  if (this->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator = (decltype(that->slot_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)), that, SLOT(slot_proxy_func__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator * arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSslSocket_SlotProxy::slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0) {
  if (this->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx != NULL) {
    // do smth...
    this->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx(this->rsfptr, arg0);
  }
}
extern "C"
void* QSslSocket_SlotProxy_connect__ZN10QSslSocket21encryptedBytesWrittenEx(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSslSocket_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx = (decltype(that->slot_func__ZN10QSslSocket21encryptedBytesWrittenEx))ffifptr;
  QObject::connect((QSslSocket*)sender, SIGNAL(encryptedBytesWritten(qint64)), that, SLOT(slot_proxy_func__ZN10QSslSocket21encryptedBytesWrittenEx(qint64 arg0)));
  return that;
}
extern "C"
void QSslSocket_SlotProxy_disconnect__ZN10QSslSocket21encryptedBytesWrittenEx(QSslSocket_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

