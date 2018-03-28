//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qvariantanimation.h
#ifndef protected
#define protected public
#endif
#include <qvariantanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantAnimation is pure virtual: false
// QVariantAnimation has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVariantAnimation : public QVariantAnimation {
public:
  virtual ~MyQVariantAnimation() {}
// void QVariantAnimation(QObject *)
MyQVariantAnimation(QObject * parent) : QVariantAnimation(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariantAnimation::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateCurrentValue(const QVariant &)
  virtual void updateCurrentValue(const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QVariantAnimation::updateCurrentValue(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant interpolated(const QVariant &, const QVariant &, qreal)
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:98
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QVariantAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QVariantAnimation*)this_)->QVariantAnimation::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:100
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation17updateCurrentTimeEi(void *this_, int arg0) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateCurrentTime(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:101
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:103
// [-2] void updateCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation18updateCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->QVariantAnimation::updateCurrentValue(*value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:104
// [16] QVariant interpolated(const QVariant &, const QVariant &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation12interpolatedERK8QVariantS2_d(void *this_, QVariant* from, QVariant* to, qreal progress) {
  auto rv = ((QVariantAnimation*)this_)->QVariantAnimation::interpolated(*from, *to, progress);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10metaObjectEv(void *this_) {
  return (void*)((QVariantAnimation*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:68
// [-2] void QVariantAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QVariantAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQVariantAnimation*)(0);
  return  new MyQVariantAnimation(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:69
// [-2] void ~QVariantAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimationD2Ev(void *this_) {
  delete (QVariantAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:71
// [16] QVariant startValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10startValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->startValue();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:72
// [-2] void setStartValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation13setStartValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setStartValue(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:74
// [16] QVariant endValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation8endValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->endValue();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:75
// [-2] void setEndValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11setEndValueERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->setEndValue(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:77
// [16] QVariant keyValueAt(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation10keyValueAtEd(void *this_, qreal step) {
  auto rv = ((QVariantAnimation*)this_)->keyValueAt(step);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:78
// [-2] void setKeyValueAt(qreal, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant(void *this_, qreal step, QVariant* value) {
  ((QVariantAnimation*)this_)->setKeyValueAt(step, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:83
// [16] QVariant currentValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation12currentValueEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->currentValue();
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:85
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK17QVariantAnimation8durationEv(void *this_) {
  return (int)((QVariantAnimation*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:86
// [-2] void setDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation11setDurationEi(void *this_, int msecs) {
  ((QVariantAnimation*)this_)->setDuration(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:88
// [8] QEasingCurve easingCurve()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QVariantAnimation11easingCurveEv(void *this_) {
  auto rv = ((QVariantAnimation*)this_)->easingCurve();
return new QEasingCurve(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:89
// [-2] void setEasingCurve(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve(void *this_, QEasingCurve* easing) {
  ((QVariantAnimation*)this_)->setEasingCurve(*easing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariantanimation.h:94
// [-2] void valueChanged(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QVariantAnimation12valueChangedERK8QVariant(void *this_, QVariant* value) {
  ((QVariantAnimation*)this_)->valueChanged(*value);
}

//  main block end
