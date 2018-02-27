//  header block begin
// /usr/include/qt/QtWidgets/qslider.h
#ifndef protected
#define protected public
#endif
#include <qslider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSlider is pure virtual: false
// QSlider has virtual projected: true
//  header block end

//  main block begin

class MyQSlider : public QSlider {
public:
  virtual ~MyQSlider() {}
// void QSlider(class QWidget *)
MyQSlider(QWidget * parent) : QSlider(parent) {}
// void QSlider(Qt::Orientation, class QWidget *)
MyQSlider(Qt::Orientation orientation, QWidget * parent) : QSlider(orientation, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSlider::paintEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSlider::mousePressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSlider::mouseReleaseEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSlider::mouseMoveEvent(ev);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(class QStyleOptionSlider *)
  virtual void initStyleOption(QStyleOptionSlider * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSlider::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:88
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void C_ZN7QSlider10paintEventEP11QPaintEvent(void *this_, QPaintEvent * ev) {
  ((QSlider*)this_)->QSlider::paintEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:89
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void C_ZN7QSlider15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mousePressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:90
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void C_ZN7QSlider17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mouseReleaseEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:91
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void C_ZN7QSlider14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QSlider*)this_)->QSlider::mouseMoveEvent(ev);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:92
// [-2] void initStyleOption(class QStyleOptionSlider *)
extern "C"
void C_ZNK7QSlider15initStyleOptionEP18QStyleOptionSlider(void *this_, QStyleOptionSlider * option) {
  ((QSlider*)this_)->QSlider::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QSlider10metaObjectEv(void *this_) {
  return (void*)((QSlider*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:71
// [-2] void QSlider(class QWidget *)
extern "C"
void* C_ZN7QSliderC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSlider*)(0);
  return  new MyQSlider(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:72
// [-2] void QSlider(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN7QSliderC2EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  auto _nilp = (MyQSlider*)(0);
  return  new MyQSlider(orientation, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:74
// [-2] void ~QSlider()
extern "C"
void C_ZN7QSliderD2Ev(void *this_) {
  delete (QSlider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:76
// [8] QSize sizeHint()
extern "C"
void* C_ZNK7QSlider8sizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:77
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK7QSlider15minimumSizeHintEv(void *this_) {
  auto rv = ((QSlider*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:79
// [-2] void setTickPosition(enum QSlider::TickPosition)
extern "C"
void C_ZN7QSlider15setTickPositionENS_12TickPositionE(void *this_, QSlider::TickPosition position) {
  ((QSlider*)this_)->setTickPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:80
// [4] QSlider::TickPosition tickPosition()
extern "C"
QSlider::TickPosition C_ZNK7QSlider12tickPositionEv(void *this_) {
  return (QSlider::TickPosition)((QSlider*)this_)->tickPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:82
// [-2] void setTickInterval(int)
extern "C"
void C_ZN7QSlider15setTickIntervalEi(void *this_, int ti) {
  ((QSlider*)this_)->setTickInterval(ti);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:83
// [4] int tickInterval()
extern "C"
int C_ZNK7QSlider12tickIntervalEv(void *this_) {
  return (int)((QSlider*)this_)->tickInterval();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qslider.h:85
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN7QSlider5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSlider*)this_)->event(event);
}

//  main block end
