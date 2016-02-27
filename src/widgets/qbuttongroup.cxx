// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qbuttongroup.h
// dst-file: /src/widgets/qbuttongroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbuttongroup.h>


#include <qabstractbutton.h>
#include <qlist.h>
#include <qfontdatabase.h>
// <= header block end

// main block begin =>
void __keep_qbuttongroup_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QButtonGroup_Class_Size()
{
  return sizeof(QButtonGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 60, column 10>
//   // proto:  void QButtonGroup::addButton(QAbstractButton * , int id);
// _ZN12QButtonGroup9addButtonEP15QAbstractButtoni addButton(class QAbstractButton *, int)
extern "C"
void
C_ZN12QButtonGroup9addButtonEP15QAbstractButtoni(void *qthis,
QAbstractButton * arg1,
int arg2) {
  ((QButtonGroup*)qthis)->addButton(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 63, column 29>
//   // proto:  QList<QAbstractButton *> QButtonGroup::buttons();
// _ZNK12QButtonGroup7buttonsEv buttons()
extern "C"
QList<QAbstractButton *>*
C_ZNK12QButtonGroup7buttonsEv(void *qthis) {
  auto ret =
  ((QButtonGroup*)qthis)->buttons();
  return new QList<QAbstractButton *>(ret); // 5
}
//   // proto:  void QButtonGroup::~QButtonGroup();
extern "C"
void C_ZN12QButtonGroupD2Ev(void *qthis) {
  delete (QButtonGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 80, column 10>
//   // proto:  void QButtonGroup::buttonToggled(QAbstractButton * , bool );
// _ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb buttonToggled(class QAbstractButton *, _Bool)
extern "C"
void
C_ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(void *qthis,
QAbstractButton * arg1,
bool arg2) {
  ((QButtonGroup*)qthis)->buttonToggled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 77, column 10>
//   // proto:  void QButtonGroup::buttonPressed(int );
// _ZN12QButtonGroup13buttonPressedEi buttonPressed(int)
extern "C"
void
C_ZN12QButtonGroup13buttonPressedEi(void *qthis,
int arg1) {
  ((QButtonGroup*)qthis)->buttonPressed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 70, column 9>
//   // proto:  int QButtonGroup::id(QAbstractButton * button);
// _ZNK12QButtonGroup2idEP15QAbstractButton id(class QAbstractButton *)
extern "C"
int
C_ZNK12QButtonGroup2idEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  auto ret =
  ((QButtonGroup*)qthis)->id(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 61, column 10>
//   // proto:  void QButtonGroup::removeButton(QAbstractButton * );
// _ZN12QButtonGroup12removeButtonEP15QAbstractButton removeButton(class QAbstractButton *)
extern "C"
void
C_ZN12QButtonGroup12removeButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QButtonGroup*)qthis)->removeButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 74, column 10>
//   // proto:  void QButtonGroup::buttonClicked(QAbstractButton * );
// _ZN12QButtonGroup13buttonClickedEP15QAbstractButton buttonClicked(class QAbstractButton *)
extern "C"
void
C_ZN12QButtonGroup13buttonClickedEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QButtonGroup*)qthis)->buttonClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 79, column 10>
//   // proto:  void QButtonGroup::buttonReleased(int );
// _ZN12QButtonGroup14buttonReleasedEi buttonReleased(int)
extern "C"
void
C_ZN12QButtonGroup14buttonReleasedEi(void *qthis,
int arg1) {
  ((QButtonGroup*)qthis)->buttonReleased(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 50, column 5>
//   // proto:  const QMetaObject * QButtonGroup::metaObject();
// _ZNK12QButtonGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QButtonGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QButtonGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 81, column 10>
//   // proto:  void QButtonGroup::buttonToggled(int , bool );
// _ZN12QButtonGroup13buttonToggledEib buttonToggled(int, _Bool)
extern "C"
void
C_ZN12QButtonGroup13buttonToggledEib(void *qthis,
int arg1,
bool arg2) {
  ((QButtonGroup*)qthis)->buttonToggled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 54, column 14>
//   // proto:  void QButtonGroup::QButtonGroup(QObject * parent);
extern "C"
QButtonGroup*
C_ZN12QButtonGroupC2EP7QObject(QObject * arg1) {
  auto ret = new QButtonGroup(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 68, column 22>
//   // proto:  QAbstractButton * QButtonGroup::button(int id);
// _ZNK12QButtonGroup6buttonEi button(int)
extern "C"
void*
C_ZNK12QButtonGroup6buttonEi(void *qthis,
int arg1) {
  auto ret =
  ((QButtonGroup*)qthis)->button(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 71, column 9>
//   // proto:  int QButtonGroup::checkedId();
// _ZNK12QButtonGroup9checkedIdEv checkedId()
extern "C"
int
C_ZNK12QButtonGroup9checkedIdEv(void *qthis) {
  auto ret =
  ((QButtonGroup*)qthis)->checkedId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 65, column 23>
//   // proto:  QAbstractButton * QButtonGroup::checkedButton();
// _ZNK12QButtonGroup13checkedButtonEv checkedButton()
extern "C"
void*
C_ZNK12QButtonGroup13checkedButtonEv(void *qthis) {
  auto ret =
  ((QButtonGroup*)qthis)->checkedButton();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 78, column 10>
//   // proto:  void QButtonGroup::buttonReleased(QAbstractButton * );
// _ZN12QButtonGroup14buttonReleasedEP15QAbstractButton buttonReleased(class QAbstractButton *)
extern "C"
void
C_ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QButtonGroup*)qthis)->buttonReleased(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 57, column 10>
//   // proto:  void QButtonGroup::setExclusive(bool );
// _ZN12QButtonGroup12setExclusiveEb setExclusive(_Bool)
extern "C"
void
C_ZN12QButtonGroup12setExclusiveEb(void *qthis,
bool arg1) {
  ((QButtonGroup*)qthis)->setExclusive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 69, column 10>
//   // proto:  void QButtonGroup::setId(QAbstractButton * button, int id);
// _ZN12QButtonGroup5setIdEP15QAbstractButtoni setId(class QAbstractButton *, int)
extern "C"
void
C_ZN12QButtonGroup5setIdEP15QAbstractButtoni(void *qthis,
QAbstractButton * arg1,
int arg2) {
  ((QButtonGroup*)qthis)->setId(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 76, column 10>
//   // proto:  void QButtonGroup::buttonPressed(QAbstractButton * );
// _ZN12QButtonGroup13buttonPressedEP15QAbstractButton buttonPressed(class QAbstractButton *)
extern "C"
void
C_ZN12QButtonGroup13buttonPressedEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QButtonGroup*)qthis)->buttonPressed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 58, column 10>
//   // proto:  bool QButtonGroup::exclusive();
// _ZNK12QButtonGroup9exclusiveEv exclusive()
extern "C"
bool
C_ZNK12QButtonGroup9exclusiveEv(void *qthis) {
  auto ret =
  ((QButtonGroup*)qthis)->exclusive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qbuttongroup.h', line 75, column 10>
//   // proto:  void QButtonGroup::buttonClicked(int );
// _ZN12QButtonGroup13buttonClickedEi buttonClicked(int)
extern "C"
void
C_ZN12QButtonGroup13buttonClickedEi(void *qthis,
int arg1) {
  ((QButtonGroup*)qthis)->buttonClicked(arg1);
}
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

