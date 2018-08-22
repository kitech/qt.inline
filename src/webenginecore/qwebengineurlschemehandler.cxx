//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlschemehandler.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlSchemeHandler is pure virtual: true
// QWebEngineUrlSchemeHandler has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler {
public:
  virtual ~MyQWebEngineUrlSchemeHandler() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void requestStarted(QWebEngineUrlRequestJob *)
  virtual void requestStarted(QWebEngineUrlRequestJob * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestStarted", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QWebEngineUrlSchemeHandler::requestStarted(arg0);
  }
  }

// void QWebEngineUrlSchemeHandler(QObject *)
MyQWebEngineUrlSchemeHandler(QObject * parent) : QWebEngineUrlSchemeHandler(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:61
// [-2] void requestStarted(QWebEngineUrlRequestJob *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QWebEngineUrlSchemeHandler10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlSchemeHandler*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QWebEngineUrlSchemeHandler11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWebEngineUrlSchemeHandler*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN26QWebEngineUrlSchemeHandler11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWebEngineUrlSchemeHandler*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QWebEngineUrlSchemeHandler2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlSchemeHandler::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QWebEngineUrlSchemeHandler6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWebEngineUrlSchemeHandler::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:58
// [-2] void QWebEngineUrlSchemeHandler(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QWebEngineUrlSchemeHandlerC2EP7QObject(QObject * parent) {
  return 0; // new QWebEngineUrlSchemeHandler(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:59
// [-2] void ~QWebEngineUrlSchemeHandler()
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineUrlSchemeHandlerD2Ev(void *this_) {
  delete (QWebEngineUrlSchemeHandler*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:61
// [-2] void requestStarted(QWebEngineUrlRequestJob *)
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineUrlSchemeHandler14requestStartedEP23QWebEngineUrlRequestJob(void *this_, QWebEngineUrlRequestJob * arg0) {
  ((QWebEngineUrlSchemeHandler*)this_)->requestStarted(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:65
// [-2] void _q_destroyedUrlSchemeHandler(QWebEngineUrlSchemeHandler *)
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineUrlSchemeHandler28_q_destroyedUrlSchemeHandlerEPS_(void *this_, QWebEngineUrlSchemeHandler * arg0) {
  ((QWebEngineUrlSchemeHandler*)this_)->_q_destroyedUrlSchemeHandler(arg0);
}

//  main block end
