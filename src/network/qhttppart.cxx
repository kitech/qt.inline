//  header block begin

#ifndef QT_MINIMAL
// since 0x040800
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpPart is pure virtual: false
// QHttpPart has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHttpPart_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHttpPart_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHttpPart_t qt_meta_stringdata_MyQHttpPart = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQHttpPart"
  },
  "MyQHttpPart"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHttpPart[] = {
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
class Q_DECL_EXPORT MyQHttpPart : public QHttpPart {
public:
  virtual ~MyQHttpPart() {}
// void QHttpPart()
MyQHttpPart() : QHttpPart() {}
// void QHttpPart(const QHttpPart &)
MyQHttpPart(const QHttpPart & other) : QHttpPart(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:60
// [-2] void QHttpPart()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartC2Ev() {
  return  new QHttpPart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:61
// [-2] void QHttpPart(const QHttpPart &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartC2ERKS_(QHttpPart* other) {
  return  new QHttpPart(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:62
// [-2] void ~QHttpPart()
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPartD2Ev(void *this_) {
  delete (QHttpPart*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:64
// [8] QHttpPart & operator=(QHttpPart &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartaSEOS_(void *this_, QHttpPart && other) {
  auto& rv = ((QHttpPart*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:66
// [8] QHttpPart & operator=(const QHttpPart &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartaSERKS_(void *this_, QHttpPart* other) {
  auto& rv = ((QHttpPart*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qhttpmultipart.h:68
// [-2] void swap(QHttpPart &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart4swapERS_(void *this_, QHttpPart* other) {
  ((QHttpPart*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:70
// [1] bool operator==(const QHttpPart &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QHttpParteqERKS_(void *this_, QHttpPart* other) {
  return (bool)((QHttpPart*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:71
// [1] bool operator!=(const QHttpPart &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QHttpPartneERKS_(void *this_, QHttpPart* other) {
  return (bool)((QHttpPart*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:74
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QHttpPart*)this_)->setHeader(header, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:75
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* headerValue) {
  ((QHttpPart*)this_)->setRawHeader(*headerName, *headerValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:77
// [-2] void setBody(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart7setBodyERK10QByteArray(void *this_, QByteArray* body) {
  ((QHttpPart*)this_)->setBody(*body);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:78
// [-2] void setBodyDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart13setBodyDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QHttpPart*)this_)->setBodyDevice(device);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
