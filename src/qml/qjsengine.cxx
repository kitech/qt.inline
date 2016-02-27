// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qjsengine.h
// dst-file: /src/qml/qjsengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qjsengine.h>


#include <qjsvalue.h>
// <= header block end

// main block begin =>
void __keep_qjsengine_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 86, column 16>
//   // proto:  QV8Engine * QJSEngine::handle();
if (true) {
  auto f = [](QJSEngine flythis) {
    ((QJSEngine*)0)->handle();
    flythis.handle();
  };
  if (f == nullptr){}
}
// _ZNK9QJSEngine6handleEv handle()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QJSEngine_Class_Size()
{
  return sizeof(QJSEngine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 66, column 14>
//   // proto:  QJSValue QJSEngine::newObject();
// _ZN9QJSEngine9newObjectEv newObject()
extern "C"
QJSValue*
C_ZN9QJSEngine9newObjectEv(void *qthis) {
  auto ret =
  ((QJSEngine*)qthis)->newObject();
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 59, column 14>
//   // proto:  void QJSEngine::QJSEngine(QObject * parent);
extern "C"
QJSEngine*
C_ZN9QJSEngineC2EP7QObject(QObject * arg1) {
  auto ret = new QJSEngine(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 67, column 14>
//   // proto:  QJSValue QJSEngine::newArray(uint length);
// _ZN9QJSEngine8newArrayEj newArray(uint)
extern "C"
QJSValue*
C_ZN9QJSEngine8newArrayEj(void *qthis,
uint arg1) {
  auto ret =
  ((QJSEngine*)qthis)->newArray(arg1);
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 56, column 5>
//   // proto:  const QMetaObject * QJSEngine::metaObject();
// _ZNK9QJSEngine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QJSEngine10metaObjectEv(void *qthis) {
  auto ret =
  ((QJSEngine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 86, column 16>
//   // proto:  QV8Engine * QJSEngine::handle();
// _ZNK9QJSEngine6handleEv handle()
extern "C"
void*
C_ZNK9QJSEngine6handleEv(void *qthis) {
  auto ret =
  ((QJSEngine*)qthis)->handle();
  return (void*)ret;
}
//   // proto:  void QJSEngine::~QJSEngine();
extern "C"
void C_ZN9QJSEngineD2Ev(void *qthis) {
  delete (QJSEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 82, column 10>
//   // proto:  void QJSEngine::collectGarbage();
// _ZN9QJSEngine14collectGarbageEv collectGarbage()
extern "C"
void
C_ZN9QJSEngine14collectGarbageEv(void *qthis) {
  ((QJSEngine*)qthis)->collectGarbage();
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 62, column 14>
//   // proto:  QJSValue QJSEngine::globalObject();
// _ZNK9QJSEngine12globalObjectEv globalObject()
extern "C"
QJSValue*
C_ZNK9QJSEngine12globalObjectEv(void *qthis) {
  auto ret =
  ((QJSEngine*)qthis)->globalObject();
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 58, column 5>
//   // proto:  void QJSEngine::QJSEngine();
extern "C"
QJSEngine*
C_ZN9QJSEngineC2Ev() {
  auto ret = new QJSEngine();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 84, column 10>
//   // proto:  void QJSEngine::installTranslatorFunctions(const QJSValue & object);
// _ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue installTranslatorFunctions(const class QJSValue &)
extern "C"
void
C_ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue(void *qthis,
const QJSValue* arg1) {
  ((QJSEngine*)qthis)->installTranslatorFunctions(*((const QJSValue*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 64, column 14>
//   // proto:  QJSValue QJSEngine::evaluate(const QString & program, const QString & fileName, int lineNumber);
// _ZN9QJSEngine8evaluateERK7QStringS2_i evaluate(const class QString &, const class QString &, int)
extern "C"
QJSValue*
C_ZN9QJSEngine8evaluateERK7QStringS2_i(void *qthis,
const QString* arg1,
const QString* arg2,
int arg3) {
  auto ret =
  ((QJSEngine*)qthis)->evaluate(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return new QJSValue(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 69, column 14>
//   // proto:  QJSValue QJSEngine::newQObject(QObject * object);
// _ZN9QJSEngine10newQObjectEP7QObject newQObject(class QObject *)
extern "C"
QJSValue*
C_ZN9QJSEngine10newQObjectEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QJSEngine*)qthis)->newQObject(arg1);
  return new QJSValue(ret); // 5
}
// <= ext block end

// body block begin =>
// QJSEngine_SlotProxy here
class QJSEngine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QJSEngine_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/qml/qjsengine.moc"

extern "C" {
  QJSEngine_SlotProxy* QJSEngine_SlotProxy_new()
  {
    return new QJSEngine_SlotProxy();
  }
};

// <= body block end

