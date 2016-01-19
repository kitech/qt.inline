// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
// src-file: /QtNetwork/qlocalserver.h
// dst-file: /src/network/qlocalserver.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qlocalserver.h>

extern "C" {

int QLocalServer_Class_Size()
{
  return sizeof(QLocalServer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qlocalserver_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QLocalServer_SlotProxy here
class QLocalServer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLocalServer_SlotProxy():QObject(){}

public slots:
  // newConnection()
  void slot_proxy_func__ZN12QLocalServer13newConnectionEv();
public:
  void (*slot_func__ZN12QLocalServer13newConnectionEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qlocalserver.moc"

extern "C" {
  QLocalServer_SlotProxy* QLocalServer_SlotProxy_new()
  {
    return new QLocalServer_SlotProxy();
  }
};

void QLocalServer_SlotProxy::slot_proxy_func__ZN12QLocalServer13newConnectionEv() {
  if (this->slot_func__ZN12QLocalServer13newConnectionEv != NULL) {
    // do smth...
    this->slot_func__ZN12QLocalServer13newConnectionEv(this->rsfptr);
  }
}
extern "C"
void* QLocalServer_SlotProxy_connect__ZN12QLocalServer13newConnectionEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLocalServer_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QLocalServer13newConnectionEv = (decltype(that->slot_func__ZN12QLocalServer13newConnectionEv))ffifptr;
  QObject::connect((QLocalServer*)sender, SIGNAL(newConnection()), that, SLOT(slot_proxy_func__ZN12QLocalServer13newConnectionEv()));
  return that;
}
extern "C"
void QLocalServer_SlotProxy_disconnect__ZN12QLocalServer13newConnectionEv(QLocalServer_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

