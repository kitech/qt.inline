//  header block begin

// since 0x050800
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qssldiffiehellmanparameters.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslDiffieHellmanParameters is pure virtual: false
// QSslDiffieHellmanParameters has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslDiffieHellmanParameters_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslDiffieHellmanParameters_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslDiffieHellmanParameters_t qt_meta_stringdata_MyQSslDiffieHellmanParameters = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQSslDiffieHellmanParameters"
  },
  "MyQSslDiffieHellmanParameters"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslDiffieHellmanParameters[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSslDiffieHellmanParameters : public QSslDiffieHellmanParameters {
public:
  virtual ~MyQSslDiffieHellmanParameters() {}
// void QSslDiffieHellmanParameters()
MyQSslDiffieHellmanParameters() : QSslDiffieHellmanParameters() {}
// void QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters &)
MyQSslDiffieHellmanParameters(const QSslDiffieHellmanParameters & other) : QSslDiffieHellmanParameters(other) {}
// void QSslDiffieHellmanParameters(QSslDiffieHellmanParameters &&)
MyQSslDiffieHellmanParameters(QSslDiffieHellmanParameters && other) : QSslDiffieHellmanParameters(other) {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:82
// [8] QSslDiffieHellmanParameters defaultParameters()
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters17defaultParametersEv() {
  auto rv = QSslDiffieHellmanParameters::defaultParameters();
return new QSslDiffieHellmanParameters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:84
// [-2] void QSslDiffieHellmanParameters()
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersC2Ev() {
  return  new QSslDiffieHellmanParameters();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:85
// [-2] void QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersC2ERKS_(QSslDiffieHellmanParameters* other) {
  return  new QSslDiffieHellmanParameters(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:86
// [-2] void QSslDiffieHellmanParameters(QSslDiffieHellmanParameters &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersC2EOS_(QSslDiffieHellmanParameters && other) {
  return  new QSslDiffieHellmanParameters(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:87
// [-2] void ~QSslDiffieHellmanParameters()
extern "C" Q_DECL_EXPORT
void C_ZN27QSslDiffieHellmanParametersD2Ev(void *this_) {
  delete (QSslDiffieHellmanParameters*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:89
// [8] QSslDiffieHellmanParameters & operator=(const QSslDiffieHellmanParameters &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersaSERKS_(void *this_, QSslDiffieHellmanParameters* other) {
  auto& rv = ((QSslDiffieHellmanParameters*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:90
// [8] QSslDiffieHellmanParameters & operator=(QSslDiffieHellmanParameters &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersaSEOS_(void *this_, QSslDiffieHellmanParameters && other) {
  auto& rv = ((QSslDiffieHellmanParameters*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:92
// [-2] void swap(QSslDiffieHellmanParameters &)
extern "C" Q_DECL_EXPORT
void C_ZN27QSslDiffieHellmanParameters4swapERS_(void *this_, QSslDiffieHellmanParameters* other) {
  ((QSslDiffieHellmanParameters*)this_)->swap(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:94
// [8] QSslDiffieHellmanParameters fromEncoded(const QByteArray &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters11fromEncodedERK10QByteArrayN4QSsl14EncodingFormatE(QByteArray* encoded, QSsl::EncodingFormat format) {
  auto rv = QSslDiffieHellmanParameters::fromEncoded(*encoded, format);
return new QSslDiffieHellmanParameters(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:95
// [8] QSslDiffieHellmanParameters fromEncoded(QIODevice *, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters11fromEncodedEP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * device, QSsl::EncodingFormat format) {
  auto rv = QSslDiffieHellmanParameters::fromEncoded(device, format);
return new QSslDiffieHellmanParameters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:97
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QSslDiffieHellmanParameters7isEmptyEv(void *this_) {
  return (bool)((QSslDiffieHellmanParameters*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:98
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QSslDiffieHellmanParameters7isValidEv(void *this_) {
  return (bool)((QSslDiffieHellmanParameters*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:99
// [4] QSslDiffieHellmanParameters::Error error()
extern "C" Q_DECL_EXPORT
QSslDiffieHellmanParameters::Error C_ZNK27QSslDiffieHellmanParameters5errorEv(void *this_) {
  return (QSslDiffieHellmanParameters::Error)((QSslDiffieHellmanParameters*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:100
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QSslDiffieHellmanParameters11errorStringEv(void *this_) {
  auto rv = ((QSslDiffieHellmanParameters*)this_)->errorString();
return new QString(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
