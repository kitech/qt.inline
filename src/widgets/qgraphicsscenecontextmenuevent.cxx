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

// QGraphicsSceneContextMenuEvent is pure virtual: false
// QGraphicsSceneContextMenuEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQGraphicsSceneContextMenuEvent"
  },
  "MyQGraphicsSceneContextMenuEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneContextMenuEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
public:
  virtual ~MyQGraphicsSceneContextMenuEvent() {}
// void QGraphicsSceneContextMenuEvent(QEvent::Type)
MyQGraphicsSceneContextMenuEvent(QEvent::Type type_) : QGraphicsSceneContextMenuEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:175
// [-2] void QGraphicsSceneContextMenuEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN30QGraphicsSceneContextMenuEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneContextMenuEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:176
// [-2] void ~QGraphicsSceneContextMenuEvent()
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEventD2Ev(void *this_) {
  delete (QGraphicsSceneContextMenuEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:178
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK30QGraphicsSceneContextMenuEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:179
// [-2] void setPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:181
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK30QGraphicsSceneContextMenuEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:182
// [-2] void setScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:184
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK30QGraphicsSceneContextMenuEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:185
// [-2] void setScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:187
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK30QGraphicsSceneContextMenuEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneContextMenuEvent*)this_)->modifiers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:188
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setModifiers(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:190
// [4] QGraphicsSceneContextMenuEvent::Reason reason()
extern "C" Q_DECL_EXPORT
QGraphicsSceneContextMenuEvent::Reason C_ZNK30QGraphicsSceneContextMenuEvent6reasonEv(void *this_) {
  return (QGraphicsSceneContextMenuEvent::Reason)((QGraphicsSceneContextMenuEvent*)this_)->reason();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:191
// [-2] void setReason(QGraphicsSceneContextMenuEvent::Reason)
extern "C" Q_DECL_EXPORT
void C_ZN30QGraphicsSceneContextMenuEvent9setReasonENS_6ReasonE(void *this_, QGraphicsSceneContextMenuEvent::Reason reason) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setReason(reason);
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
