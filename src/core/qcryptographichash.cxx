//  header block begin
// /usr/include/qt/QtCore/qcryptographichash.h
#include <qcryptographichash.h>
#include <QtCore>

// QCryptographicHash is pure virtual: false
//  header block end

//  main block begin

class MyQCryptographicHash : public QCryptographicHash {
public:
MyQCryptographicHash(QCryptographicHash::Algorithm method) : QCryptographicHash(method) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:92
// [-2] void QCryptographicHash(enum QCryptographicHash::Algorithm)
extern "C"
void* C_ZN18QCryptographicHashC1ENS_9AlgorithmE(QCryptographicHash::Algorithm method) {
  (MyQCryptographicHash*)(0);
  return  new MyQCryptographicHash(method);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:93
// [-2] void ~QCryptographicHash()
extern "C"
void C_ZN18QCryptographicHashD1Ev(void *this_) {
  delete (QCryptographicHash*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:95
// [-2] void reset()
extern "C"
void C_ZN18QCryptographicHash5resetEv(void *this_) {
  ((QCryptographicHash*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:97
// [-2] void addData(const char *, int)
extern "C"
void C_ZN18QCryptographicHash7addDataEPKci(void *this_, const char * data, int length) {
  ((QCryptographicHash*)this_)->addData(data, length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:98
// [-2] void addData(const class QByteArray &)
extern "C"
void C_ZN18QCryptographicHash7addDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QCryptographicHash*)this_)->addData(data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:99
// [1] bool addData(class QIODevice *)
extern "C"
bool C_ZN18QCryptographicHash7addDataEP9QIODevice(void *this_, QIODevice * device) {
  return (bool)((QCryptographicHash*)this_)->addData(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:101
// [8] QByteArray result()
extern "C"
void* C_ZNK18QCryptographicHash6resultEv(void *this_) {
  auto rv = ((QCryptographicHash*)this_)->result();
return new QByteArray(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:103
// [8] QByteArray hash(const class QByteArray &, enum QCryptographicHash::Algorithm)
extern "C"
void* C_ZN18QCryptographicHash4hashERK10QByteArrayNS_9AlgorithmE(const QByteArray & data, QCryptographicHash::Algorithm method) {
  auto rv = QCryptographicHash::hash(data, method);
return new QByteArray(rv);
}
//  main block end
