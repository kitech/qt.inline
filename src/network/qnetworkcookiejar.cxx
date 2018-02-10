//  header block begin
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h
#include <qnetworkcookiejar.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookieJar is pure virtual: false
// QNetworkCookieJar has virtual projected: true
//  header block end

//  main block begin

class MyQNetworkCookieJar : public QNetworkCookieJar {
public:
  virtual ~MyQNetworkCookieJar() {}
// void QNetworkCookieJar(class QObject *)
MyQNetworkCookieJar(QObject * parent) : QNetworkCookieJar(parent) {}
// bool validateCookie(const class QNetworkCookie &, const class QUrl &)
  virtual bool validateCookie(const QNetworkCookie & cookie, const QUrl & url) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"validateCookie", &handled, 2, (uint64_t)&cookie, (uint64_t)&url, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QNetworkCookieJar::validateCookie(cookie, url);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QNetworkCookieJar10metaObjectEv(void *this_) {
  return (void*)((QNetworkCookieJar*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:57
// [-2] void QNetworkCookieJar(class QObject *)
extern "C"
void* C_ZN17QNetworkCookieJarC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQNetworkCookieJar*)(0);
  return  new MyQNetworkCookieJar(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:58
// [-2] void ~QNetworkCookieJar()
extern "C"
void C_ZN17QNetworkCookieJarD2Ev(void *this_) {
  delete (QNetworkCookieJar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:63
// [1] bool insertCookie(const class QNetworkCookie &)
extern "C"
bool C_ZN17QNetworkCookieJar12insertCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->insertCookie(*cookie);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:64
// [1] bool updateCookie(const class QNetworkCookie &)
extern "C"
bool C_ZN17QNetworkCookieJar12updateCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->updateCookie(*cookie);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookiejar.h:65
// [1] bool deleteCookie(const class QNetworkCookie &)
extern "C"
bool C_ZN17QNetworkCookieJar12deleteCookieERK14QNetworkCookie(void *this_, QNetworkCookie* cookie) {
  return (bool)((QNetworkCookieJar*)this_)->deleteCookie(*cookie);
}
//  main block end
