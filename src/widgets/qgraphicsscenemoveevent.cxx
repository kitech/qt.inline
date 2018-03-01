//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneMoveEvent is pure virtual: false
// QGraphicsSceneMoveEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {
public:
  virtual ~MyQGraphicsSceneMoveEvent() {}
// void QGraphicsSceneMoveEvent()
MyQGraphicsSceneMoveEvent() : QGraphicsSceneMoveEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:313
// [-2] void QGraphicsSceneMoveEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsSceneMoveEventC2Ev() {
  return  new QGraphicsSceneMoveEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:314
// [-2] void ~QGraphicsSceneMoveEvent()
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEventD2Ev(void *this_) {
  delete (QGraphicsSceneMoveEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:316
// [16] QPointF oldPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSceneMoveEvent6oldPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMoveEvent*)this_)->oldPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:317
// [-2] void setOldPos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEvent9setOldPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setOldPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:319
// [16] QPointF newPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSceneMoveEvent6newPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMoveEvent*)this_)->newPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:320
// [-2] void setNewPos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEvent9setNewPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setNewPos(*pos);
}

//  main block end
