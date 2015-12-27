// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qabstractslider.h
// dst-file: /src/widgets/qabstractslider.cxx
//

// header block begin =>
#include <qabstractslider.h>

extern "C" {

int QAbstractSlider_Class_Size()
{
  return sizeof(QAbstractSlider);
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
// QAbstractSlider_SlotProxy here
class QAbstractSlider_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QAbstractSlider_SlotProxy():QObject(){}

public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider12valueChangedEi)(int arg0) = NULL;
public slots:
  // sliderPressed()
  void slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv();
public:
  void (*slot_func__ZN15QAbstractSlider13sliderPressedEv)() = NULL;
public slots:
  // sliderMoved(int)
  void slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider11sliderMovedEi)(int arg0) = NULL;
public slots:
  // sliderReleased()
  void slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv();
public:
  void (*slot_func__ZN15QAbstractSlider14sliderReleasedEv)() = NULL;
public slots:
  // rangeChanged(int, int)
  void slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN15QAbstractSlider12rangeChangedEii)(int arg0, int arg1) = NULL;
public slots:
  // actionTriggered(int)
  void slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider15actionTriggeredEi)(int arg0) = NULL;
};
#include "src/widgets/qabstractslider.moc"

extern "C" {
  QAbstractSlider_SlotProxy* QAbstractSlider_SlotProxy_new()
  {
    return new QAbstractSlider_SlotProxy();
  }
};

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider12valueChangedEi(arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider12valueChangedEi(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider12valueChangedEi = (decltype(that->slot_func__ZN15QAbstractSlider12valueChangedEi))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider12valueChangedEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv() {
  if (this->slot_func__ZN15QAbstractSlider13sliderPressedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider13sliderPressedEv();
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider13sliderPressedEv(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider13sliderPressedEv = (decltype(that->slot_func__ZN15QAbstractSlider13sliderPressedEv))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderPressed()), that, SLOT(slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv()));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider13sliderPressedEv(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider11sliderMovedEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider11sliderMovedEi(arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider11sliderMovedEi(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider11sliderMovedEi = (decltype(that->slot_func__ZN15QAbstractSlider11sliderMovedEi))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderMoved(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider11sliderMovedEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv() {
  if (this->slot_func__ZN15QAbstractSlider14sliderReleasedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider14sliderReleasedEv();
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider14sliderReleasedEv(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider14sliderReleasedEv = (decltype(that->slot_func__ZN15QAbstractSlider14sliderReleasedEv))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderReleased()), that, SLOT(slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv()));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider14sliderReleasedEv(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN15QAbstractSlider12rangeChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider12rangeChangedEii(arg0, arg1);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider12rangeChangedEii(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider12rangeChangedEii = (decltype(that->slot_func__ZN15QAbstractSlider12rangeChangedEii))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(rangeChanged(int, int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider12rangeChangedEii(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider15actionTriggeredEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider15actionTriggeredEi(arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider15actionTriggeredEi(QObject* sender, void* fptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->slot_func__ZN15QAbstractSlider15actionTriggeredEi = (decltype(that->slot_func__ZN15QAbstractSlider15actionTriggeredEi))fptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(actionTriggered(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider15actionTriggeredEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

