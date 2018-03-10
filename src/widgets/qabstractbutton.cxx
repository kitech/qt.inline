//  header block begin
// /usr/include/qt/QtWidgets/qabstractbutton.h
#ifndef protected
#define protected public
#endif
#include <qabstractbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractButton is pure virtual: true
// QAbstractButton has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractButton : public QAbstractButton {
public:
  virtual ~MyQAbstractButton() {}
// void QAbstractButton(class QWidget *)
MyQAbstractButton(QWidget * parent) : QAbstractButton(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // QAbstractButton::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:129
// [-2] void paintEvent(class QPaintEvent *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:130
// [1] bool hitButton(const class QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QAbstractButton*)this_)->QAbstractButton::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:131
// [-2] void checkStateSet()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13checkStateSetEv(void *this_) {
  ((QAbstractButton*)this_)->QAbstractButton::checkStateSet();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:132
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton14nextCheckStateEv(void *this_) {
  ((QAbstractButton*)this_)->QAbstractButton::nextCheckState();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:134
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractButton*)this_)->QAbstractButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:135
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::keyPressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:136
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::keyReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:137
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:138
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:139
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:140
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::focusInEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:141
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::focusOutEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:142
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::changeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:143
// [-2] void timerEvent(class QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QAbstractButton*)this_)->QAbstractButton::timerEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton10metaObjectEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:75
// [-2] void QAbstractButton(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractButton*)(0);
  return 0; // new MyQAbstractButton(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:76
// [-2] void ~QAbstractButton()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButtonD2Ev(void *this_) {
  delete (QAbstractButton*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:78
// [-2] void setText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setTextERK7QString(void *this_, QString* text) {
  ((QAbstractButton*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:79
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton4textEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:81
// [-2] void setIcon(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QAbstractButton*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:82
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton4iconEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:84
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton8iconSizeEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:87
// [-2] void setShortcut(const class QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11setShortcutERK12QKeySequence(void *this_, QKeySequence* key) {
  ((QAbstractButton*)this_)->setShortcut(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:88
// [8] QKeySequence shortcut()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton8shortcutEv(void *this_) {
  auto rv = ((QAbstractButton*)this_)->shortcut();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:91
// [-2] void setCheckable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12setCheckableEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setCheckable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:92
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton11isCheckableEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:94
// [1] bool isChecked()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton9isCheckedEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isChecked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:96
// [-2] void setDown(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7setDownEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setDown(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:97
// [1] bool isDown()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton6isDownEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->isDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:99
// [-2] void setAutoRepeat(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoRepeat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:100
// [1] bool autoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton10autoRepeatEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoRepeat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:102
// [-2] void setAutoRepeatDelay(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton18setAutoRepeatDelayEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatDelay(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:103
// [4] int autoRepeatDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractButton15autoRepeatDelayEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:105
// [-2] void setAutoRepeatInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton21setAutoRepeatIntervalEi(void *this_, int arg0) {
  ((QAbstractButton*)this_)->setAutoRepeatInterval(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:106
// [4] int autoRepeatInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractButton18autoRepeatIntervalEv(void *this_) {
  return (int)((QAbstractButton*)this_)->autoRepeatInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:108
// [-2] void setAutoExclusive(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton16setAutoExclusiveEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setAutoExclusive(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:109
// [1] bool autoExclusive()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractButton13autoExclusiveEv(void *this_) {
  return (bool)((QAbstractButton*)this_)->autoExclusive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:112
// [8] QButtonGroup * group()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractButton5groupEv(void *this_) {
  return (void*)((QAbstractButton*)this_)->group();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:116
// [-2] void setIconSize(const class QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QAbstractButton*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:117
// [-2] void animateClick(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton12animateClickEi(void *this_, int msec) {
  ((QAbstractButton*)this_)->animateClick(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:118
// [-2] void click()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton5clickEv(void *this_) {
  ((QAbstractButton*)this_)->click();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:119
// [-2] void toggle()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton6toggleEv(void *this_) {
  ((QAbstractButton*)this_)->toggle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:120
// [-2] void setChecked(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton10setCheckedEb(void *this_, bool arg0) {
  ((QAbstractButton*)this_)->setChecked(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:123
// [-2] void pressed()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7pressedEv(void *this_) {
  ((QAbstractButton*)this_)->pressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:124
// [-2] void released()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton8releasedEv(void *this_) {
  ((QAbstractButton*)this_)->released();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:125
// [-2] void clicked(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7clickedEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->clicked(checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractbutton.h:126
// [-2] void toggled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractButton7toggledEb(void *this_, bool checked) {
  ((QAbstractButton*)this_)->toggled(checked);
}

//  main block end
