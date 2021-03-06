//  header block begin

// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkcookie.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkcookie.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookie is pure virtual: false
// QNetworkCookie has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkCookie_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkCookie_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkCookie_t qt_meta_stringdata_MyQNetworkCookie = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQNetworkCookie"
  },
  "MyQNetworkCookie"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkCookie[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkCookie : public QNetworkCookie {
public:
  virtual ~MyQNetworkCookie() {}
// void QNetworkCookie(const QByteArray &, const QByteArray &)
MyQNetworkCookie(const QByteArray & name, const QByteArray & value) : QNetworkCookie(name, value) {}
// void QNetworkCookie(const QNetworkCookie &)
MyQNetworkCookie(const QNetworkCookie & other) : QNetworkCookie(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:66
// [-2] void QNetworkCookie(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QNetworkCookieC2ERK10QByteArrayS2_(QByteArray* name, QByteArray* value) {
  return  new QNetworkCookie(*name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:67
// [-2] void QNetworkCookie(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QNetworkCookieC2ERKS_(QNetworkCookie* other) {
  return  new QNetworkCookie(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:68
// [-2] void ~QNetworkCookie()
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookieD2Ev(void *this_) {
  delete (QNetworkCookie*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:70
// [8] QNetworkCookie & operator=(QNetworkCookie &&)
extern "C" Q_DECL_EXPORT
void* C_ZN14QNetworkCookieaSEOS_(void *this_, QNetworkCookie && other) {
  auto& rv = ((QNetworkCookie*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:72
// [8] QNetworkCookie & operator=(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QNetworkCookieaSERKS_(void *this_, QNetworkCookie* other) {
  auto& rv = ((QNetworkCookie*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookie.h:74
// [-2] void swap(QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie4swapERS_(void *this_, QNetworkCookie* other) {
  ((QNetworkCookie*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:76
// [1] bool operator==(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookieeqERKS_(void *this_, QNetworkCookie* other) {
  return (bool)((QNetworkCookie*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:77
// [1] bool operator!=(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookieneERKS_(void *this_, QNetworkCookie* other) {
  return (bool)((QNetworkCookie*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:80
// [1] bool isSecure()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookie8isSecureEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isSecure();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:81
// [-2] void setSecure(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie9setSecureEb(void *this_, bool enable) {
  ((QNetworkCookie*)this_)->setSecure(enable);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkcookie.h:82
// [1] bool isHttpOnly()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookie10isHttpOnlyEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isHttpOnly();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkcookie.h:83
// [-2] void setHttpOnly(bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie11setHttpOnlyEb(void *this_, bool enable) {
  ((QNetworkCookie*)this_)->setHttpOnly(enable);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:85
// [1] bool isSessionCookie()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookie15isSessionCookieEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isSessionCookie();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:86
// [8] QDateTime expirationDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie14expirationDateEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->expirationDate();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:87
// [-2] void setExpirationDate(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie17setExpirationDateERK9QDateTime(void *this_, QDateTime* date) {
  ((QNetworkCookie*)this_)->setExpirationDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:89
// [8] QString domain()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie6domainEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->domain();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:90
// [-2] void setDomain(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie9setDomainERK7QString(void *this_, QString* domain) {
  ((QNetworkCookie*)this_)->setDomain(*domain);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:92
// [8] QString path()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie4pathEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->path();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:93
// [-2] void setPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie7setPathERK7QString(void *this_, QString* path) {
  ((QNetworkCookie*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:95
// [8] QByteArray name()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie4nameEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->name();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:96
// [-2] void setName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie7setNameERK10QByteArray(void *this_, QByteArray* cookieName) {
  ((QNetworkCookie*)this_)->setName(*cookieName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:98
// [8] QByteArray value()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie5valueEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->value();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:99
// [-2] void setValue(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie8setValueERK10QByteArray(void *this_, QByteArray* value) {
  ((QNetworkCookie*)this_)->setValue(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:101
// [8] QByteArray toRawForm(QNetworkCookie::RawForm)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QNetworkCookie9toRawFormENS_7RawFormE(void *this_, QNetworkCookie::RawForm form) {
  auto rv = ((QNetworkCookie*)this_)->toRawForm(form);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:103
// [1] bool hasSameIdentifier(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QNetworkCookie17hasSameIdentifierERKS_(void *this_, QNetworkCookie* other) {
  return (bool)((QNetworkCookie*)this_)->hasSameIdentifier(*other);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookie.h:104
// [-2] void normalize(const QUrl &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN14QNetworkCookie9normalizeERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkCookie*)this_)->normalize(*url);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:106
// [-2] QList<QNetworkCookie> parseCookies(const QByteArray &)
extern "C" Q_DECL_EXPORT
QList<QNetworkCookie>* C_ZN14QNetworkCookie12parseCookiesERK10QByteArray(QByteArray* cookieString) {
  auto rv = QNetworkCookie::parseCookies(*cookieString);
return new QList<QNetworkCookie>(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
