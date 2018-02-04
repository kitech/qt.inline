//  header block begin
// /usr/include/qt/QtWidgets/qscrollbar.h
#include <qscrollbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollBar is pure virtual: false
// QScrollBar has virtual projected: true
//  header block end

//  main block begin

class MyQScrollBar : public QScrollBar {
public:
  virtual ~MyQScrollBar() {}
// void QScrollBar(class QWidget *)
MyQScrollBar(QWidget * parent) : QScrollBar(parent) {}
// void QScrollBar(Qt::Orientation, class QWidget *)
MyQScrollBar(Qt::Orientation arg0, QWidget * parent) : QScrollBar(arg0, parent) {}
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::wheelEvent(arg0);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::paintEvent(arg0);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::mousePressEvent(arg0);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::mouseReleaseEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::mouseMoveEvent(arg0);
  }
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::hideEvent(arg0);
  }
  }
// void sliderChange(enum QAbstractSlider::SliderChange)
  virtual void sliderChange(QAbstractSlider::SliderChange change) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sliderChange", &handled, 1, (uint64_t)change, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::sliderChange(change);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::contextMenuEvent(arg0);
  }
  }
// void initStyleOption(class QStyleOptionSlider *)
  virtual void initStyleOption(QStyleOptionSlider * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollBar::initStyleOption(option);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QScrollBar10metaObjectEv(void *this_) {
  return (void*)((QScrollBar*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:59
// [-2] void QScrollBar(class QWidget *)
extern "C"
void* C_ZN10QScrollBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQScrollBar*)(0);
  return  new MyQScrollBar(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:60
// [-2] void QScrollBar(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN10QScrollBarC2EN2Qt11OrientationEP7QWidget(Qt::Orientation arg0, QWidget * parent) {
  auto _nilp = (MyQScrollBar*)(0);
  return  new MyQScrollBar(arg0, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:61
// [-2] void ~QScrollBar()
extern "C"
void C_ZN10QScrollBarD2Ev(void *this_) {
  delete (QScrollBar*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:63
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QScrollBar8sizeHintEv(void *this_) {
  auto rv = ((QScrollBar*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollbar.h:64
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN10QScrollBar5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QScrollBar*)this_)->event(event);
}
//  main block end
