//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:395
// void QPaintEvent(const class QRegion &)
extern "C"
void* C_ZN11QPaintEventC1ERK7QRegion(const QRegion & paintRegion) {
  return new QPaintEvent(paintRegion);
}
// /usr/include/qt/QtGui/qevent.h:396
// void QPaintEvent(const class QRect &)
extern "C"
void* C_ZN11QPaintEventC1ERK5QRect(const QRect & paintRect) {
  return new QPaintEvent(paintRect);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:397
// void ~QPaintEvent()
extern "C"
void C_ZN11QPaintEventD1Ev(void *this_) {
  delete (QPaintEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:399
// const QRect & rect()
extern "C"
void C_ZNK11QPaintEvent4rectEv(void *this_) {
  /*return*/ ((QPaintEvent*)this_)->rect();
}
// inline
// /usr/include/qt/QtGui/qevent.h:400
// const QRegion & region()
extern "C"
void C_ZNK11QPaintEvent6regionEv(void *this_) {
  /*return*/ ((QPaintEvent*)this_)->region();
}
//  main block end
