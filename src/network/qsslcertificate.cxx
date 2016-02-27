// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslcertificate.h
// dst-file: /src/network/qsslcertificate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslcertificate.h>


#include <qbytearray.h>
#include <qsslkey.h>
#include <qlist.h>
#include <qstringlist.h>
#include <qdatetime.h>
#include <qnamespace.h>
#include <qsslcertificate.h>
#include <qabstractnetworkcache.h>
#include <qmap.h>
#include <qsslerror.h>
#include <qstring.h>
#include <qsslcertificateextension.h>
// <= header block end

// main block begin =>
void __keep_qsslcertificate_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 88, column 17>
//   // proto:  void QSslCertificate::swap(QSslCertificate & other);
if (true) {
  auto f = [](QSslCertificate flythis, QSslCertificate & arg1) {
    ((QSslCertificate*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate4swapERS_ swap(class QSslCertificate &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslCertificate_Class_Size()
{
  return sizeof(QSslCertificate);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 127, column 16>
//   // proto:  QByteArray QSslCertificate::toPem();
// _ZNK15QSslCertificate5toPemEv toPem()
extern "C"
QByteArray*
C_ZNK15QSslCertificate5toPemEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->toPem();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 88, column 17>
//   // proto:  void QSslCertificate::swap(QSslCertificate & other);
// _ZN15QSslCertificate4swapERS_ swap(class QSslCertificate &)
extern "C"
void
C_ZN15QSslCertificate4swapERS_(void *qthis,
QSslCertificate* arg1) {
  ((QSslCertificate*)qthis)->swap(*((QSslCertificate*)arg1));
}
//   // proto:  void QSslCertificate::~QSslCertificate();
extern "C"
void C_ZN15QSslCertificateD2Ev(void *qthis) {
  delete (QSslCertificate*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 124, column 13>
//   // proto:  QSslKey QSslCertificate::publicKey();
// _ZNK15QSslCertificate9publicKeyEv publicKey()
extern "C"
QSslKey*
C_ZNK15QSslCertificate9publicKeyEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->publicKey();
  return new QSslKey(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 116, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::issuerInfoAttributes();
// _ZNK15QSslCertificate20issuerInfoAttributesEv issuerInfoAttributes()
extern "C"
QList<QByteArray>*
C_ZNK15QSslCertificate20issuerInfoAttributesEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->issuerInfoAttributes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 111, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info);
// _ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE issuerInfo(enum QSslCertificate::SubjectInfo)
extern "C"
QStringList*
C_ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE(void *qthis,
QSslCertificate::SubjectInfo arg1) {
  auto ret =
  ((QSslCertificate*)qthis)->issuerInfo(arg1);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 112, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(const QByteArray & attribute);
// _ZNK15QSslCertificate10issuerInfoERK10QByteArray issuerInfo(const class QByteArray &)
extern "C"
QStringList*
C_ZNK15QSslCertificate10issuerInfoERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QSslCertificate*)qthis)->issuerInfo(*((const QByteArray*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 94, column 10>
//   // proto:  bool QSslCertificate::isNull();
// _ZNK15QSslCertificate6isNullEv isNull()
extern "C"
bool
C_ZNK15QSslCertificate6isNullEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 128, column 16>
//   // proto:  QByteArray QSslCertificate::toDer();
// _ZNK15QSslCertificate5toDerEv toDer()
extern "C"
QByteArray*
C_ZNK15QSslCertificate5toDerEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->toDer();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 105, column 10>
//   // proto:  void QSslCertificate::clear();
// _ZN15QSslCertificate5clearEv clear()
extern "C"
void
C_ZN15QSslCertificate5clearEv(void *qthis) {
  ((QSslCertificate*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 123, column 15>
//   // proto:  QDateTime QSslCertificate::expiryDate();
// _ZNK15QSslCertificate10expiryDateEv expiryDate()
extern "C"
QDateTime*
C_ZNK15QSslCertificate10expiryDateEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->expiryDate();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 113, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info);
// _ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE subjectInfo(enum QSslCertificate::SubjectInfo)
extern "C"
QStringList*
C_ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE(void *qthis,
QSslCertificate::SubjectInfo arg1) {
  auto ret =
  ((QSslCertificate*)qthis)->subjectInfo(arg1);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 150, column 16>
//   // proto:  Qt::HANDLE QSslCertificate::handle();
// _ZNK15QSslCertificate6handleEv handle()
extern "C"
void*
C_ZNK15QSslCertificate6handleEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 145, column 17>
//   // proto: static bool QSslCertificate::importPkcs12(QIODevice * device, QSslKey * key, QSslCertificate * cert, QList<QSslCertificate> * caCertificates, const QByteArray & passPhrase);
// _ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray importPkcs12(class QIODevice *, class QSslKey *, class QSslCertificate *, QList<class QSslCertificate> *, const class QByteArray &)
extern "C"
bool
C_ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray(QIODevice * arg1,
QSslKey * arg2,
QSslCertificate * arg3,
QList<QSslCertificate> * arg4,
const QByteArray* arg5) {
  auto ret =
  QSslCertificate::importPkcs12(arg1,
arg2,
arg3,
arg4,
*((const QByteArray*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 134, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromDevice(QIODevice * device, QSsl::EncodingFormat format);
// _ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE fromDevice(class QIODevice *, QSsl::EncodingFormat)
extern "C"
QList<QSslCertificate>*
C_ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * arg1,
QSsl::EncodingFormat* arg2) {
  auto ret =
  QSslCertificate::fromDevice(arg1,
*((QSsl::EncodingFormat*)arg2));
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 108, column 16>
//   // proto:  QByteArray QSslCertificate::version();
// _ZNK15QSslCertificate7versionEv version()
extern "C"
QByteArray*
C_ZNK15QSslCertificate7versionEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->version();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 110, column 16>
//   // proto:  QByteArray QSslCertificate::digest(QCryptographicHash::Algorithm algorithm);
// _ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE digest(class QCryptographicHash::Algorithm)
extern "C"
QByteArray*
C_ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE(void *qthis,
QCryptographicHash::Algorithm* arg1) {
  auto ret =
  ((QSslCertificate*)qthis)->digest(*((QCryptographicHash::Algorithm*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 83, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(const QByteArray & data, QSsl::EncodingFormat format);
extern "C"
QSslCertificate*
C_ZN15QSslCertificateC2ERK10QByteArrayN4QSsl14EncodingFormatE(const QByteArray* arg1,
QSsl::EncodingFormat* arg2) {
  auto ret = new QSslCertificate(*((const QByteArray*)arg1), *((QSsl::EncodingFormat*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 121, column 56>
//   // proto:  QMultiMap<QSsl::AlternativeNameEntryType, QString> QSslCertificate::subjectAlternativeNames();
// _ZNK15QSslCertificate23subjectAlternativeNamesEv subjectAlternativeNames()
extern "C"
QMultiMap<QSsl::AlternativeNameEntryType, QString>*
C_ZNK15QSslCertificate23subjectAlternativeNamesEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->subjectAlternativeNames();
  return new QMultiMap<QSsl::AlternativeNameEntryType, QString>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 142, column 29>
//   // proto: static QList<QSslError> QSslCertificate::verify(QList<QSslCertificate> certificateChain, const QString & hostName);
// _ZN15QSslCertificate6verifyE5QListIS_ERK7QString verify(QList<class QSslCertificate>, const class QString &)
extern "C"
QList<QSslError>*
C_ZN15QSslCertificate6verifyE5QListIS_ERK7QString(QList<QSslCertificate>* arg1,
const QString* arg2) {
  auto ret =
  QSslCertificate::verify(*((QList<QSslCertificate>*)arg1),
*((const QString*)arg2));
  return new QList<QSslError>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 129, column 13>
//   // proto:  QString QSslCertificate::toText();
// _ZNK15QSslCertificate6toTextEv toText()
extern "C"
QString*
C_ZNK15QSslCertificate6toTextEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->toText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 114, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(const QByteArray & attribute);
// _ZNK15QSslCertificate11subjectInfoERK10QByteArray subjectInfo(const class QByteArray &)
extern "C"
QStringList*
C_ZNK15QSslCertificate11subjectInfoERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QSslCertificate*)qthis)->subjectInfo(*((const QByteArray*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 131, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromPath(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
// _ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE fromPath(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
extern "C"
QList<QSslCertificate>*
C_ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(const QString* arg1,
QSsl::EncodingFormat* arg2,
QRegExp::PatternSyntax* arg3) {
  auto ret =
  QSslCertificate::fromPath(*((const QString*)arg1),
*((QSsl::EncodingFormat*)arg2),
*((QRegExp::PatternSyntax*)arg3));
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 82, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(QIODevice * device, QSsl::EncodingFormat format);
extern "C"
QSslCertificate*
C_ZN15QSslCertificateC2EP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * arg1,
QSsl::EncodingFormat* arg2) {
  auto ret = new QSslCertificate(arg1, *((QSsl::EncodingFormat*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 125, column 37>
//   // proto:  QList<QSslCertificateExtension> QSslCertificate::extensions();
// _ZNK15QSslCertificate10extensionsEv extensions()
extern "C"
QList<QSslCertificateExtension>*
C_ZNK15QSslCertificate10extensionsEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->extensions();
  return new QList<QSslCertificateExtension>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 109, column 16>
//   // proto:  QByteArray QSslCertificate::serialNumber();
// _ZNK15QSslCertificate12serialNumberEv serialNumber()
extern "C"
QByteArray*
C_ZNK15QSslCertificate12serialNumberEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->serialNumber();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 104, column 10>
//   // proto:  bool QSslCertificate::isSelfSigned();
// _ZNK15QSslCertificate12isSelfSignedEv isSelfSigned()
extern "C"
bool
C_ZNK15QSslCertificate12isSelfSignedEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->isSelfSigned();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 84, column 5>
//   // proto:  void QSslCertificate::QSslCertificate(const QSslCertificate & other);
extern "C"
QSslCertificate*
C_ZN15QSslCertificateC2ERKS_(const QSslCertificate* arg1) {
  auto ret = new QSslCertificate(*((const QSslCertificate*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 103, column 10>
//   // proto:  bool QSslCertificate::isBlacklisted();
// _ZNK15QSslCertificate13isBlacklistedEv isBlacklisted()
extern "C"
bool
C_ZNK15QSslCertificate13isBlacklistedEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->isBlacklisted();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 136, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromData(const QByteArray & data, QSsl::EncodingFormat format);
// _ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE fromData(const class QByteArray &, QSsl::EncodingFormat)
extern "C"
QList<QSslCertificate>*
C_ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE(const QByteArray* arg1,
QSsl::EncodingFormat* arg2) {
  auto ret =
  QSslCertificate::fromData(*((const QByteArray*)arg1),
*((QSsl::EncodingFormat*)arg2));
  return new QList<QSslCertificate>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 115, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::subjectInfoAttributes();
// _ZNK15QSslCertificate21subjectInfoAttributesEv subjectInfoAttributes()
extern "C"
QList<QByteArray>*
C_ZNK15QSslCertificate21subjectInfoAttributesEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->subjectInfoAttributes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 122, column 15>
//   // proto:  QDateTime QSslCertificate::effectiveDate();
// _ZNK15QSslCertificate13effectiveDateEv effectiveDate()
extern "C"
QDateTime*
C_ZNK15QSslCertificate13effectiveDateEv(void *qthis) {
  auto ret =
  ((QSslCertificate*)qthis)->effectiveDate();
  return new QDateTime(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

