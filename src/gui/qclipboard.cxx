// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qclipboard.h
// dst-file: /src/gui/qclipboard.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qclipboard.h>

extern "C" {

int QClipboard_Class_Size()
{
  return sizeof(QClipboard);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qclipboard_inline_symbols() {
} // <= main block end

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
  void (*slot_func__ZN10QClipboard7changedENS_4ModeE)(void* rsfptr, QClipboard::Mode arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN10QClipboard16selectionChangedEv();
public:
  void (*slot_func__ZN10QClipboard16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // dataChanged()
  void slot_proxy_func__ZN10QClipboard11dataChangedEv();
public:
  void (*slot_func__ZN10QClipboard11dataChangedEv)(void* rsfptr) = NULL;
public slots:
  // findBufferChanged()
  void slot_proxy_func__ZN10QClipboard17findBufferChangedEv();
public:
  void (*slot_func__ZN10QClipboard17findBufferChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
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
    this->slot_func__ZN10QClipboard7changedENS_4ModeE(this->rsfptr, arg0);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard7changedENS_4ModeE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard7changedENS_4ModeE = (decltype(that->slot_func__ZN10QClipboard7changedENS_4ModeE))ffifptr;
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
    this->slot_func__ZN10QClipboard16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard16selectionChangedEv = (decltype(that->slot_func__ZN10QClipboard16selectionChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard16selectionChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard16selectionChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard11dataChangedEv() {
  if (this->slot_func__ZN10QClipboard11dataChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard11dataChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard11dataChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard11dataChangedEv = (decltype(that->slot_func__ZN10QClipboard11dataChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(dataChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard11dataChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard11dataChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard17findBufferChangedEv() {
  if (this->slot_func__ZN10QClipboard17findBufferChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard17findBufferChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard17findBufferChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard17findBufferChangedEv = (decltype(that->slot_func__ZN10QClipboard17findBufferChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(findBufferChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard17findBufferChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard17findBufferChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

