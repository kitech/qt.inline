// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qvariantanimation.h
// dst-file: /src/core/qvariantanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qvariantanimation.h>


#include <qvariant.h>
#include <qeasingcurve.h>
// <= header block end

// main block begin =>
void __keep_qvariantanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QVariantAnimation_Class_Size()
{
  return sizeof(QVariantAnimation);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 80, column 10>
//   // proto:  void QVariantAnimation::setDuration(int msecs);
// _ZN17QVariantAnimation11setDurationEi setDuration(int)
extern "C"
void
C_ZN17QVariantAnimation11setDurationEi(void *qthis,
int arg1) {
  ((QVariantAnimation*)qthis)->setDuration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 75, column 10>
//   // proto:  void QVariantAnimation::setKeyValues(const KeyValues & values);
// _ZN17QVariantAnimation12setKeyValuesERK7QVectorI5QPairId8QVariantEE setKeyValues(const KeyValues &)
extern "C"
void
C_ZN17QVariantAnimation12setKeyValuesERK7QVectorI5QPairId8QVariantEE(void *qthis,
const QVariantAnimation::KeyValues* arg1) {
  ((QVariantAnimation*)qthis)->setKeyValues(*((const QVariantAnimation::KeyValues*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 72, column 10>
//   // proto:  void QVariantAnimation::setKeyValueAt(qreal step, const QVariant & value);
// _ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant setKeyValueAt(qreal, const class QVariant &)
extern "C"
void
C_ZN17QVariantAnimation13setKeyValueAtEdRK8QVariant(void *qthis,
qreal arg1,
const QVariant* arg2) {
  ((QVariantAnimation*)qthis)->setKeyValueAt(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 88, column 10>
//   // proto:  void QVariantAnimation::valueChanged(const QVariant & value);
// _ZN17QVariantAnimation12valueChangedERK8QVariant valueChanged(const class QVariant &)
extern "C"
void
C_ZN17QVariantAnimation12valueChangedERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QVariantAnimation*)qthis)->valueChanged(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 68, column 14>
//   // proto:  QVariant QVariantAnimation::endValue();
// _ZNK17QVariantAnimation8endValueEv endValue()
extern "C"
QVariant*
C_ZNK17QVariantAnimation8endValueEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->endValue();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 71, column 14>
//   // proto:  QVariant QVariantAnimation::keyValueAt(qreal step);
// _ZNK17QVariantAnimation10keyValueAtEd keyValueAt(qreal)
extern "C"
QVariant*
C_ZNK17QVariantAnimation10keyValueAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QVariantAnimation*)qthis)->keyValueAt(arg1);
  return new QVariant(ret); // 5
}
//   // proto:  void QVariantAnimation::~QVariantAnimation();
extern "C"
void C_ZN17QVariantAnimationD2Ev(void *qthis) {
  delete (QVariantAnimation*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 77, column 14>
//   // proto:  QVariant QVariantAnimation::currentValue();
// _ZNK17QVariantAnimation12currentValueEv currentValue()
extern "C"
QVariant*
C_ZNK17QVariantAnimation12currentValueEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->currentValue();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 79, column 9>
//   // proto:  int QVariantAnimation::duration();
// _ZNK17QVariantAnimation8durationEv duration()
extern "C"
int
C_ZNK17QVariantAnimation8durationEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 74, column 15>
//   // proto:  KeyValues QVariantAnimation::keyValues();
// _ZNK17QVariantAnimation9keyValuesEv keyValues()
extern "C"
QVector<QPair<double, QVariant> >*
C_ZNK17QVariantAnimation9keyValuesEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->keyValues();
  return new QVector<QPair<double, QVariant> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 66, column 10>
//   // proto:  void QVariantAnimation::setStartValue(const QVariant & value);
// _ZN17QVariantAnimation13setStartValueERK8QVariant setStartValue(const class QVariant &)
extern "C"
void
C_ZN17QVariantAnimation13setStartValueERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QVariantAnimation*)qthis)->setStartValue(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 65, column 14>
//   // proto:  QVariant QVariantAnimation::startValue();
// _ZNK17QVariantAnimation10startValueEv startValue()
extern "C"
QVariant*
C_ZNK17QVariantAnimation10startValueEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->startValue();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 51, column 5>
//   // proto:  const QMetaObject * QVariantAnimation::metaObject();
// _ZNK17QVariantAnimation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QVariantAnimation10metaObjectEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 69, column 10>
//   // proto:  void QVariantAnimation::setEndValue(const QVariant & value);
// _ZN17QVariantAnimation11setEndValueERK8QVariant setEndValue(const class QVariant &)
extern "C"
void
C_ZN17QVariantAnimation11setEndValueERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QVariantAnimation*)qthis)->setEndValue(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 82, column 18>
//   // proto:  QEasingCurve QVariantAnimation::easingCurve();
// _ZNK17QVariantAnimation11easingCurveEv easingCurve()
extern "C"
QEasingCurve*
C_ZNK17QVariantAnimation11easingCurveEv(void *qthis) {
  auto ret =
  ((QVariantAnimation*)qthis)->easingCurve();
  return new QEasingCurve(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 62, column 5>
//   // proto:  void QVariantAnimation::QVariantAnimation(QObject * parent);
extern "C"
QVariantAnimation*
C_ZN17QVariantAnimationC2EP7QObject(QObject * arg1) {
  auto ret = new QVariantAnimation(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qvariantanimation.h', line 83, column 10>
//   // proto:  void QVariantAnimation::setEasingCurve(const QEasingCurve & easing);
// _ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve setEasingCurve(const class QEasingCurve &)
extern "C"
void
C_ZN17QVariantAnimation14setEasingCurveERK12QEasingCurve(void *qthis,
const QEasingCurve* arg1) {
  ((QVariantAnimation*)qthis)->setEasingCurve(*((const QEasingCurve*)arg1));
}
// <= ext block end

// body block begin =>
// QVariantAnimation_SlotProxy here
class QVariantAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QVariantAnimation_SlotProxy():QObject(){}

public slots:
  // valueChanged(const class QVariant &)
  void slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0);
public:
  void (*slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant)(void* rsfptr, const QVariant & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qvariantanimation.moc"

extern "C" {
  QVariantAnimation_SlotProxy* QVariantAnimation_SlotProxy_new()
  {
    return new QVariantAnimation_SlotProxy();
  }
};

void QVariantAnimation_SlotProxy::slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0) {
  if (this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant != NULL) {
    // do smth...
    this->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant(this->rsfptr, arg0);
  }
}
extern "C"
void* QVariantAnimation_SlotProxy_connect__ZN17QVariantAnimation12valueChangedERK8QVariant(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QVariantAnimation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant = (decltype(that->slot_func__ZN17QVariantAnimation12valueChangedERK8QVariant))ffifptr;
  QObject::connect((QVariantAnimation*)sender, SIGNAL(valueChanged(const class QVariant &)), that, SLOT(slot_proxy_func__ZN17QVariantAnimation12valueChangedERK8QVariant(const QVariant & arg0)));
  return that;
}
extern "C"
void QVariantAnimation_SlotProxy_disconnect__ZN17QVariantAnimation12valueChangedERK8QVariant(QVariantAnimation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

