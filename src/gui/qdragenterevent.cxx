//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QDragEnterEvent is pure virtual: false
//  header block end

//  main block begin

class MyQDragEnterEvent : public QDragEnterEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:664
// [-2] void ~QDragEnterEvent()
extern "C"
void C_ZN15QDragEnterEventD1Ev(void *this_) {
  delete (QDragEnterEvent*)(this_);
}
//  main block end
