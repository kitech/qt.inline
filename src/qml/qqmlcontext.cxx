// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlcontext.h
// dst-file: /src/qml/qqmlcontext.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlcontext.h>


#include <qurl.h>
#include <qvariant.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qqmlcontext_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlContext_Class_Size()
{
  return sizeof(QQmlContext);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 60, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlContext * parent, QObject * objParent);
extern "C"
QQmlContext*
C_ZN11QQmlContextC2EPS_P7QObject(QQmlContext * arg1,
QObject * arg2) {
  auto ret = new QQmlContext(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 68, column 14>
//   // proto:  QObject * QQmlContext::contextObject();
// _ZNK11QQmlContext13contextObjectEv contextObject()
extern "C"
void*
C_ZNK11QQmlContext13contextObjectEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->contextObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 55, column 5>
//   // proto:  const QMetaObject * QQmlContext::metaObject();
// _ZNK11QQmlContext10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QQmlContext10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 72, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , QObject * );
// _ZN11QQmlContext18setContextPropertyERK7QStringP7QObject setContextProperty(const class QString &, class QObject *)
extern "C"
void
C_ZN11QQmlContext18setContextPropertyERK7QStringP7QObject(void *qthis,
const QString* arg1,
QObject * arg2) {
  ((QQmlContext*)qthis)->setContextProperty(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 65, column 17>
//   // proto:  QQmlEngine * QQmlContext::engine();
// _ZNK11QQmlContext6engineEv engine()
extern "C"
void*
C_ZNK11QQmlContext6engineEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 80, column 10>
//   // proto:  QUrl QQmlContext::baseUrl();
// _ZNK11QQmlContext7baseUrlEv baseUrl()
extern "C"
QUrl*
C_ZNK11QQmlContext7baseUrlEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->baseUrl();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 71, column 14>
//   // proto:  QVariant QQmlContext::contextProperty(const QString & );
// _ZNK11QQmlContext15contextPropertyERK7QString contextProperty(const class QString &)
extern "C"
QVariant*
C_ZNK11QQmlContext15contextPropertyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QQmlContext*)qthis)->contextProperty(*((const QString*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 69, column 10>
//   // proto:  void QQmlContext::setContextObject(QObject * );
// _ZN11QQmlContext16setContextObjectEP7QObject setContextObject(class QObject *)
extern "C"
void
C_ZN11QQmlContext16setContextObjectEP7QObject(void *qthis,
QObject * arg1) {
  ((QQmlContext*)qthis)->setContextObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 66, column 18>
//   // proto:  QQmlContext * QQmlContext::parentContext();
// _ZNK11QQmlContext13parentContextEv parentContext()
extern "C"
void*
C_ZNK11QQmlContext13parentContextEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->parentContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 77, column 10>
//   // proto:  QUrl QQmlContext::resolvedUrl(const QUrl & );
// _ZN11QQmlContext11resolvedUrlERK4QUrl resolvedUrl(const class QUrl &)
extern "C"
QUrl*
C_ZN11QQmlContext11resolvedUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QQmlContext*)qthis)->resolvedUrl(*((const QUrl*)arg1));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 79, column 10>
//   // proto:  void QQmlContext::setBaseUrl(const QUrl & );
// _ZN11QQmlContext10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
extern "C"
void
C_ZN11QQmlContext10setBaseUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQmlContext*)qthis)->setBaseUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 75, column 13>
//   // proto:  QString QQmlContext::nameForObject(QObject * );
// _ZNK11QQmlContext13nameForObjectEP7QObject nameForObject(class QObject *)
extern "C"
QString*
C_ZNK11QQmlContext13nameForObjectEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QQmlContext*)qthis)->nameForObject(arg1);
  return new QString(ret); // 5
}
//   // proto:  void QQmlContext::~QQmlContext();
extern "C"
void C_ZN11QQmlContextD2Ev(void *qthis) {
  delete (QQmlContext*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 63, column 10>
//   // proto:  bool QQmlContext::isValid();
// _ZNK11QQmlContext7isValidEv isValid()
extern "C"
bool
C_ZNK11QQmlContext7isValidEv(void *qthis) {
  auto ret =
  ((QQmlContext*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 59, column 5>
//   // proto:  void QQmlContext::QQmlContext(QQmlEngine * parent, QObject * objParent);
extern "C"
QQmlContext*
C_ZN11QQmlContextC2EP10QQmlEngineP7QObject(QQmlEngine * arg1,
QObject * arg2) {
  auto ret = new QQmlContext(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlcontext.h', line 73, column 10>
//   // proto:  void QQmlContext::setContextProperty(const QString & , const QVariant & );
// _ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant setContextProperty(const class QString &, const class QVariant &)
extern "C"
void
C_ZN11QQmlContext18setContextPropertyERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QQmlContext*)qthis)->setContextProperty(*((const QString*)arg1),
*((const QVariant*)arg2));
}
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

