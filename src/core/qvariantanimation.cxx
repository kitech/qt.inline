//  header block begin
// /usr/include/qt/QtCore/qvariantanimation.h
#include <qvariantanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantAnimation is pure virtual: false
// QVariantAnimation has virtual projected: true
//  header block end

//  main block begin

class MyQVariantAnimation : public QVariantAnimation {
public:
  virtual ~MyQVariantAnimation() {}
// void QVariantAnimation(class QObject *)
MyQVariantAnimation(QObject * parent) : QVariantAnimation(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QVariantAnimation::event(event);
  }
  }

// void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariantAnimation::updateCurrentTime(arg0);
  }
  }

// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariantAnimation::updateState(newState, oldState);
  }
  }

// void updateCurrentValue(const class QVariant &)
  virtual void updateCurrentValue(const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariantAnimation::updateCurrentValue(value);
  }
  }

// QVariant interpolated(const class QVariant &, const class QVariant &, qreal)
  virtual QVariant interpolated(const QVariant & from, const QVariant & to, qreal progress) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"interpolated", &handled, 3, (uint64_t)&from, (uint64_t)&to, (uint64_t)&progress, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QVariantAnimation::interpolated(from, to, progress);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QVariantAnimation10metaObjectEv(void *this_) {
  return (void*)((QVariantAnimation*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:68
// [-2] void QVariantAnimation(class QObject *)
extern "C"
void* C_ZN17QVariantAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQVariantAnimation*)(0);
  return  new MyQVariantAnimation(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:69
// [-2] void ~QVariantAnimation()
extern "C"
void C_ZN17QVariantAnimationD2Ev(void *this_) {
  delete (QVariantAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:71
// [16] QVariant startValue()
extern "C"
void* C_ZNK17QVariantAnimation10startValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->startValue();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:72
// [-2] void setStartValue(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation13setStartValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setStartValue(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:74
// [16] QVariant endValue()
extern "C"
void* C_ZNK17QVariantAnimation8endValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->endValue();
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:75
// [-2] void setEndValue(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation11setEndValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setEndValue(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:77
// [16] QVariant keyValueAt(qreal)
extern "C"
void* C_ZNK17QVariantAnimation10keyValueAtEd(void *this_, qreal step) {
  auto rv = ((QVariantAnimation*)this_)->keyValueAt(step);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:78
// [-2] void setKeyValueAt(qreal, const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant(void *this_, qreal step, QVariant* value) {
  ((QVariantAnimation*)this_)->setKeyValueAt(step, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:83
// [16] QVariant currentValue()
extern "C"
void* C_ZNK17QVariantAnimation12currentValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->currentValue();
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:85
// [4] int duration()
extern "C"
int C_ZNK17QVariantAnimation8durationEv(void *this_) {
  return (int)((QVariantAnimation*)this_)->duration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:86
// [-2] void setDuration(int)
extern "C"
void C_ZN17QVariantAnimation11setDurationEi(void *this_, int msecs) {
  ((QVariantAnimation*)this_)->setDuration(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:88
// [8] QEasingCurve easingCurve()
extern "C"
void* C_ZNK17QVariantAnimation11easingCurveEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->easingCurve();
return new QEasingCurve(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:89
// [-2] void setEasingCurve(const class QEasingCurve &)
extern "C"
void C_ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve(void *this_, QEasingCurve* easing) {
  ((QVariantAnimation*)this_)->setEasingCurve(*easing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:94
// [-2] void valueChanged(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation12valueChangedERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->valueChanged(*value);
}
//  main block end
