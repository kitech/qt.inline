//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineWidgets/qwebenginefullscreenrequest.h
#ifndef protected
#define protected public
#endif
#include <qwebenginefullscreenrequest.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineFullScreenRequest is pure virtual: false
// QWebEngineFullScreenRequest has virtual projected: false
//  header block end

//  main block begin

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
