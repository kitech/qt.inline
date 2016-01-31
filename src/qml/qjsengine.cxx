#include <qjsvalue.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qjsengine.h
// dst-file: /src/qml/qjsengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qjsengine.h>

extern "C" {

int QJSEngine_Class_Size()
{
  return sizeof(QJSEngine);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qjsengine_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 66, column 14>
//   // proto:  QJSValue QJSEngine::newObject();
if (true) {
  auto f = [](QJSEngine flythis) {
    ((QJSEngine*)0)->newObject();
    flythis.newObject();
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine9newObjectEv newObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 59, column 14>
//   // proto:  void QJSEngine::QJSEngine(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QJSEngine(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 67, column 14>
//   // proto:  QJSValue QJSEngine::newArray(uint length);
if (true) {
  auto f = [](QJSEngine flythis, uint arg1) {
    ((QJSEngine*)0)->newArray(arg1);
    flythis.newArray(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine8newArrayEj newArray(uint)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 56, column 5>
//   // proto:  const QMetaObject * QJSEngine::metaObject();
if (true) {
  auto f = [](QJSEngine flythis) {
    ((QJSEngine*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK9QJSEngine10metaObjectEv metaObject()
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
//   // proto:  void QJSEngine::~QJSEngine();
if (true) {
  delete ((QJSEngine*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 82, column 10>
//   // proto:  void QJSEngine::collectGarbage();
if (true) {
  auto f = [](QJSEngine flythis) {
    ((QJSEngine*)0)->collectGarbage();
    flythis.collectGarbage();
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine14collectGarbageEv collectGarbage()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 62, column 14>
//   // proto:  QJSValue QJSEngine::globalObject();
if (true) {
  auto f = [](QJSEngine flythis) {
    ((QJSEngine*)0)->globalObject();
    flythis.globalObject();
  };
  if (f == nullptr){}
}
// _ZNK9QJSEngine12globalObjectEv globalObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 58, column 5>
//   // proto:  void QJSEngine::QJSEngine();
if (true) {
  auto f = []() {
    new QJSEngine();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 84, column 10>
//   // proto:  void QJSEngine::installTranslatorFunctions(const QJSValue & object);
if (true) {
  auto f = [](QJSEngine flythis, const QJSValue & arg1) {
    ((QJSEngine*)0)->installTranslatorFunctions(arg1);
    flythis.installTranslatorFunctions(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue installTranslatorFunctions(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 64, column 14>
//   // proto:  QJSValue QJSEngine::evaluate(const QString & program, const QString & fileName, int lineNumber);
if (true) {
  auto f = [](QJSEngine flythis, const QString & arg1, const QString & arg2, int arg3) {
    ((QJSEngine*)0)->evaluate(arg1, arg2, arg3);
    flythis.evaluate(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine8evaluateERK7QStringS2_i evaluate(const class QString &, const class QString &, int)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 69, column 14>
//   // proto:  QJSValue QJSEngine::newQObject(QObject * object);
if (true) {
  auto f = [](QJSEngine flythis, QObject * arg1) {
    ((QJSEngine*)0)->newQObject(arg1);
    flythis.newQObject(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QJSEngine10newQObjectEP7QObject newQObject(class QObject *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 66, column 14>
//   // proto:  QJSValue QJSEngine::newObject();
extern "C"
void C_ZN9QJSEngine9newObjectEv(void *qthis) {
  ((QJSEngine*)qthis)->newObject();
}
// _ZN9QJSEngine9newObjectEv newObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 59, column 14>
//   // proto:  void QJSEngine::QJSEngine(QObject * parent);
extern "C"
void C_ZN9QJSEngineC2EP7QObject(QObject * arg1) {
  new QJSEngine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 67, column 14>
//   // proto:  QJSValue QJSEngine::newArray(uint length);
extern "C"
void C_ZN9QJSEngine8newArrayEj(void *qthis, uint arg1) {
  ((QJSEngine*)qthis)->newArray(arg1);
}
// _ZN9QJSEngine8newArrayEj newArray(uint)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 56, column 5>
//   // proto:  const QMetaObject * QJSEngine::metaObject();
extern "C"
void C_ZNK9QJSEngine10metaObjectEv(void *qthis) {
  ((QJSEngine*)qthis)->metaObject();
}
// _ZNK9QJSEngine10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 86, column 16>
//   // proto:  QV8Engine * QJSEngine::handle();
extern "C"
void C_ZNK9QJSEngine6handleEv(void *qthis) {
  ((QJSEngine*)qthis)->handle();
}
// _ZNK9QJSEngine6handleEv handle()
//   // proto:  void QJSEngine::~QJSEngine();
extern "C"
void C_ZN9QJSEngineD2Ev(void *qthis) {
  delete (QJSEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 82, column 10>
//   // proto:  void QJSEngine::collectGarbage();
extern "C"
void C_ZN9QJSEngine14collectGarbageEv(void *qthis) {
  ((QJSEngine*)qthis)->collectGarbage();
}
// _ZN9QJSEngine14collectGarbageEv collectGarbage()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 62, column 14>
//   // proto:  QJSValue QJSEngine::globalObject();
extern "C"
void C_ZNK9QJSEngine12globalObjectEv(void *qthis) {
  ((QJSEngine*)qthis)->globalObject();
}
// _ZNK9QJSEngine12globalObjectEv globalObject()
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 58, column 5>
//   // proto:  void QJSEngine::QJSEngine();
extern "C"
void C_ZN9QJSEngineC2Ev() {
  new QJSEngine();
}
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 84, column 10>
//   // proto:  void QJSEngine::installTranslatorFunctions(const QJSValue & object);
extern "C"
void C_ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue(void *qthis, const QJSValue & arg1) {
  ((QJSEngine*)qthis)->installTranslatorFunctions(arg1);
}
// _ZN9QJSEngine26installTranslatorFunctionsERK8QJSValue installTranslatorFunctions(const class QJSValue &)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 64, column 14>
//   // proto:  QJSValue QJSEngine::evaluate(const QString & program, const QString & fileName, int lineNumber);
extern "C"
void C_ZN9QJSEngine8evaluateERK7QStringS2_i(void *qthis, const QString & arg1, const QString & arg2, int arg3) {
  ((QJSEngine*)qthis)->evaluate(arg1, arg2, arg3);
}
// _ZN9QJSEngine8evaluateERK7QStringS2_i evaluate(const class QString &, const class QString &, int)
// <SourceLocation file '/usr/include/qt/QtQml/qjsengine.h', line 69, column 14>
//   // proto:  QJSValue QJSEngine::newQObject(QObject * object);
extern "C"
void C_ZN9QJSEngine10newQObjectEP7QObject(void *qthis, QObject * arg1) {
  ((QJSEngine*)qthis)->newQObject(arg1);
}
// _ZN9QJSEngine10newQObjectEP7QObject newQObject(class QObject *)
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

