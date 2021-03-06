//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(scroller)
// since 0x050000
// /usr/include/qt/QtWidgets/qscroller.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscroller.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScroller is pure virtual: false
// QScroller has virtual projected: false
//  header block end

//  main block begin


// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller10metaObjectEv(void *this_) {
  return (void*)((QScroller*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QScroller11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QScroller*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QScroller11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QScroller*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QScroller2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScroller::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QScroller6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScroller::trUtf8(s, c, n);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:92
// [1] bool hasScroller(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QScroller11hasScrollerEP7QObject(QObject * target) {
  return (bool)QScroller::hasScroller(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:94
// [8] QScroller * scroller(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QScroller8scrollerEP7QObject(QObject * target) {
  return (void*)QScroller::scroller(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:95
// [8] const QScroller * scroller(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QScroller8scrollerEPK7QObject(const QObject * target) {
  return (void*)QScroller::scroller(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:98
// [4] Qt::GestureType grabGesture(QObject *, QScroller::ScrollerGestureType)
extern "C" Q_DECL_EXPORT
Qt::GestureType C_ZN9QScroller11grabGestureEP7QObjectNS_19ScrollerGestureTypeE(QObject * target, QScroller::ScrollerGestureType gestureType) {
  return (Qt::GestureType)QScroller::grabGesture(target, gestureType);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:99
// [4] Qt::GestureType grabbedGesture(QObject *)
extern "C" Q_DECL_EXPORT
Qt::GestureType C_ZN9QScroller14grabbedGestureEP7QObject(QObject * target) {
  return (Qt::GestureType)QScroller::grabbedGesture(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:100
// [-2] void ungrabGesture(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller13ungrabGestureEP7QObject(QObject * target) {
  QScroller::ungrabGesture(target);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:103
// [-2] QList<QScroller *> activeScrollers()
extern "C" Q_DECL_EXPORT
QList<QScroller *>* C_ZN9QScroller15activeScrollersEv() {
  auto rv = QScroller::activeScrollers();
return new QList<QScroller *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:105
// [8] QObject * target()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller6targetEv(void *this_) {
  return (void*)((QScroller*)this_)->target();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:107
// [4] QScroller::State state()
extern "C" Q_DECL_EXPORT
QScroller::State C_ZNK9QScroller5stateEv(void *this_) {
  return (QScroller::State)((QScroller*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:109
// [1] bool handleInput(QScroller::Input, const QPointF &, qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN9QScroller11handleInputENS_5InputERK7QPointFx(void *this_, QScroller::Input input, QPointF* position, qint64 timestamp) {
  return (bool)((QScroller*)this_)->handleInput(input, *position, timestamp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:111
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller4stopEv(void *this_) {
  ((QScroller*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:112
// [16] QPointF velocity()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller8velocityEv(void *this_) {
  auto rv = ((QScroller*)this_)->velocity();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:113
// [16] QPointF finalPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller13finalPositionEv(void *this_) {
  auto rv = ((QScroller*)this_)->finalPosition();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:114
// [16] QPointF pixelPerMeter()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller13pixelPerMeterEv(void *this_) {
  auto rv = ((QScroller*)this_)->pixelPerMeter();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:116
// [16] QScrollerProperties scrollerProperties()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QScroller18scrollerPropertiesEv(void *this_) {
  auto rv = ((QScroller*)this_)->scrollerProperties();
return new QScrollerProperties(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:118
// [-2] void setSnapPositionsX(const QList<qreal> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller17setSnapPositionsXERK5QListIdE(void *this_, QList<double>* positions) {
  ((QScroller*)this_)->setSnapPositionsX(*positions);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:119
// [-2] void setSnapPositionsX(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller17setSnapPositionsXEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsX(first, interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:120
// [-2] void setSnapPositionsY(const QList<qreal> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller17setSnapPositionsYERK5QListIdE(void *this_, QList<double>* positions) {
  ((QScroller*)this_)->setSnapPositionsY(*positions);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:121
// [-2] void setSnapPositionsY(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller17setSnapPositionsYEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsY(first, interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:124
// [-2] void setScrollerProperties(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller21setScrollerPropertiesERK19QScrollerProperties(void *this_, QScrollerProperties* prop) {
  ((QScroller*)this_)->setScrollerProperties(*prop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:125
// [-2] void scrollTo(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller8scrollToERK7QPointF(void *this_, QPointF* pos) {
  ((QScroller*)this_)->scrollTo(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:126
// [-2] void scrollTo(const QPointF &, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller8scrollToERK7QPointFi(void *this_, QPointF* pos, int scrollTime) {
  ((QScroller*)this_)->scrollTo(*pos, scrollTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:127
// [-2] void ensureVisible(const QRectF &, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller13ensureVisibleERK6QRectFdd(void *this_, QRectF* rect, qreal xmargin, qreal ymargin) {
  ((QScroller*)this_)->ensureVisible(*rect, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:128
// [-2] void ensureVisible(const QRectF &, qreal, qreal, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller13ensureVisibleERK6QRectFddi(void *this_, QRectF* rect, qreal xmargin, qreal ymargin, int scrollTime) {
  ((QScroller*)this_)->ensureVisible(*rect, xmargin, ymargin, scrollTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:129
// [-2] void resendPrepareEvent()
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller18resendPrepareEventEv(void *this_) {
  ((QScroller*)this_)->resendPrepareEvent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:132
// [-2] void stateChanged(QScroller::State)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller12stateChangedENS_5StateE(void *this_, QScroller::State newstate) {
  ((QScroller*)this_)->stateChanged(newstate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:133
// [-2] void scrollerPropertiesChanged(const QScrollerProperties &)
extern "C" Q_DECL_EXPORT
void C_ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(void *this_, QScrollerProperties* arg0) {
  ((QScroller*)this_)->scrollerPropertiesChanged(*arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(scroller)
#endif // #ifndef QT_MINIMAL
//  footer block end
