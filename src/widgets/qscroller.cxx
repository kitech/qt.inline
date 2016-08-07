// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qscroller.h
// dst-file: /src/widgets/qscroller.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscroller.h>


#include <qpoint.h>
#include <qlist.h>
#include <qapplication.h>
#include <qscrollerproperties.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qscroller_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScroller_Class_Size()
{
  return sizeof(QScroller);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 129, column 10>
//   // proto:  void QScroller::stateChanged(QScroller::State newstate);
// _ZN9QScroller12stateChangedENS_5StateE stateChanged(class QScroller::State)
extern "C"
void
C_ZN9QScroller12stateChangedENS_5StateE(void *qthis,
QScroller::State* arg1) {
  ((QScroller*)qthis)->stateChanged(*((QScroller::State*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 118, column 10>
//   // proto:  void QScroller::setSnapPositionsY(qreal first, qreal interval);
// _ZN9QScroller17setSnapPositionsYEdd setSnapPositionsY(qreal, qreal)
extern "C"
void
C_ZN9QScroller17setSnapPositionsYEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QScroller*)qthis)->setSnapPositionsY(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 110, column 13>
//   // proto:  QPointF QScroller::finalPosition();
// _ZNK9QScroller13finalPositionEv finalPosition()
extern "C"
QPointF*
C_ZNK9QScroller13finalPositionEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->finalPosition();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 100, column 31>
//   // proto: static QList<QScroller *> QScroller::activeScrollers();
// _ZN9QScroller15activeScrollersEv activeScrollers()
extern "C"
QList<QScroller *>*
C_ZN9QScroller15activeScrollersEv() {
  auto ret =
  QScroller::activeScrollers();
  return new QList<QScroller *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 121, column 10>
//   // proto:  void QScroller::setScrollerProperties(const QScrollerProperties & prop);
// _ZN9QScroller21setScrollerPropertiesERK19QScrollerProperties setScrollerProperties(const class QScrollerProperties &)
extern "C"
void
C_ZN9QScroller21setScrollerPropertiesERK19QScrollerProperties(void *qthis,
const QScrollerProperties* arg1) {
  ((QScroller*)qthis)->setScrollerProperties(*((const QScrollerProperties*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 106, column 10>
//   // proto:  bool QScroller::handleInput(QScroller::Input input, const QPointF & position, qint64 timestamp);
// _ZN9QScroller11handleInputENS_5InputERK7QPointFx handleInput(enum QScroller::Input, const class QPointF &, qint64)
extern "C"
bool
C_ZN9QScroller11handleInputENS_5InputERK7QPointFx(void *qthis,
QScroller::Input arg1,
const QPointF* arg2,
qint64 arg3) {
  auto ret =
  ((QScroller*)qthis)->handleInput(arg1,
*((const QPointF*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 104, column 11>
//   // proto:  QScroller::State QScroller::state();
// _ZNK9QScroller5stateEv state()
extern "C"
QScroller::State
C_ZNK9QScroller5stateEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 60, column 5>
//   // proto:  const QMetaObject * QScroller::metaObject();
// _ZNK9QScroller10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QScroller10metaObjectEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 109, column 13>
//   // proto:  QPointF QScroller::velocity();
// _ZNK9QScroller8velocityEv velocity()
extern "C"
QPointF*
C_ZNK9QScroller8velocityEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->velocity();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 126, column 10>
//   // proto:  void QScroller::resendPrepareEvent();
// _ZN9QScroller18resendPrepareEventEv resendPrepareEvent()
extern "C"
void
C_ZN9QScroller18resendPrepareEventEv(void *qthis) {
  ((QScroller*)qthis)->resendPrepareEvent();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 124, column 10>
//   // proto:  void QScroller::ensureVisible(const QRectF & rect, qreal xmargin, qreal ymargin);
// _ZN9QScroller13ensureVisibleERK6QRectFdd ensureVisible(const class QRectF &, qreal, qreal)
extern "C"
void
C_ZN9QScroller13ensureVisibleERK6QRectFdd(void *qthis,
const QRectF* arg1,
qreal arg2,
qreal arg3) {
  ((QScroller*)qthis)->ensureVisible(*((const QRectF*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 116, column 10>
//   // proto:  void QScroller::setSnapPositionsX(qreal first, qreal interval);
// _ZN9QScroller17setSnapPositionsXEdd setSnapPositionsX(qreal, qreal)
extern "C"
void
C_ZN9QScroller17setSnapPositionsXEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QScroller*)qthis)->setSnapPositionsX(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 89, column 17>
//   // proto: static bool QScroller::hasScroller(QObject * target);
// _ZN9QScroller11hasScrollerEP7QObject hasScroller(class QObject *)
extern "C"
bool
C_ZN9QScroller11hasScrollerEP7QObject(QObject * arg1) {
  auto ret =
  QScroller::hasScroller(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 123, column 10>
//   // proto:  void QScroller::scrollTo(const QPointF & pos, int scrollTime);
// _ZN9QScroller8scrollToERK7QPointFi scrollTo(const class QPointF &, int)
extern "C"
void
C_ZN9QScroller8scrollToERK7QPointFi(void *qthis,
const QPointF* arg1,
int arg2) {
  ((QScroller*)qthis)->scrollTo(*((const QPointF*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 108, column 10>
//   // proto:  void QScroller::stop();
// _ZN9QScroller4stopEv stop()
extern "C"
void
C_ZN9QScroller4stopEv(void *qthis) {
  ((QScroller*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 125, column 10>
//   // proto:  void QScroller::ensureVisible(const QRectF & rect, qreal xmargin, qreal ymargin, int scrollTime);
// _ZN9QScroller13ensureVisibleERK6QRectFddi ensureVisible(const class QRectF &, qreal, qreal, int)
extern "C"
void
C_ZN9QScroller13ensureVisibleERK6QRectFddi(void *qthis,
const QRectF* arg1,
qreal arg2,
qreal arg3,
int arg4) {
  ((QScroller*)qthis)->ensureVisible(*((const QRectF*)arg1),
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 115, column 10>
//   // proto:  void QScroller::setSnapPositionsX(const QList<qreal> & positions);
// _ZN9QScroller17setSnapPositionsXERK5QListIdE setSnapPositionsX(const QList<qreal> &)
extern "C"
void
C_ZN9QScroller17setSnapPositionsXERK5QListIdE(void *qthis,
const QList<qreal>* arg1) {
  ((QScroller*)qthis)->setSnapPositionsX(*((const QList<qreal>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 97, column 17>
//   // proto: static void QScroller::ungrabGesture(QObject * target);
// _ZN9QScroller13ungrabGestureEP7QObject ungrabGesture(class QObject *)
extern "C"
void
C_ZN9QScroller13ungrabGestureEP7QObject(QObject * arg1) {
  QScroller::ungrabGesture(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 130, column 10>
//   // proto:  void QScroller::scrollerPropertiesChanged(const QScrollerProperties & );
// _ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties scrollerPropertiesChanged(const class QScrollerProperties &)
extern "C"
void
C_ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(void *qthis,
const QScrollerProperties* arg1) {
  ((QScroller*)qthis)->scrollerPropertiesChanged(*((const QScrollerProperties*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 113, column 25>
//   // proto:  QScrollerProperties QScroller::scrollerProperties();
// _ZNK9QScroller18scrollerPropertiesEv scrollerProperties()
extern "C"
QScrollerProperties*
C_ZNK9QScroller18scrollerPropertiesEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->scrollerProperties();
  return new QScrollerProperties(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 96, column 28>
//   // proto: static Qt::GestureType QScroller::grabbedGesture(QObject * target);
// _ZN9QScroller14grabbedGestureEP7QObject grabbedGesture(class QObject *)
extern "C"
Qt::GestureType
C_ZN9QScroller14grabbedGestureEP7QObject(QObject * arg1) {
  auto ret =
  QScroller::grabbedGesture(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 117, column 10>
//   // proto:  void QScroller::setSnapPositionsY(const QList<qreal> & positions);
// _ZN9QScroller17setSnapPositionsYERK5QListIdE setSnapPositionsY(const QList<qreal> &)
extern "C"
void
C_ZN9QScroller17setSnapPositionsYERK5QListIdE(void *qthis,
const QList<qreal>* arg1) {
  ((QScroller*)qthis)->setSnapPositionsY(*((const QList<qreal>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 91, column 23>
//   // proto: static QScroller * QScroller::scroller(QObject * target);
// _ZN9QScroller8scrollerEP7QObject scroller(class QObject *)
extern "C"
void*
C_ZN9QScroller8scrollerEP7QObject(QObject * arg1) {
  auto ret =
  QScroller::scroller(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 92, column 29>
//   // proto: static const QScroller * QScroller::scroller(const QObject * target);
// _ZN9QScroller8scrollerEPK7QObject scroller(const class QObject *)
extern "C"
void*
C_ZN9QScroller8scrollerEPK7QObject(const QObject * arg1) {
  auto ret =
  QScroller::scroller(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 122, column 10>
//   // proto:  void QScroller::scrollTo(const QPointF & pos);
// _ZN9QScroller8scrollToERK7QPointF scrollTo(const class QPointF &)
extern "C"
void
C_ZN9QScroller8scrollToERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QScroller*)qthis)->scrollTo(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 102, column 14>
//   // proto:  QObject * QScroller::target();
// _ZNK9QScroller6targetEv target()
extern "C"
void*
C_ZNK9QScroller6targetEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->target();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 111, column 13>
//   // proto:  QPointF QScroller::pixelPerMeter();
// _ZNK9QScroller13pixelPerMeterEv pixelPerMeter()
extern "C"
QPointF*
C_ZNK9QScroller13pixelPerMeterEv(void *qthis) {
  auto ret =
  ((QScroller*)qthis)->pixelPerMeter();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscroller.h', line 95, column 28>
//   // proto: static Qt::GestureType QScroller::grabGesture(QObject * target, QScroller::ScrollerGestureType gestureType);
// _ZN9QScroller11grabGestureEP7QObjectNS_19ScrollerGestureTypeE grabGesture(class QObject *, enum QScroller::ScrollerGestureType)
extern "C"
Qt::GestureType
C_ZN9QScroller11grabGestureEP7QObjectNS_19ScrollerGestureTypeE(QObject * arg1,
QScroller::ScrollerGestureType arg2) {
  auto ret =
  QScroller::grabGesture(arg1,
arg2);
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QScroller_SlotProxy here
class QScroller_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScroller_SlotProxy():QObject(){}

public slots:
  // scrollerPropertiesChanged(const class QScrollerProperties &)
  void slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0);
public:
  void (*slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties)(void* rsfptr, const QScrollerProperties & arg0) = NULL;
public slots:
  // stateChanged(class QScroller::State)
  void slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0);
public:
  void (*slot_func__ZN9QScroller12stateChangedENS_5StateE)(void* rsfptr, QScroller::State arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qscroller.moc"

extern "C" {
  QScroller_SlotProxy* QScroller_SlotProxy_new()
  {
    return new QScroller_SlotProxy();
  }
};

void QScroller_SlotProxy::slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0) {
  if (this->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties != NULL) {
    // do smth...
    this->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(this->rsfptr, arg0);
  }
}
extern "C"
void* QScroller_SlotProxy_connect__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScroller_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties = (decltype(that->slot_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties))ffifptr;
  QObject::connect((QScroller*)sender, SIGNAL(scrollerPropertiesChanged(const class QScrollerProperties &)), that, SLOT(slot_proxy_func__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(const QScrollerProperties & arg0)));
  return that;
}
extern "C"
void QScroller_SlotProxy_disconnect__ZN9QScroller25scrollerPropertiesChangedERK19QScrollerProperties(QScroller_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScroller_SlotProxy::slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0) {
  if (this->slot_func__ZN9QScroller12stateChangedENS_5StateE != NULL) {
    // do smth...
    this->slot_func__ZN9QScroller12stateChangedENS_5StateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QScroller_SlotProxy_connect__ZN9QScroller12stateChangedENS_5StateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScroller_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QScroller12stateChangedENS_5StateE = (decltype(that->slot_func__ZN9QScroller12stateChangedENS_5StateE))ffifptr;
  QObject::connect((QScroller*)sender, SIGNAL(stateChanged(class QScroller::State)), that, SLOT(slot_proxy_func__ZN9QScroller12stateChangedENS_5StateE(QScroller::State arg0)));
  return that;
}
extern "C"
void QScroller_SlotProxy_disconnect__ZN9QScroller12stateChangedENS_5StateE(QScroller_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

