//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h
#ifndef protected
#define protected public
#endif
#include <qwebenginecookiestore.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineCookieStore is pure virtual: false
// QWebEngineCookieStore has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineCookieStore : public QWebEngineCookieStore {
public:
  virtual ~MyQWebEngineCookieStore() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QWebEngineCookieStore10metaObjectEv(void *this_) {
  return (void*)((QWebEngineCookieStore*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:63
// [-2] void ~QWebEngineCookieStore()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStoreD2Ev(void *this_) {
  delete (QWebEngineCookieStore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:65
// [-2] void setCookie(const QNetworkCookie &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore9setCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* origin) {
  ((QWebEngineCookieStore*)this_)->setCookie(*cookie, *origin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:66
// [-2] void deleteCookie(const QNetworkCookie &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore12deleteCookieERK14QNetworkCookieRK4QUrl(void *this_, QNetworkCookie* cookie, QUrl* origin) {
  ((QWebEngineCookieStore*)this_)->deleteCookie(*cookie, *origin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:67
// [-2] void deleteSessionCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore20deleteSessionCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->deleteSessionCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:68
// [-2] void deleteAllCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore16deleteAllCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->deleteAllCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:69
// [-2] void loadAllCookies()
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore14loadAllCookiesEv(void *this_) {
  ((QWebEngineCookieStore*)this_)->loadAllCookies();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:72
// [-2] void cookieAdded(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore11cookieAddedERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  ((QWebEngineCookieStore*)this_)->cookieAdded(*cookie);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginecookiestore.h:73
// [-2] void cookieRemoved(const QNetworkCookie &)
extern "C" Q_DECL_EXPORT
void C_ZN21QWebEngineCookieStore13cookieRemovedERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  ((QWebEngineCookieStore*)this_)->cookieRemoved(*cookie);
}

//  main block end
