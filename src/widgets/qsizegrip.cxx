//  header block begin
// /usr/include/qt/QtWidgets/qsizegrip.h
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
