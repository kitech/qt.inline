//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QInputEvent is pure virtual: false
// QInputEvent has virtual projected: false
//  header block end

//  main block begin

class MyQInputEvent : public QInputEvent {
public:
  virtual ~MyQInputEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:72
// [-2] void ~QInputEvent()
extern "C"
void C_ZN11QInputEventD2Ev(void *this_) {
  delete (QInputEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:73
// [4] Qt::KeyboardModifiers modifiers()
extern "C"
Qt::KeyboardModifiers C_ZNK11QInputEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QInputEvent*)this_)->modifiers();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:75
// [8] ulong timestamp()
extern "C"
ulong C_ZNK11QInputEvent9timestampEv(void *this_) {
  return (ulong)((QInputEvent*)this_)->timestamp();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:76
// [-2] void setTimestamp(ulong)
extern "C"
void C_ZN11QInputEvent12setTimestampEm(void *this_, ulong atimestamp) {
  ((QInputEvent*)this_)->setTimestamp(atimestamp);
}
//  main block end
