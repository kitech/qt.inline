//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QShowEvent is pure virtual: false
// QShowEvent has virtual projected: false
//  header block end

//  main block begin

class MyQShowEvent : public QShowEvent {
public:
  virtual ~MyQShowEvent() {}
// void QShowEvent()
MyQShowEvent() : QShowEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:493
// [-2] void QShowEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN10QShowEventC2Ev() {
  return  new QShowEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:494
// [-2] void ~QShowEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QShowEventD2Ev(void *this_) {
  delete (QShowEvent*)(this_);
}
//  main block end
