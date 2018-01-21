//  header block begin
// /usr/include/qt/QtCore/qcryptographichash.h
#include <qcryptographichash.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcryptographichash.h:73
// void QCryptographicHash(enum QCryptographicHash::Algorithm)
extern "C"
void* C_ZN18QCryptographicHashC1ENS_9AlgorithmE(QCryptographicHash::Algorithm method) {
  return new QCryptographicHash(method);
}
// /usr/include/qt/QtCore/qcryptographichash.h:74
// void ~QCryptographicHash()
extern "C"
void C_ZN18QCryptographicHashD1Ev(void *this_) {
  delete (QCryptographicHash*)(this_);
}
// /usr/include/qt/QtCore/qcryptographichash.h:76
// void reset()
extern "C"
void C_ZN18QCryptographicHash5resetEv(void *this_) {
  ((QCryptographicHash*)this_)->reset();
}
// /usr/include/qt/QtCore/qcryptographichash.h:78
// void addData(const char *, int)
extern "C"
void C_ZN18QCryptographicHash7addDataEPKci(void *this_, const char * data, int length) {
  ((QCryptographicHash*)this_)->addData(data, length);
}
// /usr/include/qt/QtCore/qcryptographichash.h:79
// void addData(const class QByteArray &)
extern "C"
void C_ZN18QCryptographicHash7addDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QCryptographicHash*)this_)->addData(data);
}
// /usr/include/qt/QtCore/qcryptographichash.h:80
// bool addData(class QIODevice *)
extern "C"
void C_ZN18QCryptographicHash7addDataEP9QIODevice(void *this_, QIODevice * device) {
  /*return*/ ((QCryptographicHash*)this_)->addData(device);
}
// /usr/include/qt/QtCore/qcryptographichash.h:82
// QByteArray result()
extern "C"
void C_ZNK18QCryptographicHash6resultEv(void *this_) {
  /*return*/ ((QCryptographicHash*)this_)->result();
}
// static
// /usr/include/qt/QtCore/qcryptographichash.h:84
// QByteArray hash(const class QByteArray &, enum QCryptographicHash::Algorithm)
extern "C"
void C_ZN18QCryptographicHash4hashERK10QByteArrayNS_9AlgorithmE(const QByteArray & data, QCryptographicHash::Algorithm method) {
  /*return*/ QCryptographicHash::hash(data, method);
}
//  main block end
