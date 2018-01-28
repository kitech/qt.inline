//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QIconDragEvent is pure virtual: false
//  header block end

//  main block begin

class MyQIconDragEvent : public QIconDragEvent {
public:
MyQIconDragEvent() : QIconDragEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:485
// [-2] void QIconDragEvent()
extern "C"
void* C_ZN14QIconDragEventC1Ev() {
  (MyQIconDragEvent*)(0);
  return  new MyQIconDragEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:486
// [-2] void ~QIconDragEvent()
extern "C"
void C_ZN14QIconDragEventD1Ev(void *this_) {
  delete (QIconDragEvent*)(this_);
}
//  main block end
