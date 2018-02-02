//  header block begin
// /usr/include/qt/QtWidgets/qpushbutton.h
#include <qpushbutton.h>
#include <QtWidgets>

// QPushButton is pure virtual: false
// QPushButton has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:91
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QPushButton5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QPushButton5eventEP6QEvent(void*cbfn)
{ callback_ZN11QPushButton5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:92
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN11QPushButton10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN11QPushButton10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN11QPushButton10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:93
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void* callback_ZN11QPushButton13keyPressEventEP9QKeyEvent_fnptr = 0;
extern "C" void set_callback_ZN11QPushButton13keyPressEventEP9QKeyEvent(void*cbfn)
{ callback_ZN11QPushButton13keyPressEventEP9QKeyEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:94
// [-2] void focusInEvent(class QFocusEvent *)
extern "C"
void* callback_ZN11QPushButton12focusInEventEP11QFocusEvent_fnptr = 0;
extern "C" void set_callback_ZN11QPushButton12focusInEventEP11QFocusEvent(void*cbfn)
{ callback_ZN11QPushButton12focusInEventEP11QFocusEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:95
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C"
void* callback_ZN11QPushButton13focusOutEventEP11QFocusEvent_fnptr = 0;
extern "C" void set_callback_ZN11QPushButton13focusOutEventEP11QFocusEvent(void*cbfn)
{ callback_ZN11QPushButton13focusOutEventEP11QFocusEvent_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:96
// [-2] void initStyleOption(class QStyleOptionButton *)
extern "C"
void* callback_ZNK11QPushButton15initStyleOptionEP18QStyleOptionButton_fnptr = 0;
extern "C" void set_callback_ZNK11QPushButton15initStyleOptionEP18QStyleOptionButton(void*cbfn)
{ callback_ZNK11QPushButton15initStyleOptionEP18QStyleOptionButton_fnptr = cbfn; }

class MyQPushButton : public QPushButton {
public:
  virtual ~MyQPushButton() {}
// void QPushButton(class QWidget *)
MyQPushButton(QWidget * parent) : QPushButton(parent) {}
// void QPushButton(const class QString &, class QWidget *)
MyQPushButton(const QString & text, QWidget * parent) : QPushButton(text, parent) {}
// void QPushButton(const class QIcon &, const class QString &, class QWidget *)
MyQPushButton(const QIcon & icon, const QString & text, QWidget * parent) : QPushButton(icon, text, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QPushButton5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QPushButton::event(e);
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN11QPushButton10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QPushButton::paintEvent(arg0);
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    auto fnptr = ((void (*)(void* , QKeyEvent *))(callback_ZN11QPushButton13keyPressEventEP9QKeyEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QPushButton::keyPressEvent(arg0);
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0) {
    auto fnptr = ((void (*)(void* , QFocusEvent *))(callback_ZN11QPushButton12focusInEventEP11QFocusEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QPushButton::focusInEvent(arg0);
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0) {
    auto fnptr = ((void (*)(void* , QFocusEvent *))(callback_ZN11QPushButton13focusOutEventEP11QFocusEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QPushButton::focusOutEvent(arg0);
  }
// void initStyleOption(class QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * option) {
    auto fnptr = ((void (*)(void* , QStyleOptionButton *))(callback_ZNK11QPushButton15initStyleOptionEP18QStyleOptionButton_fnptr));
    if (fnptr != 0) {
      fnptr(this , option);
    }
    QPushButton::initStyleOption(option);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QPushButton10metaObjectEv(void *this_) {
  return (void*)((QPushButton*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:64
// [-2] void QPushButton(class QWidget *)
extern "C"
void* C_ZN11QPushButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:65
// [-2] void QPushButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN11QPushButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(*text, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:66
// [-2] void QPushButton(const class QIcon &, const class QString &, class QWidget *)
extern "C"
void* C_ZN11QPushButtonC2ERK5QIconRK7QStringP7QWidget(QIcon* icon, QString* text, QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(*icon, *text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:67
// [-2] void ~QPushButton()
extern "C"
void C_ZN11QPushButtonD2Ev(void *this_) {
  delete (QPushButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:69
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QPushButton8sizeHintEv(void *this_) {
  auto rv = ((QPushButton*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:70
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK11QPushButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QPushButton*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:72
// [1] bool autoDefault()
extern "C"
bool C_ZNK11QPushButton11autoDefaultEv(void *this_) {
  return (bool)((QPushButton*)this_)->autoDefault();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:73
// [-2] void setAutoDefault(_Bool)
extern "C"
void C_ZN11QPushButton14setAutoDefaultEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setAutoDefault(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:74
// [1] bool isDefault()
extern "C"
bool C_ZNK11QPushButton9isDefaultEv(void *this_) {
  return (bool)((QPushButton*)this_)->isDefault();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:75
// [-2] void setDefault(_Bool)
extern "C"
void C_ZN11QPushButton10setDefaultEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setDefault(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:78
// [-2] void setMenu(class QMenu *)
extern "C"
void C_ZN11QPushButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QPushButton*)this_)->setMenu(menu);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:79
// [8] QMenu * menu()
extern "C"
void* C_ZNK11QPushButton4menuEv(void *this_) {
  return (void*)((QPushButton*)this_)->menu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:82
// [-2] void setFlat(_Bool)
extern "C"
void C_ZN11QPushButton7setFlatEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setFlat(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:83
// [1] bool isFlat()
extern "C"
bool C_ZNK11QPushButton6isFlatEv(void *this_) {
  return (bool)((QPushButton*)this_)->isFlat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:87
// [-2] void showMenu()
extern "C"
void C_ZN11QPushButton8showMenuEv(void *this_) {
  ((QPushButton*)this_)->showMenu();
}
//  main block end
