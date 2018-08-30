//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QContextMenuEvent is pure virtual: false
// QContextMenuEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQContextMenuEvent_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQContextMenuEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQContextMenuEvent_t qt_meta_stringdata_MyQContextMenuEvent = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQContextMenuEvent"
  },
  "MyQContextMenuEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQContextMenuEvent[] = {
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
class Q_DECL_EXPORT MyQContextMenuEvent : public QContextMenuEvent {
public:
  virtual ~MyQContextMenuEvent() {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &, Qt::KeyboardModifiers)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers) {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos) : QContextMenuEvent(reason, pos, globalPos) {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos) : QContextMenuEvent(reason, pos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:511
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE(QContextMenuEvent::Reason reason, QPoint* pos, QPoint* globalPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QContextMenuEvent(reason, *pos, *globalPos, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:513
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_(QContextMenuEvent::Reason reason, QPoint* pos, QPoint* globalPos) {
  return  new QContextMenuEvent(reason, *pos, *globalPos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:514
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &)
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
