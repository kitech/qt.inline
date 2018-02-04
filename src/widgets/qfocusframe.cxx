//  header block begin
// /usr/include/qt/QtWidgets/qfocusframe.h
#include <qfocusframe.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFocusFrame is pure virtual: false
// QFocusFrame has virtual projected: true
//  header block end

//  main block begin

class MyQFocusFrame : public QFocusFrame {
public:
  virtual ~MyQFocusFrame() {}
// void QFocusFrame(class QWidget *)
MyQFocusFrame(QWidget * parent) : QFocusFrame(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFocusFrame::event(e);
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFocusFrame::eventFilter(arg0, arg1);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFocusFrame::paintEvent(arg0);
  }
  }
// void initStyleOption(class QStyleOption *)
  virtual void initStyleOption(QStyleOption * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFocusFrame::initStyleOption(option);
  }
  }
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
void* C_ZN11QFocusFrameC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFocusFrame*)(0);
  return  new MyQFocusFrame(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:57
// [-2] void ~QFocusFrame()
extern "C"
void C_ZN11QFocusFrameD2Ev(void *this_) {
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
