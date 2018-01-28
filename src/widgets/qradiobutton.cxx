//  header block begin
// /usr/include/qt/QtWidgets/qradiobutton.h
#include <qradiobutton.h>
#include <QtWidgets>

// QRadioButton is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:67
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN12QRadioButton5eventEP6QEvent = 0;
extern "C" void set_callback_ZN12QRadioButton5eventEP6QEvent(void*cbfn)
{ callback_ZN12QRadioButton5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:68
// [1] bool hitButton(const class QPoint &)
extern "C"
void* callback_ZNK12QRadioButton9hitButtonERK6QPoint = 0;
extern "C" void set_callback_ZNK12QRadioButton9hitButtonERK6QPoint(void*cbfn)
{ callback_ZNK12QRadioButton9hitButtonERK6QPoint = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:69
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN12QRadioButton10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN12QRadioButton10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN12QRadioButton10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:70
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:71
// [-2] void initStyleOption(class QStyleOptionButton *)
extern "C"
void* callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton = 0;
extern "C" void set_callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton(void*cbfn)
{ callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton = cbfn; }

class MyQRadioButton : public QRadioButton {
public:
MyQRadioButton(QWidget * parent) : QRadioButton(parent) {}
MyQRadioButton(const QString & text, QWidget * parent) : QRadioButton(text, parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN12QRadioButton5eventEP6QEvent != 0) {
  // callback_ZN12QRadioButton5eventEP6QEvent(e);
}}
// bool hitButton(const class QPoint &)
// bool hitButton(const class QPoint &)
virtual bool hitButton(const QPoint & arg0) {
  if (callback_ZNK12QRadioButton9hitButtonERK6QPoint != 0) {
  // callback_ZNK12QRadioButton9hitButtonERK6QPoint(arg0);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN12QRadioButton10paintEventEP11QPaintEvent != 0) {
  // callback_ZN12QRadioButton10paintEventEP11QPaintEvent(arg0);
}}
// void mouseMoveEvent(class QMouseEvent *)
// void mouseMoveEvent(class QMouseEvent *)
virtual void mouseMoveEvent(QMouseEvent * arg0) {
  if (callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent != 0) {
  // callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent(arg0);
}}
// void initStyleOption(class QStyleOptionButton *)
// void initStyleOption(class QStyleOptionButton *)
virtual void initStyleOption(QStyleOptionButton * button) {
  if (callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton != 0) {
  // callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton(button);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QRadioButton10metaObjectEv(void *this_) {
  return (void*)((QRadioButton*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:59
// [-2] void QRadioButton(class QWidget *)
extern "C"
void* C_ZN12QRadioButtonC1EP7QWidget(QWidget * parent) {
  (MyQRadioButton*)(0);
  return  new MyQRadioButton(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:60
// [-2] void QRadioButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN12QRadioButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  (MyQRadioButton*)(0);
  return  new MyQRadioButton(text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:61
// [-2] void ~QRadioButton()
extern "C"
void C_ZN12QRadioButtonD1Ev(void *this_) {
  delete (QRadioButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:63
// [8] QSize sizeHint()
extern "C"
void* C_ZNK12QRadioButton8sizeHintEv(void *this_) {
  auto rv = ((QRadioButton*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:64
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK12QRadioButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QRadioButton*)this_)->minimumSizeHint();
return new QSize(rv);
}
//  main block end
