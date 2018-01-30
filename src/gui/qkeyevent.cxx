//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QKeyEvent is pure virtual: false
// QKeyEvent has virtual projected: false
//  header block end

//  main block begin

class MyQKeyEvent : public QKeyEvent {
public:
  virtual ~MyQKeyEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:343
// [-2] void ~QKeyEvent()
extern "C"
void C_ZN9QKeyEventD2Ev(void *this_) {
  delete (QKeyEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:345
// [4] int key()
extern "C"
int C_ZNK9QKeyEvent3keyEv(void *this_) {
  return (int)((QKeyEvent*)this_)->key();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:347
// [1] bool matches(class QKeySequence::StandardKey)
extern "C"
bool C_ZNK9QKeyEvent7matchesEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey key) {
  return (bool)((QKeyEvent*)this_)->matches(key);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:349
// [4] Qt::KeyboardModifiers modifiers()
extern "C"
Qt::KeyboardModifiers C_ZNK9QKeyEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QKeyEvent*)this_)->modifiers();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:350
// [8] QString text()
extern "C"
void* C_ZNK9QKeyEvent4textEv(void *this_) {
  auto rv = ((QKeyEvent*)this_)->text();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:351
// [1] bool isAutoRepeat()
extern "C"
bool C_ZNK9QKeyEvent12isAutoRepeatEv(void *this_) {
  return (bool)((QKeyEvent*)this_)->isAutoRepeat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:352
// [4] int count()
extern "C"
int C_ZNK9QKeyEvent5countEv(void *this_) {
  return (int)((QKeyEvent*)this_)->count();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:354
// [4] quint32 nativeScanCode()
extern "C"
quint32 C_ZNK9QKeyEvent14nativeScanCodeEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeScanCode();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:355
// [4] quint32 nativeVirtualKey()
extern "C"
quint32 C_ZNK9QKeyEvent16nativeVirtualKeyEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeVirtualKey();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:356
// [4] quint32 nativeModifiers()
extern "C"
quint32 C_ZNK9QKeyEvent15nativeModifiersEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeModifiers();
}
//  main block end
