// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qiodevice.h
// dst-file: /src/core/qiodevice.cxx
//

// header block begin =>
#include <qiodevice.h>

extern "C" {

int QIODevice_Class_Size()
{
  return sizeof(QIODevice);
}

  // proto:  qint64 QIODevice::write(const QByteArray & data);
qint64 demth_ZN9QIODevice5writeERK10QByteArray(void *that, const QByteArray & data)
{
  QIODevice *cthat = (QIODevice *)that;
  return cthat->write(data);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QIODevice_SlotProxy here
class QIODevice_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QIODevice_SlotProxy():QObject(){}

public slots:
  // readyRead()
  void slot_proxy_func__ZN9QIODevice9readyReadEv();
public:
  void (*slot_func__ZN9QIODevice9readyReadEv)() = NULL;
public slots:
  // bytesWritten(qint64)
  void slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0);
public:
  void (*slot_func__ZN9QIODevice12bytesWrittenEx)(qint64 arg0) = NULL;
public slots:
  // aboutToClose()
  void slot_proxy_func__ZN9QIODevice12aboutToCloseEv();
public:
  void (*slot_func__ZN9QIODevice12aboutToCloseEv)() = NULL;
public slots:
  // readChannelFinished()
  void slot_proxy_func__ZN9QIODevice19readChannelFinishedEv();
public:
  void (*slot_func__ZN9QIODevice19readChannelFinishedEv)() = NULL;
};
#include "src/core/qiodevice.moc"

extern "C" {
  QIODevice_SlotProxy* QIODevice_SlotProxy_new()
  {
    return new QIODevice_SlotProxy();
  }
};

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice9readyReadEv() {
  if (this->slot_func__ZN9QIODevice9readyReadEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice9readyReadEv();
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice9readyReadEv(QObject* sender, void* fptr){
  auto that = new QIODevice_SlotProxy();
  that->slot_func__ZN9QIODevice9readyReadEv = (decltype(that->slot_func__ZN9QIODevice9readyReadEv))fptr;
  QObject::connect((QIODevice*)sender, SIGNAL(readyRead()), that, SLOT(slot_proxy_func__ZN9QIODevice9readyReadEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice9readyReadEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0) {
  if (this->slot_func__ZN9QIODevice12bytesWrittenEx != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice12bytesWrittenEx(arg0);
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice12bytesWrittenEx(QObject* sender, void* fptr){
  auto that = new QIODevice_SlotProxy();
  that->slot_func__ZN9QIODevice12bytesWrittenEx = (decltype(that->slot_func__ZN9QIODevice12bytesWrittenEx))fptr;
  QObject::connect((QIODevice*)sender, SIGNAL(bytesWritten(qint64)), that, SLOT(slot_proxy_func__ZN9QIODevice12bytesWrittenEx(qint64 arg0)));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice12bytesWrittenEx(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice12aboutToCloseEv() {
  if (this->slot_func__ZN9QIODevice12aboutToCloseEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice12aboutToCloseEv();
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice12aboutToCloseEv(QObject* sender, void* fptr){
  auto that = new QIODevice_SlotProxy();
  that->slot_func__ZN9QIODevice12aboutToCloseEv = (decltype(that->slot_func__ZN9QIODevice12aboutToCloseEv))fptr;
  QObject::connect((QIODevice*)sender, SIGNAL(aboutToClose()), that, SLOT(slot_proxy_func__ZN9QIODevice12aboutToCloseEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice12aboutToCloseEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QIODevice_SlotProxy::slot_proxy_func__ZN9QIODevice19readChannelFinishedEv() {
  if (this->slot_func__ZN9QIODevice19readChannelFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QIODevice19readChannelFinishedEv();
  }
}
extern "C"
void* QIODevice_SlotProxy_connect__ZN9QIODevice19readChannelFinishedEv(QObject* sender, void* fptr){
  auto that = new QIODevice_SlotProxy();
  that->slot_func__ZN9QIODevice19readChannelFinishedEv = (decltype(that->slot_func__ZN9QIODevice19readChannelFinishedEv))fptr;
  QObject::connect((QIODevice*)sender, SIGNAL(readChannelFinished()), that, SLOT(slot_proxy_func__ZN9QIODevice19readChannelFinishedEv()));
  return that;
}
extern "C"
void QIODevice_SlotProxy_disconnect__ZN9QIODevice19readChannelFinishedEv(QIODevice_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

