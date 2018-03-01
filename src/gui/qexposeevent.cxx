//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QExposeEvent is pure virtual: false
// QExposeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQExposeEvent : public QExposeEvent {
public:
  virtual ~MyQExposeEvent() {}
// void QExposeEvent(const class QRegion &)
MyQExposeEvent(const QRegion & rgn) : QExposeEvent(rgn) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:434
// [-2] void QExposeEvent(const class QRegion &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QExposeEventC2ERK7QRegion(QRegion* rgn) {
  return  new QExposeEvent(*rgn);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:435
// [-2] void ~QExposeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN12QExposeEventD2Ev(void *this_) {
  delete (QExposeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:437
// [8] const QRegion & region()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QExposeEvent6regionEv(void *this_) {
  auto& rv = ((QExposeEvent*)this_)->region();
return new QRegion(rv);
}

//  main block end
