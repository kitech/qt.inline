// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qsgtextureprovider.h
// dst-file: /src/quick/qsgtextureprovider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgtextureprovider.h>

extern "C" {

int QSGTextureProvider_Class_Size()
{
  return sizeof(QSGTextureProvider);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgtextureprovider_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSGTextureProvider_SlotProxy here
class QSGTextureProvider_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGTextureProvider_SlotProxy():QObject(){}

public slots:
  // textureChanged()
  void slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv();
public:
  void (*slot_func__ZN18QSGTextureProvider14textureChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qsgtextureprovider.moc"

extern "C" {
  QSGTextureProvider_SlotProxy* QSGTextureProvider_SlotProxy_new()
  {
    return new QSGTextureProvider_SlotProxy();
  }
};

void QSGTextureProvider_SlotProxy::slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv() {
  if (this->slot_func__ZN18QSGTextureProvider14textureChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QSGTextureProvider14textureChangedEv(this->rsfptr);
  }
}
extern "C"
void* QSGTextureProvider_SlotProxy_connect__ZN18QSGTextureProvider14textureChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSGTextureProvider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QSGTextureProvider14textureChangedEv = (decltype(that->slot_func__ZN18QSGTextureProvider14textureChangedEv))ffifptr;
  QObject::connect((QSGTextureProvider*)sender, SIGNAL(textureChanged()), that, SLOT(slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv()));
  return that;
}
extern "C"
void QSGTextureProvider_SlotProxy_disconnect__ZN18QSGTextureProvider14textureChangedEv(QSGTextureProvider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

