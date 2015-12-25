// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qevent.h
// dst-file: /src/gui/qevent.cxx
//

// header block begin =>
#include <qevent.h>

extern "C" {

// ~QWhatsThisClickedEvent()
void dedtor_ZN22QWhatsThisClickedEventD0Ev(QWhatsThisClickedEvent* that)
{
  QWhatsThisClickedEvent* rthis = (QWhatsThisClickedEvent*)that;
  delete rthis;
}

// QWhatsThisClickedEvent(const class QString &)
QWhatsThisClickedEvent* dector_ZN22QWhatsThisClickedEventC1ERK7QString(const QString & href)
{
  // static_assert(sizeof(QWhatsThisClickedEvent) == 32, "tyszerr");
  QWhatsThisClickedEvent* rthis = new QWhatsThisClickedEvent(href);
  return rthis;
}

// QExposeEvent(const class QRegion &)
QExposeEvent* dector_ZN12QExposeEventC1ERK7QRegion(const QRegion & rgn)
{
  // static_assert(sizeof(QExposeEvent) == 32, "tyszerr");
  QExposeEvent* rthis = new QExposeEvent(rgn);
  return rthis;
}

// ~QExposeEvent()
void dedtor_ZN12QExposeEventD0Ev(QExposeEvent* that)
{
  QExposeEvent* rthis = (QExposeEvent*)that;
  delete rthis;
}

// QInputMethodEvent(const class QString &, const QList<class QInputMethodEvent::Attribute> &)
QInputMethodEvent* dector_ZN17QInputMethodEventC1ERK7QStringRK5QListINS_9AttributeEE(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes)
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent(preeditText, attributes);
  return rthis;
}

// QInputMethodEvent(const class QInputMethodEvent &)
QInputMethodEvent* dector_ZN17QInputMethodEventC1ERKS_(const QInputMethodEvent & other)
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent(other);
  return rthis;
}

// QInputMethodEvent()
QInputMethodEvent* dector_ZN17QInputMethodEventC1Ev()
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent();
  return rthis;
}

// ~QHelpEvent()
void dedtor_ZN10QHelpEventD0Ev(QHelpEvent* that)
{
  QHelpEvent* rthis = (QHelpEvent*)that;
  delete rthis;
}

// QHelpEvent(enum QEvent::Type, const class QPoint &, const class QPoint &)
QHelpEvent* dector_ZN10QHelpEventC1EN6QEvent4TypeERK6QPointS4_(QEvent::Type type, const QPoint & pos, const QPoint & globalPos)
{
  // static_assert(sizeof(QHelpEvent) == 40, "tyszerr");
  QHelpEvent* rthis = new QHelpEvent(type, pos, globalPos);
  return rthis;
}

// QActionEvent(int, class QAction *, class QAction *)
QActionEvent* dector_ZN12QActionEventC1EiP7QActionS1_(int type, QAction * action, QAction * before)
{
  // static_assert(sizeof(QActionEvent) == 40, "tyszerr");
  QActionEvent* rthis = new QActionEvent(type, action, before);
  return rthis;
}

// ~QActionEvent()
void dedtor_ZN12QActionEventD0Ev(QActionEvent* that)
{
  QActionEvent* rthis = (QActionEvent*)that;
  delete rthis;
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, screenPos, button, buttons, modifiers);
  return rthis;
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, button, buttons, modifiers);
  return rthis;
}

// ~QMouseEvent()
void dedtor_ZN11QMouseEventD0Ev(QMouseEvent* that)
{
  QMouseEvent* rthis = (QMouseEvent*)that;
  delete rthis;
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers);
  return rthis;
}

// QFileOpenEvent(const class QString &)
QFileOpenEvent* dector_ZN14QFileOpenEventC1ERK7QString(const QString & file)
{
  // static_assert(sizeof(QFileOpenEvent) == 40, "tyszerr");
  QFileOpenEvent* rthis = new QFileOpenEvent(file);
  return rthis;
}

