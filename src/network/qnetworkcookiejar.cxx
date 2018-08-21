//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkcookiejar.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookieJar is pure virtual: false
// QNetworkCookieJar has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkCookieJar : public QNetworkCookieJar {
public:
  virtual ~MyQNetworkCookieJar() {}
// void QNetworkCookieJar(QObject *)
MyQNetworkCookieJar(QObject * parent) : QNetworkCookieJar(parent) {}
// Protected Visibility=Default Availability=Available
// [-2] QList<QNetworkCookie> allCookies()
  virtual QList<QNetworkCookie> allCookies() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"allCookies", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QNetworkCookie>){};}
    auto prv = (QList<QNetworkCookie>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QNetworkCookie>
    } else {
    return QNetworkCookieJar::allCookies();
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setAllCookies(const QList<QNetworkCookie> &)
  virtual void setAllCookies(const QList<QNetworkCookie> & cookieList) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAllCookies", &handled, 1, (uint64_t)&cookieList, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QNetworkCookieJar::setAllCookies(cookieList);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool validateCookie(const QNetworkCookie &, const QUrl &)
  virtual bool validateCookie(const QNetworkCookie & cookie, const QUrl & url) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validateCookie", &handled, 2, (uint64_t)&cookie, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QNetworkCookieJar::validateCookie(cookie, url);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:68
// [-2] QList<QNetworkCookie> allCookies()
extern "C" Q_DECL_EXPORT
QList<QNetworkCookie>* C_ZNK17QNetworkCookieJar10allCookiesEv(void *this_) {
  auto rv = ((QNetworkCookieJar*)this_)->QNetworkCookieJar::allCookies();
return new QList<QNetworkCookie>(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:69
// [-2] void setAllCookies(const QList<QNetworkCookie> &)
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkCookieJar13setAllCookiesERK5QListI14QNetworkCookieE(void *this_, QList<QNetworkCookie>* cookieList) {
  ((QNetworkCookieJar*)this_)->QNetworkCookieJar::setAllCookies(*cookieList);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:70
// [1] bool validateCookie(const QNetworkCookie &, const QUrl &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK17QNetworkCookieJar14validateCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* url) {
  return (bool)((QNetworkCookieJar*)this_)->QNetworkCookieJar::validateCookie(*cookie, *url);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QNetworkCookieJar10metaObjectEv(void *this_) {
  return (void*)((QNetworkCookieJar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNetworkCookieJar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QNetworkCookieJar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNetworkCookieJar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkCookieJar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNetworkCookieJar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:57
// [-2] void QNetworkCookieJar(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QNetworkCookieJarC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkCookieJar*)(0);
  return  new MyQNetworkCookieJar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:58
// [-2] void ~QNetworkCookieJar()
extern "C" Q_DECL_EXPORT
void C_ZN17QNetworkCookieJarD2Ev(void *this_) {
  delete (QNetworkCookieJar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:60
// [-2] QList<QNetworkCookie> cookiesForUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
QList<QNetworkCookie>* C_ZNK17QNetworkCookieJar13cookiesForUrlERK4QUrl(void *this_, QUrl* url) {
  auto rv = ((QNetworkCookieJar*)this_)->cookiesForUrl(*url);
return new QList<QNetworkCookie>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:61
// [1] bool setCookiesFromUrl(const QList<QNetworkCookie> &, const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar17setCookiesFromUrlERK5QListI14QNetworkCookieERK4QUrl(void *this_, QList<QNetworkCookie>* cookieList, QUrl* url) {
  return (bool)((QNetworkCookieJar*)this_)->setCookiesFromUrl(*cookieList, *url);
}

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:63
// [1] bool insertCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12insertCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->insertCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:64
// [1] bool updateCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12updateCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->updateCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:65
// [1] bool deleteCookie(const QNetworkCookie &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN17QNetworkCookieJar12deleteCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->deleteCookie(*cookie);
}
#endif // QT_VERSION >= 0x050000

//  main block end
