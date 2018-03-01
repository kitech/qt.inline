//  header block begin
// /usr/include/qt/QtNetwork/qsslsocket.h
#ifndef protected
#define protected public
#endif
#include <qsslsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslSocket is pure virtual: false
// QSslSocket has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslSocket : public QSslSocket {
public:
  virtual ~MyQSslSocket() {}
// void QSslSocket(class QObject *)
MyQSslSocket(QObject * parent) : QSslSocket(parent) {}
// Protected virtual Visibility=Default Availability=Available
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QSslSocket::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QSslSocket::writeData(data, len_);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:212
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QSslSocket8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QSslSocket*)this_)->QSslSocket::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:213
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN10QSslSocket9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QSslSocket*)this_)->QSslSocket::writeData(data, len_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:67
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket10metaObjectEv(void *this_) {
  return (void*)((QSslSocket*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:82
// [-2] void QSslSocket(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslSocketC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSslSocket*)(0);
  return  new MyQSslSocket(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:83
// [-2] void ~QSslSocket()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocketD2Ev(void *this_) {
  delete (QSslSocket*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:84
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket6resumeEv(void *this_) {
  ((QSslSocket*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:87
// [-2] void connectToHostEncrypted(const class QString &, quint16, QIODevice::OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket22connectToHostEncryptedERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *this_, QString* hostName, quint16 port, QFlags<QIODevice::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) {
  ((QSslSocket*)this_)->connectToHostEncrypted(*hostName, port, mode, protocol);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:88
// [-2] void connectToHostEncrypted(const class QString &, quint16, const class QString &, QIODevice::OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket22connectToHostEncryptedERK7QStringtS2_6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *this_, QString* hostName, quint16 port, QString* sslPeerName, QFlags<QIODevice::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) {
  ((QSslSocket*)this_)->connectToHostEncrypted(*hostName, port, *sslPeerName, mode, protocol);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:89
// [1] bool setSocketDescriptor(qintptr, enum QAbstractSocket::SocketState, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket19setSocketDescriptorExN15QAbstractSocket11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QSslSocket*)this_)->setSocketDescriptor(socketDescriptor, state, openMode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:93
// [-2] void connectToHost(const class QString &, quint16, QIODevice::OpenMode, enum QAbstractSocket::NetworkLayerProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEEN15QAbstractSocket20NetworkLayerProtocolE(void *this_, QString* hostName, quint16 port, QFlags<QIODevice::OpenModeFlag> openMode, QAbstractSocket::NetworkLayerProtocol protocol) {
  ((QSslSocket*)this_)->connectToHost(*hostName, port, openMode, protocol);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:94
// [-2] void disconnectFromHost()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket18disconnectFromHostEv(void *this_) {
  ((QSslSocket*)this_)->disconnectFromHost();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:96
// [-2] void setSocketOption(class QAbstractSocket::SocketOption, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket15setSocketOptionEN15QAbstractSocket12SocketOptionERK8QVariant(void *this_, QAbstractSocket::SocketOption option, QVariant* value) {
  ((QSslSocket*)this_)->setSocketOption(option, *value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:97
// [16] QVariant socketOption(class QAbstractSocket::SocketOption)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslSocket12socketOptionEN15QAbstractSocket12SocketOptionE(void *this_, QAbstractSocket::SocketOption option) {
  auto rv = ((QSslSocket*)this_)->socketOption(option);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:99
// [4] QSslSocket::SslMode mode()
extern "C" Q_DECL_EXPORT
QSslSocket::SslMode C_ZNK10QSslSocket4modeEv(void *this_) {
  return (QSslSocket::SslMode)((QSslSocket*)this_)->mode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:100
// [1] bool isEncrypted()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslSocket11isEncryptedEv(void *this_) {
  return (bool)((QSslSocket*)this_)->isEncrypted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:102
// [4] QSsl::SslProtocol protocol()
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK10QSslSocket8protocolEv(void *this_) {
  return (QSsl::SslProtocol)((QSslSocket*)this_)->protocol();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:103
// [-2] void setProtocol(QSsl::SslProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket11setProtocolEN4QSsl11SslProtocolE(void *this_, QSsl::SslProtocol protocol) {
  ((QSslSocket*)this_)->setProtocol(protocol);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:105
// [4] QSslSocket::PeerVerifyMode peerVerifyMode()
extern "C" Q_DECL_EXPORT
QSslSocket::PeerVerifyMode C_ZNK10QSslSocket14peerVerifyModeEv(void *this_) {
  return (QSslSocket::PeerVerifyMode)((QSslSocket*)this_)->peerVerifyMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:106
// [-2] void setPeerVerifyMode(class QSslSocket::PeerVerifyMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket17setPeerVerifyModeENS_14PeerVerifyModeE(void *this_, QSslSocket::PeerVerifyMode mode) {
  ((QSslSocket*)this_)->setPeerVerifyMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:108
// [4] int peerVerifyDepth()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSslSocket15peerVerifyDepthEv(void *this_) {
  return (int)((QSslSocket*)this_)->peerVerifyDepth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:109
// [-2] void setPeerVerifyDepth(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket18setPeerVerifyDepthEi(void *this_, int depth) {
  ((QSslSocket*)this_)->setPeerVerifyDepth(depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:111
// [8] QString peerVerifyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket14peerVerifyNameEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->peerVerifyName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:112
// [-2] void setPeerVerifyName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket17setPeerVerifyNameERK7QString(void *this_, QString* hostName) {
  ((QSslSocket*)this_)->setPeerVerifyName(*hostName);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:115
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QSslSocket14bytesAvailableEv(void *this_) {
  return (qint64)((QSslSocket*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:116
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QSslSocket12bytesToWriteEv(void *this_) {
  return (qint64)((QSslSocket*)this_)->bytesToWrite();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:117
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslSocket11canReadLineEv(void *this_) {
  return (bool)((QSslSocket*)this_)->canReadLine();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:118
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket5closeEv(void *this_) {
  ((QSslSocket*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:119
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslSocket5atEndEv(void *this_) {
  return (bool)((QSslSocket*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:120
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket5flushEv(void *this_) {
  return (bool)((QSslSocket*)this_)->flush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:121
// [-2] void abort()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket5abortEv(void *this_) {
  ((QSslSocket*)this_)->abort();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:124
// [-2] void setReadBufferSize(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket17setReadBufferSizeEx(void *this_, qint64 size) {
  ((QSslSocket*)this_)->setReadBufferSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:127
// [8] qint64 encryptedBytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QSslSocket23encryptedBytesAvailableEv(void *this_) {
  return (qint64)((QSslSocket*)this_)->encryptedBytesAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:128
// [8] qint64 encryptedBytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK10QSslSocket21encryptedBytesToWriteEv(void *this_) {
  return (qint64)((QSslSocket*)this_)->encryptedBytesToWrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:131
// [8] QSslConfiguration sslConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket16sslConfigurationEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->sslConfiguration();
return new QSslConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:132
// [-2] void setSslConfiguration(const class QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket19setSslConfigurationERK17QSslConfiguration(void *this_, QSslConfiguration* config) {
  ((QSslSocket*)this_)->setSslConfiguration(*config);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:138
// [-2] void setLocalCertificate(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket19setLocalCertificateERK15QSslCertificate(void *this_, QSslCertificate* certificate) {
  ((QSslSocket*)this_)->setLocalCertificate(*certificate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:139
// [-2] void setLocalCertificate(const class QString &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket19setLocalCertificateERK7QStringN4QSsl14EncodingFormatE(void *this_, QString* fileName, QSsl::EncodingFormat format) {
  ((QSslSocket*)this_)->setLocalCertificate(*fileName, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:140
// [8] QSslCertificate localCertificate()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket16localCertificateEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->localCertificate();
return new QSslCertificate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:141
// [8] QSslCertificate peerCertificate()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket15peerCertificateEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->peerCertificate();
return new QSslCertificate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:143
// [8] QSslCipher sessionCipher()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket13sessionCipherEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->sessionCipher();
return new QSslCipher(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:144
// [4] QSsl::SslProtocol sessionProtocol()
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK10QSslSocket15sessionProtocolEv(void *this_) {
  return (QSsl::SslProtocol)((QSslSocket*)this_)->sessionProtocol();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:147
// [-2] void setPrivateKey(const class QSslKey &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket13setPrivateKeyERK7QSslKey(void *this_, QSslKey* key) {
  ((QSslSocket*)this_)->setPrivateKey(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:148
// [-2] void setPrivateKey(const class QString &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket13setPrivateKeyERK7QStringN4QSsl12KeyAlgorithmENS3_14EncodingFormatERK10QByteArray(void *this_, QString* fileName, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QByteArray* passPhrase) {
  ((QSslSocket*)this_)->setPrivateKey(*fileName, algorithm, format, *passPhrase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:151
// [8] QSslKey privateKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslSocket10privateKeyEv(void *this_) {
  auto rv = ((QSslSocket*)this_)->privateKey();
return new QSslKey(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:157
// [-2] void setCiphers(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket10setCiphersERK7QString(void *this_, QString* ciphers) {
  ((QSslSocket*)this_)->setCiphers(*ciphers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:164
// [1] bool addCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket17addCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(void *this_, QString* path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax) {
  return (bool)((QSslSocket*)this_)->addCaCertificates(*path, format, syntax);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:166
// [-2] void addCaCertificate(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket16addCaCertificateERK15QSslCertificate(void *this_, QSslCertificate* certificate) {
  ((QSslSocket*)this_)->addCaCertificate(*certificate);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:172
// [1] bool addDefaultCaCertificates(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket24addDefaultCaCertificatesERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(QString* path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax) {
  return (bool)QSslSocket::addDefaultCaCertificates(*path, format, syntax);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:174
// [-2] void addDefaultCaCertificate(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket23addDefaultCaCertificateERK15QSslCertificate(QSslCertificate* certificate) {
  QSslSocket::addDefaultCaCertificate(*certificate);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:182
// [1] bool waitForConnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket16waitForConnectedEi(void *this_, int msecs) {
  return (bool)((QSslSocket*)this_)->waitForConnected(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:183
// [1] bool waitForEncrypted(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket16waitForEncryptedEi(void *this_, int msecs) {
  return (bool)((QSslSocket*)this_)->waitForEncrypted(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:184
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QSslSocket*)this_)->waitForReadyRead(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:185
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QSslSocket*)this_)->waitForBytesWritten(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:186
// [1] bool waitForDisconnected(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket19waitForDisconnectedEi(void *this_, int msecs) {
  return (bool)((QSslSocket*)this_)->waitForDisconnected(msecs);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:190
// [1] bool supportsSsl()
extern "C" Q_DECL_EXPORT
bool C_ZN10QSslSocket11supportsSslEv() {
  return (bool)QSslSocket::supportsSsl();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:191
// [8] long sslLibraryVersionNumber()
extern "C" Q_DECL_EXPORT
long C_ZN10QSslSocket23sslLibraryVersionNumberEv() {
  return (long)QSslSocket::sslLibraryVersionNumber();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:192
// [8] QString sslLibraryVersionString()
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslSocket23sslLibraryVersionStringEv() {
  auto rv = QSslSocket::sslLibraryVersionString();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:193
// [8] long sslLibraryBuildVersionNumber()
extern "C" Q_DECL_EXPORT
long C_ZN10QSslSocket28sslLibraryBuildVersionNumberEv() {
  return (long)QSslSocket::sslLibraryBuildVersionNumber();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:194
// [8] QString sslLibraryBuildVersionString()
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslSocket28sslLibraryBuildVersionStringEv() {
  auto rv = QSslSocket::sslLibraryBuildVersionString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:199
// [-2] void startClientEncryption()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket21startClientEncryptionEv(void *this_) {
  ((QSslSocket*)this_)->startClientEncryption();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:200
// [-2] void startServerEncryption()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket21startServerEncryptionEv(void *this_) {
  ((QSslSocket*)this_)->startServerEncryption();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:201
// [-2] void ignoreSslErrors()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket15ignoreSslErrorsEv(void *this_) {
  ((QSslSocket*)this_)->ignoreSslErrors();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:204
// [-2] void encrypted()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket9encryptedEv(void *this_) {
  ((QSslSocket*)this_)->encrypted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:205
// [-2] void peerVerifyError(const class QSslError &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket15peerVerifyErrorERK9QSslError(void *this_, QSslError* error) {
  ((QSslSocket*)this_)->peerVerifyError(*error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:207
// [-2] void modeChanged(class QSslSocket::SslMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket11modeChangedENS_7SslModeE(void *this_, QSslSocket::SslMode newMode) {
  ((QSslSocket*)this_)->modeChanged(newMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:208
// [-2] void encryptedBytesWritten(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket21encryptedBytesWrittenEx(void *this_, qint64 totalBytes) {
  ((QSslSocket*)this_)->encryptedBytesWritten(totalBytes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslsocket.h:209
// [-2] void preSharedKeyAuthenticationRequired(class QSslPreSharedKeyAuthenticator *)
extern "C" Q_DECL_EXPORT
void C_ZN10QSslSocket34preSharedKeyAuthenticationRequiredEP29QSslPreSharedKeyAuthenticator(void *this_, QSslPreSharedKeyAuthenticator * authenticator) {
  ((QSslSocket*)this_)->preSharedKeyAuthenticationRequired(authenticator);
}

//  main block end