// QFileOpenEvent(const class QUrl &)
QFileOpenEvent* dector_ZN14QFileOpenEventC1ERK4QUrl(const QUrl & url)
{
  // static_assert(sizeof(QFileOpenEvent) == 40, "tyszerr");
  QFileOpenEvent* rthis = new QFileOpenEvent(url);
  return rthis;
}

// ~QFileOpenEvent()
void dedtor_ZN14QFileOpenEventD0Ev(QFileOpenEvent* that)
{
  QFileOpenEvent* rthis = (QFileOpenEvent*)that;
  delete rthis;
}

// QToolBarChangeEvent(_Bool)
QToolBarChangeEvent* dector_ZN19QToolBarChangeEventC1Eb(bool t)
{
  // static_assert(sizeof(QToolBarChangeEvent) == 32, "tyszerr");
  QToolBarChangeEvent* rthis = new QToolBarChangeEvent(t);
  return rthis;
}

// ~QToolBarChangeEvent()
void dedtor_ZN19QToolBarChangeEventD0Ev(QToolBarChangeEvent* that)
{
  QToolBarChangeEvent* rthis = (QToolBarChangeEvent*)that;
  delete rthis;
}

// ~QTabletEvent()
void dedtor_ZN12QTabletEventD0Ev(QTabletEvent* that)
{
  QTabletEvent* rthis = (QTabletEvent*)that;
  delete rthis;
}

// QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons)
QTabletEvent* dector_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEExNS6_11MouseButtonES5_IS9_E(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, Qt::KeyboardModifiers keyState, long long uniqueID, Qt::MouseButton button, Qt::MouseButtons buttons)
{
  // static_assert(sizeof(QTabletEvent) == 32, "tyszerr");
  QTabletEvent* rthis = new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons);
  return rthis;
}

// QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)
QTabletEvent* dector_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEEx(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, Qt::KeyboardModifiers keyState, long long uniqueID)
{
  // static_assert(sizeof(QTabletEvent) == 32, "tyszerr");
  QTabletEvent* rthis = new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID);
  return rthis;
}

// QTouchEvent(class QEvent::Type, class QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<class QTouchEvent::TouchPoint> &)
QTouchEvent* dector_ZN11QTouchEventC1EN6QEvent4TypeEP12QTouchDevice6QFlagsIN2Qt16KeyboardModifierEES4_INS5_15TouchPointStateEERK5QListINS_10TouchPointEE(QEvent::Type eventType, QTouchDevice * device, Qt::KeyboardModifiers modifiers, Qt::TouchPointStates touchPointStates, const QList<QTouchEvent::TouchPoint> & touchPoints)
{
  // static_assert(sizeof(QTouchEvent) == 32, "tyszerr");
  QTouchEvent* rthis = new QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints);
  return rthis;
}

// ~QTouchEvent()
void dedtor_ZN11QTouchEventD0Ev(QTouchEvent* that)
{
  QTouchEvent* rthis = (QTouchEvent*)that;
  delete rthis;
}

// ~QScreenOrientationChangeEvent()
void dedtor_ZN29QScreenOrientationChangeEventD0Ev(QScreenOrientationChangeEvent* that)
{
  QScreenOrientationChangeEvent* rthis = (QScreenOrientationChangeEvent*)that;
  delete rthis;
}

// QScreenOrientationChangeEvent(class QScreen *, Qt::ScreenOrientation)
QScreenOrientationChangeEvent* dector_ZN29QScreenOrientationChangeEventC1EP7QScreenN2Qt17ScreenOrientationE(QScreen * screen, Qt::ScreenOrientation orientation)
{
  // static_assert(sizeof(QScreenOrientationChangeEvent) == 40, "tyszerr");
  QScreenOrientationChangeEvent* rthis = new QScreenOrientationChangeEvent(screen, orientation);
  return rthis;
}

