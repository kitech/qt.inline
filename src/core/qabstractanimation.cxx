// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qabstractanimation.h
// dst-file: /src/core/qabstractanimation.cxx
//

// header block begin =>
#include <qabstractanimation.h>

extern "C" {

int QAbstractAnimation_Class_Size()
{
  return sizeof(QAbstractAnimation);
}

int QAnimationDriver_Class_Size()
{
  return sizeof(QAnimationDriver);
}

// ~QAnimationDriver()
void dedtor_ZN16QAnimationDriverD0Ev(QAnimationDriver* that)
{
  QAnimationDriver* rthis = (QAnimationDriver*)that;
  delete rthis;
}

// QAnimationDriver(class QObject *)
QAnimationDriver* dector_ZN16QAnimationDriverC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QAnimationDriver) == 32, "tyszerr");
  QAnimationDriver* rthis = new QAnimationDriver(parent);
  return rthis;
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
// QAbstractAnimation_SlotProxy here
class QAbstractAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractAnimation_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)
  void slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1);
public:
  void (*slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_)(void* rsfptr, QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) = NULL;
public slots:
  // currentLoopChanged(int)
  void slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0);
public:
  void (*slot_func__ZN18QAbstractAnimation18currentLoopChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN18QAbstractAnimation8finishedEv();
public:
  void (*slot_func__ZN18QAbstractAnimation8finishedEv)(void* rsfptr) = NULL;
public slots:
  // directionChanged(class QAbstractAnimation::Direction)
  void slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0);
public:
  void (*slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE)(void* rsfptr, QAbstractAnimation::Direction arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QAbstractAnimation_SlotProxy* QAbstractAnimation_SlotProxy_new()
  {
    return new QAbstractAnimation_SlotProxy();
  }
};

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) {
  if (this->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_ != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_ = (decltype(that->slot_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(stateChanged(class QAbstractAnimation::State, class QAbstractAnimation::State)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation::State arg0, QAbstractAnimation::State arg1)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation12stateChangedENS_5StateES0_(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0) {
  if (this->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation18currentLoopChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi = (decltype(that->slot_func__ZN18QAbstractAnimation18currentLoopChangedEi))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(currentLoopChanged(int)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation18currentLoopChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation18currentLoopChangedEi(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation8finishedEv() {
  if (this->slot_func__ZN18QAbstractAnimation8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation8finishedEv = (decltype(that->slot_func__ZN18QAbstractAnimation8finishedEv))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation8finishedEv()));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation8finishedEv(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractAnimation_SlotProxy::slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0) {
  if (this->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractAnimation_SlotProxy_connect__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE = (decltype(that->slot_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE))ffifptr;
  QObject::connect((QAbstractAnimation*)sender, SIGNAL(directionChanged(class QAbstractAnimation::Direction)), that, SLOT(slot_proxy_func__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation::Direction arg0)));
  return that;
}
extern "C"
void QAbstractAnimation_SlotProxy_disconnect__ZN18QAbstractAnimation16directionChangedENS_9DirectionE(QAbstractAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QAnimationDriver_SlotProxy here
class QAnimationDriver_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAnimationDriver_SlotProxy():QObject(){}

public slots:
  // stopped()
  void slot_proxy_func__ZN16QAnimationDriver7stoppedEv();
public:
  void (*slot_func__ZN16QAnimationDriver7stoppedEv)(void* rsfptr) = NULL;
public slots:
  // started()
  void slot_proxy_func__ZN16QAnimationDriver7startedEv();
public:
  void (*slot_func__ZN16QAnimationDriver7startedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qabstractanimation.moc"

extern "C" {
  QAnimationDriver_SlotProxy* QAnimationDriver_SlotProxy_new()
  {
    return new QAnimationDriver_SlotProxy();
  }
};

void QAnimationDriver_SlotProxy::slot_proxy_func__ZN16QAnimationDriver7stoppedEv() {
  if (this->slot_func__ZN16QAnimationDriver7stoppedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAnimationDriver7stoppedEv(this->rsfptr);
  }
}
extern "C"
void* QAnimationDriver_SlotProxy_connect__ZN16QAnimationDriver7stoppedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAnimationDriver_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAnimationDriver7stoppedEv = (decltype(that->slot_func__ZN16QAnimationDriver7stoppedEv))ffifptr;
  QObject::connect((QAnimationDriver*)sender, SIGNAL(stopped()), that, SLOT(slot_proxy_func__ZN16QAnimationDriver7stoppedEv()));
  return that;
}
extern "C"
void QAnimationDriver_SlotProxy_disconnect__ZN16QAnimationDriver7stoppedEv(QAnimationDriver_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAnimationDriver_SlotProxy::slot_proxy_func__ZN16QAnimationDriver7startedEv() {
  if (this->slot_func__ZN16QAnimationDriver7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAnimationDriver7startedEv(this->rsfptr);
  }
}
extern "C"
void* QAnimationDriver_SlotProxy_connect__ZN16QAnimationDriver7startedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAnimationDriver_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAnimationDriver7startedEv = (decltype(that->slot_func__ZN16QAnimationDriver7startedEv))ffifptr;
  QObject::connect((QAnimationDriver*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN16QAnimationDriver7startedEv()));
  return that;
}
extern "C"
void QAnimationDriver_SlotProxy_disconnect__ZN16QAnimationDriver7startedEv(QAnimationDriver_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

