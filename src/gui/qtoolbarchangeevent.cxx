//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QToolBarChangeEvent is pure virtual: false
// QToolBarChangeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQToolBarChangeEvent : public QToolBarChangeEvent {
public:
  virtual ~MyQToolBarChangeEvent() {}
// void QToolBarChangeEvent(_Bool)
MyQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:754
// [-2] void QToolBarChangeEvent(_Bool)
extern "C"
void* C_ZN19QToolBarChangeEventC2Eb(bool t) {
  return  new QToolBarChangeEvent(t);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:755
// [-2] void ~QToolBarChangeEvent()
extern "C"
void C_ZN19QToolBarChangeEventD2Ev(void *this_) {
  delete (QToolBarChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:757
// [1] bool toggle()
extern "C"
bool C_ZNK19QToolBarChangeEvent6toggleEv(void *this_) {
  return (bool)((QToolBarChangeEvent*)this_)->toggle();
}
//  main block end
