// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qabstractitemview.h
// dst-file: /src/widgets/qabstractitemview.cxx
//

// header block begin =>
#include <qabstractitemview.h>

extern "C" {

int QAbstractItemView_Class_Size()
{
  return sizeof(QAbstractItemView);
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
// QAbstractItemView_SlotProxy here
class QAbstractItemView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractItemView_SlotProxy():QObject(){}

public slots:
  // entered(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // doubleClicked(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // pressed(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // viewportEntered()
  void slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv();
public:
  void (*slot_func__ZN17QAbstractItemView15viewportEnteredEv)(void* rsfptr) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public slots:
  // activated(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // clicked(const class QModelIndex &)
  void slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractitemview.moc"

extern "C" {
  QAbstractItemView_SlotProxy* QAbstractItemView_SlotProxy_new()
  {
    return new QAbstractItemView_SlotProxy();
  }
};

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7enteredERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7enteredERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(entered(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7enteredERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7enteredERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(doubleClicked(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView13doubleClickedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7pressedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7pressedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(pressed(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7pressedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7pressedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv() {
  if (this->slot_func__ZN17QAbstractItemView15viewportEnteredEv != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView15viewportEnteredEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView15viewportEnteredEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView15viewportEnteredEv = (decltype(that->slot_func__ZN17QAbstractItemView15viewportEnteredEv))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(viewportEntered()), that, SLOT(slot_proxy_func__ZN17QAbstractItemView15viewportEnteredEv()));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView15viewportEnteredEv(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView15iconSizeChangedERK5QSize(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView9activatedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView9activatedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(activated(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView9activatedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView9activatedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractItemView_SlotProxy::slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractItemView_SlotProxy_connect__ZN17QAbstractItemView7clickedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex = (decltype(that->slot_func__ZN17QAbstractItemView7clickedERK11QModelIndex))ffifptr;
  QObject::connect((QAbstractItemView*)sender, SIGNAL(clicked(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN17QAbstractItemView7clickedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QAbstractItemView_SlotProxy_disconnect__ZN17QAbstractItemView7clickedERK11QModelIndex(QAbstractItemView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

