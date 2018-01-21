//  header block begin
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h
#include <qdialogbuttonbox.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QDialogButtonBox10metaObjectEv(void *this_) {
  /*return*/ ((QDialogButtonBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:115
// void QDialogButtonBox(class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC1EP7QWidget(QWidget * parent) {
  return new QDialogButtonBox(parent);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:116
// void QDialogButtonBox(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  return new QDialogButtonBox(orientation, parent);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:117
// void QDialogButtonBox(StandardButtons, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC1E6QFlagsINS_14StandardButtonEEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) {
  return new QDialogButtonBox(buttons, parent);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:118
// void QDialogButtonBox(StandardButtons, Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC1E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) {
  return new QDialogButtonBox(buttons, orientation, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:120
// void ~QDialogButtonBox()
extern "C"
void C_ZN16QDialogButtonBoxD1Ev(void *this_) {
  delete (QDialogButtonBox*)(this_);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:122
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN16QDialogButtonBox14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialogButtonBox*)this_)->setOrientation(orientation);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:123
// Qt::Orientation orientation()
extern "C"
void C_ZNK16QDialogButtonBox11orientationEv(void *this_) {
  /*return*/ ((QDialogButtonBox*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:125
// void addButton(class QAbstractButton *, enum QDialogButtonBox::ButtonRole)
extern "C"
void C_ZN16QDialogButtonBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QDialogButtonBox::ButtonRole role) {
  ((QDialogButtonBox*)this_)->addButton(button, role);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:126
// QPushButton * addButton(const class QString &, enum QDialogButtonBox::ButtonRole)
extern "C"
void C_ZN16QDialogButtonBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, const QString & text, QDialogButtonBox::ButtonRole role) {
  /*return*/ ((QDialogButtonBox*)this_)->addButton(text, role);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:127
// QPushButton * addButton(enum QDialogButtonBox::StandardButton)
extern "C"
void C_ZN16QDialogButtonBox9addButtonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton button) {
  /*return*/ ((QDialogButtonBox*)this_)->addButton(button);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:128
// void removeButton(class QAbstractButton *)
extern "C"
void C_ZN16QDialogButtonBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->removeButton(button);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:129
// void clear()
extern "C"
void C_ZN16QDialogButtonBox5clearEv(void *this_) {
  ((QDialogButtonBox*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:131
// QList<QAbstractButton *> buttons()
extern "C"
void C_ZNK16QDialogButtonBox7buttonsEv(void *this_) {
  /*return*/ ((QDialogButtonBox*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:132
// QDialogButtonBox::ButtonRole buttonRole(class QAbstractButton *)
extern "C"
void C_ZNK16QDialogButtonBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  /*return*/ ((QDialogButtonBox*)this_)->buttonRole(button);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:134
// void setStandardButtons(StandardButtons)
extern "C"
void C_ZN16QDialogButtonBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QDialogButtonBox::StandardButton> buttons) {
  ((QDialogButtonBox*)this_)->setStandardButtons(buttons);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:135
// StandardButtons standardButtons()
extern "C"
void C_ZNK16QDialogButtonBox15standardButtonsEv(void *this_) {
  /*return*/ ((QDialogButtonBox*)this_)->standardButtons();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:136
// QDialogButtonBox::StandardButton standardButton(class QAbstractButton *)
extern "C"
void C_ZNK16QDialogButtonBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  /*return*/ ((QDialogButtonBox*)this_)->standardButton(button);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:137
// QPushButton * button(enum QDialogButtonBox::StandardButton)
extern "C"
void C_ZNK16QDialogButtonBox6buttonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton which) {
  /*return*/ ((QDialogButtonBox*)this_)->button(which);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:139
// void setCenterButtons(_Bool)
extern "C"
void C_ZN16QDialogButtonBox16setCenterButtonsEb(void *this_, bool center) {
  ((QDialogButtonBox*)this_)->setCenterButtons(center);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:140
// bool centerButtons()
extern "C"
void C_ZNK16QDialogButtonBox13centerButtonsEv(void *this_) {
  /*return*/ ((QDialogButtonBox*)this_)->centerButtons();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:143
// void clicked(class QAbstractButton *)
extern "C"
void C_ZN16QDialogButtonBox7clickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->clicked(button);
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:144
// void accepted()
extern "C"
void C_ZN16QDialogButtonBox8acceptedEv(void *this_) {
  ((QDialogButtonBox*)this_)->accepted();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:145
// void helpRequested()
extern "C"
void C_ZN16QDialogButtonBox13helpRequestedEv(void *this_) {
  ((QDialogButtonBox*)this_)->helpRequested();
}
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:146
// void rejected()
extern "C"
void C_ZN16QDialogButtonBox8rejectedEv(void *this_) {
  ((QDialogButtonBox*)this_)->rejected();
}
//  main block end
