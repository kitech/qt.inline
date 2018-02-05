//  header block begin
// /usr/include/qt/QtNetwork/qhstspolicy.h
#include <qhstspolicy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHstsPolicy is pure virtual: false
// QHstsPolicy has virtual projected: false
//  header block end

//  main block begin

class MyQHstsPolicy : public QHstsPolicy {
public:
  virtual ~MyQHstsPolicy() {}
// void QHstsPolicy()
MyQHstsPolicy() : QHstsPolicy() {}
// void QHstsPolicy(const class QDateTime &, QHstsPolicy::PolicyFlags, const class QString &, class QUrl::ParsingMode)
MyQHstsPolicy(const QDateTime & expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString & host, QUrl::ParsingMode mode) : QHstsPolicy(expiry, flags, host, mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:63
// [-2] void QHstsPolicy()
extern "C"
void* C_ZN11QHstsPolicyC2Ev() {
  return  new QHstsPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:64
// [-2] void QHstsPolicy(const class QDateTime &, QHstsPolicy::PolicyFlags, const class QString &, class QUrl::ParsingMode)
extern "C"
void* C_ZN11QHstsPolicyC2ERK9QDateTime6QFlagsINS_10PolicyFlagEERK7QStringN4QUrl11ParsingModeE(QDateTime* expiry, QFlags<QHstsPolicy::PolicyFlag> flags, QString* host, QUrl::ParsingMode mode) {
  return  new QHstsPolicy(*expiry, flags, *host, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:69
// [-2] void ~QHstsPolicy()
extern "C"
void C_ZN11QHstsPolicyD2Ev(void *this_) {
  delete (QHstsPolicy*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:71
// [-2] void swap(class QHstsPolicy &)
extern "C"
void C_ZN11QHstsPolicy4swapERS_(void *this_, QHstsPolicy* other) {
  ((QHstsPolicy*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:73
// [-2] void setHost(const class QString &, class QUrl::ParsingMode)
extern "C"
void C_ZN11QHstsPolicy7setHostERK7QStringN4QUrl11ParsingModeE(void *this_, QString* host, QUrl::ParsingMode mode) {
  ((QHstsPolicy*)this_)->setHost(*host, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:75
// [-2] void setExpiry(const class QDateTime &)
extern "C"
void C_ZN11QHstsPolicy9setExpiryERK9QDateTime(void *this_, QDateTime* expiry) {
  ((QHstsPolicy*)this_)->setExpiry(*expiry);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:76
// [8] QDateTime expiry()
extern "C"
void* C_ZNK11QHstsPolicy6expiryEv(void *this_) {
  auto rv = ((QHstsPolicy*)this_)->expiry();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:77
// [-2] void setIncludesSubDomains(_Bool)
extern "C"
void C_ZN11QHstsPolicy21setIncludesSubDomainsEb(void *this_, bool include) {
  ((QHstsPolicy*)this_)->setIncludesSubDomains(include);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:78
// [1] bool includesSubDomains()
extern "C"
bool C_ZNK11QHstsPolicy18includesSubDomainsEv(void *this_) {
  return (bool)((QHstsPolicy*)this_)->includesSubDomains();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:80
// [1] bool isExpired()
extern "C"
bool C_ZNK11QHstsPolicy9isExpiredEv(void *this_) {
  return (bool)((QHstsPolicy*)this_)->isExpired();
}
//  main block end
