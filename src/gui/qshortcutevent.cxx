//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:756
// void QShortcutEvent(const class QKeySequence &, int, _Bool)
extern "C"
void* C_ZN14QShortcutEventC1ERK12QKeySequenceib(const QKeySequence & key, int id, bool ambiguous) {
  return new QShortcutEvent(key, id, ambiguous);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:757
// void ~QShortcutEvent()
extern "C"
void C_ZN14QShortcutEventD1Ev(void *this_) {
  delete (QShortcutEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:759
// const QKeySequence & key()
extern "C"
void C_ZNK14QShortcutEvent3keyEv(void *this_) {
  /*return*/ ((QShortcutEvent*)this_)->key();
}
// inline
// /usr/include/qt/QtGui/qevent.h:760
// int shortcutId()
extern "C"
void C_ZNK14QShortcutEvent10shortcutIdEv(void *this_) {
  /*return*/ ((QShortcutEvent*)this_)->shortcutId();
}
// inline
// /usr/include/qt/QtGui/qevent.h:761
// bool isAmbiguous()
extern "C"
void C_ZNK14QShortcutEvent11isAmbiguousEv(void *this_) {
  /*return*/ ((QShortcutEvent*)this_)->isAmbiguous();
}
//  main block end
