//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:247
// void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)
extern "C"
void* C_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEEx(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID) {
  return new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID);
}
// /usr/include/qt/QtGui/qevent.h:251
// void QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons)
extern "C"
void* C_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEExNS6_11MouseButtonES5_IS9_E(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons) {
  return new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:256
// void ~QTabletEvent()
extern "C"
void C_ZN12QTabletEventD1Ev(void *this_) {
  delete (QTabletEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:258
// QPoint pos()
extern "C"
void C_ZNK12QTabletEvent3posEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:259
// QPoint globalPos()
extern "C"
void C_ZNK12QTabletEvent9globalPosEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:264
// const QPointF & posF()
extern "C"
void C_ZNK12QTabletEvent4posFEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->posF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:265
// const QPointF & globalPosF()
extern "C"
void C_ZNK12QTabletEvent10globalPosFEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->globalPosF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:267
// int x()
extern "C"
void C_ZNK12QTabletEvent1xEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:268
// int y()
extern "C"
void C_ZNK12QTabletEvent1yEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:269
// int globalX()
extern "C"
void C_ZNK12QTabletEvent7globalXEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:270
// int globalY()
extern "C"
void C_ZNK12QTabletEvent7globalYEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:271
// qreal hiResGlobalX()
extern "C"
void C_ZNK12QTabletEvent12hiResGlobalXEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->hiResGlobalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:272
// qreal hiResGlobalY()
extern "C"
void C_ZNK12QTabletEvent12hiResGlobalYEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->hiResGlobalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:273
// QTabletEvent::TabletDevice device()
extern "C"
void C_ZNK12QTabletEvent6deviceEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->device();
}
// inline
// /usr/include/qt/QtGui/qevent.h:274
// QTabletEvent::PointerType pointerType()
extern "C"
void C_ZNK12QTabletEvent11pointerTypeEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->pointerType();
}
// inline
// /usr/include/qt/QtGui/qevent.h:275
// qint64 uniqueId()
extern "C"
void C_ZNK12QTabletEvent8uniqueIdEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->uniqueId();
}
// inline
// /usr/include/qt/QtGui/qevent.h:276
// qreal pressure()
extern "C"
void C_ZNK12QTabletEvent8pressureEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->pressure();
}
// inline
// /usr/include/qt/QtGui/qevent.h:277
// int z()
extern "C"
void C_ZNK12QTabletEvent1zEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->z();
}
// inline
// /usr/include/qt/QtGui/qevent.h:278
// qreal tangentialPressure()
extern "C"
void C_ZNK12QTabletEvent18tangentialPressureEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->tangentialPressure();
}
// inline
// /usr/include/qt/QtGui/qevent.h:279
// qreal rotation()
extern "C"
void C_ZNK12QTabletEvent8rotationEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->rotation();
}
// inline
// /usr/include/qt/QtGui/qevent.h:280
// int xTilt()
extern "C"
void C_ZNK12QTabletEvent5xTiltEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->xTilt();
}
// inline
// /usr/include/qt/QtGui/qevent.h:281
// int yTilt()
extern "C"
void C_ZNK12QTabletEvent5yTiltEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->yTilt();
}
// /usr/include/qt/QtGui/qevent.h:282
// Qt::MouseButton button()
extern "C"
void C_ZNK12QTabletEvent6buttonEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->button();
}
// /usr/include/qt/QtGui/qevent.h:283
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK12QTabletEvent7buttonsEv(void *this_) {
  /*return*/ ((QTabletEvent*)this_)->buttons();
}
//  main block end
