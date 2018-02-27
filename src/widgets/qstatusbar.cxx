//  header block begin
// /usr/include/qt/QtWidgets/qstatusbar.h
#ifndef protected
#define protected public
#endif
#include <qstatusbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStatusBar is pure virtual: false
// QStatusBar has virtual projected: true
//  header block end

//  main block begin

class MyQStatusBar : public QStatusBar {
public:
  virtual ~MyQStatusBar() {}
// void QStatusBar(class QWidget *)
MyQStatusBar(QWidget * parent) : QStatusBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStatusBar::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStatusBar::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStatusBar::resizeEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void reformat()
  virtual void reformat() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"reformat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStatusBar::reformat();
  }
  }

// Protected Visibility=Default Availability=Available
// void hideOrShow()
  virtual void hideOrShow() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideOrShow", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStatusBar::hideOrShow();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QStatusBar::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:82
// [-2] void showEvent(class QShowEvent *)
extern "C"
void C_ZN10QStatusBar9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:83
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void C_ZN10QStatusBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:84
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void C_ZN10QStatusBar11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::resizeEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:87
// [-2] void reformat()
extern "C"
void C_ZN10QStatusBar8reformatEv(void *this_) {
  ((QStatusBar*)this_)->QStatusBar::reformat();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:88
// [-2] void hideOrShow()
extern "C"
void C_ZN10QStatusBar10hideOrShowEv(void *this_) {
  ((QStatusBar*)this_)->QStatusBar::hideOrShow();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:89
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN10QStatusBar5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QStatusBar*)this_)->QStatusBar::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QStatusBar10metaObjectEv(void *this_) {
  return (void*)((QStatusBar*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:59
// [-2] void QStatusBar(class QWidget *)
extern "C"
void* C_ZN10QStatusBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQStatusBar*)(0);
  return  new MyQStatusBar(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:60
// [-2] void ~QStatusBar()
extern "C"
void C_ZN10QStatusBarD2Ev(void *this_) {
  delete (QStatusBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:62
// [-2] void addWidget(class QWidget *, int)
extern "C"
void C_ZN10QStatusBar9addWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addWidget(widget, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:63
// [4] int insertWidget(int, class QWidget *, int)
extern "C"
int C_ZN10QStatusBar12insertWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  return (int)((QStatusBar*)this_)->insertWidget(index, widget, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:64
// [-2] void addPermanentWidget(class QWidget *, int)
extern "C"
void C_ZN10QStatusBar18addPermanentWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addPermanentWidget(widget, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:65
// [4] int insertPermanentWidget(int, class QWidget *, int)
extern "C"
int C_ZN10QStatusBar21insertPermanentWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  return (int)((QStatusBar*)this_)->insertPermanentWidget(index, widget, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:66
// [-2] void removeWidget(class QWidget *)
extern "C"
void C_ZN10QStatusBar12removeWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QStatusBar*)this_)->removeWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:68
// [-2] void setSizeGripEnabled(_Bool)
extern "C"
void C_ZN10QStatusBar18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QStatusBar*)this_)->setSizeGripEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:69
// [1] bool isSizeGripEnabled()
extern "C"
bool C_ZNK10QStatusBar17isSizeGripEnabledEv(void *this_) {
  return (bool)((QStatusBar*)this_)->isSizeGripEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:71
// [8] QString currentMessage()
extern "C"
void* C_ZNK10QStatusBar14currentMessageEv(void *this_) {
  auto rv = ((QStatusBar*)this_)->currentMessage();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:74
// [-2] void showMessage(const class QString &, int)
extern "C"
void C_ZN10QStatusBar11showMessageERK7QStringi(void *this_, QString* text, int timeout) {
  ((QStatusBar*)this_)->showMessage(*text, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:75
// [-2] void clearMessage()
extern "C"
void C_ZN10QStatusBar12clearMessageEv(void *this_) {
  ((QStatusBar*)this_)->clearMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:79
// [-2] void messageChanged(const class QString &)
extern "C"
void C_ZN10QStatusBar14messageChangedERK7QString(void *this_, QString* text) {
  ((QStatusBar*)this_)->messageChanged(*text);
}

//  main block end
