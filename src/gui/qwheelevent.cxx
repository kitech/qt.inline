//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWheelEvent is pure virtual: false
// QWheelEvent has virtual projected: false
//  header block end

//  main block begin

class MyQWheelEvent : public QWheelEvent {
public:
  virtual ~MyQWheelEvent() {}
// void QWheelEvent(const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
MyQWheelEvent(const QPointF & pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, delta, buttons, modifiers, orient) {}
// void QWheelEvent(const class QPointF &, const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient) {}
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers) {}
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase) {}
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source) {}
// void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource, _Bool)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:178
// [-2] void QWheelEvent(const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(QPointF* pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return  new QWheelEvent(*pos, delta, buttons, modifiers, orient);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:181
// [-2] void QWheelEvent(const class QPointF &, const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(QPointF* pos, QPointF* globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return  new QWheelEvent(*pos, *globalPos, delta, buttons, modifiers, orient);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:184
// [-2] void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:187
// [-2] void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:190
// [-2] void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:193
// [-2] void QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceEb(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source, bool inverted) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:196
// [-2] void ~QWheelEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QWheelEventD2Ev(void *this_) {
  delete (QWheelEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:199
// [8] QPoint pixelDelta()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10pixelDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pixelDelta();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:200
// [8] QPoint angleDelta()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10angleDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->angleDelta();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:202
// [4] int delta()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent5deltaEv(void *this_) {
  return (int)((QWheelEvent*)this_)->delta();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:203
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK11QWheelEvent11orientationEv(void *this_) {
  return (Qt::Orientation)((QWheelEvent*)this_)->orientation();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:206
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent3posEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:207
// [8] QPoint globalPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent9globalPosEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->globalPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:208
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent1xEv(void *this_) {
  return (int)((QWheelEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:209
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent1yEv(void *this_) {
  return (int)((QWheelEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:210
// [4] int globalX()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent7globalXEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:211
// [4] int globalY()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent7globalYEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:213
// [16] const QPointF & posF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent4posFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->posF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:214
// [16] const QPointF & globalPosF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10globalPosFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->globalPosF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:216
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK11QWheelEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QWheelEvent*)this_)->buttons();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:218
// [4] Qt::ScrollPhase phase()
extern "C" Q_DECL_EXPORT
Qt::ScrollPhase C_ZNK11QWheelEvent5phaseEv(void *this_) {
  return (Qt::ScrollPhase)((QWheelEvent*)this_)->phase();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:219
// [1] bool inverted()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWheelEvent8invertedEv(void *this_) {
  return (bool)((QWheelEvent*)this_)->inverted();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:221
// [4] Qt::MouseEventSource source()
extern "C" Q_DECL_EXPORT
Qt::MouseEventSource C_ZNK11QWheelEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QWheelEvent*)this_)->source();
}

//  main block end
