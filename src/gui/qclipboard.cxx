// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qclipboard.h
// dst-file: /src/gui/qclipboard.cxx
//

// header block begin =>
#include <qclipboard.h>

extern "C" {

int QClipboard_Class_Size()
{
  return sizeof(QClipboard);
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
// QClipboard_SlotProxy here
class QClipboard_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QClipboard_SlotProxy():QObject(){}

public slots:
  // changed(class QClipboard::Mode)
  void slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0);
public:
  void (*slot_func__ZN10QClipboard7changedENS_4ModeE)(QClipboard::Mode arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN10QClipboard16selectionChangedEv();
public:
  void (*slot_func__ZN10QClipboard16selectionChangedEv)() = NULL;
public slots:
  // findBufferChanged()
  void slot_proxy_func__ZN10QClipboard17findBufferChangedEv();
public:
  void (*slot_func__ZN10QClipboard17findBufferChangedEv)() = NULL;
public slots:
  // dataChanged()
  void slot_proxy_func__ZN10QClipboard11dataChangedEv();
public:
  void (*slot_func__ZN10QClipboard11dataChangedEv)() = NULL;
};
#include "src/gui/qclipboard.moc"

extern "C" {
  QClipboard_SlotProxy* QClipboard_SlotProxy_new()
  {
    return new QClipboard_SlotProxy();
  }
};

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0) {
  if (this->slot_func__ZN10QClipboard7changedENS_4ModeE != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard7changedENS_4ModeE(arg0);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard7changedENS_4ModeE(QObject* sender, void* fptr){
  auto that = new QClipboard_SlotProxy();
  that->slot_func__ZN10QClipboard7changedENS_4ModeE = (decltype(that->slot_func__ZN10QClipboard7changedENS_4ModeE))fptr;
  QObject::connect((QClipboard*)sender, SIGNAL(changed(class QClipboard::Mode)), that, SLOT(slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0)));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard7changedENS_4ModeE(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard16selectionChangedEv() {
  if (this->slot_func__ZN10QClipboard16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard16selectionChangedEv();
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard16selectionChangedEv(QObject* sender, void* fptr){
  auto that = new QClipboard_SlotProxy();
  that->slot_func__ZN10QClipboard16selectionChangedEv = (decltype(that->slot_func__ZN10QClipboard16selectionChangedEv))fptr;
  QObject::connect((QClipboard*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard16selectionChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard16selectionChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard17findBufferChangedEv() {
  if (this->slot_func__ZN10QClipboard17findBufferChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard17findBufferChangedEv();
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard17findBufferChangedEv(QObject* sender, void* fptr){
  auto that = new QClipboard_SlotProxy();
  that->slot_func__ZN10QClipboard17findBufferChangedEv = (decltype(that->slot_func__ZN10QClipboard17findBufferChangedEv))fptr;
  QObject::connect((QClipboard*)sender, SIGNAL(findBufferChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard17findBufferChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard17findBufferChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard11dataChangedEv() {
  if (this->slot_func__ZN10QClipboard11dataChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard11dataChangedEv();
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard11dataChangedEv(QObject* sender, void* fptr){
  auto that = new QClipboard_SlotProxy();
  that->slot_func__ZN10QClipboard11dataChangedEv = (decltype(that->slot_func__ZN10QClipboard11dataChangedEv))fptr;
  QObject::connect((QClipboard*)sender, SIGNAL(dataChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard11dataChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard11dataChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

