//  header block begin
// since 0x040300
// /usr/include/qt/QtNetwork/qsslkey.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslkey.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslKey is pure virtual: false
// QSslKey has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslKey : public QSslKey {
public:
  virtual ~MyQSslKey() {}
// void QSslKey()
MyQSslKey() : QSslKey() {}
// void QSslKey(const QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
MyQSslKey(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(encoded, algorithm, format, type_, passPhrase) {}
// void QSslKey(QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
MyQSslKey(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase) : QSslKey(device, algorithm, format, type_, passPhrase) {}
// void QSslKey(Qt::HANDLE, QSsl::KeyType)
MyQSslKey(Qt::HANDLE handle, QSsl::KeyType type_) : QSslKey(handle, type_) {}
// void QSslKey(const QSslKey &)
MyQSslKey(const QSslKey & other) : QSslKey(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:63
// [-2] void QSslKey()
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyC2Ev() {
  return  new QSslKey();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:64
// [-2] void QSslKey(const QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyC2ERK10QByteArrayN4QSsl12KeyAlgorithmENS3_14EncodingFormatENS3_7KeyTypeES2_(QByteArray* encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, QByteArray* passPhrase) {
  return  new QSslKey(*encoded, algorithm, format, type_, *passPhrase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:68
// [-2] void QSslKey(QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyC2EP9QIODeviceN4QSsl12KeyAlgorithmENS2_14EncodingFormatENS2_7KeyTypeERK10QByteArray(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, QByteArray* passPhrase) {
  return  new QSslKey(device, algorithm, format, type_, *passPhrase);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslkey.h:72
// [-2] void QSslKey(Qt::HANDLE, QSsl::KeyType)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyC2EPvN4QSsl7KeyTypeE(Qt::HANDLE handle, QSsl::KeyType type_) {
  return  new QSslKey(handle, type_);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:73
// [-2] void QSslKey(const QSslKey &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyC2ERKS_(QSslKey* other) {
  return  new QSslKey(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:75
// [8] QSslKey & operator=(QSslKey &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyaSEOS_(void *this_, QSslKey && other) {
  auto& rv = ((QSslKey*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:77
// [8] QSslKey & operator=(const QSslKey &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QSslKeyaSERKS_(void *this_, QSslKey* other) {
  auto& rv = ((QSslKey*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:78
// [-2] void ~QSslKey()
extern "C" Q_DECL_EXPORT
void C_ZN7QSslKeyD2Ev(void *this_) {
  delete (QSslKey*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslkey.h:80
// [-2] void swap(QSslKey &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN7QSslKey4swapERS_(void *this_, QSslKey* other) {
  ((QSslKey*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:82
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QSslKey6isNullEv(void *this_) {
  return (bool)((QSslKey*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:83
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN7QSslKey5clearEv(void *this_) {
  ((QSslKey*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:85
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK7QSslKey6lengthEv(void *this_) {
  return (int)((QSslKey*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:86
// [4] QSsl::KeyType type()
extern "C" Q_DECL_EXPORT
QSsl::KeyType C_ZNK7QSslKey4typeEv(void *this_) {
  return (QSsl::KeyType)((QSslKey*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:87
// [4] QSsl::KeyAlgorithm algorithm()
extern "C" Q_DECL_EXPORT
QSsl::KeyAlgorithm C_ZNK7QSslKey9algorithmEv(void *this_) {
  return (QSsl::KeyAlgorithm)((QSslKey*)this_)->algorithm();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:89
// [8] QByteArray toPem(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSslKey5toPemERK10QByteArray(void *this_, QByteArray* passPhrase) {
  auto rv = ((QSslKey*)this_)->toPem(*passPhrase);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:90
// [8] QByteArray toDer(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QSslKey5toDerERK10QByteArray(void *this_, QByteArray* passPhrase) {
  auto rv = ((QSslKey*)this_)->toDer(*passPhrase);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:92
// [8] Qt::HANDLE handle()
extern "C" Q_DECL_EXPORT
Qt::HANDLE C_ZNK7QSslKey6handleEv(void *this_) {
  return (Qt::HANDLE)((QSslKey*)this_)->handle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:94
// [1] bool operator==(const QSslKey &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QSslKeyeqERKS_(void *this_, QSslKey* key) {
  return (bool)((QSslKey*)this_)->operator==(*key);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:95
// [1] bool operator!=(const QSslKey &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QSslKeyneERKS_(void *this_, QSslKey* key) {
  return (bool)((QSslKey*)this_)->operator!=(*key);
}

//  main block end
