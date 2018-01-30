//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QDragLeaveEvent is pure virtual: false
// QDragLeaveEvent has virtual projected: false
//  header block end

//  main block begin

class MyQDragLeaveEvent : public QDragLeaveEvent {
public:
  virtual ~MyQDragLeaveEvent() {}
// void QDragLeaveEvent()
MyQDragLeaveEvent() : QDragLeaveEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:671
// [-2] void QDragLeaveEvent()
extern "C"
void* C_ZN15QDragLeaveEventC2Ev() {
  return  new QDragLeaveEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:672
// [-2] void ~QDragLeaveEvent()
extern "C"
void C_ZN15QDragLeaveEventD2Ev(void *this_) {
  delete (QDragLeaveEvent*)(this_);
}
//  main block end
