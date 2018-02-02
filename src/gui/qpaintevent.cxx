//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEvent is pure virtual: false
// QPaintEvent has virtual projected: false
//  header block end

//  main block begin

class MyQPaintEvent : public QPaintEvent {
public:
  virtual ~MyQPaintEvent() {}
// void QPaintEvent(const class QRegion &)
MyQPaintEvent(const QRegion & paintRegion) : QPaintEvent(paintRegion) {}
// void QPaintEvent(const class QRect &)
MyQPaintEvent(const QRect & paintRect) : QPaintEvent(paintRect) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:405
// [-2] void QPaintEvent(const class QRegion &)
extern "C"
void* C_ZN11QPaintEventC2ERK7QRegion(QRegion* paintRegion) {
  return  new QPaintEvent(*paintRegion);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:406
// [-2] void QPaintEvent(const class QRect &)
extern "C"
void* C_ZN11QPaintEventC2ERK5QRect(QRect* paintRect) {
  return  new QPaintEvent(*paintRect);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:407
// [-2] void ~QPaintEvent()
extern "C"
void C_ZN11QPaintEventD2Ev(void *this_) {
  delete (QPaintEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:409
// [16] const QRect & rect()
extern "C"
void* C_ZNK11QPaintEvent4rectEv(void *this_) {
  auto& rv = ((QPaintEvent*)this_)->rect();
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:410
// [8] const QRegion & region()
extern "C"
void* C_ZNK11QPaintEvent6regionEv(void *this_) {
  auto& rv = ((QPaintEvent*)this_)->region();
return new QRegion(rv);
}
//  main block end
