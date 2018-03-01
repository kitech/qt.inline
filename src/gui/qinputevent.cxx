//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputEvent is pure virtual: false
// QInputEvent has virtual projected: false
//  header block end

//  main block begin

class MyQInputEvent : public QInputEvent {
public:
  virtual ~MyQInputEvent() {}
// void QInputEvent(enum QEvent::Type, Qt::KeyboardModifiers)
MyQInputEvent(QEvent::Type type_, QFlags<Qt::KeyboardModifier> modifiers) : QInputEvent(type_, modifiers) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:71
// [-2] void QInputEvent(enum QEvent::Type, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QInputEventC2EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type_, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QInputEvent(type_, modifiers);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:72
// [-2] void ~QInputEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QInputEventD2Ev(void *this_) {
  delete (QInputEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:73
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK11QInputEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QInputEvent*)this_)->modifiers();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:74
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN11QInputEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> amodifiers) {
  ((QInputEvent*)this_)->setModifiers(amodifiers);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:75
// [8] ulong timestamp()
extern "C" Q_DECL_EXPORT
ulong C_ZNK11QInputEvent9timestampEv(void *this_) {
  return (ulong)((QInputEvent*)this_)->timestamp();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:76
// [-2] void setTimestamp(ulong)
extern "C" Q_DECL_EXPORT
void C_ZN11QInputEvent12setTimestampEm(void *this_, ulong atimestamp) {
  ((QInputEvent*)this_)->setTimestamp(atimestamp);
}

//  main block end
