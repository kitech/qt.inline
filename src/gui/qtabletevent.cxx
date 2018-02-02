//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QTabletEvent is pure virtual: false
// QTabletEvent has virtual projected: false
//  header block end

//  main block begin

class MyQTabletEvent : public QTabletEvent {
public:
  virtual ~MyQTabletEvent() {}
// void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)
MyQTabletEvent(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID) : QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID) {}
// void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons)
MyQTabletEvent(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons) : QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:250
// [-2] void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)
extern "C"
void* C_ZN12QTabletEventC2EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEEx(QEvent::Type t, QPointF* pos, QPointF* globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID) {
  return  new QTabletEvent(t, *pos, *globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:254
// [-2] void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons)
extern "C"
void* C_ZN12QTabletEventC2EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEExNS6_11MouseButtonES5_IS9_E(QEvent::Type t, QPointF* pos, QPointF* globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons) {
  return  new QTabletEvent(t, *pos, *globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:259
// [-2] void ~QTabletEvent()
extern "C"
void C_ZN12QTabletEventD2Ev(void *this_) {
  delete (QTabletEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:261
// [8] QPoint pos()
extern "C"
void* C_ZNK12QTabletEvent3posEv(void *this_) {
  auto rv = ((QTabletEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:262
// [8] QPoint globalPos()
extern "C"
void* C_ZNK12QTabletEvent9globalPosEv(void *this_) {
  auto rv = ((QTabletEvent*)this_)->globalPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:267
// [16] const QPointF & posF()
extern "C"
void* C_ZNK12QTabletEvent4posFEv(void *this_) {
  auto& rv = ((QTabletEvent*)this_)->posF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:268
// [16] const QPointF & globalPosF()
extern "C"
void* C_ZNK12QTabletEvent10globalPosFEv(void *this_) {
  auto& rv = ((QTabletEvent*)this_)->globalPosF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:270
// [4] int x()
extern "C"
int C_ZNK12QTabletEvent1xEv(void *this_) {
  return (int)((QTabletEvent*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:271
// [4] int y()
extern "C"
int C_ZNK12QTabletEvent1yEv(void *this_) {
  return (int)((QTabletEvent*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:272
// [4] int globalX()
extern "C"
int C_ZNK12QTabletEvent7globalXEv(void *this_) {
  return (int)((QTabletEvent*)this_)->globalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:273
// [4] int globalY()
extern "C"
int C_ZNK12QTabletEvent7globalYEv(void *this_) {
  return (int)((QTabletEvent*)this_)->globalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:274
// [8] qreal hiResGlobalX()
extern "C"
qreal C_ZNK12QTabletEvent12hiResGlobalXEv(void *this_) {
  return (qreal)((QTabletEvent*)this_)->hiResGlobalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:275
// [8] qreal hiResGlobalY()
extern "C"
qreal C_ZNK12QTabletEvent12hiResGlobalYEv(void *this_) {
  return (qreal)((QTabletEvent*)this_)->hiResGlobalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:276
// [4] QTabletEvent::TabletDevice device()
extern "C"
QTabletEvent::TabletDevice C_ZNK12QTabletEvent6deviceEv(void *this_) {
  return (QTabletEvent::TabletDevice)((QTabletEvent*)this_)->device();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:277
// [4] QTabletEvent::PointerType pointerType()
extern "C"
QTabletEvent::PointerType C_ZNK12QTabletEvent11pointerTypeEv(void *this_) {
  return (QTabletEvent::PointerType)((QTabletEvent*)this_)->pointerType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:278
// [8] qint64 uniqueId()
extern "C"
qint64 C_ZNK12QTabletEvent8uniqueIdEv(void *this_) {
  return (qint64)((QTabletEvent*)this_)->uniqueId();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:279
// [8] qreal pressure()
extern "C"
qreal C_ZNK12QTabletEvent8pressureEv(void *this_) {
  return (qreal)((QTabletEvent*)this_)->pressure();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:280
// [4] int z()
extern "C"
int C_ZNK12QTabletEvent1zEv(void *this_) {
  return (int)((QTabletEvent*)this_)->z();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:281
// [8] qreal tangentialPressure()
extern "C"
qreal C_ZNK12QTabletEvent18tangentialPressureEv(void *this_) {
  return (qreal)((QTabletEvent*)this_)->tangentialPressure();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:282
// [8] qreal rotation()
extern "C"
qreal C_ZNK12QTabletEvent8rotationEv(void *this_) {
  return (qreal)((QTabletEvent*)this_)->rotation();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:283
// [4] int xTilt()
extern "C"
int C_ZNK12QTabletEvent5xTiltEv(void *this_) {
  return (int)((QTabletEvent*)this_)->xTilt();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:284
// [4] int yTilt()
extern "C"
int C_ZNK12QTabletEvent5yTiltEv(void *this_) {
  return (int)((QTabletEvent*)this_)->yTilt();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:285
// [4] Qt::MouseButton button()
extern "C"
Qt::MouseButton C_ZNK12QTabletEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QTabletEvent*)this_)->button();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:286
// [4] Qt::MouseButtons buttons()
extern "C"
Qt::MouseButtons C_ZNK12QTabletEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QTabletEvent*)this_)->buttons();
}
//  main block end