// ~QIconDragEvent()
void dedtor_ZN14QIconDragEventD0Ev(QIconDragEvent* that)
{
  QIconDragEvent* rthis = (QIconDragEvent*)that;
  delete rthis;
}

// QIconDragEvent()
QIconDragEvent* dector_ZN14QIconDragEventC1Ev()
{
  // static_assert(sizeof(QIconDragEvent) == 32, "tyszerr");
  QIconDragEvent* rthis = new QIconDragEvent();
  return rthis;
}

// ~QCloseEvent()
void dedtor_ZN11QCloseEventD0Ev(QCloseEvent* that)
{
  QCloseEvent* rthis = (QCloseEvent*)that;
  delete rthis;
}

// QCloseEvent()
QCloseEvent* dector_ZN11QCloseEventC1Ev()
{
  // static_assert(sizeof(QCloseEvent) == 32, "tyszerr");
  QCloseEvent* rthis = new QCloseEvent();
  return rthis;
}

// ~QDragEnterEvent()
void dedtor_ZN15QDragEnterEventD0Ev(QDragEnterEvent* that)
{
  QDragEnterEvent* rthis = (QDragEnterEvent*)that;
  delete rthis;
}

// QDragEnterEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
QDragEnterEvent* dector_ZN15QDragEnterEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE(const QPoint & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QDragEnterEvent) == 32, "tyszerr");
  QDragEnterEvent* rthis = new QDragEnterEvent(pos, actions, data, buttons, modifiers);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, const QPointF & globalPos, int delta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::Orientation orient)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source);
  return rthis;
}

// ~QWheelEvent()
void dedtor_ZN11QWheelEventD0Ev(QWheelEvent* that)
{
  QWheelEvent* rthis = (QWheelEvent*)that;
  delete rthis;
}

// QWheelEvent(const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, int delta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::Orientation orient)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, delta, buttons, modifiers, orient);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase);
  return rthis;
}

// ~QScrollEvent()
void dedtor_ZN12QScrollEventD0Ev(QScrollEvent* that)
{
  QScrollEvent* rthis = (QScrollEvent*)that;
  delete rthis;
}

// QScrollEvent(const class QPointF &, const class QPointF &, enum QScrollEvent::ScrollState)
QScrollEvent* dector_ZN12QScrollEventC1ERK7QPointFS2_NS_11ScrollStateE(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState)
{
  // static_assert(sizeof(QScrollEvent) == 64, "tyszerr");
  QScrollEvent* rthis = new QScrollEvent(contentPos, overshoot, scrollState);
  return rthis;
}

// QHoverEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::KeyboardModifiers)
QHoverEvent* dector_ZN11QHoverEventC1EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, const QPointF & pos, const QPointF & oldPos, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QHoverEvent) == 32, "tyszerr");
  QHoverEvent* rthis = new QHoverEvent(type, pos, oldPos, modifiers);
  return rthis;
}

// ~QHoverEvent()
void dedtor_ZN11QHoverEventD0Ev(QHoverEvent* that)
{
  QHoverEvent* rthis = (QHoverEvent*)that;
  delete rthis;
}

// QDragMoveEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
QDragMoveEvent* dector_ZN14QDragMoveEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPoint & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type type)
{
  // static_assert(sizeof(QDragMoveEvent) == 32, "tyszerr");
  QDragMoveEvent* rthis = new QDragMoveEvent(pos, actions, data, buttons, modifiers, type);
  return rthis;
}

// ~QDragMoveEvent()
void dedtor_ZN14QDragMoveEventD0Ev(QDragMoveEvent* that)
{
  QDragMoveEvent* rthis = (QDragMoveEvent*)that;
  delete rthis;
}

// ~QShowEvent()
void dedtor_ZN10QShowEventD0Ev(QShowEvent* that)
{
  QShowEvent* rthis = (QShowEvent*)that;
  delete rthis;
}

// QShowEvent()
QShowEvent* dector_ZN10QShowEventC1Ev()
{
  // static_assert(sizeof(QShowEvent) == 32, "tyszerr");
  QShowEvent* rthis = new QShowEvent();
  return rthis;
}

