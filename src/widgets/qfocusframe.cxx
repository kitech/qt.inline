//  header block begin
// /usr/include/qt/QtWidgets/qfocusframe.h
#include <qfocusframe.h>
#include <QtWidgets>

// QFocusFrame is pure virtual: false
// QFocusFrame has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:63
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QFocusFrame5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFocusFrame5eventEP6QEvent(void*cbfn)
{ callback_ZN11QFocusFrame5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:65
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:66
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN11QFocusFrame10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN11QFocusFrame10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN11QFocusFrame10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:67
// [-2] void initStyleOption(class QStyleOption *)
extern "C"
void* callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption_fnptr = 0;
extern "C" void set_callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption(void*cbfn)
{ callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption_fnptr = cbfn; }

class MyQFocusFrame : public QFocusFrame {
public:
  virtual ~MyQFocusFrame() {}
// void QFocusFrame(class QWidget *)
MyQFocusFrame(QWidget * parent) : QFocusFrame(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QFocusFrame5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QFocusFrame::event(e);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    auto fnptr = ((bool (*)(void* , QObject *, QEvent *))(callback_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0, arg1);
    }
    return QFocusFrame::eventFilter(arg0, arg1);
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN11QFocusFrame10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QFocusFrame::paintEvent(arg0);
  }
// void initStyleOption(class QStyleOption *)
  virtual void initStyleOption(QStyleOption * option) {
    auto fnptr = ((void (*)(void* , QStyleOption *))(callback_ZNK11QFocusFrame15initStyleOptionEP12QStyleOption_fnptr));
    if (fnptr != 0) {
      fnptr(this , option);
    }
    QFocusFrame::initStyleOption(option);
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
