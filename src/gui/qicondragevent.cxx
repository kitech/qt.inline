//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconDragEvent is pure virtual: false
// QIconDragEvent has virtual projected: false
//  header block end

//  main block begin

class MyQIconDragEvent : public QIconDragEvent {
public:
  virtual ~MyQIconDragEvent() {}
// void QIconDragEvent()
MyQIconDragEvent() : QIconDragEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:485
// [-2] void QIconDragEvent()
extern "C"
void* C_ZN14QIconDragEventC2Ev() {
  return  new QIconDragEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:486
// [-2] void ~QIconDragEvent()
extern "C"
void C_ZN14QIconDragEventD2Ev(void *this_) {
  delete (QIconDragEvent*)(this_);
}
//  main block end