// QPlatformSurfaceEvent(enum QPlatformSurfaceEvent::SurfaceEventType)
QPlatformSurfaceEvent* dector_ZN21QPlatformSurfaceEventC1ENS_16SurfaceEventTypeE(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType)
{
  // static_assert(sizeof(QPlatformSurfaceEvent) == 32, "tyszerr");
  QPlatformSurfaceEvent* rthis = new QPlatformSurfaceEvent(surfaceEventType);
  return rthis;
}

// ~QPlatformSurfaceEvent()
void dedtor_ZN21QPlatformSurfaceEventD0Ev(QPlatformSurfaceEvent* that)
{
  QPlatformSurfaceEvent* rthis = (QPlatformSurfaceEvent*)that;
  delete rthis;
}

// ~QPaintEvent()
void dedtor_ZN11QPaintEventD0Ev(QPaintEvent* that)
{
  QPaintEvent* rthis = (QPaintEvent*)that;
  delete rthis;
}

// QPaintEvent(const class QRect &)
QPaintEvent* dector_ZN11QPaintEventC1ERK5QRect(const QRect & paintRect)
{
  // static_assert(sizeof(QPaintEvent) == 56, "tyszerr");
  QPaintEvent* rthis = new QPaintEvent(paintRect);
  return rthis;
}

// QPaintEvent(const class QRegion &)
QPaintEvent* dector_ZN11QPaintEventC1ERK7QRegion(const QRegion & paintRegion)
{
  // static_assert(sizeof(QPaintEvent) == 56, "tyszerr");
  QPaintEvent* rthis = new QPaintEvent(paintRegion);
  return rthis;
}

// QFocusEvent(enum QEvent::Type, Qt::FocusReason)
QFocusEvent* dector_ZN11QFocusEventC1EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type, Qt::FocusReason reason)
{
  // static_assert(sizeof(QFocusEvent) == 32, "tyszerr");
  QFocusEvent* rthis = new QFocusEvent(type, reason);
  return rthis;
}

// ~QFocusEvent()
void dedtor_ZN11QFocusEventD0Ev(QFocusEvent* that)
{
  QFocusEvent* rthis = (QFocusEvent*)that;
  delete rthis;
}

// QNativeGestureEvent(Qt::NativeGestureType, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
QNativeGestureEvent* dector_ZN19QNativeGestureEventC1EN2Qt17NativeGestureTypeERK7QPointFS4_S4_dmy(Qt::NativeGestureType type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, double value, unsigned long sequenceId, unsigned long long intArgument)
{
  // static_assert(sizeof(QNativeGestureEvent) == 32, "tyszerr");
  QNativeGestureEvent* rthis = new QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument);
  return rthis;
}

// ~QResizeEvent()
void dedtor_ZN12QResizeEventD0Ev(QResizeEvent* that)
{
  QResizeEvent* rthis = (QResizeEvent*)that;
  delete rthis;
}

// QResizeEvent(const class QSize &, const class QSize &)
QResizeEvent* dector_ZN12QResizeEventC1ERK5QSizeS2_(const QSize & size, const QSize & oldSize)
{
  // static_assert(sizeof(QResizeEvent) == 40, "tyszerr");
  QResizeEvent* rthis = new QResizeEvent(size, oldSize);
  return rthis;
}

// ~QStatusTipEvent()
void dedtor_ZN15QStatusTipEventD0Ev(QStatusTipEvent* that)
{
  QStatusTipEvent* rthis = (QStatusTipEvent*)that;
  delete rthis;
}

// QStatusTipEvent(const class QString &)
QStatusTipEvent* dector_ZN15QStatusTipEventC1ERK7QString(const QString & tip)
{
  // static_assert(sizeof(QStatusTipEvent) == 32, "tyszerr");
  QStatusTipEvent* rthis = new QStatusTipEvent(tip);
  return rthis;
}

