//  header block begin
// since 0x050000
// /usr/include/qt/QtNetwork/qsslcertificateextension.h
#ifndef protected
#define protected public
#endif
#include <qsslcertificateextension.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificateExtension is pure virtual: false
// QSslCertificateExtension has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslCertificateExtension : public QSslCertificateExtension {
public:
  virtual ~MyQSslCertificateExtension() {}
// void QSslCertificateExtension()
MyQSslCertificateExtension() : QSslCertificateExtension() {}
// void QSslCertificateExtension(const QSslCertificateExtension &)
MyQSslCertificateExtension(const QSslCertificateExtension & other) : QSslCertificateExtension(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:59
// [-2] void QSslCertificateExtension()
extern "C" Q_DECL_EXPORT
void* C_ZN24QSslCertificateExtensionC2Ev() {
  return  new QSslCertificateExtension();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:60
// [-2] void QSslCertificateExtension(const QSslCertificateExtension &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QSslCertificateExtensionC2ERKS_(QSslCertificateExtension* other) {
  return  new QSslCertificateExtension(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:62
// [8] QSslCertificateExtension & operator=(QSslCertificateExtension &&)
extern "C" Q_DECL_EXPORT
void* C_ZN24QSslCertificateExtensionaSEOS_(void *this_, QSslCertificateExtension && other) {
  auto& rv = ((QSslCertificateExtension*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:64
// [8] QSslCertificateExtension & operator=(const QSslCertificateExtension &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QSslCertificateExtensionaSERKS_(void *this_, QSslCertificateExtension* other) {
  auto& rv = ((QSslCertificateExtension*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:65
// [-2] void ~QSslCertificateExtension()
extern "C" Q_DECL_EXPORT
void C_ZN24QSslCertificateExtensionD2Ev(void *this_) {
  delete (QSslCertificateExtension*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:67
// [-2] void swap(QSslCertificateExtension &)
extern "C" Q_DECL_EXPORT
void C_ZN24QSslCertificateExtension4swapERS_(void *this_, QSslCertificateExtension* other) {
  ((QSslCertificateExtension*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:69
// [8] QString oid()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSslCertificateExtension3oidEv(void *this_) {
  auto rv = ((QSslCertificateExtension*)this_)->oid();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:70
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSslCertificateExtension4nameEv(void *this_) {
  auto rv = ((QSslCertificateExtension*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:71
// [16] QVariant value()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QSslCertificateExtension5valueEv(void *this_) {
  auto rv = ((QSslCertificateExtension*)this_)->value();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:72
// [1] bool isCritical()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QSslCertificateExtension10isCriticalEv(void *this_) {
  return (bool)((QSslCertificateExtension*)this_)->isCritical();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:74
// [1] bool isSupported()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QSslCertificateExtension11isSupportedEv(void *this_) {
  return (bool)((QSslCertificateExtension*)this_)->isSupported();
}

//  main block end
