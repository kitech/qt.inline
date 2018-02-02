//  header block begin
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h
#include <qdialogbuttonbox.h>
#include <QtWidgets>

// QDialogButtonBox is pure virtual: false
// QDialogButtonBox has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:154
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN16QDialogButtonBox11changeEventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN16QDialogButtonBox11changeEventEP6QEvent(void*cbfn)
{ callback_ZN16QDialogButtonBox11changeEventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:155
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN16QDialogButtonBox5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN16QDialogButtonBox5eventEP6QEvent(void*cbfn)
{ callback_ZN16QDialogButtonBox5eventEP6QEvent_fnptr = cbfn; }

class MyQDialogButtonBox : public QDialogButtonBox {
public:
  virtual ~MyQDialogButtonBox() {}
// void QDialogButtonBox(class QWidget *)
MyQDialogButtonBox(QWidget * parent) : QDialogButtonBox(parent) {}
// void QDialogButtonBox(Qt::Orientation, class QWidget *)
MyQDialogButtonBox(Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(orientation, parent) {}
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN16QDialogButtonBox11changeEventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    QDialogButtonBox::changeEvent(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN16QDialogButtonBox5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    return QDialogButtonBox::event(event);
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
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:140
// [4] QDialogButtonBox::StandardButtons standardButtons()
extern "C"
void C_ZNK16QDialogButtonBox15standardButtonsEv(void *this_) {
  auto rv = ((QDialogButtonBox*)this_)->standardButtons();
/*return rv;*/
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
