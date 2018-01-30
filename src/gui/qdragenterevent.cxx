//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QDragEnterEvent is pure virtual: false
// QDragEnterEvent has virtual projected: false
//  header block end

//  main block begin

class MyQDragEnterEvent : public QDragEnterEvent {
public:
  virtual ~MyQDragEnterEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:664
// [-2] void ~QDragEnterEvent()
extern "C"
void C_ZN15QDragEnterEventD2Ev(void *this_) {
  delete (QDragEnterEvent*)(this_);
}
//  main block end
