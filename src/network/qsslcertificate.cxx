//  header block begin
// since 0x040300
// /usr/include/qt/QtNetwork/qsslcertificate.h
#ifndef protected
#define protected public
#endif
#include <qsslcertificate.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificate is pure virtual: false
// QSslCertificate has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslCertificate : public QSslCertificate {
public:
  virtual ~MyQSslCertificate() {}
// void QSslCertificate(class QIODevice *, QSsl::EncodingFormat)
MyQSslCertificate(QIODevice * device, QSsl::EncodingFormat format) : QSslCertificate(device, format) {}
// void QSslCertificate(const class QByteArray &, QSsl::EncodingFormat)
MyQSslCertificate(const QByteArray & data, QSsl::EncodingFormat format) : QSslCertificate(data, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:89
// [-2] void QSslCertificate(class QIODevice *, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateC2EP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * device, QSsl::EncodingFormat format) {
  return  new QSslCertificate(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:90
// [-2] void QSslCertificate(const class QByteArray &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateC2ERK10QByteArrayN4QSsl14EncodingFormatE(QByteArray* data, QSsl::EncodingFormat format) {
  return  new QSslCertificate(*data, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:92
// [-2] void ~QSslCertificate()
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificateD2Ev(void *this_) {
  delete (QSslCertificate*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:94
// [8] QSslCertificate & operator=(class QSslCertificate &&)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateaSEOS_(void *this_, QSslCertificate && other) {
  auto& rv = ((QSslCertificate*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:96
// [8] QSslCertificate & operator=(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSslCertificateaSERKS_(void *this_, QSslCertificate* other) {
  auto& rv = ((QSslCertificate*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:98
// [-2] void swap(class QSslCertificate &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificate4swapERS_(void *this_, QSslCertificate* other) {
  ((QSslCertificate*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:101
// [1] bool operator==(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificateeqERKS_(void *this_, QSslCertificate* other) {
  return (bool)((QSslCertificate*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:102
// [1] bool operator!=(const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificateneERKS_(void *this_, QSslCertificate* other) {
  return (bool)((QSslCertificate*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:104
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate6isNullEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:113
// [1] bool isBlacklisted()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate13isBlacklistedEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isBlacklisted();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtNetwork/qsslcertificate.h:114
// [1] bool isSelfSigned()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSslCertificate12isSelfSignedEv(void *this_) {
  return (bool)((QSslCertificate*)this_)->isSelfSigned();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:115
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN15QSslCertificate5clearEv(void *this_) {
  ((QSslCertificate*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:118
// [8] QByteArray version()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate7versionEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->version();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:119
// [8] QByteArray serialNumber()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate12serialNumberEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->serialNumber();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:120
// [8] QByteArray digest(class QCryptographicHash::Algorithm)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE(void *this_, QCryptographicHash::Algorithm algorithm) {
  auto rv = ((QSslCertificate*)this_)->digest(algorithm);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:121
// [8] QStringList issuerInfo(enum QSslCertificate::SubjectInfo)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE(void *this_, QSslCertificate::SubjectInfo info) {
  auto rv = ((QSslCertificate*)this_)->issuerInfo(info);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:122
// [8] QStringList issuerInfo(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10issuerInfoERK10QByteArray(void *this_, QByteArray* attribute) {
  auto rv = ((QSslCertificate*)this_)->issuerInfo(*attribute);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:123
// [8] QStringList subjectInfo(enum QSslCertificate::SubjectInfo)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE(void *this_, QSslCertificate::SubjectInfo info) {
  auto rv = ((QSslCertificate*)this_)->subjectInfo(info);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:124
// [8] QStringList subjectInfo(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate11subjectInfoERK10QByteArray(void *this_, QByteArray* attribute) {
  auto rv = ((QSslCertificate*)this_)->subjectInfo(*attribute);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:132
// [8] QDateTime effectiveDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate13effectiveDateEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->effectiveDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:133
// [8] QDateTime expiryDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate10expiryDateEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->expiryDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:134
// [8] QSslKey publicKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate9publicKeyEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->publicKey();
return new QSslKey(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:137
// [8] QByteArray toPem()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate5toPemEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toPem();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:138
// [8] QByteArray toDer()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate5toDerEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toDer();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcertificate.h:139
// [8] QString toText()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSslCertificate6toTextEv(void *this_) {
  auto rv = ((QSslCertificate*)this_)->toText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:160
// [8] Qt::HANDLE handle()
extern "C" Q_DECL_EXPORT
Qt::HANDLE C_ZNK15QSslCertificate6handleEv(void *this_) {
  return (Qt::HANDLE)((QSslCertificate*)this_)->handle();
}

//  main block end
