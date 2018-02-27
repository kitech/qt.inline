//  header block begin
// /usr/include/qt/QtWidgets/qsizegrip.h
#ifndef protected
#define protected public
#endif
#include <qsizegrip.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizeGrip is pure virtual: false
// QSizeGrip has virtual projected: true
//  header block end

//  main block begin

class MyQSizeGrip : public QSizeGrip {
public:
  virtual ~MyQSizeGrip() {}
// void QSizeGrip(class QWidget *)
MyQSizeGrip(QWidget * parent) : QSizeGrip(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::mouseReleaseEvent(mouseEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void moveEvent(class QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)moveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::moveEvent(moveEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::showEvent(showEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)hideEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSizeGrip::hideEvent(hideEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSizeGrip::eventFilter(arg0, arg1);
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
    return QSizeGrip::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:62
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void C_ZN9QSizeGrip10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:63
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void C_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:64
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void C_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:65
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void C_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseReleaseEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:66
// [-2] void moveEvent(class QMoveEvent *)
extern "C"
void C_ZN9QSizeGrip9moveEventEP10QMoveEvent(void *this_, QMoveEvent * moveEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::moveEvent(moveEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:67
// [-2] void showEvent(class QShowEvent *)
extern "C"
void C_ZN9QSizeGrip9showEventEP10QShowEvent(void *this_, QShowEvent * showEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::showEvent(showEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:68
// [-2] void hideEvent(class QHideEvent *)
extern "C"
void C_ZN9QSizeGrip9hideEventEP10QHideEvent(void *this_, QHideEvent * hideEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::hideEvent(hideEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:69
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
bool C_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:70
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN9QSizeGrip5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QSizeGrip10metaObjectEv(void *this_) {
  return (void*)((QSizeGrip*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:55
// [-2] void QSizeGrip(class QWidget *)
extern "C"
void* C_ZN9QSizeGripC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSizeGrip*)(0);
  return  new MyQSizeGrip(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:56
// [-2] void ~QSizeGrip()
extern "C"
void C_ZN9QSizeGripD2Ev(void *this_) {
  delete (QSizeGrip*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:58
// [8] QSize sizeHint()
extern "C"
void* C_ZNK9QSizeGrip8sizeHintEv(void *this_) {
  auto rv = ((QSizeGrip*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:59
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN9QSizeGrip10setVisibleEb(void *this_, bool arg0) {
  ((QSizeGrip*)this_)->setVisible(arg0);
}

//  main block end
