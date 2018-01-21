//  header block begin
// /usr/include/qt/QtCore/qvariantanimation.h
#include <qvariantanimation.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qvariantanimation.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QVariantAnimation10metaObjectEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qvariantanimation.h:68
// void QVariantAnimation(class QObject *)
extern "C"
void* C_ZN17QVariantAnimationC1EP7QObject(QObject * parent) {
  return new QVariantAnimation(parent);
}
// virtual
// /usr/include/qt/QtCore/qvariantanimation.h:69
// void ~QVariantAnimation()
extern "C"
void C_ZN17QVariantAnimationD1Ev(void *this_) {
  delete (QVariantAnimation*)(this_);
}
// /usr/include/qt/QtCore/qvariantanimation.h:71
// QVariant startValue()
extern "C"
void C_ZNK17QVariantAnimation10startValueEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->startValue();
}
// /usr/include/qt/QtCore/qvariantanimation.h:72
// void setStartValue(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation13setStartValueERK8QVariant(void *this_, const QVariant & value) {
  ((QVariantAnimation*)this_)->setStartValue(value);
}
// /usr/include/qt/QtCore/qvariantanimation.h:74
// QVariant endValue()
extern "C"
void C_ZNK17QVariantAnimation8endValueEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->endValue();
}
// /usr/include/qt/QtCore/qvariantanimation.h:75
// void setEndValue(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation11setEndValueERK8QVariant(void *this_, const QVariant & value) {
  ((QVariantAnimation*)this_)->setEndValue(value);
}
// /usr/include/qt/QtCore/qvariantanimation.h:77
// QVariant keyValueAt(qreal)
extern "C"
void C_ZNK17QVariantAnimation10keyValueAtEd(void *this_, qreal step) {
  /*return*/ ((QVariantAnimation*)this_)->keyValueAt(step);
}
// /usr/include/qt/QtCore/qvariantanimation.h:78
// void setKeyValueAt(qreal, const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant(void *this_, qreal step, const QVariant & value) {
  ((QVariantAnimation*)this_)->setKeyValueAt(step, value);
}
// /usr/include/qt/QtCore/qvariantanimation.h:80
// KeyValues keyValues()
extern "C"
void C_ZNK17QVariantAnimation9keyValuesEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->keyValues();
}
// /usr/include/qt/QtCore/qvariantanimation.h:83
// QVariant currentValue()
extern "C"
void C_ZNK17QVariantAnimation12currentValueEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->currentValue();
}
// virtual
// /usr/include/qt/QtCore/qvariantanimation.h:85
// int duration()
extern "C"
void C_ZNK17QVariantAnimation8durationEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->duration();
}
// /usr/include/qt/QtCore/qvariantanimation.h:86
// void setDuration(int)
extern "C"
void C_ZN17QVariantAnimation11setDurationEi(void *this_, int msecs) {
  ((QVariantAnimation*)this_)->setDuration(msecs);
}
// /usr/include/qt/QtCore/qvariantanimation.h:88
// QEasingCurve easingCurve()
extern "C"
void C_ZNK17QVariantAnimation11easingCurveEv(void *this_) {
  /*return*/ ((QVariantAnimation*)this_)->easingCurve();
}
// /usr/include/qt/QtCore/qvariantanimation.h:89
// void setEasingCurve(const class QEasingCurve &)
extern "C"
void C_ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve(void *this_, const QEasingCurve & easing) {
  ((QVariantAnimation*)this_)->setEasingCurve(easing);
}
// /usr/include/qt/QtCore/qvariantanimation.h:94
// void valueChanged(const class QVariant &)
extern "C"
void C_ZN17QVariantAnimation12valueChangedERK8QVariant(void *this_, const QVariant & value) {
  ((QVariantAnimation*)this_)->valueChanged(value);
}
//  main block end
