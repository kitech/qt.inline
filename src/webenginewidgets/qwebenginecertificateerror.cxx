//  header block begin
// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecertificateerror.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineCertificateError is pure virtual: false
// QWebEngineCertificateError has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineCertificateError_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineCertificateError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineCertificateError_t qt_meta_stringdata_MyQWebEngineCertificateError = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQWebEngineCertificateError"
  },
  "MyQWebEngineCertificateError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineCertificateError[] = {
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
class Q_DECL_EXPORT MyQWebEngineCertificateError : public QWebEngineCertificateError {
public:
  virtual ~MyQWebEngineCertificateError() {}
// void QWebEngineCertificateError(int, QUrl, bool, QString)
MyQWebEngineCertificateError(int error, QUrl url, bool overridable, QString errorDescription) : QWebEngineCertificateError(error, url, overridable, errorDescription) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:54
// [-2] void QWebEngineCertificateError(int, QUrl, bool, QString)
extern "C" Q_DECL_EXPORT
void* C_ZN26QWebEngineCertificateErrorC2Ei4QUrlb7QString(int error, QUrl* url, bool overridable, QString* errorDescription) {
  return  new QWebEngineCertificateError(error, *url, overridable, *errorDescription);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:55
// [-2] void ~QWebEngineCertificateError()
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineCertificateErrorD2Ev(void *this_) {
  delete (QWebEngineCertificateError*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:76
// [4] QWebEngineCertificateError::Error error()
extern "C" Q_DECL_EXPORT
QWebEngineCertificateError::Error C_ZNK26QWebEngineCertificateError5errorEv(void *this_) {
  return (QWebEngineCertificateError::Error)((QWebEngineCertificateError*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:77
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QWebEngineCertificateError3urlEv(void *this_) {
  auto rv = ((QWebEngineCertificateError*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:78
// [1] bool isOverridable()
extern "C" Q_DECL_EXPORT
bool C_ZNK26QWebEngineCertificateError13isOverridableEv(void *this_) {
  return (bool)((QWebEngineCertificateError*)this_)->isOverridable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecertificateerror.h:79
// [8] QString errorDescription()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QWebEngineCertificateError16errorDescriptionEv(void *this_) {
  auto rv = ((QWebEngineCertificateError*)this_)->errorDescription();
return new QString(rv);
}

//  main block end
