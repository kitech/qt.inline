//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlcomponent.h
#ifndef protected
#define protected public
#endif
#include <qqmlcomponent.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlComponent is pure virtual: false
// QQmlComponent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlComponent : public QQmlComponent {
public:
  virtual ~MyQQmlComponent() {}
// void QQmlComponent(class QObject *)
MyQQmlComponent(QObject * parent) : QQmlComponent(parent) {}
// void QQmlComponent(class QQmlEngine *, class QObject *)
MyQQmlComponent(QQmlEngine * arg0, QObject * parent) : QQmlComponent(arg0, parent) {}
// void QQmlComponent(class QQmlEngine *, const class QString &, class QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QString & fileName, QObject * parent) : QQmlComponent(arg0, fileName, parent) {}
// void QQmlComponent(class QQmlEngine *, const class QString &, enum QQmlComponent::CompilationMode, class QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent) : QQmlComponent(arg0, fileName, mode, parent) {}
// void QQmlComponent(class QQmlEngine *, const class QUrl &, class QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QUrl & url, QObject * parent) : QQmlComponent(arg0, url, parent) {}
// void QQmlComponent(class QQmlEngine *, const class QUrl &, enum QQmlComponent::CompilationMode, class QObject *)
MyQQmlComponent(QQmlEngine * arg0, const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent) : QQmlComponent(arg0, url, mode, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:69
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent10metaObjectEv(void *this_) {
  return (void*)((QQmlComponent*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:80
// [-2] void QQmlComponent(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP7QObject(QObject * parent) {
  return  new QQmlComponent(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:81
// [-2] void QQmlComponent(class QQmlEngine *, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineP7QObject(QQmlEngine * arg0, QObject * parent) {
  return  new QQmlComponent(arg0, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:82
// [-2] void QQmlComponent(class QQmlEngine *, const class QString &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject(QQmlEngine * arg0, QString* fileName, QObject * parent) {
  return  new QQmlComponent(arg0, *fileName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:83
// [-2] void QQmlComponent(class QQmlEngine *, const class QString &, enum QQmlComponent::CompilationMode, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject(QQmlEngine * arg0, QString* fileName, QQmlComponent::CompilationMode mode, QObject * parent) {
  return  new QQmlComponent(arg0, *fileName, mode, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:84
// [-2] void QQmlComponent(class QQmlEngine *, const class QUrl &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject(QQmlEngine * arg0, QUrl* url, QObject * parent) {
  return  new QQmlComponent(arg0, *url, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:85
// [-2] void QQmlComponent(class QQmlEngine *, const class QUrl &, enum QQmlComponent::CompilationMode, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject(QQmlEngine * arg0, QUrl* url, QQmlComponent::CompilationMode mode, QObject * parent) {
  return  new QQmlComponent(arg0, *url, mode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:86
// [-2] void ~QQmlComponent()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponentD2Ev(void *this_) {
  delete (QQmlComponent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:90
// [4] QQmlComponent::Status status()
extern "C" Q_DECL_EXPORT
QQmlComponent::Status C_ZNK13QQmlComponent6statusEv(void *this_) {
  return (QQmlComponent::Status)((QQmlComponent*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:92
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent6isNullEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:93
// [1] bool isReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent7isReadyEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:94
// [1] bool isError()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent7isErrorEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:95
// [1] bool isLoading()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlComponent9isLoadingEv(void *this_) {
  return (bool)((QQmlComponent*)this_)->isLoading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:98
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent11errorStringEv(void *this_) {
  auto rv = ((QQmlComponent*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:100
// [8] qreal progress()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QQmlComponent8progressEv(void *this_) {
  return (qreal)((QQmlComponent*)this_)->progress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:102
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent3urlEv(void *this_) {
  auto rv = ((QQmlComponent*)this_)->url();
return new QUrl(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:104
// [8] QObject * create(class QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent6createEP11QQmlContext(void *this_, QQmlContext * context) {
  return (void*)((QQmlComponent*)this_)->create(context);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:105
// [8] QObject * beginCreate(class QQmlContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent11beginCreateEP11QQmlContext(void *this_, QQmlContext * arg0) {
  return (void*)((QQmlComponent*)this_)->beginCreate(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:106
// [-2] void completeCreate()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent14completeCreateEv(void *this_) {
  ((QQmlComponent*)this_)->completeCreate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:108
// [-2] void create(class QQmlIncubator &, class QQmlContext *, class QQmlContext *)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_(void *this_, QQmlIncubator* arg0, QQmlContext * context, QQmlContext * forContext) {
  ((QQmlComponent*)this_)->create(*arg0, context, forContext);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:111
// [8] QQmlContext * creationContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlComponent15creationContextEv(void *this_) {
  return (void*)((QQmlComponent*)this_)->creationContext();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:113
// [8] QQmlComponentAttached * qmlAttachedProperties(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject(QObject * arg0) {
  return (void*)QQmlComponent::qmlAttachedProperties(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:116
// [-2] void loadUrl(const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7loadUrlERK4QUrl(void *this_, QUrl* url) {
  ((QQmlComponent*)this_)->loadUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:117
// [-2] void loadUrl(const class QUrl &, enum QQmlComponent::CompilationMode)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE(void *this_, QUrl* url, QQmlComponent::CompilationMode mode) {
  ((QQmlComponent*)this_)->loadUrl(*url, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:118
// [-2] void setData(const class QByteArray &, const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl(void *this_, QByteArray* arg0, QUrl* baseUrl) {
  ((QQmlComponent*)this_)->setData(*arg0, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:121
// [-2] void statusChanged(class QQmlComponent::Status)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent13statusChangedENS_6StatusE(void *this_, QQmlComponent::Status arg0) {
  ((QQmlComponent*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlcomponent.h:122
// [-2] void progressChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlComponent15progressChangedEd(void *this_, qreal arg0) {
  ((QQmlComponent*)this_)->progressChanged(arg0);
}

//  main block end
