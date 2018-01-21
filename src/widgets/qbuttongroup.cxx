//  header block begin
// /usr/include/qt/QtWidgets/qbuttongroup.h
#include <qbuttongroup.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QButtonGroup10metaObjectEv(void *this_) {
  /*return*/ ((QButtonGroup*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:60
// void QButtonGroup(class QObject *)
extern "C"
void* C_ZN12QButtonGroupC1EP7QObject(QObject * parent) {
  return new QButtonGroup(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qbuttongroup.h:61
// void ~QButtonGroup()
extern "C"
void C_ZN12QButtonGroupD1Ev(void *this_) {
  delete (QButtonGroup*)(this_);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:63
// void setExclusive(_Bool)
extern "C"
void C_ZN12QButtonGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QButtonGroup*)this_)->setExclusive(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:64
// bool exclusive()
extern "C"
void C_ZNK12QButtonGroup9exclusiveEv(void *this_) {
  /*return*/ ((QButtonGroup*)this_)->exclusive();
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:66
// void addButton(class QAbstractButton *, int)
extern "C"
void C_ZN12QButtonGroup9addButtonEP15QAbstractButtoni(void *this_, QAbstractButton * arg0, int id) {
  ((QButtonGroup*)this_)->addButton(arg0, id);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:67
// void removeButton(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->removeButton(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:69
// QList<QAbstractButton *> buttons()
extern "C"
void C_ZNK12QButtonGroup7buttonsEv(void *this_) {
  /*return*/ ((QButtonGroup*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:71
// QAbstractButton * checkedButton()
extern "C"
void C_ZNK12QButtonGroup13checkedButtonEv(void *this_) {
  /*return*/ ((QButtonGroup*)this_)->checkedButton();
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:74
// QAbstractButton * button(int)
extern "C"
void C_ZNK12QButtonGroup6buttonEi(void *this_, int id) {
  /*return*/ ((QButtonGroup*)this_)->button(id);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:75
// void setId(class QAbstractButton *, int)
extern "C"
void C_ZN12QButtonGroup5setIdEP15QAbstractButtoni(void *this_, QAbstractButton * button, int id) {
  ((QButtonGroup*)this_)->setId(button, id);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:76
// int id(class QAbstractButton *)
extern "C"
void C_ZNK12QButtonGroup2idEP15QAbstractButton(void *this_, QAbstractButton * button) {
  /*return*/ ((QButtonGroup*)this_)->id(button);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:77
// int checkedId()
extern "C"
void C_ZNK12QButtonGroup9checkedIdEv(void *this_) {
  /*return*/ ((QButtonGroup*)this_)->checkedId();
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:80
// void buttonClicked(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup13buttonClickedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:81
// void buttonClicked(int)
extern "C"
void C_ZN12QButtonGroup13buttonClickedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonClicked(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:82
// void buttonPressed(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup13buttonPressedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:83
// void buttonPressed(int)
extern "C"
void C_ZN12QButtonGroup13buttonPressedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonPressed(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:84
// void buttonReleased(class QAbstractButton *)
extern "C"
void C_ZN12QButtonGroup14buttonReleasedEP15QAbstractButton(void *this_, QAbstractButton * arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:85
// void buttonReleased(int)
extern "C"
void C_ZN12QButtonGroup14buttonReleasedEi(void *this_, int arg0) {
  ((QButtonGroup*)this_)->buttonReleased(arg0);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:86
// void buttonToggled(class QAbstractButton *, _Bool)
extern "C"
void C_ZN12QButtonGroup13buttonToggledEP15QAbstractButtonb(void *this_, QAbstractButton * arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qbuttongroup.h:87
// void buttonToggled(int, _Bool)
extern "C"
void C_ZN12QButtonGroup13buttonToggledEib(void *this_, int arg0, bool arg1) {
  ((QButtonGroup*)this_)->buttonToggled(arg0, arg1);
}
//  main block end
