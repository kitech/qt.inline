//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlrequestjob.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlRequestJob is pure virtual: false
// QWebEngineUrlRequestJob has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineUrlRequestJob : public QWebEngineUrlRequestJob {
public:
  virtual ~MyQWebEngineUrlRequestJob() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlRequestJob*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineUrlRequestJob*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QWebEngineUrlRequestJob11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineUrlRequestJob*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestJob::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QWebEngineUrlRequestJob6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlRequestJob::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:61
// [-2] void ~QWebEngineUrlRequestJob()
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJobD2Ev(void *this_) {
  delete (QWebEngineUrlRequestJob*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:73
// [8] QUrl requestUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob10requestUrlEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestJob*)this_)->requestUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:74
// [8] QByteArray requestMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QWebEngineUrlRequestJob13requestMethodEv(void *this_) {
  auto rv = ((QWebEngineUrlRequestJob*)this_)->requestMethod();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:76
// [-2] void reply(const QByteArray &, QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob5replyERK10QByteArrayP9QIODevice(void *this_, QByteArray* contentType, QIODevice * device) {
  ((QWebEngineUrlRequestJob*)this_)->reply(*contentType, device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:77
// [-2] void fail(QWebEngineUrlRequestJob::Error)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob4failENS_5ErrorE(void *this_, QWebEngineUrlRequestJob::Error error) {
  ((QWebEngineUrlRequestJob*)this_)->fail(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlrequestjob.h:78
// [-2] void redirect(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN23QWebEngineUrlRequestJob8redirectERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineUrlRequestJob*)this_)->redirect(*url);
}

//  main block end
