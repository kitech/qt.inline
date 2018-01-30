//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QShortcutEvent is pure virtual: false
// QShortcutEvent has virtual projected: false
//  header block end

//  main block begin

class MyQShortcutEvent : public QShortcutEvent {
public:
  virtual ~MyQShortcutEvent() {}
// void QShortcutEvent(const class QKeySequence &, int, _Bool)
MyQShortcutEvent(const QKeySequence & key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:767
// [-2] void QShortcutEvent(const class QKeySequence &, int, _Bool)
extern "C"
void* C_ZN14QShortcutEventC2ERK12QKeySequenceib(const QKeySequence & key, int id, bool ambiguous) {
  return  new QShortcutEvent(key, id, ambiguous);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:768
// [-2] void ~QShortcutEvent()
extern "C"
void C_ZN14QShortcutEventD2Ev(void *this_) {
  delete (QShortcutEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:770
// [8] const QKeySequence & key()
extern "C"
void* C_ZNK14QShortcutEvent3keyEv(void *this_) {
  auto& rv = ((QShortcutEvent*)this_)->key();
return new QKeySequence(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:771
// [4] int shortcutId()
extern "C"
int C_ZNK14QShortcutEvent10shortcutIdEv(void *this_) {
  return (int)((QShortcutEvent*)this_)->shortcutId();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:772
// [1] bool isAmbiguous()
extern "C"
bool C_ZNK14QShortcutEvent11isAmbiguousEv(void *this_) {
  return (bool)((QShortcutEvent*)this_)->isAmbiguous();
}
//  main block end
