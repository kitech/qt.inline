//  header block begin
// since 0x050600
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h
#ifndef protected
#define protected public
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
// void QWebEngineUrlSchemeHandler(QObject *)
MyQWebEngineUrlSchemeHandler(QObject * parent) : QWebEngineUrlSchemeHandler(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlschemehandler.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QWebEngineUrlSchemeHandler10metaObjectEv(void *this_) {
  return (void*)((QWebEngineUrlSchemeHandler*)this_)->metaObject();
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
