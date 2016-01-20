// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
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
// <= use block end

// ext block begin =>
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

