//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneMouseEvent is pure virtual: false
// QGraphicsSceneMouseEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t qt_meta_stringdata_MyQGraphicsSceneMouseEvent = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQGraphicsSceneMouseEvent"
  },
  "MyQGraphicsSceneMouseEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneMouseEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
public:
  virtual ~MyQGraphicsSceneMouseEvent() {}
// void QGraphicsSceneMouseEvent(QEvent::Type)
MyQGraphicsSceneMouseEvent(QEvent::Type type_) : QGraphicsSceneMouseEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:86
// [-2] void QGraphicsSceneMouseEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN24QGraphicsSceneMouseEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneMouseEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:87
// [-2] void ~QGraphicsSceneMouseEvent()
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEventD2Ev(void *this_) {
  delete (QGraphicsSceneMouseEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:89
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:90
// [-2] void setPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:92
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:93
// [-2] void setScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:95
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:96
// [-2] void setScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:98
// [16] QPointF buttonDownPos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent13buttonDownPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownPos(button);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:99
// [-2] void setButtonDownPos(Qt::MouseButton, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent16setButtonDownPosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownPos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:101
// [16] QPointF buttonDownScenePos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent18buttonDownScenePosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownScenePos(button);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:102
// [-2] void setButtonDownScenePos(Qt::MouseButton, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent21setButtonDownScenePosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScenePos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:104
// [8] QPoint buttonDownScreenPos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent19buttonDownScreenPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownScreenPos(button);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:105
// [-2] void setButtonDownScreenPos(Qt::MouseButton, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent22setButtonDownScreenPosEN2Qt11MouseButtonERK6QPoint(void *this_, Qt::MouseButton button, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScreenPos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:107
// [16] QPointF lastPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent7lastPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:108
// [-2] void setLastPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent10setLastPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:110
// [16] QPointF lastScenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent12lastScenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastScenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:111
// [-2] void setLastScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent15setLastScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:113
// [8] QPoint lastScreenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent13lastScreenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastScreenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:114
// [-2] void setLastScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent16setLastScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:116
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK24QGraphicsSceneMouseEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsSceneMouseEvent*)this_)->buttons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:117
// [-2] void setButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:119
// [4] Qt::MouseButton button()
extern "C" Q_DECL_EXPORT
Qt::MouseButton C_ZNK24QGraphicsSceneMouseEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QGraphicsSceneMouseEvent*)this_)->button();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:120
// [-2] void setButton(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QGraphicsSceneMouseEvent*)this_)->setButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:122
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK24QGraphicsSceneMouseEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneMouseEvent*)this_)->modifiers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:123
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneMouseEvent*)this_)->setModifiers(modifiers);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:125
// [4] Qt::MouseEventSource source()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
Qt::MouseEventSource C_ZNK24QGraphicsSceneMouseEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QGraphicsSceneMouseEvent*)this_)->source();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:126
// [-2] void setSource(Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent9setSourceEN2Qt16MouseEventSourceE(void *this_, Qt::MouseEventSource source) {
  ((QGraphicsSceneMouseEvent*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:128
// [4] Qt::MouseEventFlags flags()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
Qt::MouseEventFlags C_ZNK24QGraphicsSceneMouseEvent5flagsEv(void *this_) {
  return (Qt::MouseEventFlags)((QGraphicsSceneMouseEvent*)this_)->flags();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:129
// [-2] void setFlags(Qt::MouseEventFlags)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent8setFlagsE6QFlagsIN2Qt14MouseEventFlagEE(void *this_, QFlags<Qt::MouseEventFlag> arg0) {
  ((QGraphicsSceneMouseEvent*)this_)->setFlags(arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
