//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:70
// void QInputEvent(enum QEvent::Type, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QInputEventC1EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QInputEvent(type, modifiers);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:71
// void ~QInputEvent()
extern "C"
void C_ZN11QInputEventD1Ev(void *this_) {
  delete (QInputEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:72
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK11QInputEvent9modifiersEv(void *this_) {
  /*return*/ ((QInputEvent*)this_)->modifiers();
}
// inline
// /usr/include/qt/QtGui/qevent.h:73
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN11QInputEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> amodifiers) {
  ((QInputEvent*)this_)->setModifiers(amodifiers);
}
// inline
// /usr/include/qt/QtGui/qevent.h:74
// ulong timestamp()
extern "C"
void C_ZNK11QInputEvent9timestampEv(void *this_) {
  /*return*/ ((QInputEvent*)this_)->timestamp();
}
// inline
// /usr/include/qt/QtGui/qevent.h:75
// void setTimestamp(ulong)
extern "C"
void C_ZN11QInputEvent12setTimestampEm(void *this_, ulong atimestamp) {
  ((QInputEvent*)this_)->setTimestamp(atimestamp);
}
//  main block end
