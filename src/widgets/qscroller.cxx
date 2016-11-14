// /usr/include/qt/QtWidgets/qscroller.h
#include <qscroller.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qscroller.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QScroller10metaObjectEv(void *this_) {
  /*return*/ ((QScroller*)this_)->metaObject();
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:89
// bool hasScroller(class QObject *)
extern "C"
void C_ZN9QScroller11hasScrollerEP7QObject(QObject * target) {
  /*return*/ QScroller::hasScroller(target);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:91
// QScroller * scroller(class QObject *)
extern "C"
void C_ZN9QScroller8scrollerEP7QObject(QObject * target) {
  /*return*/ QScroller::scroller(target);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:92
// const QScroller * scroller(const class QObject *)
extern "C"
void C_ZN9QScroller8scrollerEPK7QObject(const QObject * target) {
  /*return*/ QScroller::scroller(target);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:95
// Qt::GestureType grabGesture(class QObject *, enum QScroller::ScrollerGestureType)
extern "C"
void C_ZN9QScroller11grabGestureEP7QObjectNS_19ScrollerGestureTypeE(QObject * target, QScroller::ScrollerGestureType gestureType) {
  /*return*/ QScroller::grabGesture(target, gestureType);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:96
// Qt::GestureType grabbedGesture(class QObject *)
extern "C"
void C_ZN9QScroller14grabbedGestureEP7QObject(QObject * target) {
  /*return*/ QScroller::grabbedGesture(target);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:97
// void ungrabGesture(class QObject *)
extern "C"
void C_ZN9QScroller13ungrabGestureEP7QObject(QObject * target) {
  QScroller::ungrabGesture(target);
}
// static
// /usr/include/qt/QtWidgets/qscroller.h:100
// QList<QScroller *> activeScrollers()
extern "C"
void C_ZN9QScroller15activeScrollersEv() {
  /*return*/ QScroller::activeScrollers();
}
// /usr/include/qt/QtWidgets/qscroller.h:102
// QObject * target()
extern "C"
void C_ZNK9QScroller6targetEv(void *this_) {
  /*return*/ ((QScroller*)this_)->target();
}
// /usr/include/qt/QtWidgets/qscroller.h:104
// QScroller::State state()
extern "C"
void C_ZNK9QScroller5stateEv(void *this_) {
  /*return*/ ((QScroller*)this_)->state();
}
// /usr/include/qt/QtWidgets/qscroller.h:106
// bool handleInput(enum QScroller::Input, const class QPointF &, qint64)
extern "C"
void C_ZN9QScroller11handleInputENS_5InputERK7QPointFx(void *this_, QScroller::Input input, const QPointF & position, qint64 timestamp) {
  /*return*/ ((QScroller*)this_)->handleInput(input, position, timestamp);
}
// /usr/include/qt/QtWidgets/qscroller.h:108
// void stop()
extern "C"
void C_ZN9QScroller4stopEv(void *this_) {
  ((QScroller*)this_)->stop();
}
// /usr/include/qt/QtWidgets/qscroller.h:109
// QPointF velocity()
extern "C"
void C_ZNK9QScroller8velocityEv(void *this_) {
  /*return*/ ((QScroller*)this_)->velocity();
}
// /usr/include/qt/QtWidgets/qscroller.h:110
// QPointF finalPosition()
extern "C"
void C_ZNK9QScroller13finalPositionEv(void *this_) {
  /*return*/ ((QScroller*)this_)->finalPosition();
}
// /usr/include/qt/QtWidgets/qscroller.h:111
// QPointF pixelPerMeter()
extern "C"
void C_ZNK9QScroller13pixelPerMeterEv(void *this_) {
  /*return*/ ((QScroller*)this_)->pixelPerMeter();
}
// /usr/include/qt/QtWidgets/qscroller.h:113
// QScrollerProperties scrollerProperties()
extern "C"
void C_ZNK9QScroller18scrollerPropertiesEv(void *this_) {
  /*return*/ ((QScroller*)this_)->scrollerProperties();
}
// /usr/include/qt/QtWidgets/qscroller.h:115
// void setSnapPositionsX(const QList<qreal> &)
extern "C"
void C_ZN9QScroller17setSnapPositionsXERK5QListIdE(void *this_, const QList<qreal> & positions) {
  ((QScroller*)this_)->setSnapPositionsX(positions);
}
// /usr/include/qt/QtWidgets/qscroller.h:116
// void setSnapPositionsX(qreal, qreal)
extern "C"
void C_ZN9QScroller17setSnapPositionsXEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsX(first, interval);
}
// /usr/include/qt/QtWidgets/qscroller.h:117
// void setSnapPositionsY(const QList<qreal> &)
extern "C"
void C_ZN9QScroller17setSnapPositionsYERK5QListIdE(void *this_, const QList<qreal> & positions) {
  ((QScroller*)this_)->setSnapPositionsY(positions);
}
// /usr/include/qt/QtWidgets/qscroller.h:118
// void setSnapPositionsY(qreal, qreal)
extern "C"
void C_ZN9QScroller17setSnapPositionsYEdd(void *this_, qreal first, qreal interval) {
  ((QScroller*)this_)->setSnapPositionsY(first, interval);
}
// /usr/include/qt/QtWidgets/qscroller.h:121
// void setScrollerProperties(const class QScrollerProperties &)
extern "C"
void C_ZN9QScroller21setScrollerPropertiesERK19QScrollerProperties(void *this_, const QScrollerProperties & prop) {
  ((QScroller*)this_)->setScrollerProperties(prop);
}
// /usr/include/qt/QtWidgets/qscroller.h:122
// void scrollTo(const class QPointF &)
extern "C"
void C_ZN9QScroller8scrollToERK7QPointF(void *this_, const QPointF & pos) {
  ((QScroller*)this_)->scrollTo(pos);
}
// /usr/include/qt/QtWidgets/qscroller.h:123
// void scrollTo(const class QPointF &, int)
extern "C"
void C_ZN9QScroller8scrollToERK7QPointFi(void *this_, const QPointF & pos, int scrollTime) {
  ((QScroller*)this_)->scrollTo(pos, scrollTime);
}
// /usr/include/qt/QtWidgets/qscroller.h:124
// void ensureVisible(const class QRectF &, qreal, qreal)
extern "C"
void C_ZN9QScroller13ensureVisibleERK6QRectFdd(void *this_, const QRectF & rect, qreal xmargin, qreal ymargin) {
  ((QScroller*)this_)->ensureVisible(rect, xmargin, ymargin);
}
// /usr/include/qt/QtWidgets/qscroller.h:125
// void ensureVisible(const class QRectF &, qreal, qreal, int)
extern "C"
void C_ZN9QScroller13ensureVisibleERK6QRectFddi(void *this_, const QRectF & rect, qreal xmargin, qreal ymargin, int scrollTime) {
  ((QScroller*)this_)->ensureVisible(rect, xmargin, ymargin, scrollTime);
}
// /usr/include/qt/QtWidgets/qscroller.h:126
// void resendPrepareEvent()
extern "C"
void C_ZN9QScroller18resendPrepareEventEv(void *this_) {
  ((QScroller*)this_)->resendPrepareEvent();
}
// /usr/include/qt/QtWidgets/qscroller.h:129
// void stateChanged(class QScroller::State)
extern "C"
void C_ZN9QScroller12stateChangedENS_5StateE(void *this_, QScroller::State newstate) {
  ((QScroller*)this_)->stateChanged(newstate);
}
// /usr/include/qt/QtWidgets/qscroller.h:130
// void scrollerPropertiesChanged(const class QScrollerProperties &)
extern "C"
void C_ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(void *this_, const QScrollerProperties & a0) {
  ((QScroller*)this_)->scrollerPropertiesChanged(a0);
}