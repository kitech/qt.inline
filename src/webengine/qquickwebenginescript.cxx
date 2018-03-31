//  header block begin
// since 0x050900
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h
#ifndef protected
#define protected public
#endif
#include <qquickwebenginescript.h>
#include <QtWebEngine>
#include "callback_inherit.h"

// QQuickWebEngineScript is pure virtual: false
// QQuickWebEngineScript has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickWebEngineScript : public QQuickWebEngineScript {
public:
  virtual ~MyQQuickWebEngineScript() {}
// void QQuickWebEngineScript(QObject *)
MyQQuickWebEngineScript(QObject * parent) : QQuickWebEngineScript(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickWebEngineScript::timerEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:104
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QQuickWebEngineScript*)this_)->QQuickWebEngineScript::timerEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript10metaObjectEv(void *this_) {
  return (void*)((QQuickWebEngineScript*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:77
// [-2] void QQuickWebEngineScript(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQuickWebEngineScriptC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQuickWebEngineScript*)(0);
  return  new MyQQuickWebEngineScript(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:78
// [-2] void ~QQuickWebEngineScript()
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScriptD2Ev(void *this_) {
  delete (QQuickWebEngineScript*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:79
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript8toStringEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:81
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript4nameEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:82
// [8] QUrl sourceUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript9sourceUrlEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->sourceUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:83
// [8] QString sourceCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript10sourceCodeEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->sourceCode();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:84
// [4] QQuickWebEngineScript::InjectionPoint injectionPoint()
extern "C" Q_DECL_EXPORT
QQuickWebEngineScript::InjectionPoint C_ZNK21QQuickWebEngineScript14injectionPointEv(void *this_) {
  return (QQuickWebEngineScript::InjectionPoint)((QQuickWebEngineScript*)this_)->injectionPoint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:85
// [4] QQuickWebEngineScript::ScriptWorldId worldId()
extern "C" Q_DECL_EXPORT
QQuickWebEngineScript::ScriptWorldId C_ZNK21QQuickWebEngineScript7worldIdEv(void *this_) {
  return (QQuickWebEngineScript::ScriptWorldId)((QQuickWebEngineScript*)this_)->worldId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:86
// [1] bool runOnSubframes()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QQuickWebEngineScript14runOnSubframesEv(void *this_) {
  return (bool)((QQuickWebEngineScript*)this_)->runOnSubframes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:88
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript7setNameERK7QString(void *this_, QString* name) {
  ((QQuickWebEngineScript*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:89
// [-2] void setSourceUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript12setSourceUrlERK4QUrl(void *this_, QUrl* url) {
  ((QQuickWebEngineScript*)this_)->setSourceUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:90
// [-2] void setSourceCode(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript13setSourceCodeERK7QString(void *this_, QString* code) {
  ((QQuickWebEngineScript*)this_)->setSourceCode(*code);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:91
// [-2] void setInjectionPoint(QQuickWebEngineScript::InjectionPoint)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17setInjectionPointENS_14InjectionPointE(void *this_, QQuickWebEngineScript::InjectionPoint injectionPoint) {
  ((QQuickWebEngineScript*)this_)->setInjectionPoint(injectionPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:92
// [-2] void setWorldId(QQuickWebEngineScript::ScriptWorldId)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript10setWorldIdENS_13ScriptWorldIdE(void *this_, QQuickWebEngineScript::ScriptWorldId scriptWorldId) {
  ((QQuickWebEngineScript*)this_)->setWorldId(scriptWorldId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:93
// [-2] void setRunOnSubframes(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17setRunOnSubframesEb(void *this_, bool on) {
  ((QQuickWebEngineScript*)this_)->setRunOnSubframes(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:96
// [-2] void nameChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript11nameChangedERK7QString(void *this_, QString* name) {
  ((QQuickWebEngineScript*)this_)->nameChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:97
// [-2] void sourceUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript16sourceUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QQuickWebEngineScript*)this_)->sourceUrlChanged(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:98
// [-2] void sourceCodeChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17sourceCodeChangedERK7QString(void *this_, QString* code) {
  ((QQuickWebEngineScript*)this_)->sourceCodeChanged(*code);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:99
// [-2] void injectionPointChanged(QQuickWebEngineScript::InjectionPoint)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript21injectionPointChangedENS_14InjectionPointE(void *this_, QQuickWebEngineScript::InjectionPoint injectionPoint) {
  ((QQuickWebEngineScript*)this_)->injectionPointChanged(injectionPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:100
// [-2] void worldIdChanged(QQuickWebEngineScript::ScriptWorldId)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript14worldIdChangedENS_13ScriptWorldIdE(void *this_, QQuickWebEngineScript::ScriptWorldId scriptWorldId) {
  ((QQuickWebEngineScript*)this_)->worldIdChanged(scriptWorldId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:101
// [-2] void runOnSubframesChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript21runOnSubframesChangedEb(void *this_, bool on) {
  ((QQuickWebEngineScript*)this_)->runOnSubframesChanged(on);
}

//  main block end
