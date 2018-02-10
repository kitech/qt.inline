//  header block begin
// /usr/include/qt/QtWidgets/qabstractbutton.h
#include <qabstractbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractButton is pure virtual: true
// QAbstractButton has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractButton : public QAbstractButton {
public:
  virtual ~MyQAbstractButton() {}
// void QAbstractButton(class QWidget *)
MyQAbstractButton(QWidget * parent) : QAbstractButton(parent) {}
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::paintEvent(e);
  }
  }

// bool hitButton(const class QPoint &)
  virtual bool hitButton(const QPoint & pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractButton::hitButton(pos);
  }
  }

// void checkStateSet()
  virtual void checkStateSet() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"checkStateSet", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::checkStateSet();
  }
  }

// void nextCheckState()
  virtual void nextCheckState() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::nextCheckState();
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractButton::event(e);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::keyPressEvent(e);
  }
  }

// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::keyReleaseEvent(e);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::mousePressEvent(e);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::mouseReleaseEvent(e);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::mouseMoveEvent(e);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::focusInEvent(e);
  }
  }

// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::focusOutEvent(e);
  }
  }

// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::changeEvent(e);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractButton::timerEvent(e);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QAbstractButton10metaObjectEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:75
// [-2] void QAbstractButton(class QWidget *)
extern "C"
void* C_ZN15QAbstractButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractButton*)(0);
  return 0; // new MyQAbstractButton(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:76
// [-2] void ~QAbstractButton()
extern "C"
void C_ZN15QAbstractButtonD2Ev(void *this_) {
  delete (QAbstractButton*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:78
// [-2] void setText(const class QString &)
extern "C"
void C_ZN15QAbstractButton7setTextERK7QString(void *this_, QString* text) {
  ((QAbstractButton*)this_)->setText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:79
// [8] QString text()
extern "C"
void* C_ZNK15QAbstractButton4textEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:81
// [-2] void setIcon(const class QIcon &)
extern "C"
void C_ZN15QAbstractButton7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QAbstractButton*)this_)->setIcon(*icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:82
// [8] QIcon icon()
extern "C"
void* C_ZNK15QAbstractButton4iconEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->icon();
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:84
// [8] QSize iconSize()
extern "C"
void* C_ZNK15QAbstractButton8iconSizeEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:87
// [-2] void setShortcut(const class QKeySequence &)
extern "C"
void C_ZN15QAbstractButton11setShortcutERK12QKeySequence(void *this_, QKeySequence* key) {
  ((QAbstractButton*)this_)->setShortcut(*key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:88
// [8] QKeySequence shortcut()
extern "C"
void* C_ZNK15QAbstractButton8shortcutEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->shortcut();
return new QKeySequence(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:91
// [-2] void setCheckable(_Bool)
extern "C"
void C_ZN15QAbstractButton12setCheckableEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setCheckable(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:92
// [1] bool isCheckable()
extern "C"
bool C_ZNK15QAbstractButton11isCheckableEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isCheckable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:94
// [1] bool isChecked()
extern "C"
bool C_ZNK15QAbstractButton9isCheckedEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isChecked();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:96
// [-2] void setDown(_Bool)
extern "C"
void C_ZN15QAbstractButton7setDownEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setDown(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:97
// [1] bool isDown()
extern "C"
bool C_ZNK15QAbstractButton6isDownEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isDown();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:99
// [-2] void setAutoRepeat(_Bool)
extern "C"
void C_ZN15QAbstractButton13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoRepeat(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:100
// [1] bool autoRepeat()
extern "C"
bool C_ZNK15QAbstractButton10autoRepeatEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoRepeat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:102
// [-2] void setAutoRepeatDelay(int)
extern "C"
void C_ZN15QAbstractButton18setAutoRepeatDelayEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatDelay(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:103
// [4] int autoRepeatDelay()
extern "C"
int C_ZNK15QAbstractButton15autoRepeatDelayEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatDelay();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:105
// [-2] void setAutoRepeatInterval(int)
extern "C"
void C_ZN15QAbstractButton21setAutoRepeatIntervalEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatInterval(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:106
// [4] int autoRepeatInterval()
extern "C"
int C_ZNK15QAbstractButton18autoRepeatIntervalEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatInterval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:108
// [-2] void setAutoExclusive(_Bool)
extern "C"
void C_ZN15QAbstractButton16setAutoExclusiveEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoExclusive(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:109
// [1] bool autoExclusive()
extern "C"
bool C_ZNK15QAbstractButton13autoExclusiveEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoExclusive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:112
// [8] QButtonGroup * group()
extern "C"
void* C_ZNK15QAbstractButton5groupEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->group();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:116
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN15QAbstractButton11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QAbstractButton*)this_)->setIconSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:117
// [-2] void animateClick(int)
extern "C"
void C_ZN15QAbstractButton12animateClickEi(void *this_, int msec) {
  ((QAbstractButton*)this_)->animateClick(msec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:118
// [-2] void click()
extern "C"
void C_ZN15QAbstractButton5clickEv(void *this_) {
  ((QAbstractButton*)this_)->click();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:119
// [-2] void toggle()
extern "C"
void C_ZN15QAbstractButton6toggleEv(void *this_) {
  ((QAbstractButton*)this_)->toggle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:120
// [-2] void setChecked(_Bool)
extern "C"
void C_ZN15QAbstractButton10setCheckedEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setChecked(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:123
// [-2] void pressed()
extern "C"
void C_ZN15QAbstractButton7pressedEv(void *this_) {
  ((QAbstractButton*)this_)->pressed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:124
// [-2] void released()
extern "C"
void C_ZN15QAbstractButton8releasedEv(void *this_) {
  ((QAbstractButton*)this_)->released();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:125
// [-2] void clicked(_Bool)
extern "C"
void C_ZN15QAbstractButton7clickedEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->clicked(checked);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:126
// [-2] void toggled(_Bool)
extern "C"
void C_ZN15QAbstractButton7toggledEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->toggled(checked);
}
//  main block end
