//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:467
// void QCloseEvent()
extern "C"
void* C_ZN11QCloseEventC1Ev() {
  return new QCloseEvent();
}
// virtual
// /usr/include/qt/QtGui/qevent.h:468
// void ~QCloseEvent()
extern "C"
void C_ZN11QCloseEventD1Ev(void *this_) {
  delete (QCloseEvent*)(this_);
}
//  main block end
