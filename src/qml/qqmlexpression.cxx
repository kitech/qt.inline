// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlexpression.h
// dst-file: /src/qml/qqmlexpression.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlexpression.h>


#include <qstring.h>
#include <qvariant.h>
#include <qqmlerror.h>
// <= header block end

// main block begin =>
void __keep_qqmlexpression_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlExpression_Class_Size()
{
  return sizeof(QQmlExpression);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 58, column 14>
//   // proto:  void QQmlExpression::QQmlExpression(const QQmlScriptString & , QQmlContext * , QObject * , QObject * );
extern "C"
QQmlExpression*
C_ZN14QQmlExpressionC2ERK16QQmlScriptStringP11QQmlContextP7QObjectS6_(const QQmlScriptString* arg1,
QQmlContext * arg2,
QObject * arg3,
QObject * arg4) {
  auto ret = new QQmlExpression(*((const QQmlScriptString*)arg1), arg2, arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 77, column 10>
//   // proto:  bool QQmlExpression::hasError();
// _ZNK14QQmlExpression8hasErrorEv hasError()
extern "C"
bool
C_ZNK14QQmlExpression8hasErrorEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->hasError();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 70, column 13>
//   // proto:  QString QQmlExpression::sourceFile();
// _ZNK14QQmlExpression10sourceFileEv sourceFile()
extern "C"
QString*
C_ZNK14QQmlExpression10sourceFileEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->sourceFile();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 54, column 5>
//   // proto:  const QMetaObject * QQmlExpression::metaObject();
// _ZNK14QQmlExpression10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QQmlExpression10metaObjectEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 61, column 17>
//   // proto:  QQmlEngine * QQmlExpression::engine();
// _ZNK14QQmlExpression6engineEv engine()
extern "C"
void*
C_ZNK14QQmlExpression6engineEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 64, column 13>
//   // proto:  QString QQmlExpression::expression();
// _ZNK14QQmlExpression10expressionEv expression()
extern "C"
QString*
C_ZNK14QQmlExpression10expressionEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->expression();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 84, column 10>
//   // proto:  void QQmlExpression::valueChanged();
// _ZN14QQmlExpression12valueChangedEv valueChanged()
extern "C"
void
C_ZN14QQmlExpression12valueChangedEv(void *qthis) {
  ((QQmlExpression*)qthis)->valueChanged();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 56, column 5>
//   // proto:  void QQmlExpression::QQmlExpression();
extern "C"
QQmlExpression*
C_ZN14QQmlExpressionC2Ev() {
  auto ret = new QQmlExpression();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 71, column 9>
//   // proto:  int QQmlExpression::lineNumber();
// _ZNK14QQmlExpression10lineNumberEv lineNumber()
extern "C"
int
C_ZNK14QQmlExpression10lineNumberEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->lineNumber();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QQmlExpression::~QQmlExpression();
extern "C"
void C_ZN14QQmlExpressionD2Ev(void *qthis) {
  delete (QQmlExpression*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 78, column 10>
//   // proto:  void QQmlExpression::clearError();
// _ZN14QQmlExpression10clearErrorEv clearError()
extern "C"
void
C_ZN14QQmlExpression10clearErrorEv(void *qthis) {
  ((QQmlExpression*)qthis)->clearError();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 81, column 14>
//   // proto:  QVariant QQmlExpression::evaluate(bool * valueIsUndefined);
// _ZN14QQmlExpression8evaluateEPb evaluate(_Bool *)
extern "C"
QVariant*
C_ZN14QQmlExpression8evaluateEPb(void *qthis,
bool * arg1) {
  auto ret =
  ((QQmlExpression*)qthis)->evaluate(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 72, column 9>
//   // proto:  int QQmlExpression::columnNumber();
// _ZNK14QQmlExpression12columnNumberEv columnNumber()
extern "C"
int
C_ZNK14QQmlExpression12columnNumberEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->columnNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 73, column 10>
//   // proto:  void QQmlExpression::setSourceLocation(const QString & fileName, int line, int column);
// _ZN14QQmlExpression17setSourceLocationERK7QStringii setSourceLocation(const class QString &, int, int)
extern "C"
void
C_ZN14QQmlExpression17setSourceLocationERK7QStringii(void *qthis,
const QString* arg1,
int arg2,
int arg3) {
  ((QQmlExpression*)qthis)->setSourceLocation(*((const QString*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 67, column 10>
//   // proto:  bool QQmlExpression::notifyOnValueChanged();
// _ZNK14QQmlExpression20notifyOnValueChangedEv notifyOnValueChanged()
extern "C"
bool
C_ZNK14QQmlExpression20notifyOnValueChangedEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->notifyOnValueChanged();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 57, column 5>
//   // proto:  void QQmlExpression::QQmlExpression(QQmlContext * , QObject * , const QString & , QObject * );
extern "C"
QQmlExpression*
C_ZN14QQmlExpressionC2EP11QQmlContextP7QObjectRK7QStringS3_(QQmlContext * arg1,
QObject * arg2,
const QString* arg3,
QObject * arg4) {
  auto ret = new QQmlExpression(arg1, arg2, *((const QString*)arg3), arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 79, column 15>
//   // proto:  QQmlError QQmlExpression::error();
// _ZNK14QQmlExpression5errorEv error()
extern "C"
QQmlError*
C_ZNK14QQmlExpression5errorEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->error();
  return new QQmlError(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 62, column 18>
//   // proto:  QQmlContext * QQmlExpression::context();
// _ZNK14QQmlExpression7contextEv context()
extern "C"
void*
C_ZNK14QQmlExpression7contextEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->context();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 65, column 10>
//   // proto:  void QQmlExpression::setExpression(const QString & );
// _ZN14QQmlExpression13setExpressionERK7QString setExpression(const class QString &)
extern "C"
void
C_ZN14QQmlExpression13setExpressionERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlExpression*)qthis)->setExpression(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 68, column 10>
//   // proto:  void QQmlExpression::setNotifyOnValueChanged(bool );
// _ZN14QQmlExpression23setNotifyOnValueChangedEb setNotifyOnValueChanged(_Bool)
extern "C"
void
C_ZN14QQmlExpression23setNotifyOnValueChangedEb(void *qthis,
bool arg1) {
  ((QQmlExpression*)qthis)->setNotifyOnValueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlexpression.h', line 75, column 14>
//   // proto:  QObject * QQmlExpression::scopeObject();
// _ZNK14QQmlExpression11scopeObjectEv scopeObject()
extern "C"
void*
C_ZNK14QQmlExpression11scopeObjectEv(void *qthis) {
  auto ret =
  ((QQmlExpression*)qthis)->scopeObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QQmlExpression_SlotProxy here
class QQmlExpression_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlExpression_SlotProxy():QObject(){}

public slots:
  // valueChanged()
  void slot_proxy_func__ZN14QQmlExpression12valueChangedEv();
public:
  void (*slot_func__ZN14QQmlExpression12valueChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlexpression.moc"

extern "C" {
  QQmlExpression_SlotProxy* QQmlExpression_SlotProxy_new()
  {
    return new QQmlExpression_SlotProxy();
  }
};

void QQmlExpression_SlotProxy::slot_proxy_func__ZN14QQmlExpression12valueChangedEv() {
  if (this->slot_func__ZN14QQmlExpression12valueChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QQmlExpression12valueChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQmlExpression_SlotProxy_connect__ZN14QQmlExpression12valueChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlExpression_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QQmlExpression12valueChangedEv = (decltype(that->slot_func__ZN14QQmlExpression12valueChangedEv))ffifptr;
  QObject::connect((QQmlExpression*)sender, SIGNAL(valueChanged()), that, SLOT(slot_proxy_func__ZN14QQmlExpression12valueChangedEv()));
  return that;
}
extern "C"
void QQmlExpression_SlotProxy_disconnect__ZN14QQmlExpression12valueChangedEv(QQmlExpression_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