// ~QEnterEvent()
void dedtor_ZN11QEnterEventD0Ev(QEnterEvent* that)
{
  QEnterEvent* rthis = (QEnterEvent*)that;
  delete rthis;
}

// QEnterEvent(const class QPointF &, const class QPointF &, const class QPointF &)
QEnterEvent* dector_ZN11QEnterEventC1ERK7QPointFS2_S2_(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos)
{
  // static_assert(sizeof(QEnterEvent) == 72, "tyszerr");
  QEnterEvent* rthis = new QEnterEvent(localPos, windowPos, screenPos);
  return rthis;
}

// ~QMoveEvent()
void dedtor_ZN10QMoveEventD0Ev(QMoveEvent* that)
{
  QMoveEvent* rthis = (QMoveEvent*)that;
  delete rthis;
}

// QMoveEvent(const class QPoint &, const class QPoint &)
QMoveEvent* dector_ZN10QMoveEventC1ERK6QPointS2_(const QPoint & pos, const QPoint & oldPos)
{
  // static_assert(sizeof(QMoveEvent) == 40, "tyszerr");
  QMoveEvent* rthis = new QMoveEvent(pos, oldPos);
  return rthis;
}

// QHideEvent()
QHideEvent* dector_ZN10QHideEventC1Ev()
{
  // static_assert(sizeof(QHideEvent) == 32, "tyszerr");
  QHideEvent* rthis = new QHideEvent();
  return rthis;
}

// ~QHideEvent()
void dedtor_ZN10QHideEventD0Ev(QHideEvent* that)
{
  QHideEvent* rthis = (QHideEvent*)that;
  delete rthis;
}

// ~QDragLeaveEvent()
void dedtor_ZN15QDragLeaveEventD0Ev(QDragLeaveEvent* that)
{
  QDragLeaveEvent* rthis = (QDragLeaveEvent*)that;
  delete rthis;
}

// QDragLeaveEvent()
QDragLeaveEvent* dector_ZN15QDragLeaveEventC1Ev()
{
  // static_assert(sizeof(QDragLeaveEvent) == 32, "tyszerr");
  QDragLeaveEvent* rthis = new QDragLeaveEvent();
  return rthis;
}

// QDropEvent(const class QPointF &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
QDropEvent* dector_ZN10QDropEventC1ERK7QPointF6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPointF & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type type)
{
  // static_assert(sizeof(QDropEvent) == 32, "tyszerr");
  QDropEvent* rthis = new QDropEvent(pos, actions, data, buttons, modifiers, type);
  return rthis;
}

// ~QDropEvent()
void dedtor_ZN10QDropEventD0Ev(QDropEvent* that)
{
  QDropEvent* rthis = (QDropEvent*)that;
  delete rthis;
}

// QInputEvent(enum QEvent::Type, Qt::KeyboardModifiers)
QInputEvent* dector_ZN11QInputEventC1EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QInputEvent) == 32, "tyszerr");
  QInputEvent* rthis = new QInputEvent(type, modifiers);
  return rthis;
}

// ~QInputEvent()
void dedtor_ZN11QInputEventD0Ev(QInputEvent* that)
{
  QInputEvent* rthis = (QInputEvent*)that;
  delete rthis;
}

// QApplicationStateChangeEvent(Qt::ApplicationState)
QApplicationStateChangeEvent* dector_ZN28QApplicationStateChangeEventC1EN2Qt16ApplicationStateE(Qt::ApplicationState state)
{
  // static_assert(sizeof(QApplicationStateChangeEvent) == 32, "tyszerr");
  QApplicationStateChangeEvent* rthis = new QApplicationStateChangeEvent(state);
  return rthis;
}

// QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, const class QString &, _Bool, ushort)
QKeyEvent* dector_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt(QEvent::Type type, int key, Qt::KeyboardModifiers modifiers, const QString & text, bool autorep, unsigned short count)
{
  // static_assert(sizeof(QKeyEvent) == 32, "tyszerr");
  QKeyEvent* rthis = new QKeyEvent(type, key, modifiers, text, autorep, count);
  return rthis;
}

