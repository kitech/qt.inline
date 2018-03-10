//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QToolBarChangeEvent is pure virtual: false
// QToolBarChangeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQToolBarChangeEvent : public QToolBarChangeEvent {
public:
  virtual ~MyQToolBarChangeEvent() {}
// void QToolBarChangeEvent(_Bool)
MyQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:754
// [-2] void QToolBarChangeEvent(_Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN19QToolBarChangeEventC2Eb(bool t) {
  return  new QToolBarChangeEvent(t);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:755
// [-2] void ~QToolBarChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN19QToolBarChangeEventD2Ev(void *this_) {
  delete (QToolBarChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:757
// [1] bool toggle()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QToolBarChangeEvent6toggleEv(void *this_) {
  return (bool)((QToolBarChangeEvent*)this_)->toggle();
}

//  main block end
