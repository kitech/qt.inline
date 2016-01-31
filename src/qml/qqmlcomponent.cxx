#include <qnetworkinterface.h>
#include <qlist.h>
#include <qstring.h>
#include <qurl.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlcomponent.h
// dst-file: /src/qml/qqmlcomponent.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlcomponent.h>

extern "C" {

int QQmlComponent_Class_Size()
{
  return sizeof(QQmlComponent);
}

int QQmlTypeInfo_QQmlComponent__Class_Size()
{
  return sizeof(QQmlTypeInfo<QQmlComponent>);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlcomponent_inline_symbols() {
//   // proto:  void QQmlComponent::~QQmlComponent();
if (true) {
  delete ((QQmlComponent*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 100, column 18>
//   // proto:  QQmlContext * QQmlComponent::creationContext();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->creationContext();
    flythis.creationContext();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent15creationContextEv creationContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 93, column 22>
//   // proto:  QObject * QQmlComponent::create(QQmlContext * context);
if (true) {
  auto f = [](QQmlComponent flythis, QQmlContext * arg1) {
    ((QQmlComponent*)0)->create(arg1);
    flythis.create(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent6createEP11QQmlContext create(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 70, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , QObject * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, QObject * arg2) {
    new QQmlComponent(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 82, column 10>
//   // proto:  bool QQmlComponent::isReady();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->isReady();
    flythis.isReady();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent7isReadyEv isReady()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 69, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QQmlComponent(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 89, column 11>
//   // proto:  qreal QQmlComponent::progress();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->progress();
    flythis.progress();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent8progressEv progress()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 91, column 10>
//   // proto:  QUrl QQmlComponent::url();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->url();
    flythis.url();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent3urlEv url()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 102, column 35>
//   // proto: static QQmlComponentAttached * QQmlComponent::qmlAttachedProperties(QObject * );
if (true) {
  auto f = [](QQmlComponent flythis, QObject * arg1) {
    ((QQmlComponent*)0)->qmlAttachedProperties(arg1);
    flythis.qmlAttachedProperties(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject qmlAttachedProperties(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 74, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, const QUrl & arg2, QQmlComponent::CompilationMode arg3, QObject * arg4) {
    new QQmlComponent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 111, column 10>
//   // proto:  void QQmlComponent::progressChanged(qreal );
if (true) {
  auto f = [](QQmlComponent flythis, qreal arg1) {
    ((QQmlComponent*)0)->progressChanged(arg1);
    flythis.progressChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent15progressChangedEd progressChanged(qreal)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 83, column 10>
//   // proto:  bool QQmlComponent::isError();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->isError();
    flythis.isError();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent7isErrorEv isError()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 106, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url, QQmlComponent::CompilationMode mode);
if (true) {
  auto f = [](QQmlComponent flythis, const QUrl & arg1, QQmlComponent::CompilationMode arg2) {
    ((QQmlComponent*)0)->loadUrl(arg1, arg2);
    flythis.loadUrl(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE loadUrl(const class QUrl &, enum QQmlComponent::CompilationMode)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 95, column 18>
//   // proto:  void QQmlComponent::completeCreate();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->completeCreate();
    flythis.completeCreate();
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent14completeCreateEv completeCreate()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 84, column 10>
//   // proto:  bool QQmlComponent::isLoading();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->isLoading();
    flythis.isLoading();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent9isLoadingEv isLoading()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 105, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url);
if (true) {
  auto f = [](QQmlComponent flythis, const QUrl & arg1) {
    ((QQmlComponent*)0)->loadUrl(arg1);
    flythis.loadUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent7loadUrlERK4QUrl loadUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 73, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QObject * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, const QUrl & arg2, QObject * arg3) {
    new QQmlComponent(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 72, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, const QString & arg2, QQmlComponent::CompilationMode arg3, QObject * arg4) {
    new QQmlComponent(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 110, column 10>
//   // proto:  void QQmlComponent::statusChanged(QQmlComponent::Status );
if (true) {
  auto f = [](QQmlComponent flythis, QQmlComponent::Status arg1) {
    ((QQmlComponent*)0)->statusChanged(arg1);
    flythis.statusChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent13statusChangedENS_6StatusE statusChanged(class QQmlComponent::Status)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 94, column 22>
//   // proto:  QObject * QQmlComponent::beginCreate(QQmlContext * );
if (true) {
  auto f = [](QQmlComponent flythis, QQmlContext * arg1) {
    ((QQmlComponent*)0)->beginCreate(arg1);
    flythis.beginCreate(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent11beginCreateEP11QQmlContext beginCreate(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 107, column 10>
//   // proto:  void QQmlComponent::setData(const QByteArray & , const QUrl & baseUrl);
if (true) {
  auto f = [](QQmlComponent flythis, const QByteArray & arg1, const QUrl & arg2) {
    ((QQmlComponent*)0)->setData(arg1, arg2);
    flythis.setData(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl setData(const class QByteArray &, const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 87, column 25>
//   // proto:  QString QQmlComponent::errorString();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 86, column 22>
//   // proto:  QList<QQmlError> QQmlComponent::errors();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->errors();
    flythis.errors();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 79, column 12>
//   // proto:  QQmlComponent::Status QQmlComponent::status();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->status();
    flythis.status();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent6statusEv status()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 58, column 5>
//   // proto:  const QMetaObject * QQmlComponent::metaObject();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 97, column 10>
//   // proto:  void QQmlComponent::create(QQmlIncubator & , QQmlContext * context, QQmlContext * forContext);
if (true) {
  auto f = [](QQmlComponent flythis, QQmlIncubator & arg1, QQmlContext * arg2, QQmlContext * arg3) {
    ((QQmlComponent*)0)->create(arg1, arg2, arg3);
    flythis.create(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_ create(class QQmlIncubator &, class QQmlContext *, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 71, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QObject * parent);
if (true) {
  auto f = [](QQmlEngine * arg1, const QString & arg2, QObject * arg3) {
    new QQmlComponent(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 81, column 10>
//   // proto:  bool QQmlComponent::isNull();
if (true) {
  auto f = [](QQmlComponent flythis) {
    ((QQmlComponent*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlComponent6isNullEv isNull()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
//   // proto:  void QQmlComponent::~QQmlComponent();
extern "C"
void C_ZN13QQmlComponentD2Ev(void *qthis) {
  delete (QQmlComponent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 100, column 18>
//   // proto:  QQmlContext * QQmlComponent::creationContext();
extern "C"
void C_ZNK13QQmlComponent15creationContextEv(void *qthis) {
  ((QQmlComponent*)qthis)->creationContext();
}
// _ZNK13QQmlComponent15creationContextEv creationContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 93, column 22>
//   // proto:  QObject * QQmlComponent::create(QQmlContext * context);
extern "C"
void C_ZN13QQmlComponent6createEP11QQmlContext(void *qthis, QQmlContext * arg1) {
  ((QQmlComponent*)qthis)->create(arg1);
}
// _ZN13QQmlComponent6createEP11QQmlContext create(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 70, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP10QQmlEngineP7QObject(QQmlEngine * arg1, QObject * arg2) {
  new QQmlComponent(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 82, column 10>
//   // proto:  bool QQmlComponent::isReady();
extern "C"
void C_ZNK13QQmlComponent7isReadyEv(void *qthis) {
  ((QQmlComponent*)qthis)->isReady();
}
// _ZNK13QQmlComponent7isReadyEv isReady()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 69, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP7QObject(QObject * arg1) {
  new QQmlComponent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 89, column 11>
//   // proto:  qreal QQmlComponent::progress();
extern "C"
void C_ZNK13QQmlComponent8progressEv(void *qthis) {
  ((QQmlComponent*)qthis)->progress();
}
// _ZNK13QQmlComponent8progressEv progress()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 91, column 10>
//   // proto:  QUrl QQmlComponent::url();
extern "C"
void C_ZNK13QQmlComponent3urlEv(void *qthis) {
  ((QQmlComponent*)qthis)->url();
}
// _ZNK13QQmlComponent3urlEv url()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 102, column 35>
//   // proto: static QQmlComponentAttached * QQmlComponent::qmlAttachedProperties(QObject * );
extern "C"
void C_ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject(void *qthis, QObject * arg1) {
  ((QQmlComponent*)qthis)->qmlAttachedProperties(arg1);
}
// _ZN13QQmlComponent21qmlAttachedPropertiesEP7QObject qmlAttachedProperties(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 74, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QQmlComponent::CompilationMode mode, QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlNS_15CompilationModeEP7QObject(QQmlEngine * arg1, const QUrl & arg2, QQmlComponent::CompilationMode arg3, QObject * arg4) {
  new QQmlComponent(arg1, arg2, arg3, arg4);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 111, column 10>
//   // proto:  void QQmlComponent::progressChanged(qreal );
extern "C"
void C_ZN13QQmlComponent15progressChangedEd(void *qthis, qreal arg1) {
  ((QQmlComponent*)qthis)->progressChanged(arg1);
}
// _ZN13QQmlComponent15progressChangedEd progressChanged(qreal)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 83, column 10>
//   // proto:  bool QQmlComponent::isError();
extern "C"
void C_ZNK13QQmlComponent7isErrorEv(void *qthis) {
  ((QQmlComponent*)qthis)->isError();
}
// _ZNK13QQmlComponent7isErrorEv isError()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 106, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url, QQmlComponent::CompilationMode mode);
extern "C"
void C_ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE(void *qthis, const QUrl & arg1, QQmlComponent::CompilationMode arg2) {
  ((QQmlComponent*)qthis)->loadUrl(arg1, arg2);
}
// _ZN13QQmlComponent7loadUrlERK4QUrlNS_15CompilationModeE loadUrl(const class QUrl &, enum QQmlComponent::CompilationMode)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 95, column 18>
//   // proto:  void QQmlComponent::completeCreate();
extern "C"
void C_ZN13QQmlComponent14completeCreateEv(void *qthis) {
  ((QQmlComponent*)qthis)->completeCreate();
}
// _ZN13QQmlComponent14completeCreateEv completeCreate()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 84, column 10>
//   // proto:  bool QQmlComponent::isLoading();
extern "C"
void C_ZNK13QQmlComponent9isLoadingEv(void *qthis) {
  ((QQmlComponent*)qthis)->isLoading();
}
// _ZNK13QQmlComponent9isLoadingEv isLoading()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 105, column 10>
//   // proto:  void QQmlComponent::loadUrl(const QUrl & url);
extern "C"
void C_ZN13QQmlComponent7loadUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QQmlComponent*)qthis)->loadUrl(arg1);
}
// _ZN13QQmlComponent7loadUrlERK4QUrl loadUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 73, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QUrl & url, QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP10QQmlEngineRK4QUrlP7QObject(QQmlEngine * arg1, const QUrl & arg2, QObject * arg3) {
  new QQmlComponent(arg1, arg2, arg3);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 72, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QQmlComponent::CompilationMode mode, QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringNS_15CompilationModeEP7QObject(QQmlEngine * arg1, const QString & arg2, QQmlComponent::CompilationMode arg3, QObject * arg4) {
  new QQmlComponent(arg1, arg2, arg3, arg4);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 110, column 10>
//   // proto:  void QQmlComponent::statusChanged(QQmlComponent::Status );
extern "C"
void C_ZN13QQmlComponent13statusChangedENS_6StatusE(void *qthis, QQmlComponent::Status arg1) {
  ((QQmlComponent*)qthis)->statusChanged(arg1);
}
// _ZN13QQmlComponent13statusChangedENS_6StatusE statusChanged(class QQmlComponent::Status)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 94, column 22>
//   // proto:  QObject * QQmlComponent::beginCreate(QQmlContext * );
extern "C"
void C_ZN13QQmlComponent11beginCreateEP11QQmlContext(void *qthis, QQmlContext * arg1) {
  ((QQmlComponent*)qthis)->beginCreate(arg1);
}
// _ZN13QQmlComponent11beginCreateEP11QQmlContext beginCreate(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 107, column 10>
//   // proto:  void QQmlComponent::setData(const QByteArray & , const QUrl & baseUrl);
extern "C"
void C_ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl(void *qthis, const QByteArray & arg1, const QUrl & arg2) {
  ((QQmlComponent*)qthis)->setData(arg1, arg2);
}
// _ZN13QQmlComponent7setDataERK10QByteArrayRK4QUrl setData(const class QByteArray &, const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 87, column 25>
//   // proto:  QString QQmlComponent::errorString();
extern "C"
void C_ZNK13QQmlComponent11errorStringEv(void *qthis) {
  ((QQmlComponent*)qthis)->errorString();
}
// _ZNK13QQmlComponent11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 86, column 22>
//   // proto:  QList<QQmlError> QQmlComponent::errors();
extern "C"
void C_ZNK13QQmlComponent6errorsEv(void *qthis) {
  ((QQmlComponent*)qthis)->errors();
}
// _ZNK13QQmlComponent6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 79, column 12>
//   // proto:  QQmlComponent::Status QQmlComponent::status();
extern "C"
void C_ZNK13QQmlComponent6statusEv(void *qthis) {
  ((QQmlComponent*)qthis)->status();
}
// _ZNK13QQmlComponent6statusEv status()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 58, column 5>
//   // proto:  const QMetaObject * QQmlComponent::metaObject();
extern "C"
void C_ZNK13QQmlComponent10metaObjectEv(void *qthis) {
  ((QQmlComponent*)qthis)->metaObject();
}
// _ZNK13QQmlComponent10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 97, column 10>
//   // proto:  void QQmlComponent::create(QQmlIncubator & , QQmlContext * context, QQmlContext * forContext);
extern "C"
void C_ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_(void *qthis, QQmlIncubator & arg1, QQmlContext * arg2, QQmlContext * arg3) {
  ((QQmlComponent*)qthis)->create(arg1, arg2, arg3);
}
// _ZN13QQmlComponent6createER13QQmlIncubatorP11QQmlContextS3_ create(class QQmlIncubator &, class QQmlContext *, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 71, column 5>
//   // proto:  void QQmlComponent::QQmlComponent(QQmlEngine * , const QString & fileName, QObject * parent);
extern "C"
void C_ZN13QQmlComponentC2EP10QQmlEngineRK7QStringP7QObject(QQmlEngine * arg1, const QString & arg2, QObject * arg3) {
  new QQmlComponent(arg1, arg2, arg3);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcomponent.h', line 81, column 10>
//   // proto:  bool QQmlComponent::isNull();
extern "C"
void C_ZNK13QQmlComponent6isNullEv(void *qthis) {
  ((QQmlComponent*)qthis)->isNull();
}
// _ZNK13QQmlComponent6isNullEv isNull()
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

