//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QContextMenuEvent is pure virtual: false
// QContextMenuEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQContextMenuEvent : public QContextMenuEvent {
public:
  virtual ~MyQContextMenuEvent() {}
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &, Qt::KeyboardModifiers)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers) {}
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos) : QContextMenuEvent(reason, pos, globalPos) {}
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos) : QContextMenuEvent(reason, pos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:511
// [-2] void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE(QContextMenuEvent::Reason reason, QPoint* pos, QPoint* globalPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QContextMenuEvent(reason, *pos, *globalPos, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:513
// [-2] void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_(QContextMenuEvent::Reason reason, QPoint* pos, QPoint* globalPos) {
  return  new QContextMenuEvent(reason, *pos, *globalPos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:514
// [-2] void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QContextMenuEventC2ENS_6ReasonERK6QPoint(QContextMenuEvent::Reason reason, QPoint* pos) {
  return  new QContextMenuEvent(reason, *pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:515
// [-2] void ~QContextMenuEvent()
extern "C" Q_DECL_EXPORT
void C_ZN17QContextMenuEventD2Ev(void *this_) {
  delete (QContextMenuEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:517
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK17QContextMenuEvent1xEv(void *this_) {
  return (int)((QContextMenuEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:518
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK17QContextMenuEvent1yEv(void *this_) {
  return (int)((QContextMenuEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:519
// [4] int globalX()
extern "C" Q_DECL_EXPORT
int C_ZNK17QContextMenuEvent7globalXEv(void *this_) {
  return (int)((QContextMenuEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:520
// [4] int globalY()
extern "C" Q_DECL_EXPORT
int C_ZNK17QContextMenuEvent7globalYEv(void *this_) {
  return (int)((QContextMenuEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:522
// [8] const QPoint & pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QContextMenuEvent3posEv(void *this_) {
  auto& rv = ((QContextMenuEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:523
// [8] const QPoint & globalPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QContextMenuEvent9globalPosEv(void *this_) {
  auto& rv = ((QContextMenuEvent*)this_)->globalPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:525
// [4] QContextMenuEvent::Reason reason()
extern "C" Q_DECL_EXPORT
QContextMenuEvent::Reason C_ZNK17QContextMenuEvent6reasonEv(void *this_) {
  return (QContextMenuEvent::Reason)((QContextMenuEvent*)this_)->reason();
}

//  main block end
