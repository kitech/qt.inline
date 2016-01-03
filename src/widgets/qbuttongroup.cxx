// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qbuttongroup.h
// dst-file: /src/widgets/qbuttongroup.cxx
//

// header block begin =>
#include <qbuttongroup.h>

extern "C" {

int QButtonGroup_Class_Size()
{
  return sizeof(QButtonGroup);
}

// ~QButtonGroup()
void dedtor_ZN12QButtonGroupD0Ev(QButtonGroup* that)
{
  QButtonGroup* rthis = (QButtonGroup*)that;
  delete rthis;
}

// QButtonGroup(class QObject *)
QButtonGroup* dector_ZN12QButtonGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QButtonGroup) == 32, "tyszerr");
  QButtonGroup* rthis = new QButtonGroup(parent);
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
// QButtonGroup_SlotProxy here
class QButtonGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QButtonGroup_SlotProxy():QObject(){}

public slots:
  // buttonReleased(class QAbstractButton *)
  void slot_proxy_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public slots:
  // buttonPressed(int)
  void slot_proxy_func__ZN12QButtonGroup13buttonPressedEi(int arg0);
public:
  void (*slot_func__ZN12QButtonGroup13buttonPressedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // buttonToggled(int, _Bool)
  void slot_proxy_func__ZN12QButtonGroup13buttonToggledEib(int arg0, bool arg1);
public:
  void (*slot_func__ZN12QButtonGroup13buttonToggledEib)(void* rsfptr, int arg0, bool arg1) = NULL;
public slots:
  // buttonPressed(class QAbstractButton *)
  void slot_proxy_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public slots:
  // buttonReleased(int)
  void slot_proxy_func__ZN12QButtonGroup14buttonReleasedEi(int arg0);
public:
  void (*slot_func__ZN12QButtonGroup14buttonReleasedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // buttonToggled(class QAbstractButton *, _Bool)
  void slot_proxy_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(QAbstractButton * arg0, bool arg1);
public:
  void (*slot_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb)(void* rsfptr, QAbstractButton * arg0, bool arg1) = NULL;
public slots:
  // buttonClicked(int)
  void slot_proxy_func__ZN12QButtonGroup13buttonClickedEi(int arg0);
public:
  void (*slot_func__ZN12QButtonGroup13buttonClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // buttonClicked(class QAbstractButton *)
  void slot_proxy_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qbuttongroup.moc"

extern "C" {
  QButtonGroup_SlotProxy* QButtonGroup_SlotProxy_new()
  {
    return new QButtonGroup_SlotProxy();
  }
};

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton = (decltype(that->slot_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonReleased(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonPressedEi(int arg0) {
  if (this->slot_func__ZN12QButtonGroup13buttonPressedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonPressedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonPressedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonPressedEi = (decltype(that->slot_func__ZN12QButtonGroup13buttonPressedEi))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonPressed(int)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonPressedEi(int arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonPressedEi(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonToggledEib(int arg0, bool arg1) {
  if (this->slot_func__ZN12QButtonGroup13buttonToggledEib != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonToggledEib(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonToggledEib(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonToggledEib = (decltype(that->slot_func__ZN12QButtonGroup13buttonToggledEib))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonToggled(int, _Bool)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonToggledEib(int arg0, bool arg1)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonToggledEib(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton = (decltype(that->slot_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonPressed(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonPressedEP15QAbstractButton(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup14buttonReleasedEi(int arg0) {
  if (this->slot_func__ZN12QButtonGroup14buttonReleasedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup14buttonReleasedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup14buttonReleasedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup14buttonReleasedEi = (decltype(that->slot_func__ZN12QButtonGroup14buttonReleasedEi))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonReleased(int)), that, SLOT(slot_proxy_func__ZN12QButtonGroup14buttonReleasedEi(int arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup14buttonReleasedEi(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(QAbstractButton * arg0, bool arg1) {
  if (this->slot_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb = (decltype(that->slot_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonToggled(class QAbstractButton *, _Bool)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(QAbstractButton * arg0, bool arg1)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonClickedEi(int arg0) {
  if (this->slot_func__ZN12QButtonGroup13buttonClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonClickedEi = (decltype(that->slot_func__ZN12QButtonGroup13buttonClickedEi))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonClicked(int)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonClickedEi(int arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonClickedEi(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QButtonGroup_SlotProxy::slot_proxy_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QButtonGroup_SlotProxy_connect__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QButtonGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton = (decltype(that->slot_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton))ffifptr;
  QObject::connect((QButtonGroup*)sender, SIGNAL(buttonClicked(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QButtonGroup_SlotProxy_disconnect__ZN12QButtonGroup13buttonClickedEP15QAbstractButton(QButtonGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

