// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQml/qqmlengine.h
// dst-file: /src/qml/qqmlengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlengine.h>

extern "C" {

int QQmlEngine_Class_Size()
{
  return sizeof(QQmlEngine);
}

int QQmlImageProviderBase_Class_Size()
{
  return sizeof(QQmlImageProviderBase);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQmlEngine_SlotProxy here
class QQmlEngine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQmlEngine_SlotProxy():QObject(){}

public slots:
  // quit()
  void slot_proxy_func__ZN10QQmlEngine4quitEv();
public:
  void (*slot_func__ZN10QQmlEngine4quitEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/qml/qqmlengine.moc"

extern "C" {
  QQmlEngine_SlotProxy* QQmlEngine_SlotProxy_new()
  {
    return new QQmlEngine_SlotProxy();
  }
};

void QQmlEngine_SlotProxy::slot_proxy_func__ZN10QQmlEngine4quitEv() {
  if (this->slot_func__ZN10QQmlEngine4quitEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQmlEngine4quitEv(this->rsfptr);
  }
}
extern "C"
void* QQmlEngine_SlotProxy_connect__ZN10QQmlEngine4quitEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQmlEngine_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQmlEngine4quitEv = (decltype(that->slot_func__ZN10QQmlEngine4quitEv))ffifptr;
  QObject::connect((QQmlEngine*)sender, SIGNAL(quit()), that, SLOT(slot_proxy_func__ZN10QQmlEngine4quitEv()));
  return that;
}
extern "C"
void QQmlEngine_SlotProxy_disconnect__ZN10QQmlEngine4quitEv(QQmlEngine_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

