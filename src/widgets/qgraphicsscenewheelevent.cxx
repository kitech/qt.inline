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

// QGraphicsSceneWheelEvent is pure virtual: false
// QGraphicsSceneWheelEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsSceneWheelEvent_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneWheelEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneWheelEvent_t qt_meta_stringdata_MyQGraphicsSceneWheelEvent = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQGraphicsSceneWheelEvent"
  },
  "MyQGraphicsSceneWheelEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneWheelEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent {
public:
  virtual ~MyQGraphicsSceneWheelEvent() {}
// void QGraphicsSceneWheelEvent(QEvent::Type)
MyQGraphicsSceneWheelEvent(QEvent::Type type_) : QGraphicsSceneWheelEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:139
// [-2] void QGraphicsSceneWheelEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN24QGraphicsSceneWheelEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneWheelEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:140
// [-2] void ~QGraphicsSceneWheelEvent()
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEventD2Ev(void *this_) {
  delete (QGraphicsSceneWheelEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:142
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneWheelEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneWheelEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:143
// [-2] void setPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:145
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneWheelEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneWheelEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:146
// [-2] void setScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:148
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneWheelEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneWheelEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:149
// [-2] void setScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:151
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK24QGraphicsSceneWheelEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsSceneWheelEvent*)this_)->buttons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:152
// [-2] void setButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneWheelEvent*)this_)->setButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:154
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK24QGraphicsSceneWheelEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneWheelEvent*)this_)->modifiers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:155
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneWheelEvent*)this_)->setModifiers(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:157
// [4] int delta()
extern "C" Q_DECL_EXPORT
int C_ZNK24QGraphicsSceneWheelEvent5deltaEv(void *this_) {
  return (int)((QGraphicsSceneWheelEvent*)this_)->delta();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:158
// [-2] void setDelta(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent8setDeltaEi(void *this_, int delta) {
  ((QGraphicsSceneWheelEvent*)this_)->setDelta(delta);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:160
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK24QGraphicsSceneWheelEvent11orientationEv(void *this_) {
  return (Qt::Orientation)((QGraphicsSceneWheelEvent*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:161
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneWheelEvent14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QGraphicsSceneWheelEvent*)this_)->setOrientation(orientation);
}

//  main block end
