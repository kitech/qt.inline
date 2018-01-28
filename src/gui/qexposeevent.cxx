//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QExposeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQExposeEvent : public QExposeEvent {
public:
MyQExposeEvent(const QRegion & rgn) : QExposeEvent(rgn) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:434
// [-2] void QExposeEvent(const class QRegion &)
extern "C"
void* C_ZN12QExposeEventC1ERK7QRegion(const QRegion & rgn) {
  (MyQExposeEvent*)(0);
  return  new MyQExposeEvent(rgn);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:435
// [-2] void ~QExposeEvent()
extern "C"
void C_ZN12QExposeEventD1Ev(void *this_) {
  delete (QExposeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:437
// [8] const QRegion & region()
extern "C"
void* C_ZNK12QExposeEvent6regionEv(void *this_) {
  auto& rv = ((QExposeEvent*)this_)->region();
return new QRegion(rv);
}
//  main block end
