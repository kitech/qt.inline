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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineUrlRequestInterceptor*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN31QWebEngineUrlRequestInterceptor11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineUrlRequestInterceptor*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestInterceptor::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestinterceptor.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN31QWebEngineUrlRequestInterceptor6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestInterceptor::trUtf8(s, c, n);
return new QString(rv);
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
