//  header block begin
// /usr/include/qt/QtWidgets/qradiobutton.h
#include <qradiobutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRadioButton is pure virtual: false
// QRadioButton has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN12QRadioButton5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN12QRadioButton5eventEP6QEvent(void*cbfn)
// { callback_ZN12QRadioButton5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZNK12QRadioButton9hitButtonERK6QPoint_fnptr = 0;
// extern "C" void set_callback_ZNK12QRadioButton9hitButtonERK6QPoint(void*cbfn)
// { callback_ZNK12QRadioButton9hitButtonERK6QPoint_fnptr = cbfn; }
// void* callback_ZN12QRadioButton10paintEventEP11QPaintEvent_fnptr = 0;
// extern "C" void set_callback_ZN12QRadioButton10paintEventEP11QPaintEvent(void*cbfn)
// { callback_ZN12QRadioButton10paintEventEP11QPaintEvent_fnptr = cbfn; }
// void* callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent(void*cbfn)
// { callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton_fnptr = 0;
// extern "C" void set_callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton(void*cbfn)
// { callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton_fnptr = cbfn; }

class MyQRadioButton : public QRadioButton {
public:
  virtual ~MyQRadioButton() {}
// void QRadioButton(class QWidget *)
MyQRadioButton(QWidget * parent) : QRadioButton(parent) {}
// void QRadioButton(const class QString &, class QWidget *)
MyQRadioButton(const QString & text, QWidget * parent) : QRadioButton(text, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN12QRadioButton5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QRadioButton::event(e);
  }
  }
// bool hitButton(const class QPoint &)
  virtual bool hitButton(const QPoint & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hitButton", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QPoint*))(callback_ZNK12QRadioButton9hitButtonERK6QPoint_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QPoint*)&arg0);
    // }
    return QRadioButton::hitButton(arg0);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN12QRadioButton10paintEventEP11QPaintEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRadioButton::paintEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , arg0);
    // }
    QRadioButton::mouseMoveEvent(arg0);
  }
  }
// void initStyleOption(class QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * button) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)button, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QStyleOptionButton *))(callback_ZNK12QRadioButton15initStyleOptionEP18QStyleOptionButton_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , button);
    // }
    QRadioButton::initStyleOption(button);
  }
  }
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
void* C_ZN12QRadioButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQRadioButton*)(0);
  return  new MyQRadioButton(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:60
// [-2] void QRadioButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN12QRadioButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQRadioButton*)(0);
  return  new MyQRadioButton(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:61
// [-2] void ~QRadioButton()
extern "C"
void C_ZN12QRadioButtonD2Ev(void *this_) {
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
