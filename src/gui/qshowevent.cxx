//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QShowEvent is pure virtual: false
//  header block end

//  main block begin

class MyQShowEvent : public QShowEvent {
public:
MyQShowEvent() : QShowEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:493
// [-2] void QShowEvent()
extern "C"
void* C_ZN10QShowEventC1Ev() {
  (MyQShowEvent*)(0);
  return  new MyQShowEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:494
// [-2] void ~QShowEvent()
extern "C"
void C_ZN10QShowEventD1Ev(void *this_) {
  delete (QShowEvent*)(this_);
}
//  main block end
