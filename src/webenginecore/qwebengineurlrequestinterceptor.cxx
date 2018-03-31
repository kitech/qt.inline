//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h
#ifndef protected
#define protected public
#endif
#include <qwebengineurlrequestinterceptor.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestInterceptor is pure virtual: true
// QWebEngineUrlRequestInterceptor has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor {
public:
  virtual ~MyQWebEngineUrlRequestInterceptor() {}
// void QWebEngineUrlRequestInterceptor(QObject *)
MyQWebEngineUrlRequestInterceptor(QObject * p) : QWebEngineUrlRequestInterceptor(p) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK31QWebEngineUrlRequestInterceptor10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlRequestInterceptor*)this_)->metaObject();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:58
// [-2] void QWebEngineUrlRequestInterceptor(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptorC2EP7QObject(QObject * p) {
  return 0; // new QWebEngineUrlRequestInterceptor(p);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:63
// [-2] void interceptRequest(QWebEngineUrlRequestInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN31QWebEngineUrlRequestInterceptor16interceptRequestER24QWebEngineUrlRequestInfo(void *this_, QWebEngineUrlRequestInfo* info) {
  ((QWebEngineUrlRequestInterceptor*)this_)->interceptRequest(*info);
}


extern "C" Q_DECL_EXPORT
void C_ZN31QWebEngineUrlRequestInterceptorD2Ev(void *this_) {
  delete (QWebEngineUrlRequestInterceptor*)(this_);
}
//  main block end
