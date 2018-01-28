//  header block begin
// /usr/include/qt/QtCore/qmessageauthenticationcode.h
#include <qmessageauthenticationcode.h>
#include <QtCore>

// QMessageAuthenticationCode is pure virtual: false
//  header block end

//  main block begin

class MyQMessageAuthenticationCode : public QMessageAuthenticationCode {
public:
MyQMessageAuthenticationCode(QCryptographicHash::Algorithm method, const QByteArray & key) : QMessageAuthenticationCode(method, key) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:54
// [-2] void QMessageAuthenticationCode(class QCryptographicHash::Algorithm, const class QByteArray &)
extern "C"
void* C_ZN26QMessageAuthenticationCodeC1EN18QCryptographicHash9AlgorithmERK10QByteArray(QCryptographicHash::Algorithm method, const QByteArray & key) {
  (MyQMessageAuthenticationCode*)(0);
  return  new MyQMessageAuthenticationCode(method, key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:56
// [-2] void ~QMessageAuthenticationCode()
extern "C"
void C_ZN26QMessageAuthenticationCodeD1Ev(void *this_) {
  delete (QMessageAuthenticationCode*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:58
// [-2] void reset()
extern "C"
void C_ZN26QMessageAuthenticationCode5resetEv(void *this_) {
  ((QMessageAuthenticationCode*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:60
// [-2] void setKey(const class QByteArray &)
extern "C"
void C_ZN26QMessageAuthenticationCode6setKeyERK10QByteArray(void *this_, const QByteArray & key) {
  ((QMessageAuthenticationCode*)this_)->setKey(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:62
// [-2] void addData(const char *, int)
extern "C"
void C_ZN26QMessageAuthenticationCode7addDataEPKci(void *this_, const char * data, int length) {
  ((QMessageAuthenticationCode*)this_)->addData(data, length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:63
// [-2] void addData(const class QByteArray &)
extern "C"
void C_ZN26QMessageAuthenticationCode7addDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QMessageAuthenticationCode*)this_)->addData(data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:64
// [1] bool addData(class QIODevice *)
extern "C"
bool C_ZN26QMessageAuthenticationCode7addDataEP9QIODevice(void *this_, QIODevice * device) {
  return (bool)((QMessageAuthenticationCode*)this_)->addData(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:66
// [8] QByteArray result()
extern "C"
void* C_ZNK26QMessageAuthenticationCode6resultEv(void *this_) {
  auto rv = ((QMessageAuthenticationCode*)this_)->result();
return new QByteArray(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:68
// [8] QByteArray hash(const class QByteArray &, const class QByteArray &, class QCryptographicHash::Algorithm)
extern "C"
void* C_ZN26QMessageAuthenticationCode4hashERK10QByteArrayS2_N18QCryptographicHash9AlgorithmE(const QByteArray & message, const QByteArray & key, QCryptographicHash::Algorithm method) {
  auto rv = QMessageAuthenticationCode::hash(message, key, method);
return new QByteArray(rv);
}
//  main block end
