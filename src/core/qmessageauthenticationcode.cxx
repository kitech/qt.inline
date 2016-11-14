// /usr/include/qt/QtCore/qmessageauthenticationcode.h
#include <qmessageauthenticationcode.h>
#include <QtCore>

// /usr/include/qt/QtCore/qmessageauthenticationcode.h:54
// void QMessageAuthenticationCode(class QCryptographicHash::Algorithm, const class QByteArray &)
extern "C"
void* C_ZN26QMessageAuthenticationCodeC1EN18QCryptographicHash9AlgorithmERK10QByteArray(QCryptographicHash::Algorithm method, const QByteArray & key) {
  return new QMessageAuthenticationCode(method, key);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:56
// void ~QMessageAuthenticationCode()
extern "C"
void C_ZN26QMessageAuthenticationCodeD1Ev(void *this_) {
  delete (QMessageAuthenticationCode*)(this_);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:58
// void reset()
extern "C"
void C_ZN26QMessageAuthenticationCode5resetEv(void *this_) {
  ((QMessageAuthenticationCode*)this_)->reset();
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:60
// void setKey(const class QByteArray &)
extern "C"
void C_ZN26QMessageAuthenticationCode6setKeyERK10QByteArray(void *this_, const QByteArray & key) {
  ((QMessageAuthenticationCode*)this_)->setKey(key);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:62
// void addData(const char *, int)
extern "C"
void C_ZN26QMessageAuthenticationCode7addDataEPKci(void *this_, const char * data, int length) {
  ((QMessageAuthenticationCode*)this_)->addData(data, length);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:63
// void addData(const class QByteArray &)
extern "C"
void C_ZN26QMessageAuthenticationCode7addDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QMessageAuthenticationCode*)this_)->addData(data);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:64
// bool addData(class QIODevice *)
extern "C"
void C_ZN26QMessageAuthenticationCode7addDataEP9QIODevice(void *this_, QIODevice * device) {
  /*return*/ ((QMessageAuthenticationCode*)this_)->addData(device);
}
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:66
// QByteArray result()
extern "C"
void C_ZNK26QMessageAuthenticationCode6resultEv(void *this_) {
  /*return*/ ((QMessageAuthenticationCode*)this_)->result();
}
// static
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:68
// QByteArray hash(const class QByteArray &, const class QByteArray &, class QCryptographicHash::Algorithm)
extern "C"
void C_ZN26QMessageAuthenticationCode4hashERK10QByteArrayS2_N18QCryptographicHash9AlgorithmE(const QByteArray & message, const QByteArray & key, QCryptographicHash::Algorithm method) {
  /*return*/ QMessageAuthenticationCode::hash(message, key, method);
}