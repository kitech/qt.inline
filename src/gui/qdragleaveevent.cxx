//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QDragLeaveEvent is pure virtual: false
//  header block end

//  main block begin

class MyQDragLeaveEvent : public QDragLeaveEvent {
public:
MyQDragLeaveEvent() : QDragLeaveEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:671
// [-2] void QDragLeaveEvent()
extern "C"
void* C_ZN15QDragLeaveEventC1Ev() {
  (MyQDragLeaveEvent*)(0);
  return  new MyQDragLeaveEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:672
// [-2] void ~QDragLeaveEvent()
extern "C"
void C_ZN15QDragLeaveEventD1Ev(void *this_) {
  delete (QDragLeaveEvent*)(this_);
}
//  main block end
