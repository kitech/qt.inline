//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:424
// void QExposeEvent(const class QRegion &)
extern "C"
void* C_ZN12QExposeEventC1ERK7QRegion(const QRegion & rgn) {
  return new QExposeEvent(rgn);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:425
// void ~QExposeEvent()
extern "C"
void C_ZN12QExposeEventD1Ev(void *this_) {
  delete (QExposeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:427
// const QRegion & region()
extern "C"
void C_ZNK12QExposeEvent6regionEv(void *this_) {
  /*return*/ ((QExposeEvent*)this_)->region();
}
//  main block end
