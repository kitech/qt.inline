//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

// QGraphicsSceneContextMenuEvent is pure virtual: false
// QGraphicsSceneContextMenuEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
public:
  virtual ~MyQGraphicsSceneContextMenuEvent() {}
// void QGraphicsSceneContextMenuEvent(enum QEvent::Type)
MyQGraphicsSceneContextMenuEvent(QEvent::Type type) : QGraphicsSceneContextMenuEvent(type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:174
// [-2] void QGraphicsSceneContextMenuEvent(enum QEvent::Type)
extern "C"
void* C_ZN30QGraphicsSceneContextMenuEventC2EN6QEvent4TypeE(QEvent::Type type) {
  return  new QGraphicsSceneContextMenuEvent(type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:175
// [-2] void ~QGraphicsSceneContextMenuEvent()
extern "C"
void C_ZN30QGraphicsSceneContextMenuEventD2Ev(void *this_) {
  delete (QGraphicsSceneContextMenuEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:177
// [16] QPointF pos()
extern "C"
void* C_ZNK30QGraphicsSceneContextMenuEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->pos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:178
// [-2] void setPos(const class QPointF &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setPos(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:180
// [16] QPointF scenePos()
extern "C"
void* C_ZNK30QGraphicsSceneContextMenuEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->scenePos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:181
// [-2] void setScenePos(const class QPointF &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScenePos(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:183
// [8] QPoint screenPos()
extern "C"
void* C_ZNK30QGraphicsSceneContextMenuEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneContextMenuEvent*)this_)->screenPos();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:184
// [-2] void setScreenPos(const class QPoint &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScreenPos(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:186
// [4] Qt::KeyboardModifiers modifiers()
extern "C"
Qt::KeyboardModifiers C_ZNK30QGraphicsSceneContextMenuEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneContextMenuEvent*)this_)->modifiers();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:189
// [4] QGraphicsSceneContextMenuEvent::Reason reason()
extern "C"
QGraphicsSceneContextMenuEvent::Reason C_ZNK30QGraphicsSceneContextMenuEvent6reasonEv(void *this_) {
  return (QGraphicsSceneContextMenuEvent::Reason)((QGraphicsSceneContextMenuEvent*)this_)->reason();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:190
// [-2] void setReason(enum QGraphicsSceneContextMenuEvent::Reason)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent9setReasonENS_6ReasonE(void *this_, QGraphicsSceneContextMenuEvent::Reason reason) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setReason(reason);
}
//  main block end
