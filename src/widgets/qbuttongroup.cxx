//  header block begin
// /usr/include/qt/QtWidgets/qbuttongroup.h
#include <qbuttongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QButtonGroup is pure virtual: false
// QButtonGroup has virtual projected: false
//  header block end

//  main block begin

class MyQButtonGroup : public QButtonGroup {
public:
  virtual ~MyQButtonGroup() {}
// void QButtonGroup(class QObject *)
MyQButtonGroup(QObject * parent) : QButtonGroup(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QButtonGroup10metaObjectEv(void *this_) {
  return (void*)((QButtonGroup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:60
// [-2] void QButtonGroup(class QObject *)
extern "C"
void* C_ZN12QButtonGroupC2EP7QObject(QObject * parent) {
  return  new QButtonGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:61
// [-2] void ~QButtonGroup()
extern "C"
void C_ZN12QButtonGroupD2Ev(void *this_) {
  delete (QButtonGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:63
// [-2] void setExclusive(_Bool)
extern "C"
void C_ZN12QButtonGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QButtonGroup*)this_)->setExclusive(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:64
// [1] bool exclusive()
extern "C"
bool C_ZNK12QButtonGroup9exclusiveEv(void *this_) {
  return (bool)((QButtonGroup*)this_)->exclusive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:66
// [-2] void addButton(class QAbstractButton *, int)
extern "C"
void C_ZN12QButtonGroup9addButtonEP15QAbstractButtoni(void *this_, QAbstractButton * arg0, int id) {
  ((QButtonGroup*)this_)->addButton(arg0, id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:67
// [-2] void removeButton(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->removeButton(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:71
// [8] QAbstractButton * checkedButton()
extern "C"
void* C_ZNK12QButtonGroup13checkedButtonEv(void *this_) {
  return (void*)((QButtonGroup*)this_)->checkedButton();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:74
// [8] QAbstractButton * button(int)
extern "C"
void* C_ZNK12QButtonGroup6buttonEi(void *this_, int id) {
  return (void*)((QButtonGroup*)this_)->button(id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:75
// [-2] void setId(class QAbstractButton *, int)
extern "C"
void C_ZN12QButtonGroup5setIdEP15QAbstractButtoni(void *this_, QAbstractButton * button, int id) {
  ((QButtonGroup*)this_)->setId(button, id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:76
// [4] int id(class QAbstractButton *)
extern "C"
int C_ZNK12QButtonGroup2idEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (int)((QButtonGroup*)this_)->id(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:77
// [4] int checkedId()
extern "C"
int C_ZNK12QButtonGroup9checkedIdEv(void *this_) {
  return (int)((QButtonGroup*)this_)->checkedId();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:80
// [-2] void buttonClicked(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:81
// [-2] void buttonClicked(int)
extern "C"
void C_ZN12QButtonGroup13buttonClickedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:82
// [-2] void buttonPressed(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup13buttonPressedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:83
// [-2] void buttonPressed(int)
extern "C"
void C_ZN12QButtonGroup13buttonPressedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:84
// [-2] void buttonReleased(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:85
// [-2] void buttonReleased(int)
extern "C"
void C_ZN12QButtonGroup14buttonReleasedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:86
// [-2] void buttonToggled(class QAbstractButton *, _Bool)
extern "C"
void C_ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(void *this_, QAbstractButton * arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:87
// [-2] void buttonToggled(int, _Bool)
extern "C"
void C_ZN12QButtonGroup13buttonToggledEib(void *this_, int arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
//  main block end
