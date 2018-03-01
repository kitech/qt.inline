//  header block begin
// /usr/include/qt/QtWidgets/qdial.h
#ifndef protected
#define protected public
#endif
#include <qdial.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDial is pure virtual: false
// QDial has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDial : public QDial {
public:
  virtual ~MyQDial() {}
// void QDial(class QWidget *)
MyQDial(QWidget * parent) : QDial(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QDial::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * re) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)re, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::resizeEvent(re);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * pe) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)pe, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::paintEvent(pe);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::mousePressEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::mouseReleaseEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::mouseMoveEvent(me);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void sliderChange(enum QAbstractSlider::SliderChange)
  virtual void sliderChange(QAbstractSlider::SliderChange change) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sliderChange", &handled, 1, (uint64_t)change, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDial::sliderChange(change);
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
    QDial::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:84
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN5QDial5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QDial*)this_)->QDial::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:85
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * re) {
  ((QDial*)this_)->QDial::resizeEvent(re);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:86
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial10paintEventEP11QPaintEvent(void *this_, QPaintEvent * pe) {
  ((QDial*)this_)->QDial::paintEvent(pe);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:88
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mousePressEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:89
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseReleaseEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:90
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * me) {
  ((QDial*)this_)->QDial::mouseMoveEvent(me);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:92
// [-2] void sliderChange(enum QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QDial*)this_)->QDial::sliderChange(change);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:93
// [-2] void initStyleOption(class QStyleOptionSlider *)
extern "C" Q_DECL_EXPORT
void C_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider(void *this_, QStyleOptionSlider * option) {
  ((QDial*)this_)->QDial::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial10metaObjectEv(void *this_) {
  return (void*)((QDial*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:64
// [-2] void QDial(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDialC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDial*)(0);
  return  new MyQDial(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:66
// [-2] void ~QDial()
extern "C" Q_DECL_EXPORT
void C_ZN5QDialD2Ev(void *this_) {
  delete (QDial*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:68
// [1] bool wrapping()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial8wrappingEv(void *this_) {
  return (bool)((QDial*)this_)->wrapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:70
// [4] int notchSize()
extern "C" Q_DECL_EXPORT
int C_ZNK5QDial9notchSizeEv(void *this_) {
  return (int)((QDial*)this_)->notchSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:72
// [-2] void setNotchTarget(double)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:73
// [8] qreal notchTarget()
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QDial11notchTargetEv(void *this_) {
  return (qreal)((QDial*)this_)->notchTarget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:74
// [1] bool notchesVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QDial14notchesVisibleEv(void *this_) {
  return (bool)((QDial*)this_)->notchesVisible();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:76
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial8sizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:77
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:80
// [-2] void setNotchesVisible(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:81
// [-2] void setWrapping(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}

//  main block end
