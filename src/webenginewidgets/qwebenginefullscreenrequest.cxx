//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginefullscreenrequest.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineFullScreenRequest is pure virtual: false
// QWebEngineFullScreenRequest has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineFullScreenRequest_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineFullScreenRequest_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineFullScreenRequest_t qt_meta_stringdata_MyQWebEngineFullScreenRequest = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQWebEngineFullScreenRequest"
  },
  "MyQWebEngineFullScreenRequest"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineFullScreenRequest[] = {
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
class Q_DECL_EXPORT MyQWebEngineFullScreenRequest : public QWebEngineFullScreenRequest {
public:
  virtual ~MyQWebEngineFullScreenRequest() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:55
// [-2] void reject()
extern "C" Q_DECL_EXPORT
void C_ZN27QWebEngineFullScreenRequest6rejectEv(void *this_) {
  ((QWebEngineFullScreenRequest*)this_)->reject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:56
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN27QWebEngineFullScreenRequest6acceptEv(void *this_) {
  ((QWebEngineFullScreenRequest*)this_)->accept();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:57
// [1] bool toggleOn()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QWebEngineFullScreenRequest8toggleOnEv(void *this_) {
  return (bool)((QWebEngineFullScreenRequest*)this_)->toggleOn();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h:58
// [8] const QUrl & origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QWebEngineFullScreenRequest6originEv(void *this_) {
  auto& rv = ((QWebEngineFullScreenRequest*)this_)->origin();
return new QUrl(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN27QWebEngineFullScreenRequestD2Ev(void *this_) {
  delete (QWebEngineFullScreenRequest*)(this_);
}
//  main block end
