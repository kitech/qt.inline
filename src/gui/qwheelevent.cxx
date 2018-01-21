//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:175
// void QWheelEvent(const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return new QWheelEvent(pos, delta, buttons, modifiers, orient);
}
// /usr/include/qt/QtGui/qevent.h:178
// void QWheelEvent(const class QPointF &, const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, const QPointF & globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return new QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient);
}
// /usr/include/qt/QtGui/qevent.h:181
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers);
}
// /usr/include/qt/QtGui/qevent.h:184
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) {
  return new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase);
}
// /usr/include/qt/QtGui/qevent.h:187
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) {
  return new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source);
}
// /usr/include/qt/QtGui/qevent.h:190
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource, _Bool)
extern "C"
void* C_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceEb(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source, bool inverted) {
  return new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:193
// void ~QWheelEvent()
extern "C"
void C_ZN11QWheelEventD1Ev(void *this_) {
  delete (QWheelEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:196
// QPoint pixelDelta()
extern "C"
void C_ZNK11QWheelEvent10pixelDeltaEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->pixelDelta();
}
// inline
// /usr/include/qt/QtGui/qevent.h:197
// QPoint angleDelta()
extern "C"
void C_ZNK11QWheelEvent10angleDeltaEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->angleDelta();
}
// inline
// /usr/include/qt/QtGui/qevent.h:199
// int delta()
extern "C"
void C_ZNK11QWheelEvent5deltaEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->delta();
}
// inline
// /usr/include/qt/QtGui/qevent.h:200
// Qt::Orientation orientation()
extern "C"
void C_ZNK11QWheelEvent11orientationEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->orientation();
}
// inline
// /usr/include/qt/QtGui/qevent.h:203
// QPoint pos()
extern "C"
void C_ZNK11QWheelEvent3posEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:204
// QPoint globalPos()
extern "C"
void C_ZNK11QWheelEvent9globalPosEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:205
// int x()
extern "C"
void C_ZNK11QWheelEvent1xEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:206
// int y()
extern "C"
void C_ZNK11QWheelEvent1yEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:207
// int globalX()
extern "C"
void C_ZNK11QWheelEvent7globalXEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:208
// int globalY()
extern "C"
void C_ZNK11QWheelEvent7globalYEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:210
// const QPointF & posF()
extern "C"
void C_ZNK11QWheelEvent4posFEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->posF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:211
// const QPointF & globalPosF()
extern "C"
void C_ZNK11QWheelEvent10globalPosFEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->globalPosF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:213
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK11QWheelEvent7buttonsEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->buttons();
}
// inline
// /usr/include/qt/QtGui/qevent.h:215
// Qt::ScrollPhase phase()
extern "C"
void C_ZNK11QWheelEvent5phaseEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->phase();
}
// inline
// /usr/include/qt/QtGui/qevent.h:216
// bool inverted()
extern "C"
void C_ZNK11QWheelEvent8invertedEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->inverted();
}
// inline
// /usr/include/qt/QtGui/qevent.h:218
// Qt::MouseEventSource source()
extern "C"
void C_ZNK11QWheelEvent6sourceEv(void *this_) {
  /*return*/ ((QWheelEvent*)this_)->source();
}
//  main block end
