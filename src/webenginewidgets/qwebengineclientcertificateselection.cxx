//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineclientcertificateselection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineClientCertificateSelection is pure virtual: false
// QWebEngineClientCertificateSelection has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t {
  QByteArrayData data[1];
  char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t qt_meta_stringdata_MyQWebEngineClientCertificateSelection = {
   {
  QT_MOC_LITERAL(0, 0, 38), // "MyQWebEngineClientCertificateSelection"
  },
  "MyQWebEngineClientCertificateSelection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineClientCertificateSelection[] = {
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
class Q_DECL_EXPORT MyQWebEngineClientCertificateSelection : public QWebEngineClientCertificateSelection {
public:
  virtual ~MyQWebEngineClientCertificateSelection() {}
// void QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection &)
MyQWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection & arg0) : QWebEngineClientCertificateSelection(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:57
// [-2] void QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZN36QWebEngineClientCertificateSelectionC2ERKS_(QWebEngineClientCertificateSelection* arg0) {
  return  new QWebEngineClientCertificateSelection(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:58
// [-2] void ~QWebEngineClientCertificateSelection()
extern "C" Q_DECL_EXPORT
void C_ZN36QWebEngineClientCertificateSelectionD2Ev(void *this_) {
  delete (QWebEngineClientCertificateSelection*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:60
// [16] QWebEngineClientCertificateSelection & operator=(const QWebEngineClientCertificateSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZN36QWebEngineClientCertificateSelectionaSERKS_(void *this_, QWebEngineClientCertificateSelection* arg0) {
  auto& rv = ((QWebEngineClientCertificateSelection*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:62
// [8] QUrl host()
extern "C" Q_DECL_EXPORT
void* C_ZNK36QWebEngineClientCertificateSelection4hostEv(void *this_) {
  auto rv = ((QWebEngineClientCertificateSelection*)this_)->host();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:64
// [-2] void select(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
void C_ZN36QWebEngineClientCertificateSelection6selectERK15QSslCertificate(void *this_, QSslCertificate* certificate) {
  ((QWebEngineClientCertificateSelection*)this_)->select(*certificate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:65
// [-2] void selectNone()
extern "C" Q_DECL_EXPORT
void C_ZN36QWebEngineClientCertificateSelection10selectNoneEv(void *this_) {
  ((QWebEngineClientCertificateSelection*)this_)->selectNone();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:66
// [-2] QVector<QSslCertificate> certificates()
extern "C" Q_DECL_EXPORT
void C_ZNK36QWebEngineClientCertificateSelection12certificatesEv(void *this_) {
  auto rv = ((QWebEngineClientCertificateSelection*)this_)->certificates();
/*return rv;*/
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
