//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWheelEvent is pure virtual: false
// QWheelEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWheelEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWheelEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWheelEvent_t qt_meta_stringdata_MyQWheelEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWheelEvent"
  },
  "MyQWheelEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWheelEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQWheelEvent : public QWheelEvent {
public:
  virtual ~MyQWheelEvent() {}
// void QWheelEvent(const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
MyQWheelEvent(const QPointF & pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, delta, buttons, modifiers, orient) {}
// void QWheelEvent(const QPointF &, const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient) {}
// void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers) {}
// void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase) {}
// void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source) {}
// void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource, bool)
MyQWheelEvent(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted) {}
// void QWheelEvent(QPointF, QPointF, QPoint, QPoint, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, bool, Qt::MouseEventSource)
MyQWheelEvent(QPointF pos, QPointF globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:178
// [-2] void QWheelEvent(const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(QPointF* pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return  new QWheelEvent(*pos, delta, buttons, modifiers, orient);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:181
// [-2] void QWheelEvent(const QPointF &, const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(QPointF* pos, QPointF* globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) {
  return  new QWheelEvent(*pos, *globalPos, delta, buttons, modifiers, orient);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:184
// [-2] void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:187
// [-2] void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:190
// [-2] void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:193
// [-2] void QWheelEvent(const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceEb(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source, bool inverted) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:197
// [-2] void QWheelEvent(QPointF, QPointF, QPoint, QPoint, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, bool, Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWheelEventC2E7QPointFS0_6QPointS1_6QFlagsIN2Qt11MouseButtonEES2_INS3_16KeyboardModifierEENS3_11ScrollPhaseEbNS3_16MouseEventSourceE(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) {
  return  new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, buttons, modifiers, phase, inverted, source);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:200
// [-2] void ~QWheelEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QWheelEventD2Ev(void *this_) {
  delete (QWheelEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:203
// [8] QPoint pixelDelta()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10pixelDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pixelDelta();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:204
// [8] QPoint angleDelta()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10angleDeltaEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->angleDelta();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:206
// [4] int delta()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent5deltaEv(void *this_) {
  return (int)((QWheelEvent*)this_)->delta();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:207
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK11QWheelEvent11orientationEv(void *this_) {
  return (Qt::Orientation)((QWheelEvent*)this_)->orientation();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:210
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent3posEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:211
// [8] QPoint globalPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent9globalPosEv(void *this_) {
  auto rv = ((QWheelEvent*)this_)->globalPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:212
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent1xEv(void *this_) {
  return (int)((QWheelEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:213
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent1yEv(void *this_) {
  return (int)((QWheelEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:214
// [4] int globalX()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent7globalXEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:215
// [4] int globalY()
extern "C" Q_DECL_EXPORT
int C_ZNK11QWheelEvent7globalYEv(void *this_) {
  return (int)((QWheelEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:217
// [16] const QPointF & posF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent4posFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->posF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:218
// [16] const QPointF & globalPosF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWheelEvent10globalPosFEv(void *this_) {
  auto& rv = ((QWheelEvent*)this_)->globalPosF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:220
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK11QWheelEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QWheelEvent*)this_)->buttons();
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:222
// [4] Qt::ScrollPhase phase()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
Qt::ScrollPhase C_ZNK11QWheelEvent5phaseEv(void *this_) {
  return (Qt::ScrollPhase)((QWheelEvent*)this_)->phase();
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtGui/qevent.h:223
// [1] bool inverted()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWheelEvent8invertedEv(void *this_) {
  return (bool)((QWheelEvent*)this_)->inverted();
}
#endif // QT_VERSION >= 0x050700

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qevent.h:225
// [4] Qt::MouseEventSource source()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
Qt::MouseEventSource C_ZNK11QWheelEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QWheelEvent*)this_)->source();
}
#endif // QT_VERSION >= 0x050500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
