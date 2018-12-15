//  header block begin

// since 0x050b00
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginequotarequest.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineQuotaRequest is pure virtual: false
// QWebEngineQuotaRequest has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineQuotaRequest_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineQuotaRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineQuotaRequest_t qt_meta_stringdata_MyQWebEngineQuotaRequest = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQWebEngineQuotaRequest"
  },
  "MyQWebEngineQuotaRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineQuotaRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineQuotaRequest : public QWebEngineQuotaRequest {
public:
  virtual ~MyQWebEngineQuotaRequest() {}
// void QWebEngineQuotaRequest()
MyQWebEngineQuotaRequest() : QWebEngineQuotaRequest() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:59
// [-2] void QWebEngineQuotaRequest()
extern "C" Q_DECL_EXPORT
void* C_ZN22QWebEngineQuotaRequestC2Ev() {
  return  new QWebEngineQuotaRequest();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:60
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineQuotaRequest6acceptEv(void *this_) {
  ((QWebEngineQuotaRequest*)this_)->accept();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:61
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineQuotaRequest6rejectEv(void *this_) {
  ((QWebEngineQuotaRequest*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:62
// [8] QUrl origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWebEngineQuotaRequest6originEv(void *this_) {
  auto rv = ((QWebEngineQuotaRequest*)this_)->origin();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:63
// [8] qint64 requestedSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK22QWebEngineQuotaRequest13requestedSizeEv(void *this_) {
  return (qint64)((QWebEngineQuotaRequest*)this_)->requestedSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:64
// [1] bool operator==(const QWebEngineQuotaRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QWebEngineQuotaRequesteqERKS_(void *this_, QWebEngineQuotaRequest* that) {
  return (bool)((QWebEngineQuotaRequest*)this_)->operator==(*that);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginequotarequest.h:65
// [1] bool operator!=(const QWebEngineQuotaRequest &)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QWebEngineQuotaRequestneERKS_(void *this_, QWebEngineQuotaRequest* that) {
  return (bool)((QWebEngineQuotaRequest*)this_)->operator!=(*that);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QWebEngineQuotaRequestD2Ev(void *this_) {
  delete (QWebEngineQuotaRequest*)(this_);
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
