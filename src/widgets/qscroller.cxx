//  header block begin
// /usr/include/qt/QtWidgets/qscroller.h
#include <qscroller.h>
#include <QtWidgets>

// QScroller is pure virtual: false
// QScroller has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QScroller10metaObjectEv(void *this_) {
  return (void*)((QScroller*)this_)->metaObject();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:92
// [1] bool hasScroller(class QObject *)
extern "C"
bool C_ZN9QScroller11hasScrollerEP7QObject(QObject * target) {
  return (bool)QScroller::hasScroller(target);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:94
// [8] QScroller * scroller(class QObject *)
extern "C"
void* C_ZN9QScroller8scrollerEP7QObject(QObject * target) {
  return (void*)QScroller::scroller(target);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:95
// [8] const QScroller * scroller(const class QObject *)
extern "C"
void* C_ZN9QScroller8scrollerEPK7QObject(const QObject * target) {
  return (void*)QScroller::scroller(target);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:98
// [4] Qt::GestureType grabGesture(class QObject *, enum QScroller::ScrollerGestureType)
extern "C"
Qt::GestureType C_ZN9QScroller11grabGestureEP7QObjectNS_19ScrollerGestureTypeE(QObject * target, QScroller::ScrollerGestureType gestureType) {
  return (Qt::GestureType)QScroller::grabGesture(target, gestureType);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:99
// [4] Qt::GestureType grabbedGesture(class QObject *)
extern "C"
Qt::GestureType C_ZN9QScroller14grabbedGestureEP7QObject(QObject * target) {
  return (Qt::GestureType)QScroller::grabbedGesture(target);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:100
// [-2] void ungrabGesture(class QObject *)
extern "C"
void C_ZN9QScroller13ungrabGestureEP7QObject(QObject * target) {
  QScroller::ungrabGesture(target);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:105
// [8] QObject * target()
extern "C"
void* C_ZNK9QScroller6targetEv(void *this_) {
  return (void*)((QScroller*)this_)->target();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:107
// [4] QScroller::State state()
extern "C"
QScroller::State C_ZNK9QScroller5stateEv(void *this_) {
  return (QScroller::State)((QScroller*)this_)->state();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:109
// [1] bool handleInput(enum QScroller::Input, const class QPointF &, qint64)
extern "C"
bool C_ZN9QScroller11handleInputENS_5InputERK7QPointFx(void *this_, QScroller::Input input, const QPointF & position, qint64 timestamp) {
  return (bool)((QScroller*)this_)->handleInput(input, position, timestamp);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:111
// [-2] void stop()
extern "C"
void C_ZN9QScroller4stopEv(void *this_) {
  ((QScroller*)this_)->stop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:112
// [16] QPointF velocity()
extern "C"
void* C_ZNK9QScroller8velocityEv(void *this_) {
  auto rv = ((QScroller*)this_)->velocity();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:113
// [16] QPointF finalPosition()
extern "C"
void* C_ZNK9QScroller13finalPositionEv(void *this_) {
  auto rv = ((QScroller*)this_)->finalPosition();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:114
// [16] QPointF pixelPerMeter()
extern "C"
void* C_ZNK9QScroller13pixelPerMeterEv(void *this_) {
  auto rv = ((QScroller*)this_)->pixelPerMeter();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:116
// [16] QScrollerProperties scrollerProperties()
extern "C"
void* C_ZNK9QScroller18scrollerPropertiesEv(void *this_) {
  auto rv = ((QScroller*)this_)->scrollerProperties();
return new QScrollerProperties(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:119
// [-2] void setSnapPositionsX(qreal, qreal)
extern "C"
void C_ZN9QScroller17setSnapPositionsXEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsX(first, interval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:121
// [-2] void setSnapPositionsY(qreal, qreal)
extern "C"
void C_ZN9QScroller17setSnapPositionsYEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsY(first, interval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:124
// [-2] void setScrollerProperties(const class QScrollerProperties &)
extern "C"
void C_ZN9QScroller21setScrollerPropertiesERK19QScrollerProperties(void *this_, const QScrollerProperties & prop) {
  ((QScroller*)this_)->setScrollerProperties(prop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:125
// [-2] void scrollTo(const class QPointF &)
extern "C"
void C_ZN9QScroller8scrollToERK7QPointF(void *this_, const QPointF & pos) {
  ((QScroller*)this_)->scrollTo(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:126
// [-2] void scrollTo(const class QPointF &, int)
extern "C"
void C_ZN9QScroller8scrollToERK7QPointFi(void *this_, const QPointF & pos, int scrollTime) {
  ((QScroller*)this_)->scrollTo(pos, scrollTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:127
// [-2] void ensureVisible(const class QRectF &, qreal, qreal)
extern "C"
void C_ZN9QScroller13ensureVisibleERK6QRectFdd(void *this_, const QRectF & rect, qreal xmargin, qreal ymargin) {
  ((QScroller*)this_)->ensureVisible(rect, xmargin, ymargin);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:128
// [-2] void ensureVisible(const class QRectF &, qreal, qreal, int)
extern "C"
void C_ZN9QScroller13ensureVisibleERK6QRectFddi(void *this_, const QRectF & rect, qreal xmargin, qreal ymargin, int scrollTime) {
  ((QScroller*)this_)->ensureVisible(rect, xmargin, ymargin, scrollTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:129
// [-2] void resendPrepareEvent()
extern "C"
void C_ZN9QScroller18resendPrepareEventEv(void *this_) {
  ((QScroller*)this_)->resendPrepareEvent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:132
// [-2] void stateChanged(class QScroller::State)
extern "C"
void C_ZN9QScroller12stateChangedENS_5StateE(void *this_, QScroller::State newstate) {
  ((QScroller*)this_)->stateChanged(newstate);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscroller.h:133
// [-2] void scrollerPropertiesChanged(const class QScrollerProperties &)
extern "C"
void C_ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(void *this_, const QScrollerProperties & arg0) {
  ((QScroller*)this_)->scrollerPropertiesChanged(arg0);
}
//  main block end
