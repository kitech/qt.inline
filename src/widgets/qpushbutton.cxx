//  header block begin
// /usr/include/qt/QtWidgets/qpushbutton.h
#include <qpushbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPushButton is pure virtual: false
// QPushButton has virtual projected: true
//  header block end

//  main block begin

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
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPushButton::event(e);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPushButton::paintEvent(arg0);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPushButton::keyPressEvent(arg0);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPushButton::focusInEvent(arg0);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPushButton::focusOutEvent(arg0);
  }
  }

// void initStyleOption(class QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPushButton::initStyleOption(option);
  }
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
