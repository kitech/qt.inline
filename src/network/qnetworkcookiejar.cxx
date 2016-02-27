// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkcookiejar.h
// dst-file: /src/network/qnetworkcookiejar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkcookiejar.h>


#include <qnetworkcookie.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
// <= header block end

// main block begin =>
void __keep_qnetworkcookiejar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkCookieJar_Class_Size()
{
  return sizeof(QNetworkCookieJar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 48, column 5>
//   // proto:  const QMetaObject * QNetworkCookieJar::metaObject();
// _ZNK17QNetworkCookieJar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QNetworkCookieJar10metaObjectEv(void *qthis) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 54, column 18>
//   // proto:  bool QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie> & cookieList, const QUrl & url);
// _ZN17QNetworkCookieJar17setCookiesFromUrlERK5QListI14QNetworkCookieERK4QUrl setCookiesFromUrl(const QList<class QNetworkCookie> &, const class QUrl &)
extern "C"
bool
C_ZN17QNetworkCookieJar17setCookiesFromUrlERK5QListI14QNetworkCookieERK4QUrl(void *qthis,
const QList<QNetworkCookie>* arg1,
const QUrl* arg2) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->setCookiesFromUrl(*((const QList<QNetworkCookie>*)arg1),
*((const QUrl*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 50, column 14>
//   // proto:  void QNetworkCookieJar::QNetworkCookieJar(QObject * parent);
extern "C"
QNetworkCookieJar*
C_ZN17QNetworkCookieJarC2EP7QObject(QObject * arg1) {
  auto ret = new QNetworkCookieJar(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 56, column 18>
//   // proto:  bool QNetworkCookieJar::insertCookie(const QNetworkCookie & cookie);
// _ZN17QNetworkCookieJar12insertCookieERK14QNetworkCookie insertCookie(const class QNetworkCookie &)
extern "C"
bool
C_ZN17QNetworkCookieJar12insertCookieERK14QNetworkCookie(void *qthis,
const QNetworkCookie* arg1) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->insertCookie(*((const QNetworkCookie*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 53, column 35>
//   // proto:  QList<QNetworkCookie> QNetworkCookieJar::cookiesForUrl(const QUrl & url);
// _ZNK17QNetworkCookieJar13cookiesForUrlERK4QUrl cookiesForUrl(const class QUrl &)
extern "C"
QList<QNetworkCookie>*
C_ZNK17QNetworkCookieJar13cookiesForUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->cookiesForUrl(*((const QUrl*)arg1));
  return new QList<QNetworkCookie>(ret); // 5
}
//   // proto:  void QNetworkCookieJar::~QNetworkCookieJar();
extern "C"
void C_ZN17QNetworkCookieJarD2Ev(void *qthis) {
  delete (QNetworkCookieJar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 58, column 18>
//   // proto:  bool QNetworkCookieJar::deleteCookie(const QNetworkCookie & cookie);
// _ZN17QNetworkCookieJar12deleteCookieERK14QNetworkCookie deleteCookie(const class QNetworkCookie &)
extern "C"
bool
C_ZN17QNetworkCookieJar12deleteCookieERK14QNetworkCookie(void *qthis,
const QNetworkCookie* arg1) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->deleteCookie(*((const QNetworkCookie*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkcookiejar.h', line 57, column 18>
//   // proto:  bool QNetworkCookieJar::updateCookie(const QNetworkCookie & cookie);
// _ZN17QNetworkCookieJar12updateCookieERK14QNetworkCookie updateCookie(const class QNetworkCookie &)
extern "C"
bool
C_ZN17QNetworkCookieJar12updateCookieERK14QNetworkCookie(void *qthis,
const QNetworkCookie* arg1) {
  auto ret =
  ((QNetworkCookieJar*)qthis)->updateCookie(*((const QNetworkCookie*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QNetworkCookieJar_SlotProxy here
class QNetworkCookieJar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QNetworkCookieJar_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/network/qnetworkcookiejar.moc"

extern "C" {
  QNetworkCookieJar_SlotProxy* QNetworkCookieJar_SlotProxy_new()
  {
    return new QNetworkCookieJar_SlotProxy();
  }
};

// <= body block end

