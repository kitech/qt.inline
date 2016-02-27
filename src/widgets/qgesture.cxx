// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qgesture.h
// dst-file: /src/widgets/qgesture.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgesture.h>


#include <qglobal.h>
#include <qpoint.h>
#include <qnamespace.h>
#include <qgesture.h>
#include <qlist.h>
#include <qapplication.h>
// <= header block end

// main block begin =>
void __keep_qgesture_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSwipeGesture_Class_Size()
{
  return sizeof(QSwipeGesture);
}

extern "C"
int QGesture_Class_Size()
{
  return sizeof(QGesture);
}

extern "C"
int QGestureEvent_Class_Size()
{
  return sizeof(QGestureEvent);
}

extern "C"
int QPanGesture_Class_Size()
{
  return sizeof(QPanGesture);
}

extern "C"
int QTapAndHoldGesture_Class_Size()
{
  return sizeof(QTapAndHoldGesture);
}

extern "C"
int QTapGesture_Class_Size()
{
  return sizeof(QTapGesture);
}

extern "C"
int QPinchGesture_Class_Size()
{
  return sizeof(QPinchGesture);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 217, column 20>
//   // proto:  QSwipeGesture::SwipeDirection QSwipeGesture::verticalDirection();
// _ZNK13QSwipeGesture17verticalDirectionEv verticalDirection()
extern "C"
QSwipeGesture::SwipeDirection
C_ZNK13QSwipeGesture17verticalDirectionEv(void *qthis) {
  auto ret =
  ((QSwipeGesture*)qthis)->verticalDirection();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QSwipeGesture::~QSwipeGesture();
extern "C"
void C_ZN13QSwipeGestureD2Ev(void *qthis) {
  delete (QSwipeGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 201, column 5>
//   // proto:  const QMetaObject * QSwipeGesture::metaObject();
// _ZNK13QSwipeGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QSwipeGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QSwipeGesture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 220, column 10>
//   // proto:  void QSwipeGesture::setSwipeAngle(qreal value);
// _ZN13QSwipeGesture13setSwipeAngleEd setSwipeAngle(qreal)
extern "C"
void
C_ZN13QSwipeGesture13setSwipeAngleEd(void *qthis,
qreal arg1) {
  ((QSwipeGesture*)qthis)->setSwipeAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 213, column 14>
//   // proto:  void QSwipeGesture::QSwipeGesture(QObject * parent);
extern "C"
QSwipeGesture*
C_ZN13QSwipeGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QSwipeGesture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 219, column 11>
//   // proto:  qreal QSwipeGesture::swipeAngle();
// _ZNK13QSwipeGesture10swipeAngleEv swipeAngle()
extern "C"
double
C_ZNK13QSwipeGesture10swipeAngleEv(void *qthis) {
  auto ret =
  ((QSwipeGesture*)qthis)->swipeAngle();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 216, column 20>
//   // proto:  QSwipeGesture::SwipeDirection QSwipeGesture::horizontalDirection();
// _ZNK13QSwipeGesture19horizontalDirectionEv horizontalDirection()
extern "C"
QSwipeGesture::SwipeDirection
C_ZNK13QSwipeGesture19horizontalDirectionEv(void *qthis) {
  auto ret =
  ((QSwipeGesture*)qthis)->horizontalDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 73, column 13>
//   // proto:  QPointF QGesture::hotSpot();
// _ZNK8QGesture7hotSpotEv hotSpot()
extern "C"
QPointF*
C_ZNK8QGesture7hotSpotEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->hotSpot();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 75, column 10>
//   // proto:  bool QGesture::hasHotSpot();
// _ZNK8QGesture10hasHotSpotEv hasHotSpot()
extern "C"
bool
C_ZNK8QGesture10hasHotSpotEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->hasHotSpot();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 84, column 25>
//   // proto:  QGesture::GestureCancelPolicy QGesture::gestureCancelPolicy();
// _ZNK8QGesture19gestureCancelPolicyEv gestureCancelPolicy()
extern "C"
QGesture::GestureCancelPolicy
C_ZNK8QGesture19gestureCancelPolicyEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->gestureCancelPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 76, column 10>
//   // proto:  void QGesture::unsetHotSpot();
// _ZN8QGesture12unsetHotSpotEv unsetHotSpot()
extern "C"
void
C_ZN8QGesture12unsetHotSpotEv(void *qthis) {
  ((QGesture*)qthis)->unsetHotSpot();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 83, column 10>
//   // proto:  void QGesture::setGestureCancelPolicy(QGesture::GestureCancelPolicy policy);
// _ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE setGestureCancelPolicy(enum QGesture::GestureCancelPolicy)
extern "C"
void
C_ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE(void *qthis,
QGesture::GestureCancelPolicy arg1) {
  ((QGesture*)qthis)->setGestureCancelPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 69, column 21>
//   // proto:  Qt::GestureType QGesture::gestureType();
// _ZNK8QGesture11gestureTypeEv gestureType()
extern "C"
Qt::GestureType
C_ZNK8QGesture11gestureTypeEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->gestureType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 56, column 5>
//   // proto:  const QMetaObject * QGesture::metaObject();
// _ZNK8QGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 66, column 14>
//   // proto:  void QGesture::QGesture(QObject * parent);
extern "C"
QGesture*
C_ZN8QGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QGesture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 71, column 22>
//   // proto:  Qt::GestureState QGesture::state();
// _ZNK8QGesture5stateEv state()
extern "C"
Qt::GestureState
C_ZNK8QGesture5stateEv(void *qthis) {
  auto ret =
  ((QGesture*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 74, column 10>
//   // proto:  void QGesture::setHotSpot(const QPointF & value);
// _ZN8QGesture10setHotSpotERK7QPointF setHotSpot(const class QPointF &)
extern "C"
void
C_ZN8QGesture10setHotSpotERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QGesture*)qthis)->setHotSpot(*((const QPointF*)arg1));
}
//   // proto:  void QGesture::~QGesture();
extern "C"
void C_ZN8QGestureD2Ev(void *qthis) {
  delete (QGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 286, column 10>
//   // proto:  bool QGestureEvent::isAccepted(QGesture * );
// _ZNK13QGestureEvent10isAcceptedEP8QGesture isAccepted(class QGesture *)
extern "C"
bool
C_ZNK13QGestureEvent10isAcceptedEP8QGesture(void *qthis,
QGesture * arg1) {
  auto ret =
  ((QGestureEvent*)qthis)->isAccepted(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 294, column 14>
//   // proto:  QWidget * QGestureEvent::widget();
// _ZNK13QGestureEvent6widgetEv widget()
extern "C"
void*
C_ZNK13QGestureEvent6widgetEv(void *qthis) {
  auto ret =
  ((QGestureEvent*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 285, column 10>
//   // proto:  void QGestureEvent::ignore(QGesture * );
// _ZN13QGestureEvent6ignoreEP8QGesture ignore(class QGesture *)
extern "C"
void
C_ZN13QGestureEvent6ignoreEP8QGesture(void *qthis,
QGesture * arg1) {
  ((QGestureEvent*)qthis)->ignore(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 284, column 10>
//   // proto:  void QGestureEvent::accept(QGesture * );
// _ZN13QGestureEvent6acceptEP8QGesture accept(class QGesture *)
extern "C"
void
C_ZN13QGestureEvent6acceptEP8QGesture(void *qthis,
QGesture * arg1) {
  ((QGestureEvent*)qthis)->accept(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 288, column 10>
//   // proto:  void QGestureEvent::setAccepted(Qt::GestureType , bool );
// _ZN13QGestureEvent11setAcceptedEN2Qt11GestureTypeEb setAccepted(Qt::GestureType, _Bool)
extern "C"
void
C_ZN13QGestureEvent11setAcceptedEN2Qt11GestureTypeEb(void *qthis,
Qt::GestureType* arg1,
bool arg2) {
  ((QGestureEvent*)qthis)->setAccepted(*((Qt::GestureType*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 275, column 23>
//   // proto:  QList<QGesture *> QGestureEvent::activeGestures();
// _ZNK13QGestureEvent14activeGesturesEv activeGestures()
extern "C"
QList<QGesture *>*
C_ZNK13QGestureEvent14activeGesturesEv(void *qthis) {
  auto ret =
  ((QGestureEvent*)qthis)->activeGestures();
  return new QList<QGesture *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 269, column 14>
//   // proto:  void QGestureEvent::QGestureEvent(const QList<QGesture *> & gestures);
extern "C"
QGestureEvent*
C_ZN13QGestureEventC2ERK5QListIP8QGestureE(const QList<QGesture *>* arg1) {
  auto ret = new QGestureEvent(*((const QList<QGesture *>*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 272, column 23>
//   // proto:  QList<QGesture *> QGestureEvent::gestures();
// _ZNK13QGestureEvent8gesturesEv gestures()
extern "C"
QList<QGesture *>*
C_ZNK13QGestureEvent8gesturesEv(void *qthis) {
  auto ret =
  ((QGestureEvent*)qthis)->gestures();
  return new QList<QGesture *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 273, column 15>
//   // proto:  QGesture * QGestureEvent::gesture(Qt::GestureType type);
// _ZNK13QGestureEvent7gestureEN2Qt11GestureTypeE gesture(Qt::GestureType)
extern "C"
void*
C_ZNK13QGestureEvent7gestureEN2Qt11GestureTypeE(void *qthis,
Qt::GestureType* arg1) {
  auto ret =
  ((QGestureEvent*)qthis)->gesture(*((Qt::GestureType*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 283, column 10>
//   // proto:  void QGestureEvent::setAccepted(QGesture * , bool );
// _ZN13QGestureEvent11setAcceptedEP8QGestureb setAccepted(class QGesture *, _Bool)
extern "C"
void
C_ZN13QGestureEvent11setAcceptedEP8QGestureb(void *qthis,
QGesture * arg1,
bool arg2) {
  ((QGestureEvent*)qthis)->setAccepted(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 293, column 10>
//   // proto:  void QGestureEvent::setWidget(QWidget * widget);
// _ZN13QGestureEvent9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN13QGestureEvent9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QGestureEvent*)qthis)->setWidget(arg1);
}
//   // proto:  void QGestureEvent::~QGestureEvent();
extern "C"
void C_ZN13QGestureEventD2Ev(void *qthis) {
  delete (QGestureEvent*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 290, column 10>
//   // proto:  void QGestureEvent::ignore(Qt::GestureType );
// _ZN13QGestureEvent6ignoreEN2Qt11GestureTypeE ignore(Qt::GestureType)
extern "C"
void
C_ZN13QGestureEvent6ignoreEN2Qt11GestureTypeE(void *qthis,
Qt::GestureType* arg1) {
  ((QGestureEvent*)qthis)->ignore(*((Qt::GestureType*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 289, column 10>
//   // proto:  void QGestureEvent::accept(Qt::GestureType );
// _ZN13QGestureEvent6acceptEN2Qt11GestureTypeE accept(Qt::GestureType)
extern "C"
void
C_ZN13QGestureEvent6acceptEN2Qt11GestureTypeE(void *qthis,
Qt::GestureType* arg1) {
  ((QGestureEvent*)qthis)->accept(*((Qt::GestureType*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 291, column 10>
//   // proto:  bool QGestureEvent::isAccepted(Qt::GestureType );
// _ZNK13QGestureEvent10isAcceptedEN2Qt11GestureTypeE isAccepted(Qt::GestureType)
extern "C"
bool
C_ZNK13QGestureEvent10isAcceptedEN2Qt11GestureTypeE(void *qthis,
Qt::GestureType* arg1) {
  auto ret =
  ((QGestureEvent*)qthis)->isAccepted(*((Qt::GestureType*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 276, column 23>
//   // proto:  QList<QGesture *> QGestureEvent::canceledGestures();
// _ZNK13QGestureEvent16canceledGesturesEv canceledGestures()
extern "C"
QList<QGesture *>*
C_ZNK13QGestureEvent16canceledGesturesEv(void *qthis) {
  auto ret =
  ((QGestureEvent*)qthis)->canceledGestures();
  return new QList<QGesture *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 297, column 13>
//   // proto:  QPointF QGestureEvent::mapToGraphicsScene(const QPointF & gesturePoint);
// _ZNK13QGestureEvent18mapToGraphicsSceneERK7QPointF mapToGraphicsScene(const class QPointF &)
extern "C"
QPointF*
C_ZNK13QGestureEvent18mapToGraphicsSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QGestureEvent*)qthis)->mapToGraphicsScene(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 114, column 13>
//   // proto:  QPointF QPanGesture::offset();
// _ZNK11QPanGesture6offsetEv offset()
extern "C"
QPointF*
C_ZNK11QPanGesture6offsetEv(void *qthis) {
  auto ret =
  ((QPanGesture*)qthis)->offset();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 115, column 13>
//   // proto:  QPointF QPanGesture::delta();
// _ZNK11QPanGesture5deltaEv delta()
extern "C"
QPointF*
C_ZNK11QPanGesture5deltaEv(void *qthis) {
  auto ret =
  ((QPanGesture*)qthis)->delta();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 119, column 10>
//   // proto:  void QPanGesture::setOffset(const QPointF & value);
// _ZN11QPanGesture9setOffsetERK7QPointF setOffset(const class QPointF &)
extern "C"
void
C_ZN11QPanGesture9setOffsetERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPanGesture*)qthis)->setOffset(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 116, column 11>
//   // proto:  qreal QPanGesture::acceleration();
// _ZNK11QPanGesture12accelerationEv acceleration()
extern "C"
double
C_ZNK11QPanGesture12accelerationEv(void *qthis) {
  auto ret =
  ((QPanGesture*)qthis)->acceleration();
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QPanGesture::~QPanGesture();
extern "C"
void C_ZN11QPanGestureD2Ev(void *qthis) {
  delete (QPanGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 110, column 14>
//   // proto:  void QPanGesture::QPanGesture(QObject * parent);
extern "C"
QPanGesture*
C_ZN11QPanGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QPanGesture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 99, column 5>
//   // proto:  const QMetaObject * QPanGesture::metaObject();
// _ZNK11QPanGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QPanGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QPanGesture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 120, column 10>
//   // proto:  void QPanGesture::setAcceleration(qreal value);
// _ZN11QPanGesture15setAccelerationEd setAcceleration(qreal)
extern "C"
void
C_ZN11QPanGesture15setAccelerationEd(void *qthis,
qreal arg1) {
  ((QPanGesture*)qthis)->setAcceleration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 113, column 13>
//   // proto:  QPointF QPanGesture::lastOffset();
// _ZNK11QPanGesture10lastOffsetEv lastOffset()
extern "C"
QPointF*
C_ZNK11QPanGesture10lastOffsetEv(void *qthis) {
  auto ret =
  ((QPanGesture*)qthis)->lastOffset();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 118, column 10>
//   // proto:  void QPanGesture::setLastOffset(const QPointF & value);
// _ZN11QPanGesture13setLastOffsetERK7QPointF setLastOffset(const class QPointF &)
extern "C"
void
C_ZN11QPanGesture13setLastOffsetERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPanGesture*)qthis)->setLastOffset(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 252, column 14>
//   // proto:  void QTapAndHoldGesture::QTapAndHoldGesture(QObject * parent);
extern "C"
QTapAndHoldGesture*
C_ZN18QTapAndHoldGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QTapAndHoldGesture(arg1);
  return ret;
}
//   // proto:  void QTapAndHoldGesture::~QTapAndHoldGesture();
extern "C"
void C_ZN18QTapAndHoldGestureD2Ev(void *qthis) {
  delete (QTapAndHoldGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 255, column 13>
//   // proto:  QPointF QTapAndHoldGesture::position();
// _ZNK18QTapAndHoldGesture8positionEv position()
extern "C"
QPointF*
C_ZNK18QTapAndHoldGesture8positionEv(void *qthis) {
  auto ret =
  ((QTapAndHoldGesture*)qthis)->position();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 258, column 17>
//   // proto: static void QTapAndHoldGesture::setTimeout(int msecs);
// _ZN18QTapAndHoldGesture10setTimeoutEi setTimeout(int)
extern "C"
void
C_ZN18QTapAndHoldGesture10setTimeoutEi(int arg1) {
  QTapAndHoldGesture::setTimeout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 259, column 16>
//   // proto: static int QTapAndHoldGesture::timeout();
// _ZN18QTapAndHoldGesture7timeoutEv timeout()
extern "C"
int
C_ZN18QTapAndHoldGesture7timeoutEv() {
  auto ret =
  QTapAndHoldGesture::timeout();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 246, column 5>
//   // proto:  const QMetaObject * QTapAndHoldGesture::metaObject();
// _ZNK18QTapAndHoldGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QTapAndHoldGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QTapAndHoldGesture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 256, column 10>
//   // proto:  void QTapAndHoldGesture::setPosition(const QPointF & pos);
// _ZN18QTapAndHoldGesture11setPositionERK7QPointF setPosition(const class QPointF &)
extern "C"
void
C_ZN18QTapAndHoldGesture11setPositionERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QTapAndHoldGesture*)qthis)->setPosition(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 237, column 13>
//   // proto:  QPointF QTapGesture::position();
// _ZNK11QTapGesture8positionEv position()
extern "C"
QPointF*
C_ZNK11QTapGesture8positionEv(void *qthis) {
  auto ret =
  ((QTapGesture*)qthis)->position();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 238, column 10>
//   // proto:  void QTapGesture::setPosition(const QPointF & pos);
// _ZN11QTapGesture11setPositionERK7QPointF setPosition(const class QPointF &)
extern "C"
void
C_ZN11QTapGesture11setPositionERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QTapGesture*)qthis)->setPosition(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 234, column 14>
//   // proto:  void QTapGesture::QTapGesture(QObject * parent);
extern "C"
QTapGesture*
C_ZN11QTapGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QTapGesture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 228, column 5>
//   // proto:  const QMetaObject * QTapGesture::metaObject();
// _ZNK11QTapGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QTapGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QTapGesture*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QTapGesture::~QTapGesture();
extern "C"
void C_ZN11QTapGestureD2Ev(void *qthis) {
  delete (QTapGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 185, column 10>
//   // proto:  void QPinchGesture::setRotationAngle(qreal value);
// _ZN13QPinchGesture16setRotationAngleEd setRotationAngle(qreal)
extern "C"
void
C_ZN13QPinchGesture16setRotationAngleEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setRotationAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 174, column 11>
//   // proto:  qreal QPinchGesture::lastScaleFactor();
// _ZNK13QPinchGesture15lastScaleFactorEv lastScaleFactor()
extern "C"
double
C_ZNK13QPinchGesture15lastScaleFactorEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->lastScaleFactor();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 181, column 11>
//   // proto:  qreal QPinchGesture::lastRotationAngle();
// _ZNK13QPinchGesture17lastRotationAngleEv lastRotationAngle()
extern "C"
double
C_ZNK13QPinchGesture17lastRotationAngleEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->lastRotationAngle();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 166, column 13>
//   // proto:  QPointF QPinchGesture::startCenterPoint();
// _ZNK13QPinchGesture16startCenterPointEv startCenterPoint()
extern "C"
QPointF*
C_ZNK13QPinchGesture16startCenterPointEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->startCenterPoint();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 182, column 11>
//   // proto:  qreal QPinchGesture::rotationAngle();
// _ZNK13QPinchGesture13rotationAngleEv rotationAngle()
extern "C"
double
C_ZNK13QPinchGesture13rotationAngleEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->rotationAngle();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 161, column 10>
//   // proto:  void QPinchGesture::setTotalChangeFlags(ChangeFlags value);
// _ZN13QPinchGesture19setTotalChangeFlagsE6QFlagsINS_10ChangeFlagEE setTotalChangeFlags(ChangeFlags)
extern "C"
void
C_ZN13QPinchGesture19setTotalChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *qthis,
QPinchGesture::ChangeFlags arg1) {
  ((QPinchGesture*)qthis)->setTotalChangeFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 167, column 13>
//   // proto:  QPointF QPinchGesture::lastCenterPoint();
// _ZNK13QPinchGesture15lastCenterPointEv lastCenterPoint()
extern "C"
QPointF*
C_ZNK13QPinchGesture15lastCenterPointEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->lastCenterPoint();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 157, column 14>
//   // proto:  void QPinchGesture::QPinchGesture(QObject * parent);
extern "C"
QPinchGesture*
C_ZN13QPinchGestureC2EP7QObject(QObject * arg1) {
  auto ret = new QPinchGesture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 173, column 11>
//   // proto:  qreal QPinchGesture::totalScaleFactor();
// _ZNK13QPinchGesture16totalScaleFactorEv totalScaleFactor()
extern "C"
double
C_ZNK13QPinchGesture16totalScaleFactorEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->totalScaleFactor();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 176, column 10>
//   // proto:  void QPinchGesture::setTotalScaleFactor(qreal value);
// _ZN13QPinchGesture19setTotalScaleFactorEd setTotalScaleFactor(qreal)
extern "C"
void
C_ZN13QPinchGesture19setTotalScaleFactorEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setTotalScaleFactor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 163, column 17>
//   // proto:  ChangeFlags QPinchGesture::changeFlags();
// _ZNK13QPinchGesture11changeFlagsEv changeFlags()
extern "C"
QFlags<QPinchGesture::ChangeFlag>*
C_ZNK13QPinchGesture11changeFlagsEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->changeFlags();
  return new QFlags<QPinchGesture::ChangeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 180, column 11>
//   // proto:  qreal QPinchGesture::totalRotationAngle();
// _ZNK13QPinchGesture18totalRotationAngleEv totalRotationAngle()
extern "C"
double
C_ZNK13QPinchGesture18totalRotationAngleEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->totalRotationAngle();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 177, column 10>
//   // proto:  void QPinchGesture::setLastScaleFactor(qreal value);
// _ZN13QPinchGesture18setLastScaleFactorEd setLastScaleFactor(qreal)
extern "C"
void
C_ZN13QPinchGesture18setLastScaleFactorEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setLastScaleFactor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 170, column 10>
//   // proto:  void QPinchGesture::setLastCenterPoint(const QPointF & value);
// _ZN13QPinchGesture18setLastCenterPointERK7QPointF setLastCenterPoint(const class QPointF &)
extern "C"
void
C_ZN13QPinchGesture18setLastCenterPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPinchGesture*)qthis)->setLastCenterPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 129, column 5>
//   // proto:  const QMetaObject * QPinchGesture::metaObject();
// _ZNK13QPinchGesture10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QPinchGesture10metaObjectEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 164, column 10>
//   // proto:  void QPinchGesture::setChangeFlags(ChangeFlags value);
// _ZN13QPinchGesture14setChangeFlagsE6QFlagsINS_10ChangeFlagEE setChangeFlags(ChangeFlags)
extern "C"
void
C_ZN13QPinchGesture14setChangeFlagsE6QFlagsINS_10ChangeFlagEE(void *qthis,
QPinchGesture::ChangeFlags arg1) {
  ((QPinchGesture*)qthis)->setChangeFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 184, column 10>
//   // proto:  void QPinchGesture::setLastRotationAngle(qreal value);
// _ZN13QPinchGesture20setLastRotationAngleEd setLastRotationAngle(qreal)
extern "C"
void
C_ZN13QPinchGesture20setLastRotationAngleEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setLastRotationAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 168, column 13>
//   // proto:  QPointF QPinchGesture::centerPoint();
// _ZNK13QPinchGesture11centerPointEv centerPoint()
extern "C"
QPointF*
C_ZNK13QPinchGesture11centerPointEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->centerPoint();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 171, column 10>
//   // proto:  void QPinchGesture::setCenterPoint(const QPointF & value);
// _ZN13QPinchGesture14setCenterPointERK7QPointF setCenterPoint(const class QPointF &)
extern "C"
void
C_ZN13QPinchGesture14setCenterPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPinchGesture*)qthis)->setCenterPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 183, column 10>
//   // proto:  void QPinchGesture::setTotalRotationAngle(qreal value);
// _ZN13QPinchGesture21setTotalRotationAngleEd setTotalRotationAngle(qreal)
extern "C"
void
C_ZN13QPinchGesture21setTotalRotationAngleEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setTotalRotationAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 178, column 10>
//   // proto:  void QPinchGesture::setScaleFactor(qreal value);
// _ZN13QPinchGesture14setScaleFactorEd setScaleFactor(qreal)
extern "C"
void
C_ZN13QPinchGesture14setScaleFactorEd(void *qthis,
qreal arg1) {
  ((QPinchGesture*)qthis)->setScaleFactor(arg1);
}
//   // proto:  void QPinchGesture::~QPinchGesture();
extern "C"
void C_ZN13QPinchGestureD2Ev(void *qthis) {
  delete (QPinchGesture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 169, column 10>
//   // proto:  void QPinchGesture::setStartCenterPoint(const QPointF & value);
// _ZN13QPinchGesture19setStartCenterPointERK7QPointF setStartCenterPoint(const class QPointF &)
extern "C"
void
C_ZN13QPinchGesture19setStartCenterPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QPinchGesture*)qthis)->setStartCenterPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 160, column 17>
//   // proto:  ChangeFlags QPinchGesture::totalChangeFlags();
// _ZNK13QPinchGesture16totalChangeFlagsEv totalChangeFlags()
extern "C"
QFlags<QPinchGesture::ChangeFlag>*
C_ZNK13QPinchGesture16totalChangeFlagsEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->totalChangeFlags();
  return new QFlags<QPinchGesture::ChangeFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgesture.h', line 175, column 11>
//   // proto:  qreal QPinchGesture::scaleFactor();
// _ZNK13QPinchGesture11scaleFactorEv scaleFactor()
extern "C"
double
C_ZNK13QPinchGesture11scaleFactorEv(void *qthis) {
  auto ret =
  ((QPinchGesture*)qthis)->scaleFactor();
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// QSwipeGesture_SlotProxy here
class QSwipeGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSwipeGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QSwipeGesture_SlotProxy* QSwipeGesture_SlotProxy_new()
  {
    return new QSwipeGesture_SlotProxy();
  }
};

// QGesture_SlotProxy here
class QGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QGesture_SlotProxy* QGesture_SlotProxy_new()
  {
    return new QGesture_SlotProxy();
  }
};

// QPanGesture_SlotProxy here
class QPanGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPanGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QPanGesture_SlotProxy* QPanGesture_SlotProxy_new()
  {
    return new QPanGesture_SlotProxy();
  }
};

// QTapAndHoldGesture_SlotProxy here
class QTapAndHoldGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTapAndHoldGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTapAndHoldGesture_SlotProxy* QTapAndHoldGesture_SlotProxy_new()
  {
    return new QTapAndHoldGesture_SlotProxy();
  }
};

// QTapGesture_SlotProxy here
class QTapGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTapGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTapGesture_SlotProxy* QTapGesture_SlotProxy_new()
  {
    return new QTapGesture_SlotProxy();
  }
};

// QPinchGesture_SlotProxy here
class QPinchGesture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPinchGesture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgesture.moc"

extern "C" {
  QPinchGesture_SlotProxy* QPinchGesture_SlotProxy_new()
  {
    return new QPinchGesture_SlotProxy();
  }
};

// <= body block end

