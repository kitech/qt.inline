// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qsslcertificateextension.h
// dst-file: /src/network/qsslcertificateextension.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsslcertificateextension.h>


#include <qvariant.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsslcertificateextension_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 58, column 10>
//   // proto:  void QSslCertificateExtension::swap(QSslCertificateExtension & other);
if (true) {
  auto f = [](QSslCertificateExtension flythis, QSslCertificateExtension & arg1) {
    ((QSslCertificateExtension*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN24QSslCertificateExtension4swapERS_ swap(class QSslCertificateExtension &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSslCertificateExtension_Class_Size()
{
  return sizeof(QSslCertificateExtension);
}

// <= use block end

// ext block begin =>
//   // proto:  void QSslCertificateExtension::~QSslCertificateExtension();
extern "C"
void C_ZN24QSslCertificateExtensionD2Ev(void *qthis) {
  delete (QSslCertificateExtension*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 65, column 10>
//   // proto:  bool QSslCertificateExtension::isSupported();
// _ZNK24QSslCertificateExtension11isSupportedEv isSupported()
extern "C"
bool
C_ZNK24QSslCertificateExtension11isSupportedEv(void *qthis) {
  auto ret =
  ((QSslCertificateExtension*)qthis)->isSupported();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 52, column 5>
//   // proto:  void QSslCertificateExtension::QSslCertificateExtension();
extern "C"
QSslCertificateExtension*
C_ZN24QSslCertificateExtensionC2Ev() {
  auto ret = new QSslCertificateExtension();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 62, column 14>
//   // proto:  QVariant QSslCertificateExtension::value();
// _ZNK24QSslCertificateExtension5valueEv value()
extern "C"
QVariant*
C_ZNK24QSslCertificateExtension5valueEv(void *qthis) {
  auto ret =
  ((QSslCertificateExtension*)qthis)->value();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 61, column 13>
//   // proto:  QString QSslCertificateExtension::name();
// _ZNK24QSslCertificateExtension4nameEv name()
extern "C"
QString*
C_ZNK24QSslCertificateExtension4nameEv(void *qthis) {
  auto ret =
  ((QSslCertificateExtension*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 60, column 13>
//   // proto:  QString QSslCertificateExtension::oid();
// _ZNK24QSslCertificateExtension3oidEv oid()
extern "C"
QString*
C_ZNK24QSslCertificateExtension3oidEv(void *qthis) {
  auto ret =
  ((QSslCertificateExtension*)qthis)->oid();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 63, column 10>
//   // proto:  bool QSslCertificateExtension::isCritical();
// _ZNK24QSslCertificateExtension10isCriticalEv isCritical()
extern "C"
bool
C_ZNK24QSslCertificateExtension10isCriticalEv(void *qthis) {
  auto ret =
  ((QSslCertificateExtension*)qthis)->isCritical();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 58, column 10>
//   // proto:  void QSslCertificateExtension::swap(QSslCertificateExtension & other);
// _ZN24QSslCertificateExtension4swapERS_ swap(class QSslCertificateExtension &)
extern "C"
void
C_ZN24QSslCertificateExtension4swapERS_(void *qthis,
QSslCertificateExtension* arg1) {
  ((QSslCertificateExtension*)qthis)->swap(*((QSslCertificateExtension*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qsslcertificateextension.h', line 53, column 5>
//   // proto:  void QSslCertificateExtension::QSslCertificateExtension(const QSslCertificateExtension & other);
extern "C"
QSslCertificateExtension*
C_ZN24QSslCertificateExtensionC2ERKS_(const QSslCertificateExtension* arg1) {
  auto ret = new QSslCertificateExtension(*((const QSslCertificateExtension*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

