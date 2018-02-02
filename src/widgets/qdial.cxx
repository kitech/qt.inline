//  header block begin
// /usr/include/qt/QtWidgets/qdial.h
#include <qdial.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDial is pure virtual: false
// QDial has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN5QDial5eventEP6QEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial5eventEP6QEvent(void*cbfn)
// { callback_ZN5QDial5eventEP6QEvent_fnptr = cbfn; }
// void* callback_ZN5QDial11resizeEventEP12QResizeEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial11resizeEventEP12QResizeEvent(void*cbfn)
// { callback_ZN5QDial11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// void* callback_ZN5QDial10paintEventEP11QPaintEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial10paintEventEP11QPaintEvent(void*cbfn)
// { callback_ZN5QDial10paintEventEP11QPaintEvent_fnptr = cbfn; }
// void* callback_ZN5QDial15mousePressEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial15mousePressEventEP11QMouseEvent(void*cbfn)
// { callback_ZN5QDial15mousePressEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent(void*cbfn)
// { callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN5QDial14mouseMoveEventEP11QMouseEvent_fnptr = 0;
// extern "C" void set_callback_ZN5QDial14mouseMoveEventEP11QMouseEvent(void*cbfn)
// { callback_ZN5QDial14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// void* callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE_fnptr = 0;
// extern "C" void set_callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE(void*cbfn)
// { callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE_fnptr = cbfn; }
// void* callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider_fnptr = 0;
// extern "C" void set_callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider(void*cbfn)
// { callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider_fnptr = cbfn; }

class MyQDial : public QDial {
public:
  virtual ~MyQDial() {}
// void QDial(class QWidget *)
MyQDial(QWidget * parent) : QDial(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN5QDial5eventEP6QEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , e);
    // }
    return QDial::event(e);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * re) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)re, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN5QDial11resizeEventEP12QResizeEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , re);
    // }
    QDial::resizeEvent(re);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * pe) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)pe, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN5QDial10paintEventEP11QPaintEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , pe);
    // }
    QDial::paintEvent(pe);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN5QDial15mousePressEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , me);
    // }
    QDial::mousePressEvent(me);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN5QDial17mouseReleaseEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , me);
    // }
    QDial::mouseReleaseEvent(me);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * me) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)me, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN5QDial14mouseMoveEventEP11QMouseEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , me);
    // }
    QDial::mouseMoveEvent(me);
  }
  }
// void sliderChange(enum QAbstractSlider::SliderChange)
  virtual void sliderChange(QAbstractSlider::SliderChange change) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sliderChange", &handled, 1, (uint64_t)change, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QAbstractSlider::SliderChange))(callback_ZN5QDial12sliderChangeEN15QAbstractSlider12SliderChangeE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , change);
    // }
    QDial::sliderChange(change);
  }
  }
// void initStyleOption(class QStyleOptionSlider *)
  virtual void initStyleOption(QStyleOptionSlider * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QStyleOptionSlider *))(callback_ZNK5QDial15initStyleOptionEP18QStyleOptionSlider_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , option);
    // }
    QDial::initStyleOption(option);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK5QDial10metaObjectEv(void *this_) {
  return (void*)((QDial*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:64
// [-2] void QDial(class QWidget *)
extern "C"
void* C_ZN5QDialC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDial*)(0);
  return  new MyQDial(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:66
// [-2] void ~QDial()
extern "C"
void C_ZN5QDialD2Ev(void *this_) {
  delete (QDial*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:68
// [1] bool wrapping()
extern "C"
bool C_ZNK5QDial8wrappingEv(void *this_) {
  return (bool)((QDial*)this_)->wrapping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:70
// [4] int notchSize()
extern "C"
int C_ZNK5QDial9notchSizeEv(void *this_) {
  return (int)((QDial*)this_)->notchSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:72
// [-2] void setNotchTarget(double)
extern "C"
void C_ZN5QDial14setNotchTargetEd(void *this_, double target) {
  ((QDial*)this_)->setNotchTarget(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:73
// [8] qreal notchTarget()
extern "C"
qreal C_ZNK5QDial11notchTargetEv(void *this_) {
  return (qreal)((QDial*)this_)->notchTarget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:74
// [1] bool notchesVisible()
extern "C"
bool C_ZNK5QDial14notchesVisibleEv(void *this_) {
  return (bool)((QDial*)this_)->notchesVisible();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:76
// [8] QSize sizeHint()
extern "C"
void* C_ZNK5QDial8sizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:77
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK5QDial15minimumSizeHintEv(void *this_) {
  auto rv = ((QDial*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:80
// [-2] void setNotchesVisible(_Bool)
extern "C"
void C_ZN5QDial17setNotchesVisibleEb(void *this_, bool visible) {
  ((QDial*)this_)->setNotchesVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdial.h:81
// [-2] void setWrapping(_Bool)
extern "C"
void C_ZN5QDial11setWrappingEb(void *this_, bool on) {
  ((QDial*)this_)->setWrapping(on);
}
//  main block end
