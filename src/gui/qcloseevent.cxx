//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QCloseEvent is pure virtual: false
//  header block end

//  main block begin

class MyQCloseEvent : public QCloseEvent {
public:
MyQCloseEvent() : QCloseEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:477
// [-2] void QCloseEvent()
extern "C"
void* C_ZN11QCloseEventC1Ev() {
  (MyQCloseEvent*)(0);
  return  new MyQCloseEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:478
// [-2] void ~QCloseEvent()
extern "C"
void C_ZN11QCloseEventD1Ev(void *this_) {
  delete (QCloseEvent*)(this_);
}
//  main block end
