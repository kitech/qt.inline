//  header block begin
// /usr/include/qt/QtWidgets/qabstractslider.h
#ifndef protected
#define protected public
#endif
#include <qabstractslider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractSlider is pure virtual: false
// QAbstractSlider has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractSlider : public QAbstractSlider {
public:
  virtual ~MyQAbstractSlider() {}
// void QAbstractSlider(class QWidget *)
MyQAbstractSlider(QWidget * parent) : QAbstractSlider(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractSlider::event(e);
  }
  }

// Protected Visibility=Default Availability=Available
// void setRepeatAction(enum QAbstractSlider::SliderAction, int, int)
  virtual void setRepeatAction(QAbstractSlider::SliderAction action, int thresholdTime, int repeatTime) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setRepeatAction", &handled, 3, (uint64_t)action, (uint64_t)thresholdTime, (uint64_t)repeatTime, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
  }
  }

// Protected Visibility=Default Availability=Available
// QAbstractSlider::SliderAction repeatAction()
  virtual QAbstractSlider::SliderAction repeatAction() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"repeatAction", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSlider::SliderAction)(int)(irv);
      // EnumEnumQAbstractSlider::SliderAction
    } else {
    return QAbstractSlider::repeatAction();
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
    QAbstractSlider::sliderChange(change);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSlider::keyPressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSlider::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractSlider::wheelEvent(e);
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
    QAbstractSlider::changeEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:134
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAbstractSlider5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QAbstractSlider*)this_)->QAbstractSlider::event(e);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:136
// [-2] void setRepeatAction(enum QAbstractSlider::SliderAction, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider15setRepeatActionENS_12SliderActionEii(void *this_, QAbstractSlider::SliderAction action, int thresholdTime, int repeatTime) {
  ((QAbstractSlider*)this_)->QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:137
// [4] QAbstractSlider::SliderAction repeatAction()
extern "C" Q_DECL_EXPORT
QAbstractSlider::SliderAction C_ZNK15QAbstractSlider12repeatActionEv(void *this_) {
  return (QAbstractSlider::SliderAction)((QAbstractSlider*)this_)->QAbstractSlider::repeatAction();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:145
// [-2] void sliderChange(enum QAbstractSlider::SliderChange)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12sliderChangeENS_12SliderChangeE(void *this_, QAbstractSlider::SliderChange change) {
  ((QAbstractSlider*)this_)->QAbstractSlider::sliderChange(change);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:147
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * ev) {
  ((QAbstractSlider*)this_)->QAbstractSlider::keyPressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:148
// [-2] void timerEvent(class QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QAbstractSlider*)this_)->QAbstractSlider::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:150
// [-2] void wheelEvent(class QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QAbstractSlider*)this_)->QAbstractSlider::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:152
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QAbstractSlider*)this_)->QAbstractSlider::changeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAbstractSlider10metaObjectEv(void *this_) {
  return (void*)((QAbstractSlider*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:70
// [-2] void QAbstractSlider(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAbstractSliderC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractSlider*)(0);
  return 0; // new MyQAbstractSlider(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:71
// [-2] void ~QAbstractSlider()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSliderD2Ev(void *this_) {
  delete (QAbstractSlider*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:73
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK15QAbstractSlider11orientationEv(void *this_) {
  return (Qt::Orientation)((QAbstractSlider*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:75
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10setMinimumEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setMinimum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:76
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider7minimumEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:78
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider10setMaximumEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setMaximum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:79
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider7maximumEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:81
// [-2] void setSingleStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13setSingleStepEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setSingleStep(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:82
// [4] int singleStep()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider10singleStepEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:84
// [-2] void setPageStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11setPageStepEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setPageStep(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:85
// [4] int pageStep()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider8pageStepEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->pageStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:87
// [-2] void setTracking(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11setTrackingEb(void *this_, bool enable) {
  ((QAbstractSlider*)this_)->setTracking(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:88
// [1] bool hasTracking()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider11hasTrackingEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->hasTracking();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:90
// [-2] void setSliderDown(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13setSliderDownEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setSliderDown(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:91
// [1] bool isSliderDown()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider12isSliderDownEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->isSliderDown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:93
// [-2] void setSliderPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider17setSliderPositionEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setSliderPosition(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:94
// [4] int sliderPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider14sliderPositionEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->sliderPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:96
// [-2] void setInvertedAppearance(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider21setInvertedAppearanceEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setInvertedAppearance(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:97
// [1] bool invertedAppearance()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider18invertedAppearanceEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->invertedAppearance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:99
// [-2] void setInvertedControls(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider19setInvertedControlsEb(void *this_, bool arg0) {
  ((QAbstractSlider*)this_)->setInvertedControls(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:100
// [1] bool invertedControls()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QAbstractSlider16invertedControlsEv(void *this_) {
  return (bool)((QAbstractSlider*)this_)->invertedControls();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:113
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAbstractSlider5valueEv(void *this_) {
  return (int)((QAbstractSlider*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:115
// [-2] void triggerAction(enum QAbstractSlider::SliderAction)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13triggerActionENS_12SliderActionE(void *this_, QAbstractSlider::SliderAction action) {
  ((QAbstractSlider*)this_)->triggerAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:118
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider8setValueEi(void *this_, int arg0) {
  ((QAbstractSlider*)this_)->setValue(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:119
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QAbstractSlider*)this_)->setOrientation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:120
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider8setRangeEii(void *this_, int min, int max) {
  ((QAbstractSlider*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:123
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12valueChangedEi(void *this_, int value) {
  ((QAbstractSlider*)this_)->valueChanged(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:125
// [-2] void sliderPressed()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider13sliderPressedEv(void *this_) {
  ((QAbstractSlider*)this_)->sliderPressed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:126
// [-2] void sliderMoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider11sliderMovedEi(void *this_, int position) {
  ((QAbstractSlider*)this_)->sliderMoved(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:127
// [-2] void sliderReleased()
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider14sliderReleasedEv(void *this_) {
  ((QAbstractSlider*)this_)->sliderReleased();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:129
// [-2] void rangeChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider12rangeChangedEii(void *this_, int min, int max) {
  ((QAbstractSlider*)this_)->rangeChanged(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractslider.h:131
// [-2] void actionTriggered(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QAbstractSlider15actionTriggeredEi(void *this_, int action) {
  ((QAbstractSlider*)this_)->actionTriggered(action);
}

//  main block end
