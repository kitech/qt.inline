#include <qstring.h>
#include <qvariant.h>
#include <qurl.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlcontext.h
// dst-file: /src/qml/qqmlcontext.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlcontext.h>

extern "C" {

int QQmlContext_Class_Size()
{
  return sizeof(QQmlContext);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlcontext_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 60, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlContext * parent, QObject * objParent);
if (true) {
  auto f = [](QQmlContext * arg1, QObject * arg2) {
    new QQmlContext(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 68, column 14>
//   // proto:  QObject * QQmlContext::contextObject();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->contextObject();
    flythis.contextObject();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext13contextObjectEv contextObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 55, column 5>
//   // proto:  const QMetaObject * QQmlContext::metaObject();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 72, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , QObject * );
if (true) {
  auto f = [](QQmlContext flythis, const QString & arg1, QObject * arg2) {
    ((QQmlContext*)0)->setContextProperty(arg1, arg2);
    flythis.setContextProperty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN11QQmlContext18setContextPropertyERK7QStringP7QObject setContextProperty(const class QString &, class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 65, column 17>
//   // proto:  QQmlEngine * QQmlContext::engine();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->engine();
    flythis.engine();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 80, column 10>
//   // proto:  QUrl QQmlContext::baseUrl();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->baseUrl();
    flythis.baseUrl();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext7baseUrlEv baseUrl()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 71, column 14>
//   // proto:  QVariant QQmlContext::contextProperty(const QString & );
if (true) {
  auto f = [](QQmlContext flythis, const QString & arg1) {
    ((QQmlContext*)0)->contextProperty(arg1);
    flythis.contextProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext15contextPropertyERK7QString contextProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 69, column 10>
//   // proto:  void QQmlContext::setContextObject(QObject * );
if (true) {
  auto f = [](QQmlContext flythis, QObject * arg1) {
    ((QQmlContext*)0)->setContextObject(arg1);
    flythis.setContextObject(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QQmlContext16setContextObjectEP7QObject setContextObject(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 66, column 18>
//   // proto:  QQmlContext * QQmlContext::parentContext();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->parentContext();
    flythis.parentContext();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext13parentContextEv parentContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 77, column 10>
//   // proto:  QUrl QQmlContext::resolvedUrl(const QUrl & );
if (true) {
  auto f = [](QQmlContext flythis, const QUrl & arg1) {
    ((QQmlContext*)0)->resolvedUrl(arg1);
    flythis.resolvedUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QQmlContext11resolvedUrlERK4QUrl resolvedUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 79, column 10>
//   // proto:  void QQmlContext::setBaseUrl(const QUrl & );
if (true) {
  auto f = [](QQmlContext flythis, const QUrl & arg1) {
    ((QQmlContext*)0)->setBaseUrl(arg1);
    flythis.setBaseUrl(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QQmlContext10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 75, column 13>
//   // proto:  QString QQmlContext::nameForObject(QObject * );
if (true) {
  auto f = [](QQmlContext flythis, QObject * arg1) {
    ((QQmlContext*)0)->nameForObject(arg1);
    flythis.nameForObject(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext13nameForObjectEP7QObject nameForObject(class QObject *)
//   // proto:  void QQmlContext::~QQmlContext();
if (true) {
  delete ((QQmlContext*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 63, column 10>
//   // proto:  bool QQmlContext::isValid();
if (true) {
  auto f = [](QQmlContext flythis) {
    ((QQmlContext*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK11QQmlContext7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 59, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlEngine * parent, QObject * objParent);
if (true) {
  auto f = [](QQmlEngine * arg1, QObject * arg2) {
    new QQmlContext(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 73, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , const QVariant & );
if (true) {
  auto f = [](QQmlContext flythis, const QString & arg1, const QVariant & arg2) {
    ((QQmlContext*)0)->setContextProperty(arg1, arg2);
    flythis.setContextProperty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant setContextProperty(const class QString &, const class QVariant &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 60, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlContext * parent, QObject * objParent);
extern "C"
void C_ZN11QQmlContextC2EPS_P7QObject(QQmlContext * arg1, QObject * arg2) {
  new QQmlContext(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 68, column 14>
//   // proto:  QObject * QQmlContext::contextObject();
extern "C"
void C_ZNK11QQmlContext13contextObjectEv(void *qthis) {
  ((QQmlContext*)qthis)->contextObject();
}
// _ZNK11QQmlContext13contextObjectEv contextObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 55, column 5>
//   // proto:  const QMetaObject * QQmlContext::metaObject();
extern "C"
void C_ZNK11QQmlContext10metaObjectEv(void *qthis) {
  ((QQmlContext*)qthis)->metaObject();
}
// _ZNK11QQmlContext10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 72, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , QObject * );
extern "C"
void C_ZN11QQmlContext18setContextPropertyERK7QStringP7QObject(void *qthis, const QString & arg1, QObject * arg2) {
  ((QQmlContext*)qthis)->setContextProperty(arg1, arg2);
}
// _ZN11QQmlContext18setContextPropertyERK7QStringP7QObject setContextProperty(const class QString &, class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 65, column 17>
//   // proto:  QQmlEngine * QQmlContext::engine();
extern "C"
void C_ZNK11QQmlContext6engineEv(void *qthis) {
  ((QQmlContext*)qthis)->engine();
}
// _ZNK11QQmlContext6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 80, column 10>
//   // proto:  QUrl QQmlContext::baseUrl();
extern "C"
void C_ZNK11QQmlContext7baseUrlEv(void *qthis) {
  ((QQmlContext*)qthis)->baseUrl();
}
// _ZNK11QQmlContext7baseUrlEv baseUrl()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 71, column 14>
//   // proto:  QVariant QQmlContext::contextProperty(const QString & );
extern "C"
void C_ZNK11QQmlContext15contextPropertyERK7QString(void *qthis, const QString & arg1) {
  ((QQmlContext*)qthis)->contextProperty(arg1);
}
// _ZNK11QQmlContext15contextPropertyERK7QString contextProperty(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 69, column 10>
//   // proto:  void QQmlContext::setContextObject(QObject * );
extern "C"
void C_ZN11QQmlContext16setContextObjectEP7QObject(void *qthis, QObject * arg1) {
  ((QQmlContext*)qthis)->setContextObject(arg1);
}
// _ZN11QQmlContext16setContextObjectEP7QObject setContextObject(class QObject *)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 66, column 18>
//   // proto:  QQmlContext * QQmlContext::parentContext();
extern "C"
void C_ZNK11QQmlContext13parentContextEv(void *qthis) {
  ((QQmlContext*)qthis)->parentContext();
}
// _ZNK11QQmlContext13parentContextEv parentContext()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 77, column 10>
//   // proto:  QUrl QQmlContext::resolvedUrl(const QUrl & );
extern "C"
void C_ZN11QQmlContext11resolvedUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QQmlContext*)qthis)->resolvedUrl(arg1);
}
// _ZN11QQmlContext11resolvedUrlERK4QUrl resolvedUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 79, column 10>
//   // proto:  void QQmlContext::setBaseUrl(const QUrl & );
extern "C"
void C_ZN11QQmlContext10setBaseUrlERK4QUrl(void *qthis, const QUrl & arg1) {
  ((QQmlContext*)qthis)->setBaseUrl(arg1);
}
// _ZN11QQmlContext10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 75, column 13>
//   // proto:  QString QQmlContext::nameForObject(QObject * );
extern "C"
void C_ZNK11QQmlContext13nameForObjectEP7QObject(void *qthis, QObject * arg1) {
  ((QQmlContext*)qthis)->nameForObject(arg1);
}
// _ZNK11QQmlContext13nameForObjectEP7QObject nameForObject(class QObject *)
//   // proto:  void QQmlContext::~QQmlContext();
extern "C"
void C_ZN11QQmlContextD2Ev(void *qthis) {
  delete (QQmlContext*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 63, column 10>
//   // proto:  bool QQmlContext::isValid();
extern "C"
void C_ZNK11QQmlContext7isValidEv(void *qthis) {
  ((QQmlContext*)qthis)->isValid();
}
// _ZNK11QQmlContext7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 59, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlEngine * parent, QObject * objParent);
extern "C"
void C_ZN11QQmlContextC2EP10QQmlEngineP7QObject(QQmlEngine * arg1, QObject * arg2) {
  new QQmlContext(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 73, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , const QVariant & );
extern "C"
void C_ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant(void *qthis, const QString & arg1, const QVariant & arg2) {
  ((QQmlContext*)qthis)->setContextProperty(arg1, arg2);
}
// _ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant setContextProperty(const class QString &, const class QVariant &)
// <= ext block end

// body block begin =>
// QQmlContext_SlotProxy here
class QQmlContext_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlContext_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/qml/qqmlcontext.moc"

extern "C" {
  QQmlContext_SlotProxy* QQmlContext_SlotProxy_new()
  {
    return new QQmlContext_SlotProxy();
  }
};

// <= body block end

