// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslsocket.h
// dst-file: /src/network/qsslsocket.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslsocket.h>


#include <qsslcipher.h>
#include <qlist.h>
#include <qabstractnetworkcache.h>
#include <qsslcertificate.h>
#include <qssl.h>
#include <qglobal.h>
#include <qstring.h>
#include <qvariant.h>
#include <qsslconfiguration.h>
#include <qsslkey.h>
#include <qsslerror.h>
// <= header block end

// main block begin =>
void __keep_qsslsocket_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslSocket_Class_Size()
{
  return sizeof(QSslSocket);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 152, column 44>
//   // proto: static QList<QSslCipher> QSslSocket::defaultCiphers();
// _ZN10QSslSocket14defaultCiphersEv defaultCiphers()
extern "C"
QList<QSslCipher>*
C_ZN10QSslSocket14defaultCiphersEv() {
  auto ret =
  QSslSocket::defaultCiphers();
  return new QList<QSslCipher>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 148, column 75>
//   // proto:  QList<QSslCipher> QSslSocket::ciphers();
// _ZNK10QSslSocket7ciphersEv ciphers()
extern "C"
QList<QSslCipher>*
C_ZNK10QSslSocket7ciphersEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->ciphers();
  return new QList<QSslCipher>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 151, column 31>
//   // proto: static void QSslSocket::setDefaultCiphers(const QList<QSslCipher> & ciphers);
// _ZN10QSslSocket17setDefaultCiphersERK5QListI10QSslCipherE setDefaultCiphers(const QList<class QSslCipher> &)
extern "C"
void
C_ZN10QSslSocket17setDefaultCiphersERK5QListI10QSslCipherE(const QList<QSslCipher>* arg1) {
  QSslSocket::setDefaultCiphers(*((const QList<QSslCipher>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 194, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors();
// _ZN10QSslSocket15ignoreSslErrorsEv ignoreSslErrors()
extern "C"
void
C_ZN10QSslSocket15ignoreSslErrorsEv(void *qthis) {
  ((QSslSocket*)qthis)->ignoreSslErrors();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 111, column 10>
//   // proto:  void QSslSocket::close();
// _ZN10QSslSocket5closeEv close()
extern "C"
void
C_ZN10QSslSocket5closeEv(void *qthis) {
  ((QSslSocket*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 134, column 21>
//   // proto:  QSslCertificate QSslSocket::peerCertificate();
// _ZNK10QSslSocket15peerCertificateEv peerCertificate()
extern "C"
QSslCertificate*
C_ZNK10QSslSocket15peerCertificateEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->peerCertificate();
  return new QSslCertificate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 95, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::protocol();
// _ZNK10QSslSocket8protocolEv protocol()
extern "C"
QSsl::SslProtocol
C_ZNK10QSslSocket8protocolEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->protocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 192, column 10>
//   // proto:  void QSslSocket::startClientEncryption();
// _ZN10QSslSocket21startClientEncryptionEv startClientEncryption()
extern "C"
void
C_ZN10QSslSocket21startClientEncryptionEv(void *qthis) {
  ((QSslSocket*)qthis)->startClientEncryption();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 93, column 10>
//   // proto:  bool QSslSocket::isEncrypted();
// _ZNK10QSslSocket11isEncryptedEv isEncrypted()
extern "C"
bool
C_ZNK10QSslSocket11isEncryptedEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->isEncrypted();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 128, column 10>
//   // proto:  void QSslSocket::setLocalCertificateChain(const QList<QSslCertificate> & localChain);
// _ZN10QSslSocket24setLocalCertificateChainERK5QListI15QSslCertificateE setLocalCertificateChain(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN10QSslSocket24setLocalCertificateChainERK5QListI15QSslCertificateE(void *qthis,
const QList<QSslCertificate>* arg1) {
  ((QSslSocket*)qthis)->setLocalCertificateChain(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 149, column 65>
//   // proto:  void QSslSocket::setCiphers(const QList<QSslCipher> & ciphers);
// _ZN10QSslSocket10setCiphersERK5QListI10QSslCipherE setCiphers(const QList<class QSslCipher> &)
extern "C"
void
C_ZN10QSslSocket10setCiphersERK5QListI10QSslCipherE(void *qthis,
const QList<QSslCipher>* arg1) {
  ((QSslSocket*)qthis)->setCiphers(*((const QList<QSslCipher>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 189, column 10>
//   // proto:  void QSslSocket::ignoreSslErrors(const QList<QSslError> & errors);
// _ZN10QSslSocket15ignoreSslErrorsERK5QListI9QSslErrorE ignoreSslErrors(const QList<class QSslError> &)
extern "C"
void
C_ZN10QSslSocket15ignoreSslErrorsERK5QListI9QSslErrorE(void *qthis,
const QList<QSslError>* arg1) {
  ((QSslSocket*)qthis)->ignoreSslErrors(*((const QList<QSslError>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 108, column 12>
//   // proto:  qint64 QSslSocket::bytesAvailable();
// _ZNK10QSslSocket14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK10QSslSocket14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 141, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QString & fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, const QByteArray & passPhrase);
// _ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray setPrivateKey(const class QString &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const class QByteArray &)
extern "C"
void
C_ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray(void *qthis,
const QString* arg1,
QSsl::KeyAlgorithm* arg2,
QSsl::EncodingFormat* arg3,
const QByteArray* arg4) {
  ((QSslSocket*)qthis)->setPrivateKey(*((const QString*)arg1),
*((QSsl::KeyAlgorithm*)arg2),
*((QSsl::EncodingFormat*)arg3),
*((const QByteArray*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 121, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesToWrite();
// _ZNK10QSslSocket21encryptedBytesToWriteEv encryptedBytesToWrite()
extern "C"
long long
C_ZNK10QSslSocket21encryptedBytesToWriteEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->encryptedBytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 89, column 18>
//   // proto:  void QSslSocket::setSocketOption(QAbstractSocket::SocketOption option, const QVariant & value);
// _ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
extern "C"
void
C_ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant(void *qthis,
QAbstractSocket::SocketOption* arg1,
const QVariant* arg2) {
  ((QSslSocket*)qthis)->setSocketOption(*((QAbstractSocket::SocketOption*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 86, column 10>
//   // proto:  void QSslSocket::connectToHost(const QString & hostName, quint16 port, OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol);
// _ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHost(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C"
void
C_ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis,
const QString* arg1,
quint16 arg2,
QIODevice::OpenMode arg3,
QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QSslSocket*)qthis)->connectToHost(*((const QString*)arg1),
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 136, column 16>
//   // proto:  QSslCipher QSslSocket::sessionCipher();
// _ZNK10QSslSocket13sessionCipherEv sessionCipher()
extern "C"
QSslCipher*
C_ZNK10QSslSocket13sessionCipherEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->sessionCipher();
  return new QSslCipher(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 160, column 10>
//   // proto:  void QSslSocket::addCaCertificates(const QList<QSslCertificate> & certificates);
// _ZN10QSslSocket17addCaCertificatesERK5QListI15QSslCertificateE addCaCertificates(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN10QSslSocket17addCaCertificatesERK5QListI15QSslCertificateE(void *qthis,
const QList<QSslCertificate>* arg1) {
  ((QSslSocket*)qthis)->addCaCertificates(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 117, column 10>
//   // proto:  void QSslSocket::setReadBufferSize(qint64 size);
// _ZN10QSslSocket17setReadBufferSizeEx setReadBufferSize(qint64)
extern "C"
void
C_ZN10QSslSocket17setReadBufferSizeEx(void *qthis,
qint64 arg1) {
  ((QSslSocket*)qthis)->setReadBufferSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 104, column 13>
//   // proto:  QString QSslSocket::peerVerifyName();
// _ZNK10QSslSocket14peerVerifyNameEv peerVerifyName()
extern "C"
QString*
C_ZNK10QSslSocket14peerVerifyNameEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->peerVerifyName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 198, column 10>
//   // proto:  void QSslSocket::peerVerifyError(const QSslError & error);
// _ZN10QSslSocket15peerVerifyErrorERK9QSslError peerVerifyError(const class QSslError &)
extern "C"
void
C_ZN10QSslSocket15peerVerifyErrorERK9QSslError(void *qthis,
const QSslError* arg1) {
  ((QSslSocket*)qthis)->peerVerifyError(*((const QSslError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 101, column 9>
//   // proto:  int QSslSocket::peerVerifyDepth();
// _ZNK10QSslSocket15peerVerifyDepthEv peerVerifyDepth()
extern "C"
int
C_ZNK10QSslSocket15peerVerifyDepthEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->peerVerifyDepth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 172, column 100>
//   // proto: static QList<QSslCertificate> QSslSocket::systemCaCertificates();
// _ZN10QSslSocket20systemCaCertificatesEv systemCaCertificates()
extern "C"
QList<QSslCertificate>*
C_ZN10QSslSocket20systemCaCertificatesEv() {
  auto ret =
  QSslSocket::systemCaCertificates();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 133, column 21>
//   // proto:  QSslCertificate QSslSocket::localCertificate();
// _ZNK10QSslSocket16localCertificateEv localCertificate()
extern "C"
QSslCertificate*
C_ZNK10QSslSocket16localCertificateEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->localCertificate();
  return new QSslCertificate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 110, column 10>
//   // proto:  bool QSslSocket::canReadLine();
// _ZNK10QSslSocket11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK10QSslSocket11canReadLineEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 178, column 10>
//   // proto:  bool QSslSocket::waitForBytesWritten(int msecs);
// _ZN10QSslSocket19waitForBytesWrittenEi waitForBytesWritten(int)
extern "C"
bool
C_ZN10QSslSocket19waitForBytesWrittenEi(void *qthis,
int arg1) {
  auto ret =
  ((QSslSocket*)qthis)->waitForBytesWritten(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 125, column 10>
//   // proto:  void QSslSocket::setSslConfiguration(const QSslConfiguration & config);
// _ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration setSslConfiguration(const class QSslConfiguration &)
extern "C"
void
C_ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration(void *qthis,
const QSslConfiguration* arg1) {
  ((QSslSocket*)qthis)->setSslConfiguration(*((const QSslConfiguration*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 162, column 72>
//   // proto:  void QSslSocket::setCaCertificates(const QList<QSslCertificate> & certificates);
// _ZN10QSslSocket17setCaCertificatesERK5QListI15QSslCertificateE setCaCertificates(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN10QSslSocket17setCaCertificatesERK5QListI15QSslCertificateE(void *qthis,
const QList<QSslCertificate>* arg1) {
  ((QSslSocket*)qthis)->setCaCertificates(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 87, column 10>
//   // proto:  void QSslSocket::disconnectFromHost();
// _ZN10QSslSocket18disconnectFromHostEv disconnectFromHost()
extern "C"
void
C_ZN10QSslSocket18disconnectFromHostEv(void *qthis) {
  ((QSslSocket*)qthis)->disconnectFromHost();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 80, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C"
void
C_ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis,
const QString* arg1,
quint16 arg2,
QIODevice::OpenMode arg3,
QAbstractSocket::NetworkLayerProtocol arg4) {
  ((QSslSocket*)qthis)->connectToHostEncrypted(*((const QString*)arg1),
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 167, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificate(const QSslCertificate & certificate);
// _ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate addDefaultCaCertificate(const class QSslCertificate &)
extern "C"
void
C_ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate(const QSslCertificate* arg1) {
  QSslSocket::addDefaultCaCertificate(*((const QSslCertificate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 120, column 12>
//   // proto:  qint64 QSslSocket::encryptedBytesAvailable();
// _ZNK10QSslSocket23encryptedBytesAvailableEv encryptedBytesAvailable()
extern "C"
long long
C_ZNK10QSslSocket23encryptedBytesAvailableEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->encryptedBytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 184, column 17>
//   // proto: static long QSslSocket::sslLibraryVersionNumber();
// _ZN10QSslSocket23sslLibraryVersionNumberEv sslLibraryVersionNumber()
extern "C"
long
C_ZN10QSslSocket23sslLibraryVersionNumberEv() {
  auto ret =
  QSslSocket::sslLibraryVersionNumber();
  return ret; // 0 TypeKind.LONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 176, column 10>
//   // proto:  bool QSslSocket::waitForEncrypted(int msecs);
// _ZN10QSslSocket16waitForEncryptedEi waitForEncrypted(int)
extern "C"
bool
C_ZN10QSslSocket16waitForEncryptedEi(void *qthis,
int arg1) {
  auto ret =
  ((QSslSocket*)qthis)->waitForEncrypted(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 193, column 10>
//   // proto:  void QSslSocket::startServerEncryption();
// _ZN10QSslSocket21startServerEncryptionEv startServerEncryption()
extern "C"
void
C_ZN10QSslSocket21startServerEncryptionEv(void *qthis) {
  ((QSslSocket*)qthis)->startServerEncryption();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 131, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QSslCertificate & certificate);
// _ZN10QSslSocket19setLocalCertificateERK15QSslCertificate setLocalCertificate(const class QSslCertificate &)
extern "C"
void
C_ZN10QSslSocket19setLocalCertificateERK15QSslCertificate(void *qthis,
const QSslCertificate* arg1) {
  ((QSslSocket*)qthis)->setLocalCertificate(*((const QSslCertificate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 129, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::localCertificateChain();
// _ZNK10QSslSocket21localCertificateChainEv localCertificateChain()
extern "C"
QList<QSslCertificate>*
C_ZNK10QSslSocket21localCertificateChainEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->localCertificateChain();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 165, column 17>
//   // proto: static bool QSslSocket::addDefaultCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
// _ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addDefaultCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
extern "C"
bool
C_ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(const QString* arg1,
QSsl::EncodingFormat* arg2,
QRegExp::PatternSyntax* arg3) {
  auto ret =
  QSslSocket::addDefaultCaCertificates(*((const QString*)arg1),
*((QSsl::EncodingFormat*)arg2),
*((QRegExp::PatternSyntax*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 197, column 10>
//   // proto:  void QSslSocket::encrypted();
// _ZN10QSslSocket9encryptedEv encrypted()
extern "C"
void
C_ZN10QSslSocket9encryptedEv(void *qthis) {
  ((QSslSocket*)qthis)->encrypted();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 92, column 13>
//   // proto:  QSslSocket::SslMode QSslSocket::mode();
// _ZNK10QSslSocket4modeEv mode()
extern "C"
QSslSocket::SslMode
C_ZNK10QSslSocket4modeEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->mode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 177, column 10>
//   // proto:  bool QSslSocket::waitForReadyRead(int msecs);
// _ZN10QSslSocket16waitForReadyReadEi waitForReadyRead(int)
extern "C"
bool
C_ZN10QSslSocket16waitForReadyReadEi(void *qthis,
int arg1) {
  auto ret =
  ((QSslSocket*)qthis)->waitForReadyRead(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 99, column 10>
//   // proto:  void QSslSocket::setPeerVerifyMode(QSslSocket::PeerVerifyMode mode);
// _ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
extern "C"
void
C_ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE(void *qthis,
QSslSocket::PeerVerifyMode* arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyMode(*((QSslSocket::PeerVerifyMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 153, column 91>
//   // proto: static QList<QSslCipher> QSslSocket::supportedCiphers();
// _ZN10QSslSocket16supportedCiphersEv supportedCiphers()
extern "C"
QList<QSslCipher>*
C_ZN10QSslSocket16supportedCiphersEv() {
  auto ret =
  QSslSocket::supportedCiphers();
  return new QList<QSslCipher>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 159, column 10>
//   // proto:  void QSslSocket::addCaCertificate(const QSslCertificate & certificate);
// _ZN10QSslSocket16addCaCertificateERK15QSslCertificate addCaCertificate(const class QSslCertificate &)
extern "C"
void
C_ZN10QSslSocket16addCaCertificateERK15QSslCertificate(void *qthis,
const QSslCertificate* arg1) {
  ((QSslSocket*)qthis)->addCaCertificate(*((const QSslCertificate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 105, column 10>
//   // proto:  void QSslSocket::setPeerVerifyName(const QString & hostName);
// _ZN10QSslSocket17setPeerVerifyNameERK7QString setPeerVerifyName(const class QString &)
extern "C"
void
C_ZN10QSslSocket17setPeerVerifyNameERK7QString(void *qthis,
const QString* arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 135, column 28>
//   // proto:  QList<QSslCertificate> QSslSocket::peerCertificateChain();
// _ZNK10QSslSocket20peerCertificateChainEv peerCertificateChain()
extern "C"
QList<QSslCertificate>*
C_ZNK10QSslSocket20peerCertificateChainEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->peerCertificateChain();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 77, column 10>
//   // proto:  void QSslSocket::resume();
// _ZN10QSslSocket6resumeEv resume()
extern "C"
void
C_ZN10QSslSocket6resumeEv(void *qthis) {
  ((QSslSocket*)qthis)->resume();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 90, column 22>
//   // proto:  QVariant QSslSocket::socketOption(QAbstractSocket::SocketOption option);
// _ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE socketOption(class QAbstractSocket::SocketOption)
extern "C"
QVariant*
C_ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE(void *qthis,
QAbstractSocket::SocketOption* arg1) {
  auto ret =
  ((QSslSocket*)qthis)->socketOption(*((QAbstractSocket::SocketOption*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 114, column 10>
//   // proto:  void QSslSocket::abort();
// _ZN10QSslSocket5abortEv abort()
extern "C"
void
C_ZN10QSslSocket5abortEv(void *qthis) {
  ((QSslSocket*)qthis)->abort();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 96, column 10>
//   // proto:  void QSslSocket::setProtocol(QSsl::SslProtocol protocol);
// _ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE setProtocol(QSsl::SslProtocol)
extern "C"
void
C_ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE(void *qthis,
QSsl::SslProtocol* arg1) {
  ((QSslSocket*)qthis)->setProtocol(*((QSsl::SslProtocol*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 137, column 23>
//   // proto:  QSsl::SslProtocol QSslSocket::sessionProtocol();
// _ZNK10QSslSocket15sessionProtocolEv sessionProtocol()
extern "C"
QSsl::SslProtocol
C_ZNK10QSslSocket15sessionProtocolEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->sessionProtocol();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 186, column 17>
//   // proto: static long QSslSocket::sslLibraryBuildVersionNumber();
// _ZN10QSslSocket28sslLibraryBuildVersionNumberEv sslLibraryBuildVersionNumber()
extern "C"
long
C_ZN10QSslSocket28sslLibraryBuildVersionNumberEv() {
  auto ret =
  QSslSocket::sslLibraryBuildVersionNumber();
  return ret; // 0 TypeKind.LONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 187, column 20>
//   // proto: static QString QSslSocket::sslLibraryBuildVersionString();
// _ZN10QSslSocket28sslLibraryBuildVersionStringEv sslLibraryBuildVersionString()
extern "C"
QString*
C_ZN10QSslSocket28sslLibraryBuildVersionStringEv() {
  auto ret =
  QSslSocket::sslLibraryBuildVersionString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 157, column 10>
//   // proto:  bool QSslSocket::addCaCertificates(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
// _ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE addCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
extern "C"
bool
C_ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(void *qthis,
const QString* arg1,
QSsl::EncodingFormat* arg2,
QRegExp::PatternSyntax* arg3) {
  auto ret =
  ((QSslSocket*)qthis)->addCaCertificates(*((const QString*)arg1),
*((QSsl::EncodingFormat*)arg2),
*((QRegExp::PatternSyntax*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 150, column 24>
//   // proto:  void QSslSocket::setCiphers(const QString & ciphers);
// _ZN10QSslSocket10setCiphersERK7QString setCiphers(const class QString &)
extern "C"
void
C_ZN10QSslSocket10setCiphersERK7QString(void *qthis,
const QString* arg1) {
  ((QSslSocket*)qthis)->setCiphers(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 132, column 10>
//   // proto:  void QSslSocket::setLocalCertificate(const QString & fileName, QSsl::EncodingFormat format);
// _ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE setLocalCertificate(const class QString &, QSsl::EncodingFormat)
extern "C"
void
C_ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE(void *qthis,
const QString* arg1,
QSsl::EncodingFormat* arg2) {
  ((QSslSocket*)qthis)->setLocalCertificate(*((const QString*)arg1),
*((QSsl::EncodingFormat*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 81, column 10>
//   // proto:  void QSslSocket::connectToHostEncrypted(const QString & hostName, quint16 port, const QString & sslPeerName, OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol);
// _ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE connectToHostEncrypted(const class QString &, quint16, const class QString &, OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C"
void
C_ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *qthis,
const QString* arg1,
quint16 arg2,
const QString* arg3,
QIODevice::OpenMode arg4,
QAbstractSocket::NetworkLayerProtocol arg5) {
  ((QSslSocket*)qthis)->connectToHostEncrypted(*((const QString*)arg1),
arg2,
*((const QString*)arg3),
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 168, column 17>
//   // proto: static void QSslSocket::addDefaultCaCertificates(const QList<QSslCertificate> & certificates);
// _ZN10QSslSocket24addDefaultCaCertificatesERK5QListI15QSslCertificateE addDefaultCaCertificates(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN10QSslSocket24addDefaultCaCertificatesERK5QListI15QSslCertificateE(const QList<QSslCertificate>* arg1) {
  QSslSocket::addDefaultCaCertificates(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 113, column 10>
//   // proto:  bool QSslSocket::flush();
// _ZN10QSslSocket5flushEv flush()
extern "C"
bool
C_ZN10QSslSocket5flushEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->flush();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 109, column 12>
//   // proto:  qint64 QSslSocket::bytesToWrite();
// _ZNK10QSslSocket12bytesToWriteEv bytesToWrite()
extern "C"
long long
C_ZNK10QSslSocket12bytesToWriteEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->bytesToWrite();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 140, column 10>
//   // proto:  void QSslSocket::setPrivateKey(const QSslKey & key);
// _ZN10QSslSocket13setPrivateKeyERK7QSslKey setPrivateKey(const class QSslKey &)
extern "C"
void
C_ZN10QSslSocket13setPrivateKeyERK7QSslKey(void *qthis,
const QSslKey* arg1) {
  ((QSslSocket*)qthis)->setPrivateKey(*((const QSslKey*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 175, column 10>
//   // proto:  bool QSslSocket::waitForConnected(int msecs);
// _ZN10QSslSocket16waitForConnectedEi waitForConnected(int)
extern "C"
bool
C_ZN10QSslSocket16waitForConnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QSslSocket*)qthis)->waitForConnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 112, column 10>
//   // proto:  bool QSslSocket::atEnd();
// _ZNK10QSslSocket5atEndEv atEnd()
extern "C"
bool
C_ZNK10QSslSocket5atEndEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 179, column 10>
//   // proto:  bool QSslSocket::waitForDisconnected(int msecs);
// _ZN10QSslSocket19waitForDisconnectedEi waitForDisconnected(int)
extern "C"
bool
C_ZN10QSslSocket19waitForDisconnectedEi(void *qthis,
int arg1) {
  auto ret =
  ((QSslSocket*)qthis)->waitForDisconnected(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 183, column 17>
//   // proto: static bool QSslSocket::supportsSsl();
// _ZN10QSslSocket11supportsSslEv supportsSsl()
extern "C"
bool
C_ZN10QSslSocket11supportsSslEv() {
  auto ret =
  QSslSocket::supportsSsl();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 170, column 31>
//   // proto: static void QSslSocket::setDefaultCaCertificates(const QList<QSslCertificate> & certificates);
// _ZN10QSslSocket24setDefaultCaCertificatesERK5QListI15QSslCertificateE setDefaultCaCertificates(const QList<class QSslCertificate> &)
extern "C"
void
C_ZN10QSslSocket24setDefaultCaCertificatesERK5QListI15QSslCertificateE(const QList<QSslCertificate>* arg1) {
  QSslSocket::setDefaultCaCertificates(*((const QList<QSslCertificate>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 124, column 23>
//   // proto:  QSslConfiguration QSslSocket::sslConfiguration();
// _ZNK10QSslSocket16sslConfigurationEv sslConfiguration()
extern "C"
QSslConfiguration*
C_ZNK10QSslSocket16sslConfigurationEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->sslConfiguration();
  return new QSslConfiguration(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 199, column 10>
//   // proto:  void QSslSocket::sslErrors(const QList<QSslError> & errors);
// _ZN10QSslSocket9sslErrorsERK5QListI9QSslErrorE sslErrors(const QList<class QSslError> &)
extern "C"
void
C_ZN10QSslSocket9sslErrorsERK5QListI9QSslErrorE(void *qthis,
const QList<QSslError>* arg1) {
  ((QSslSocket*)qthis)->sslErrors(*((const QList<QSslError>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 200, column 10>
//   // proto:  void QSslSocket::modeChanged(QSslSocket::SslMode newMode);
// _ZN10QSslSocket11modeChangedENS_7SslModeE modeChanged(class QSslSocket::SslMode)
extern "C"
void
C_ZN10QSslSocket11modeChangedENS_7SslModeE(void *qthis,
QSslSocket::SslMode* arg1) {
  ((QSslSocket*)qthis)->modeChanged(*((QSslSocket::SslMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 82, column 10>
//   // proto:  bool QSslSocket::setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, OpenMode openMode);
// _ZN10QSslSocket19setSocketDescriptorEiN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, OpenMode)
extern "C"
bool
C_ZN10QSslSocket19setSocketDescriptorEiN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
qintptr arg1,
QAbstractSocket::SocketState arg2,
QIODevice::OpenMode arg3) {
  auto ret =
  ((QSslSocket*)qthis)->setSocketDescriptor(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 163, column 87>
//   // proto:  QList<QSslCertificate> QSslSocket::caCertificates();
// _ZNK10QSslSocket14caCertificatesEv caCertificates()
extern "C"
QList<QSslCertificate>*
C_ZNK10QSslSocket14caCertificatesEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->caCertificates();
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 75, column 14>
//   // proto:  void QSslSocket::QSslSocket(QObject * parent);
extern "C"
QSslSocket*
C_ZN10QSslSocketC2EP7QObject(QObject * arg1) {
  auto ret = new QSslSocket(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 102, column 10>
//   // proto:  void QSslSocket::setPeerVerifyDepth(int depth);
// _ZN10QSslSocket18setPeerVerifyDepthEi setPeerVerifyDepth(int)
extern "C"
void
C_ZN10QSslSocket18setPeerVerifyDepthEi(void *qthis,
int arg1) {
  ((QSslSocket*)qthis)->setPeerVerifyDepth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 98, column 32>
//   // proto:  QSslSocket::PeerVerifyMode QSslSocket::peerVerifyMode();
// _ZNK10QSslSocket14peerVerifyModeEv peerVerifyMode()
extern "C"
QSslSocket::PeerVerifyMode
C_ZNK10QSslSocket14peerVerifyModeEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->peerVerifyMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 185, column 20>
//   // proto: static QString QSslSocket::sslLibraryVersionString();
// _ZN10QSslSocket23sslLibraryVersionStringEv sslLibraryVersionString()
extern "C"
QString*
C_ZN10QSslSocket23sslLibraryVersionStringEv() {
  auto ret =
  QSslSocket::sslLibraryVersionString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 60, column 5>
//   // proto:  const QMetaObject * QSslSocket::metaObject();
// _ZNK10QSslSocket10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QSslSocket10metaObjectEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 202, column 10>
//   // proto:  void QSslSocket::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * authenticator);
// _ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
extern "C"
void
C_ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *qthis,
QSslPreSharedKeyAuthenticator * arg1) {
  ((QSslSocket*)qthis)->preSharedKeyAuthenticationRequired(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 171, column 49>
//   // proto: static QList<QSslCertificate> QSslSocket::defaultCaCertificates();
// _ZN10QSslSocket21defaultCaCertificatesEv defaultCaCertificates()
extern "C"
QList<QSslCertificate>*
C_ZN10QSslSocket21defaultCaCertificatesEv() {
  auto ret =
  QSslSocket::defaultCaCertificates();
  return new QList<QSslCertificate>(ret); // 5
}
//   // proto:  void QSslSocket::~QSslSocket();
extern "C"
void C_ZN10QSslSocketD2Ev(void *qthis) {
  delete (QSslSocket*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 144, column 13>
//   // proto:  QSslKey QSslSocket::privateKey();
// _ZNK10QSslSocket10privateKeyEv privateKey()
extern "C"
QSslKey*
C_ZNK10QSslSocket10privateKeyEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->privateKey();
  return new QSslKey(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 181, column 22>
//   // proto:  QList<QSslError> QSslSocket::sslErrors();
// _ZNK10QSslSocket9sslErrorsEv sslErrors()
extern "C"
QList<QSslError>*
C_ZNK10QSslSocket9sslErrorsEv(void *qthis) {
  auto ret =
  ((QSslSocket*)qthis)->sslErrors();
  return new QList<QSslError>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslsocket.h', line 201, column 10>
//   // proto:  void QSslSocket::encryptedBytesWritten(qint64 totalBytes);
// _ZN10QSslSocket21encryptedBytesWrittenEx encryptedBytesWritten(qint64)
extern "C"
void
C_ZN10QSslSocket21encryptedBytesWrittenEx(void *qthis,
qint64 arg1) {
  ((QSslSocket*)qthis)->encryptedBytesWritten(arg1);
}
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