// ~QKeyEvent()
void dedtor_ZN9QKeyEventD0Ev(QKeyEvent* that)
{
  QKeyEvent* rthis = (QKeyEvent*)that;
  delete rthis;
}

// QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const class QString &, _Bool, ushort)
QKeyEvent* dector_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEEjjjRK7QStringbt(QEvent::Type type, int key, Qt::KeyboardModifiers modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const QString & text, bool autorep, unsigned short count)
{
  // static_assert(sizeof(QKeyEvent) == 32, "tyszerr");
  QKeyEvent* rthis = new QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count);
  return rthis;
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos, globalPos);
  return rthis;
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &, Qt::KeyboardModifiers)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos, globalPos, modifiers);
  return rthis;
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPoint(QContextMenuEvent::Reason reason, const QPoint & pos)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos);
  return rthis;
}

// ~QContextMenuEvent()
void dedtor_ZN17QContextMenuEventD0Ev(QContextMenuEvent* that)
{
  QContextMenuEvent* rthis = (QContextMenuEvent*)that;
  delete rthis;
}

// QScrollPrepareEvent(const class QPointF &)
QScrollPrepareEvent* dector_ZN19QScrollPrepareEventC1ERK7QPointF(const QPointF & startPos)
{
  // static_assert(sizeof(QScrollPrepareEvent) == 112, "tyszerr");
  QScrollPrepareEvent* rthis = new QScrollPrepareEvent(startPos);
  return rthis;
}

// ~QScrollPrepareEvent()
void dedtor_ZN19QScrollPrepareEventD0Ev(QScrollPrepareEvent* that)
{
  QScrollPrepareEvent* rthis = (QScrollPrepareEvent*)that;
  delete rthis;
}

// ~QShortcutEvent()
void dedtor_ZN14QShortcutEventD0Ev(QShortcutEvent* that)
{
  QShortcutEvent* rthis = (QShortcutEvent*)that;
  delete rthis;
}

// QShortcutEvent(const class QKeySequence &, int, _Bool)
QShortcutEvent* dector_ZN14QShortcutEventC1ERK12QKeySequenceib(const QKeySequence & key, int id, bool ambiguous)
{
  // static_assert(sizeof(QShortcutEvent) == 40, "tyszerr");
  QShortcutEvent* rthis = new QShortcutEvent(key, id, ambiguous);
  return rthis;
}

// ~QWindowStateChangeEvent()
void dedtor_ZN23QWindowStateChangeEventD0Ev(QWindowStateChangeEvent* that)
{
  QWindowStateChangeEvent* rthis = (QWindowStateChangeEvent*)that;
  delete rthis;
}

// QWindowStateChangeEvent(Qt::WindowStates, _Bool)
QWindowStateChangeEvent* dector_ZN23QWindowStateChangeEventC1E6QFlagsIN2Qt11WindowStateEEb(Qt::WindowStates aOldState, bool isOverride)
{
  // static_assert(sizeof(QWindowStateChangeEvent) == 32, "tyszerr");
  QWindowStateChangeEvent* rthis = new QWindowStateChangeEvent(aOldState, isOverride);
  return rthis;
}

// ~QInputMethodQueryEvent()
void dedtor_ZN22QInputMethodQueryEventD0Ev(QInputMethodQueryEvent* that)
{
  QInputMethodQueryEvent* rthis = (QInputMethodQueryEvent*)that;
  delete rthis;
}

// QInputMethodQueryEvent(Qt::InputMethodQueries)
QInputMethodQueryEvent* dector_ZN22QInputMethodQueryEventC1E6QFlagsIN2Qt16InputMethodQueryEE(Qt::InputMethodQueries queries)
{
  // static_assert(sizeof(QInputMethodQueryEvent) == 32, "tyszerr");
  QInputMethodQueryEvent* rthis = new QInputMethodQueryEvent(queries);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

