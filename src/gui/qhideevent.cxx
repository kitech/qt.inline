//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHideEvent is pure virtual: false
// QHideEvent has virtual projected: false
//  header block end

//  main block begin

class MyQHideEvent : public QHideEvent {
public:
  virtual ~MyQHideEvent() {}
// void QHideEvent()
MyQHideEvent() : QHideEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:501
// [-2] void QHideEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN10QHideEventC2Ev() {
  return  new QHideEvent();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:502
// [-2] void ~QHideEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QHideEventD2Ev(void *this_) {
  delete (QHideEvent*)(this_);
}
//  main block end
