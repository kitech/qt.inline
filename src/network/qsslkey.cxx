//  header block begin
// /usr/include/qt/QtNetwork/qsslkey.h
#include <qsslkey.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslKey is pure virtual: false
// QSslKey has virtual projected: false
//  header block end

//  main block begin

class MyQSslKey : public QSslKey {
public:
  virtual ~MyQSslKey() {}
// void QSslKey()
MyQSslKey() : QSslKey() {}
// void QSslKey(const class QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const class QByteArray &)
MyQSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(encoded, algorithm, format, type_, passPhrase) {}
// void QSslKey(class QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const class QByteArray &)
MyQSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(device, algorithm, format, type_, passPhrase) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:63
// [-2] void QSslKey()
extern "C"
void* C_ZN7QSslKeyC2Ev() {
  return  new QSslKey();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:64
// [-2] void QSslKey(const class QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const class QByteArray &)
extern "C"
void* C_ZN7QSslKeyC2ERK10QByteArrayN4QSsl12KeyAlgorithmENS3_14EncodingFormatENS3_7KeyTypeES2_(QByteArray* encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, QByteArray* passPhrase) {
  return  new QSslKey(*encoded, algorithm, format, type_, *passPhrase);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:68
// [-2] void QSslKey(class QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const class QByteArray &)
extern "C"
void* C_ZN7QSslKeyC2EP9QIODeviceN4QSsl12KeyAlgorithmENS2_14EncodingFormatENS2_7KeyTypeERK10QByteArray(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, QByteArray* passPhrase) {
  return  new QSslKey(device, algorithm, format, type_, *passPhrase);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:78
// [-2] void ~QSslKey()
extern "C"
void C_ZN7QSslKeyD2Ev(void *this_) {
  delete (QSslKey*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:80
// [-2] void swap(class QSslKey &)
extern "C"
void C_ZN7QSslKey4swapERS_(void *this_, QSslKey* other) {
  ((QSslKey*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:82
// [1] bool isNull()
extern "C"
bool C_ZNK7QSslKey6isNullEv(void *this_) {
  return (bool)((QSslKey*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:83
// [-2] void clear()
extern "C"
void C_ZN7QSslKey5clearEv(void *this_) {
  ((QSslKey*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:85
// [4] int length()
extern "C"
int C_ZNK7QSslKey6lengthEv(void *this_) {
  return (int)((QSslKey*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:86
// [4] QSsl::KeyType type()
extern "C"
QSsl::KeyType C_ZNK7QSslKey4typeEv(void *this_) {
  return (QSsl::KeyType)((QSslKey*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:87
// [4] QSsl::KeyAlgorithm algorithm()
extern "C"
QSsl::KeyAlgorithm C_ZNK7QSslKey9algorithmEv(void *this_) {
  return (QSsl::KeyAlgorithm)((QSslKey*)this_)->algorithm();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:89
// [8] QByteArray toPem(const class QByteArray &)
extern "C"
void* C_ZNK7QSslKey5toPemERK10QByteArray(void *this_, QByteArray* passPhrase) {
  auto rv = ((QSslKey*)this_)->toPem(*passPhrase);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:90
// [8] QByteArray toDer(const class QByteArray &)
extern "C"
void* C_ZNK7QSslKey5toDerERK10QByteArray(void *this_, QByteArray* passPhrase) {
  auto rv = ((QSslKey*)this_)->toDer(*passPhrase);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:92
// [8] Qt::HANDLE handle()
extern "C"
Qt::HANDLE C_ZNK7QSslKey6handleEv(void *this_) {
  return (Qt::HANDLE)((QSslKey*)this_)->handle();
}
//  main block end
