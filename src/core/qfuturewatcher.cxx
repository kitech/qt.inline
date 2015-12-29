// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qfuturewatcher.h
// dst-file: /src/core/qfuturewatcher.cxx
//

// header block begin =>
#include <qfuturewatcher.h>

extern "C" {

int QFutureWatcherBase_Class_Size()
{
  return sizeof(QFutureWatcherBase);
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
// QFutureWatcherBase_SlotProxy here
class QFutureWatcherBase_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFutureWatcherBase_SlotProxy():QObject(){}

public slots:
  // finished()
  void slot_proxy_func__ZN18QFutureWatcherBase8finishedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase8finishedEv)(void* rsfptr) = NULL;
public slots:
  // progressTextChanged(const class QString &)
  void slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // paused()
  void slot_proxy_func__ZN18QFutureWatcherBase6pausedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase6pausedEv)(void* rsfptr) = NULL;
public slots:
  // started()
  void slot_proxy_func__ZN18QFutureWatcherBase7startedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase7startedEv)(void* rsfptr) = NULL;
public slots:
  // resumed()
  void slot_proxy_func__ZN18QFutureWatcherBase7resumedEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase7resumedEv)(void* rsfptr) = NULL;
public slots:
  // progressRangeChanged(int, int)
  void slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // canceled()
  void slot_proxy_func__ZN18QFutureWatcherBase8canceledEv();
public:
  void (*slot_func__ZN18QFutureWatcherBase8canceledEv)(void* rsfptr) = NULL;
public slots:
  // progressValueChanged(int)
  void slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase20progressValueChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // resultReadyAt(int)
  void slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0);
public:
  void (*slot_func__ZN18QFutureWatcherBase13resultReadyAtEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // resultsReadyAt(int, int)
  void slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1);
public:
  void (*slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qfuturewatcher.moc"

extern "C" {
  QFutureWatcherBase_SlotProxy* QFutureWatcherBase_SlotProxy_new()
  {
    return new QFutureWatcherBase_SlotProxy();
  }
};

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase8finishedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase8finishedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase8finishedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase8finishedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase8finishedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase19progressTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString = (decltype(that->slot_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase19progressTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase19progressTextChangedERK7QString(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase6pausedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase6pausedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase6pausedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase6pausedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase6pausedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase6pausedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(paused()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase6pausedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase6pausedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase7startedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase7startedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase7startedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase7startedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase7startedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase7startedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase7startedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase7resumedEv() {
  if (this->slot_func__ZN18QFutureWatcherBase7resumedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase7resumedEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase7resumedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase7resumedEv = (decltype(that->slot_func__ZN18QFutureWatcherBase7resumedEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resumed()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase7resumedEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase7resumedEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase20progressRangeChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii = (decltype(that->slot_func__ZN18QFutureWatcherBase20progressRangeChangedEii))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressRangeChanged(int, int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase20progressRangeChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase20progressRangeChangedEii(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase8canceledEv() {
  if (this->slot_func__ZN18QFutureWatcherBase8canceledEv != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase8canceledEv(this->rsfptr);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase8canceledEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase8canceledEv = (decltype(that->slot_func__ZN18QFutureWatcherBase8canceledEv))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(canceled()), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase8canceledEv()));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase8canceledEv(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase20progressValueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi = (decltype(that->slot_func__ZN18QFutureWatcherBase20progressValueChangedEi))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(progressValueChanged(int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase20progressValueChangedEi(int arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase20progressValueChangedEi(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0) {
  if (this->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase13resultReadyAtEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi = (decltype(that->slot_func__ZN18QFutureWatcherBase13resultReadyAtEi))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resultReadyAt(int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase13resultReadyAtEi(int arg0)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase13resultReadyAtEi(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFutureWatcherBase_SlotProxy::slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1) {
  if (this->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii != NULL) {
    // do smth...
    this->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QFutureWatcherBase_SlotProxy_connect__ZN18QFutureWatcherBase14resultsReadyAtEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFutureWatcherBase_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii = (decltype(that->slot_func__ZN18QFutureWatcherBase14resultsReadyAtEii))ffifptr;
  QObject::connect((QFutureWatcherBase*)sender, SIGNAL(resultsReadyAt(int, int)), that, SLOT(slot_proxy_func__ZN18QFutureWatcherBase14resultsReadyAtEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QFutureWatcherBase_SlotProxy_disconnect__ZN18QFutureWatcherBase14resultsReadyAtEii(QFutureWatcherBase_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

