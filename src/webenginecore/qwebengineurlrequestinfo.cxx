//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestinfo.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestInfo is pure virtual: false
// QWebEngineUrlRequestInfo has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineUrlRequestInfo_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineUrlRequestInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineUrlRequestInfo_t qt_meta_stringdata_MyQWebEngineUrlRequestInfo = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQWebEngineUrlRequestInfo"
  },
  "MyQWebEngineUrlRequestInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineUrlRequestInfo[] = {
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
class Q_DECL_EXPORT MyQWebEngineUrlRequestInfo : public QWebEngineUrlRequestInfo {
public:
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:93
// [4] QWebEngineUrlRequestInfo::ResourceType resourceType()
extern "C" Q_DECL_EXPORT
QWebEngineUrlRequestInfo::ResourceType C_ZNK24QWebEngineUrlRequestInfo12resourceTypeEv(void *this_) {
  return (QWebEngineUrlRequestInfo::ResourceType)((QWebEngineUrlRequestInfo*)this_)->resourceType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:94
// [4] QWebEngineUrlRequestInfo::NavigationType navigationType()
extern "C" Q_DECL_EXPORT
QWebEngineUrlRequestInfo::NavigationType C_ZNK24QWebEngineUrlRequestInfo14navigationTypeEv(void *this_) {
  return (QWebEngineUrlRequestInfo::NavigationType)((QWebEngineUrlRequestInfo*)this_)->navigationType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:96
// [8] QUrl requestUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QWebEngineUrlRequestInfo10requestUrlEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestInfo*)this_)->requestUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:97
// [8] QUrl firstPartyUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QWebEngineUrlRequestInfo13firstPartyUrlEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestInfo*)this_)->firstPartyUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:98
// [8] QByteArray requestMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QWebEngineUrlRequestInfo13requestMethodEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestInfo*)this_)->requestMethod();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:99
// [1] bool changed()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QWebEngineUrlRequestInfo7changedEv(void *this_) {
  return (bool)((QWebEngineUrlRequestInfo*)this_)->changed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:101
// [-2] void block(bool)
extern "C" Q_DECL_EXPORT
void C_ZN24QWebEngineUrlRequestInfo5blockEb(void *this_, bool shouldBlock) {
  ((QWebEngineUrlRequestInfo*)this_)->block(shouldBlock);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:102
// [-2] void redirect(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN24QWebEngineUrlRequestInfo8redirectERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineUrlRequestInfo*)this_)->redirect(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinfo.h:103
// [-2] void setHttpHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN24QWebEngineUrlRequestInfo13setHttpHeaderERK10QByteArrayS2_(void *this_, QByteArray* name, QByteArray* value) {
  ((QWebEngineUrlRequestInfo*)this_)->setHttpHeader(*name, *value);
}

//  main block end
