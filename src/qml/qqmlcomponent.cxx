// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlcomponent.h
// dst-file: /src/qml/qqmlcomponent.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlcomponent.h>


#include <qglobal.h>
#include <qurl.h>
#include <qstring.h>
#include <qqmlerror.h>
#include <qlist.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qqmlcomponent_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlComponent_Class_Size()
{
  return sizeof(QQmlComponent);
}

extern "C"
int QQmlTypeInfo_QQmlComponent__Class_Size()
{
  return sizeof(QQmlTypeInfo<QQmlComponent>);
}

// <= use block end

// ext block begin =>
//   // proto:  void QQmlComponent::~QQmlComponent();
extern "C"
void C_ZN13QQmlComponentD2Ev(void *qthis) {
  delete (QQmlComponent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 100, column 18>
//   // proto:  QQmlContext * QQmlComponent::creationContext();
// _ZNK13QQmlComponent15creationContextEv creationContext()
extern "C"
void*
C_ZNK13QQmlComponent15creationContextEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->creationContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 93, column 22>
//   // proto:  QObject * QQmlComponent::create(QQmlContext * context);
// _ZN13QQmlComponent6createEP11QQmlContext create(class QQmlContext *)
extern "C"
void*
C_ZN13QQmlComponent6createEP11QQmlContext(void *qthis,
QQmlContext * arg1) {
  auto ret =
  ((QQmlComponent*)qthis)->create(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 70, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP10QQmlEngineP7QObject(QQmlEngine * arg1,
QObject * arg2) {
  auto ret = new QQmlComponent(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 82, column 10>
//   // proto:  bool QQmlComponent::isReady();
// _ZNK13QQmlComponent7isReadyEv isReady()
extern "C"
bool
C_ZNK13QQmlComponent7isReadyEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->isReady();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 69, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP7QObject(QObject * arg1) {
  auto ret = new QQmlComponent(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 89, column 11>
//   // proto:  qreal QQmlComponent::progress();
// _ZNK13QQmlComponent8progressEv progress()
extern "C"
double
C_ZNK13QQmlComponent8progressEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->progress();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 91, column 10>
//   // proto:  QUrl QQmlComponent::url();
// _ZNK13QQmlComponent3urlEv url()
extern "C"
QUrl*
C_ZNK13QQmlComponent3urlEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 102, column 35>
//   // proto: static QQmlComponentAttached * QQmlComponent::qmlAttachedProperties(QObject * );
// _ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject qmlAttachedProperties(class QObject *)
extern "C"
void*
C_ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject(QObject * arg1) {
  auto ret =
  QQmlComponent::qmlAttachedProperties(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 74, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject(QQmlEngine * arg1,
const QUrl* arg2,
QQmlComponent::CompilationMode arg3,
QObject * arg4) {
  auto ret = new QQmlComponent(arg1, *((const QUrl*)arg2), arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 111, column 10>
//   // proto:  void QQmlComponent::progressChanged(qreal );
// _ZN13QQmlComponent15progressChangedEd progressChanged(qreal)
extern "C"
void
C_ZN13QQmlComponent15progressChangedEd(void *qthis,
qreal arg1) {
  ((QQmlComponent*)qthis)->progressChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 83, column 10>
//   // proto:  bool QQmlComponent::isError();
// _ZNK13QQmlComponent7isErrorEv isError()
extern "C"
bool
C_ZNK13QQmlComponent7isErrorEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->isError();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 106, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url, QQmlComponent::CompilationMode mode);
// _ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE loadUrl(const class QUrl &, enum QQmlComponent::CompilationMode)
extern "C"
void
C_ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE(void *qthis,
const QUrl* arg1,
QQmlComponent::CompilationMode arg2) {
  ((QQmlComponent*)qthis)->loadUrl(*((const QUrl*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 95, column 18>
//   // proto:  void QQmlComponent::completeCreate();
// _ZN13QQmlComponent14completeCreateEv completeCreate()
extern "C"
void
C_ZN13QQmlComponent14completeCreateEv(void *qthis) {
  ((QQmlComponent*)qthis)->completeCreate();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 84, column 10>
//   // proto:  bool QQmlComponent::isLoading();
// _ZNK13QQmlComponent9isLoadingEv isLoading()
extern "C"
bool
C_ZNK13QQmlComponent9isLoadingEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->isLoading();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 105, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url);
// _ZN13QQmlComponent7loadUrlERK4QUrl loadUrl(const class QUrl &)
extern "C"
void
C_ZN13QQmlComponent7loadUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQmlComponent*)qthis)->loadUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 73, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject(QQmlEngine * arg1,
const QUrl* arg2,
QObject * arg3) {
  auto ret = new QQmlComponent(arg1, *((const QUrl*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 72, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject(QQmlEngine * arg1,
const QString* arg2,
QQmlComponent::CompilationMode arg3,
QObject * arg4) {
  auto ret = new QQmlComponent(arg1, *((const QString*)arg2), arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 110, column 10>
//   // proto:  void QQmlComponent::statusChanged(QQmlComponent::Status );
// _ZN13QQmlComponent13statusChangedENS_6StatusE statusChanged(class QQmlComponent::Status)
extern "C"
void
C_ZN13QQmlComponent13statusChangedENS_6StatusE(void *qthis,
QQmlComponent::Status* arg1) {
  ((QQmlComponent*)qthis)->statusChanged(*((QQmlComponent::Status*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 94, column 22>
//   // proto:  QObject * QQmlComponent::beginCreate(QQmlContext * );
// _ZN13QQmlComponent11beginCreateEP11QQmlContext beginCreate(class QQmlContext *)
extern "C"
void*
C_ZN13QQmlComponent11beginCreateEP11QQmlContext(void *qthis,
QQmlContext * arg1) {
  auto ret =
  ((QQmlComponent*)qthis)->beginCreate(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 107, column 10>
//   // proto:  void QQmlComponent::setData(const QByteArray & , const QUrl & baseUrl);
// _ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl setData(const class QByteArray &, const class QUrl &)
extern "C"
void
C_ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl(void *qthis,
const QByteArray* arg1,
const QUrl* arg2) {
  ((QQmlComponent*)qthis)->setData(*((const QByteArray*)arg1),
*((const QUrl*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 87, column 25>
//   // proto:  QString QQmlComponent::errorString();
// _ZNK13QQmlComponent11errorStringEv errorString()
extern "C"
QString*
C_ZNK13QQmlComponent11errorStringEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 86, column 22>
//   // proto:  QList<QQmlError> QQmlComponent::errors();
// _ZNK13QQmlComponent6errorsEv errors()
extern "C"
QList<QQmlError>*
C_ZNK13QQmlComponent6errorsEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->errors();
  return new QList<QQmlError>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 79, column 12>
//   // proto:  QQmlComponent::Status QQmlComponent::status();
// _ZNK13QQmlComponent6statusEv status()
extern "C"
QQmlComponent::Status
C_ZNK13QQmlComponent6statusEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 58, column 5>
//   // proto:  const QMetaObject * QQmlComponent::metaObject();
// _ZNK13QQmlComponent10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QQmlComponent10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 97, column 10>
//   // proto:  void QQmlComponent::create(QQmlIncubator & , QQmlContext * context, QQmlContext * forContext);
// _ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_ create(class QQmlIncubator &, class QQmlContext *, class QQmlContext *)
extern "C"
void
C_ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_(void *qthis,
QQmlIncubator* arg1,
QQmlContext * arg2,
QQmlContext * arg3) {
  ((QQmlComponent*)qthis)->create(*((QQmlIncubator*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 71, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QObject * parent);
extern "C"
QQmlComponent*
C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject(QQmlEngine * arg1,
const QString* arg2,
QObject * arg3) {
  auto ret = new QQmlComponent(arg1, *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 81, column 10>
//   // proto:  bool QQmlComponent::isNull();
// _ZNK13QQmlComponent6isNullEv isNull()
extern "C"
bool
C_ZNK13QQmlComponent6isNullEv(void *qthis) {
  auto ret =
  ((QQmlComponent*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QQmlComponent_SlotProxy here
class QQmlComponent_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlComponent_SlotProxy():QObject(){}

public slots:
  // progressChanged(qreal)
  void slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0);
public:
  void (*slot_func__ZN13QQmlComponent15progressChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // statusChanged(class QQmlComponent::Status)
  void slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0);
public:
  void (*slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE)(void* rsfptr, QQmlComponent::Status arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlcomponent.moc"

extern "C" {
  QQmlComponent_SlotProxy* QQmlComponent_SlotProxy_new()
  {
    return new QQmlComponent_SlotProxy();
  }
};

void QQmlComponent_SlotProxy::slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0) {
  if (this->slot_func__ZN13QQmlComponent15progressChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN13QQmlComponent15progressChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QQmlComponent_SlotProxy_connect__ZN13QQmlComponent15progressChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlComponent_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QQmlComponent15progressChangedEd = (decltype(that->slot_func__ZN13QQmlComponent15progressChangedEd))ffifptr;
  QObject::connect((QQmlComponent*)sender, SIGNAL(progressChanged(qreal)), that, SLOT(slot_proxy_func__ZN13QQmlComponent15progressChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QQmlComponent_SlotProxy_disconnect__ZN13QQmlComponent15progressChangedEd(QQmlComponent_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQmlComponent_SlotProxy::slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0) {
  if (this->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE != NULL) {
    // do smth...
    this->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQmlComponent_SlotProxy_connect__ZN13QQmlComponent13statusChangedENS_6StatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlComponent_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE = (decltype(that->slot_func__ZN13QQmlComponent13statusChangedENS_6StatusE))ffifptr;
  QObject::connect((QQmlComponent*)sender, SIGNAL(statusChanged(class QQmlComponent::Status)), that, SLOT(slot_proxy_func__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent::Status arg0)));
  return that;
}
extern "C"
void QQmlComponent_SlotProxy_disconnect__ZN13QQmlComponent13statusChangedENS_6StatusE(QQmlComponent_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

