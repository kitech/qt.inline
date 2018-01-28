//  header block begin
// /usr/include/qt/QtWidgets/qfocusframe.h
#include <qfocusframe.h>
#include <QtWidgets>

// QFocusFrame is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:63
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QFocusFrame5eventEP6QEvent = 0;
extern "C" void set_callback_ZN11QFocusFrame5eventEP6QEvent(void*cbfn)
{ callback_ZN11QFocusFrame5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:65
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:66
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN11QFocusFrame10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN11QFocusFrame10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN11QFocusFrame10paintEventEP11QPaintEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:67
// [-2] void initStyleOption(class QStyleOption *)
extern "C"
void* callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption = 0;
extern "C" void set_callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption(void*cbfn)
{ callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption = cbfn; }

class MyQFocusFrame : public QFocusFrame {
public:
MyQFocusFrame(QWidget * parent) : QFocusFrame(parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN11QFocusFrame5eventEP6QEvent != 0) {
  // callback_ZN11QFocusFrame5eventEP6QEvent(e);
}}
// bool eventFilter(class QObject *, class QEvent *)
// bool eventFilter(class QObject *, class QEvent *)
virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
  if (callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent != 0) {
  // callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent(arg0, arg1);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN11QFocusFrame10paintEventEP11QPaintEvent != 0) {
  // callback_ZN11QFocusFrame10paintEventEP11QPaintEvent(arg0);
}}
// void initStyleOption(class QStyleOption *)
// void initStyleOption(class QStyleOption *)
virtual void initStyleOption(QStyleOption * option) {
  if (callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption != 0) {
  // callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QFocusFrame10metaObjectEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:56
// [-2] void QFocusFrame(class QWidget *)
extern "C"
void* C_ZN11QFocusFrameC1EP7QWidget(QWidget * parent) {
  (MyQFocusFrame*)(0);
  return  new MyQFocusFrame(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:57
// [-2] void ~QFocusFrame()
extern "C"
void C_ZN11QFocusFrameD1Ev(void *this_) {
  delete (QFocusFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:59
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN11QFocusFrame9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QFocusFrame*)this_)->setWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:60
// [8] QWidget * widget()
extern "C"
void* C_ZNK11QFocusFrame6widgetEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->widget();
}
//  main block end
