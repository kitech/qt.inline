//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QCloseEvent is pure virtual: false
// QCloseEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCloseEvent : public QCloseEvent {
public:
  virtual ~MyQCloseEvent() {}
// void QCloseEvent()
MyQCloseEvent() : QCloseEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:477
// [-2] void QCloseEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN11QCloseEventC2Ev() {
  return  new QCloseEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:478
// [-2] void ~QCloseEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QCloseEventD2Ev(void *this_) {
  delete (QCloseEvent*)(this_);
}
//  main block end
