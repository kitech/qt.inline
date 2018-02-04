//  header block begin
// /usr/include/qt/QtWidgets/qradiobutton.h
#include <qradiobutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRadioButton is pure virtual: false
// QRadioButton has virtual projected: true
//  header block end

//  main block begin

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
