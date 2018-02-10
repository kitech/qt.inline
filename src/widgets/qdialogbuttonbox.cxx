//  header block begin
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h
#include <qdialogbuttonbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialogButtonBox is pure virtual: false
// QDialogButtonBox has virtual projected: true
//  header block end

//  main block begin

class MyQDialogButtonBox : public QDialogButtonBox {
public:
  virtual ~MyQDialogButtonBox() {}
// void QDialogButtonBox(class QWidget *)
MyQDialogButtonBox(QWidget * parent) : QDialogButtonBox(parent) {}
// void QDialogButtonBox(Qt::Orientation, class QWidget *)
MyQDialogButtonBox(Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(orientation, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, class QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) : QDialogButtonBox(buttons, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, class QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(buttons, orientation, parent) {}
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDialogButtonBox::changeEvent(event);
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QDialogButtonBox::event(event);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QDialogButtonBox10metaObjectEv(void *this_) {
  return (void*)((QDialogButtonBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:120
// [-2] void QDialogButtonBox(class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:121
// [-2] void QDialogButtonBox(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(orientation, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:122
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(buttons, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:123
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQDialogButtonBox*)(0);
  return  new MyQDialogButtonBox(buttons, orientation, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:125
// [-2] void ~QDialogButtonBox()
extern "C"
void C_ZN16QDialogButtonBoxD2Ev(void *this_) {
  delete (QDialogButtonBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:127
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN16QDialogButtonBox14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QDialogButtonBox*)this_)->setOrientation(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:128
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK16QDialogButtonBox11orientationEv(void *this_) {
  return (Qt::Orientation)((QDialogButtonBox*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:130
// [-2] void addButton(class QAbstractButton *, enum QDialogButtonBox::ButtonRole)
extern "C"
void C_ZN16QDialogButtonBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *this_, QAbstractButton * button, QDialogButtonBox::ButtonRole role) {
  ((QDialogButtonBox*)this_)->addButton(button, role);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:131
// [8] QPushButton * addButton(const class QString &, enum QDialogButtonBox::ButtonRole)
extern "C"
void* C_ZN16QDialogButtonBox9addButtonERK7QStringNS_10ButtonRoleE(void *this_, QString* text, QDialogButtonBox::ButtonRole role) {
  return (void*)((QDialogButtonBox*)this_)->addButton(*text, role);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:132
// [8] QPushButton * addButton(enum QDialogButtonBox::StandardButton)
extern "C"
void* C_ZN16QDialogButtonBox9addButtonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton button) {
  return (void*)((QDialogButtonBox*)this_)->addButton(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:133
// [-2] void removeButton(class QAbstractButton *)
extern "C"
void C_ZN16QDialogButtonBox12removeButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->removeButton(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:134
// [-2] void clear()
extern "C"
void C_ZN16QDialogButtonBox5clearEv(void *this_) {
  ((QDialogButtonBox*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:137
// [4] QDialogButtonBox::ButtonRole buttonRole(class QAbstractButton *)
extern "C"
QDialogButtonBox::ButtonRole C_ZNK16QDialogButtonBox10buttonRoleEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QDialogButtonBox::ButtonRole)((QDialogButtonBox*)this_)->buttonRole(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:139
// [-2] void setStandardButtons(QDialogButtonBox::StandardButtons)
extern "C"
void C_ZN16QDialogButtonBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *this_, QFlags<QDialogButtonBox::StandardButton> buttons) {
  ((QDialogButtonBox*)this_)->setStandardButtons(buttons);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:140
// [4] QDialogButtonBox::StandardButtons standardButtons()
extern "C"
QDialogButtonBox::StandardButtons* C_ZNK16QDialogButtonBox15standardButtonsEv(void *this_) {
  auto rv = ((QDialogButtonBox*)this_)->standardButtons();
return new QDialogButtonBox::StandardButtons(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:141
// [4] QDialogButtonBox::StandardButton standardButton(class QAbstractButton *)
extern "C"
QDialogButtonBox::StandardButton C_ZNK16QDialogButtonBox14standardButtonEP15QAbstractButton(void *this_, QAbstractButton * button) {
  return (QDialogButtonBox::StandardButton)((QDialogButtonBox*)this_)->standardButton(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:142
// [8] QPushButton * button(enum QDialogButtonBox::StandardButton)
extern "C"
void* C_ZNK16QDialogButtonBox6buttonENS_14StandardButtonE(void *this_, QDialogButtonBox::StandardButton which) {
  return (void*)((QDialogButtonBox*)this_)->button(which);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:144
// [-2] void setCenterButtons(_Bool)
extern "C"
void C_ZN16QDialogButtonBox16setCenterButtonsEb(void *this_, bool center) {
  ((QDialogButtonBox*)this_)->setCenterButtons(center);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:145
// [1] bool centerButtons()
extern "C"
bool C_ZNK16QDialogButtonBox13centerButtonsEv(void *this_) {
  return (bool)((QDialogButtonBox*)this_)->centerButtons();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:148
// [-2] void clicked(class QAbstractButton *)
extern "C"
void C_ZN16QDialogButtonBox7clickedEP15QAbstractButton(void *this_, QAbstractButton * button) {
  ((QDialogButtonBox*)this_)->clicked(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:149
// [-2] void accepted()
extern "C"
void C_ZN16QDialogButtonBox8acceptedEv(void *this_) {
  ((QDialogButtonBox*)this_)->accepted();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:150
// [-2] void helpRequested()
extern "C"
void C_ZN16QDialogButtonBox13helpRequestedEv(void *this_) {
  ((QDialogButtonBox*)this_)->helpRequested();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:151
// [-2] void rejected()
extern "C"
void C_ZN16QDialogButtonBox8rejectedEv(void *this_) {
  ((QDialogButtonBox*)this_)->rejected();
}
//  main block end
