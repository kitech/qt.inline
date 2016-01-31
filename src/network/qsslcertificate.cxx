#include <qstring.h>
#include <qmap.h>
#include <qmultimap.h>
#include <qabstractnetworkcache.h>
#include <qnamespace.h>
#include <qdatetime.h>
#include <qstringlist.h>
#include <qlist.h>
#include <qsslkey.h>
#include <qbytearray.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qsslcertificate.h
// dst-file: /src/network/qsslcertificate.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsslcertificate.h>

extern "C" {

int QSslCertificate_Class_Size()
{
  return sizeof(QSslCertificate);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsslcertificate_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 127, column 16>
//   // proto:  QByteArray QSslCertificate::toPem();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->toPem();
    flythis.toPem();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate5toPemEv toPem()
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
//   // proto:  void QSslCertificate::~QSslCertificate();
if (true) {
  delete ((QSslCertificate*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 124, column 13>
//   // proto:  QSslKey QSslCertificate::publicKey();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->publicKey();
    flythis.publicKey();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate9publicKeyEv publicKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 116, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::issuerInfoAttributes();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->issuerInfoAttributes();
    flythis.issuerInfoAttributes();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate20issuerInfoAttributesEv issuerInfoAttributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 111, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info);
if (true) {
  auto f = [](QSslCertificate flythis, QSslCertificate::SubjectInfo arg1) {
    ((QSslCertificate*)0)->issuerInfo(arg1);
    flythis.issuerInfo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE issuerInfo(enum QSslCertificate::SubjectInfo)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 112, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(const QByteArray & attribute);
if (true) {
  auto f = [](QSslCertificate flythis, const QByteArray & arg1) {
    ((QSslCertificate*)0)->issuerInfo(arg1);
    flythis.issuerInfo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate10issuerInfoERK10QByteArray issuerInfo(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 94, column 10>
//   // proto:  bool QSslCertificate::isNull();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 128, column 16>
//   // proto:  QByteArray QSslCertificate::toDer();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->toDer();
    flythis.toDer();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate5toDerEv toDer()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 105, column 10>
//   // proto:  void QSslCertificate::clear();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 123, column 15>
//   // proto:  QDateTime QSslCertificate::expiryDate();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->expiryDate();
    flythis.expiryDate();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate10expiryDateEv expiryDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 113, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info);
if (true) {
  auto f = [](QSslCertificate flythis, QSslCertificate::SubjectInfo arg1) {
    ((QSslCertificate*)0)->subjectInfo(arg1);
    flythis.subjectInfo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE subjectInfo(enum QSslCertificate::SubjectInfo)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 150, column 16>
//   // proto:  Qt::HANDLE QSslCertificate::handle();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->handle();
    flythis.handle();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate6handleEv handle()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 145, column 17>
//   // proto: static bool QSslCertificate::importPkcs12(QIODevice * device, QSslKey * key, QSslCertificate * cert, QList<QSslCertificate> * caCertificates, const QByteArray & passPhrase);
if (true) {
  auto f = [](QSslCertificate flythis, QIODevice * arg1, QSslKey * arg2, QSslCertificate * arg3, QList<QSslCertificate> * arg4, const QByteArray & arg5) {
    ((QSslCertificate*)0)->importPkcs12(arg1, arg2, arg3, arg4, arg5);
    flythis.importPkcs12(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray importPkcs12(class QIODevice *, class QSslKey *, class QSslCertificate *, QList<class QSslCertificate> *, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 134, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromDevice(QIODevice * device, QSsl::EncodingFormat format);
if (true) {
  auto f = [](QSslCertificate flythis, QIODevice * arg1, QSsl::EncodingFormat arg2) {
    ((QSslCertificate*)0)->fromDevice(arg1, arg2);
    flythis.fromDevice(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE fromDevice(class QIODevice *, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 108, column 16>
//   // proto:  QByteArray QSslCertificate::version();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->version();
    flythis.version();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate7versionEv version()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 110, column 16>
//   // proto:  QByteArray QSslCertificate::digest(QCryptographicHash::Algorithm algorithm);
if (true) {
  auto f = [](QSslCertificate flythis, QCryptographicHash::Algorithm arg1) {
    ((QSslCertificate*)0)->digest(arg1);
    flythis.digest(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE digest(class QCryptographicHash::Algorithm)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 83, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(const QByteArray & data, QSsl::EncodingFormat format);
if (true) {
  auto f = [](const QByteArray & arg1, QSsl::EncodingFormat arg2) {
    new QSslCertificate(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 121, column 56>
//   // proto:  QMultiMap<QSsl::AlternativeNameEntryType, QString> QSslCertificate::subjectAlternativeNames();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->subjectAlternativeNames();
    flythis.subjectAlternativeNames();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate23subjectAlternativeNamesEv subjectAlternativeNames()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 142, column 29>
//   // proto: static QList<QSslError> QSslCertificate::verify(QList<QSslCertificate> certificateChain, const QString & hostName);
if (true) {
  auto f = [](QSslCertificate flythis, QList<QSslCertificate> arg1, const QString & arg2) {
    ((QSslCertificate*)0)->verify(arg1, arg2);
    flythis.verify(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate6verifyE5QListIS_ERK7QString verify(QList<class QSslCertificate>, const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 129, column 13>
//   // proto:  QString QSslCertificate::toText();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->toText();
    flythis.toText();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate6toTextEv toText()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 114, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(const QByteArray & attribute);
if (true) {
  auto f = [](QSslCertificate flythis, const QByteArray & arg1) {
    ((QSslCertificate*)0)->subjectInfo(arg1);
    flythis.subjectInfo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate11subjectInfoERK10QByteArray subjectInfo(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 131, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromPath(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
if (true) {
  auto f = [](QSslCertificate flythis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
    ((QSslCertificate*)0)->fromPath(arg1, arg2, arg3);
    flythis.fromPath(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE fromPath(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 82, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(QIODevice * device, QSsl::EncodingFormat format);
if (true) {
  auto f = [](QIODevice * arg1, QSsl::EncodingFormat arg2) {
    new QSslCertificate(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 125, column 37>
//   // proto:  QList<QSslCertificateExtension> QSslCertificate::extensions();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->extensions();
    flythis.extensions();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate10extensionsEv extensions()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 109, column 16>
//   // proto:  QByteArray QSslCertificate::serialNumber();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->serialNumber();
    flythis.serialNumber();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate12serialNumberEv serialNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 104, column 10>
//   // proto:  bool QSslCertificate::isSelfSigned();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->isSelfSigned();
    flythis.isSelfSigned();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate12isSelfSignedEv isSelfSigned()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 84, column 5>
//   // proto:  void QSslCertificate::QSslCertificate(const QSslCertificate & other);
if (true) {
  auto f = [](const QSslCertificate & arg1) {
    new QSslCertificate(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 103, column 10>
//   // proto:  bool QSslCertificate::isBlacklisted();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->isBlacklisted();
    flythis.isBlacklisted();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate13isBlacklistedEv isBlacklisted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 136, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromData(const QByteArray & data, QSsl::EncodingFormat format);
if (true) {
  auto f = [](QSslCertificate flythis, const QByteArray & arg1, QSsl::EncodingFormat arg2) {
    ((QSslCertificate*)0)->fromData(arg1, arg2);
    flythis.fromData(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE fromData(const class QByteArray &, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 115, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::subjectInfoAttributes();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->subjectInfoAttributes();
    flythis.subjectInfoAttributes();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate21subjectInfoAttributesEv subjectInfoAttributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 122, column 15>
//   // proto:  QDateTime QSslCertificate::effectiveDate();
if (true) {
  auto f = [](QSslCertificate flythis) {
    ((QSslCertificate*)0)->effectiveDate();
    flythis.effectiveDate();
  };
  if (f == nullptr){}
}
// _ZNK15QSslCertificate13effectiveDateEv effectiveDate()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 127, column 16>
//   // proto:  QByteArray QSslCertificate::toPem();
extern "C"
void C_ZNK15QSslCertificate5toPemEv(void *qthis) {
  ((QSslCertificate*)qthis)->toPem();
}
// _ZNK15QSslCertificate5toPemEv toPem()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 88, column 17>
//   // proto:  void QSslCertificate::swap(QSslCertificate & other);
extern "C"
void C_ZN15QSslCertificate4swapERS_(void *qthis, QSslCertificate & arg1) {
  ((QSslCertificate*)qthis)->swap(arg1);
}
// _ZN15QSslCertificate4swapERS_ swap(class QSslCertificate &)
//   // proto:  void QSslCertificate::~QSslCertificate();
extern "C"
void C_ZN15QSslCertificateD2Ev(void *qthis) {
  delete (QSslCertificate*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 124, column 13>
//   // proto:  QSslKey QSslCertificate::publicKey();
extern "C"
void C_ZNK15QSslCertificate9publicKeyEv(void *qthis) {
  ((QSslCertificate*)qthis)->publicKey();
}
// _ZNK15QSslCertificate9publicKeyEv publicKey()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 116, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::issuerInfoAttributes();
extern "C"
void C_ZNK15QSslCertificate20issuerInfoAttributesEv(void *qthis) {
  ((QSslCertificate*)qthis)->issuerInfoAttributes();
}
// _ZNK15QSslCertificate20issuerInfoAttributesEv issuerInfoAttributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 111, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info);
extern "C"
void C_ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE(void *qthis, QSslCertificate::SubjectInfo arg1) {
  ((QSslCertificate*)qthis)->issuerInfo(arg1);
}
// _ZNK15QSslCertificate10issuerInfoENS_11SubjectInfoE issuerInfo(enum QSslCertificate::SubjectInfo)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 112, column 17>
//   // proto:  QStringList QSslCertificate::issuerInfo(const QByteArray & attribute);
extern "C"
void C_ZNK15QSslCertificate10issuerInfoERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QSslCertificate*)qthis)->issuerInfo(arg1);
}
// _ZNK15QSslCertificate10issuerInfoERK10QByteArray issuerInfo(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 94, column 10>
//   // proto:  bool QSslCertificate::isNull();
extern "C"
void C_ZNK15QSslCertificate6isNullEv(void *qthis) {
  ((QSslCertificate*)qthis)->isNull();
}
// _ZNK15QSslCertificate6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 128, column 16>
//   // proto:  QByteArray QSslCertificate::toDer();
extern "C"
void C_ZNK15QSslCertificate5toDerEv(void *qthis) {
  ((QSslCertificate*)qthis)->toDer();
}
// _ZNK15QSslCertificate5toDerEv toDer()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 105, column 10>
//   // proto:  void QSslCertificate::clear();
extern "C"
void C_ZN15QSslCertificate5clearEv(void *qthis) {
  ((QSslCertificate*)qthis)->clear();
}
// _ZN15QSslCertificate5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 123, column 15>
//   // proto:  QDateTime QSslCertificate::expiryDate();
extern "C"
void C_ZNK15QSslCertificate10expiryDateEv(void *qthis) {
  ((QSslCertificate*)qthis)->expiryDate();
}
// _ZNK15QSslCertificate10expiryDateEv expiryDate()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 113, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info);
extern "C"
void C_ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE(void *qthis, QSslCertificate::SubjectInfo arg1) {
  ((QSslCertificate*)qthis)->subjectInfo(arg1);
}
// _ZNK15QSslCertificate11subjectInfoENS_11SubjectInfoE subjectInfo(enum QSslCertificate::SubjectInfo)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 150, column 16>
//   // proto:  Qt::HANDLE QSslCertificate::handle();
extern "C"
void C_ZNK15QSslCertificate6handleEv(void *qthis) {
  ((QSslCertificate*)qthis)->handle();
}
// _ZNK15QSslCertificate6handleEv handle()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 145, column 17>
//   // proto: static bool QSslCertificate::importPkcs12(QIODevice * device, QSslKey * key, QSslCertificate * cert, QList<QSslCertificate> * caCertificates, const QByteArray & passPhrase);
extern "C"
void C_ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray(void *qthis, QIODevice * arg1, QSslKey * arg2, QSslCertificate * arg3, QList<QSslCertificate> * arg4, const QByteArray & arg5) {
  ((QSslCertificate*)qthis)->importPkcs12(arg1, arg2, arg3, arg4, arg5);
}
// _ZN15QSslCertificate12importPkcs12EP9QIODeviceP7QSslKeyPS_P5QListIS_ERK10QByteArray importPkcs12(class QIODevice *, class QSslKey *, class QSslCertificate *, QList<class QSslCertificate> *, const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 134, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromDevice(QIODevice * device, QSsl::EncodingFormat format);
extern "C"
void C_ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE(void *qthis, QIODevice * arg1, QSsl::EncodingFormat arg2) {
  ((QSslCertificate*)qthis)->fromDevice(arg1, arg2);
}
// _ZN15QSslCertificate10fromDeviceEP9QIODeviceN4QSsl14EncodingFormatE fromDevice(class QIODevice *, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 108, column 16>
//   // proto:  QByteArray QSslCertificate::version();
extern "C"
void C_ZNK15QSslCertificate7versionEv(void *qthis) {
  ((QSslCertificate*)qthis)->version();
}
// _ZNK15QSslCertificate7versionEv version()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 110, column 16>
//   // proto:  QByteArray QSslCertificate::digest(QCryptographicHash::Algorithm algorithm);
extern "C"
void C_ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE(void *qthis, QCryptographicHash::Algorithm arg1) {
  ((QSslCertificate*)qthis)->digest(arg1);
}
// _ZNK15QSslCertificate6digestEN18QCryptographicHash9AlgorithmE digest(class QCryptographicHash::Algorithm)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 83, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(const QByteArray & data, QSsl::EncodingFormat format);
extern "C"
void C_ZN15QSslCertificateC2ERK10QByteArrayN4QSsl14EncodingFormatE(const QByteArray & arg1, QSsl::EncodingFormat arg2) {
  new QSslCertificate(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 121, column 56>
//   // proto:  QMultiMap<QSsl::AlternativeNameEntryType, QString> QSslCertificate::subjectAlternativeNames();
extern "C"
void C_ZNK15QSslCertificate23subjectAlternativeNamesEv(void *qthis) {
  ((QSslCertificate*)qthis)->subjectAlternativeNames();
}
// _ZNK15QSslCertificate23subjectAlternativeNamesEv subjectAlternativeNames()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 142, column 29>
//   // proto: static QList<QSslError> QSslCertificate::verify(QList<QSslCertificate> certificateChain, const QString & hostName);
extern "C"
void C_ZN15QSslCertificate6verifyE5QListIS_ERK7QString(void *qthis, QList<QSslCertificate> arg1, const QString & arg2) {
  ((QSslCertificate*)qthis)->verify(arg1, arg2);
}
// _ZN15QSslCertificate6verifyE5QListIS_ERK7QString verify(QList<class QSslCertificate>, const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 129, column 13>
//   // proto:  QString QSslCertificate::toText();
extern "C"
void C_ZNK15QSslCertificate6toTextEv(void *qthis) {
  ((QSslCertificate*)qthis)->toText();
}
// _ZNK15QSslCertificate6toTextEv toText()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 114, column 17>
//   // proto:  QStringList QSslCertificate::subjectInfo(const QByteArray & attribute);
extern "C"
void C_ZNK15QSslCertificate11subjectInfoERK10QByteArray(void *qthis, const QByteArray & arg1) {
  ((QSslCertificate*)qthis)->subjectInfo(arg1);
}
// _ZNK15QSslCertificate11subjectInfoERK10QByteArray subjectInfo(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 131, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromPath(const QString & path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax);
extern "C"
void C_ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE(void *qthis, const QString & arg1, QSsl::EncodingFormat arg2, QRegExp::PatternSyntax arg3) {
  ((QSslCertificate*)qthis)->fromPath(arg1, arg2, arg3);
}
// _ZN15QSslCertificate8fromPathERK7QStringN4QSsl14EncodingFormatEN7QRegExp13PatternSyntaxE fromPath(const class QString &, QSsl::EncodingFormat, class QRegExp::PatternSyntax)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 82, column 14>
//   // proto:  void QSslCertificate::QSslCertificate(QIODevice * device, QSsl::EncodingFormat format);
extern "C"
void C_ZN15QSslCertificateC2EP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * arg1, QSsl::EncodingFormat arg2) {
  new QSslCertificate(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 125, column 37>
//   // proto:  QList<QSslCertificateExtension> QSslCertificate::extensions();
extern "C"
void C_ZNK15QSslCertificate10extensionsEv(void *qthis) {
  ((QSslCertificate*)qthis)->extensions();
}
// _ZNK15QSslCertificate10extensionsEv extensions()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 109, column 16>
//   // proto:  QByteArray QSslCertificate::serialNumber();
extern "C"
void C_ZNK15QSslCertificate12serialNumberEv(void *qthis) {
  ((QSslCertificate*)qthis)->serialNumber();
}
// _ZNK15QSslCertificate12serialNumberEv serialNumber()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 104, column 10>
//   // proto:  bool QSslCertificate::isSelfSigned();
extern "C"
void C_ZNK15QSslCertificate12isSelfSignedEv(void *qthis) {
  ((QSslCertificate*)qthis)->isSelfSigned();
}
// _ZNK15QSslCertificate12isSelfSignedEv isSelfSigned()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 84, column 5>
//   // proto:  void QSslCertificate::QSslCertificate(const QSslCertificate & other);
extern "C"
void C_ZN15QSslCertificateC2ERKS_(const QSslCertificate & arg1) {
  new QSslCertificate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 103, column 10>
//   // proto:  bool QSslCertificate::isBlacklisted();
extern "C"
void C_ZNK15QSslCertificate13isBlacklistedEv(void *qthis) {
  ((QSslCertificate*)qthis)->isBlacklisted();
}
// _ZNK15QSslCertificate13isBlacklistedEv isBlacklisted()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 136, column 35>
//   // proto: static QList<QSslCertificate> QSslCertificate::fromData(const QByteArray & data, QSsl::EncodingFormat format);
extern "C"
void C_ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE(void *qthis, const QByteArray & arg1, QSsl::EncodingFormat arg2) {
  ((QSslCertificate*)qthis)->fromData(arg1, arg2);
}
// _ZN15QSslCertificate8fromDataERK10QByteArrayN4QSsl14EncodingFormatE fromData(const class QByteArray &, QSsl::EncodingFormat)
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 115, column 23>
//   // proto:  QList<QByteArray> QSslCertificate::subjectInfoAttributes();
extern "C"
void C_ZNK15QSslCertificate21subjectInfoAttributesEv(void *qthis) {
  ((QSslCertificate*)qthis)->subjectInfoAttributes();
}
// _ZNK15QSslCertificate21subjectInfoAttributesEv subjectInfoAttributes()
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificate.h', line 122, column 15>
//   // proto:  QDateTime QSslCertificate::effectiveDate();
extern "C"
void C_ZNK15QSslCertificate13effectiveDateEv(void *qthis) {
  ((QSslCertificate*)qthis)->effectiveDate();
}
// _ZNK15QSslCertificate13effectiveDateEv effectiveDate()
// <= ext block end

// body block begin =>
// <= body block end

