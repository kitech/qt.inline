//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:660
// void QDragLeaveEvent()
extern "C"
void* C_ZN15QDragLeaveEventC1Ev() {
  return new QDragLeaveEvent();
}
// virtual
// /usr/include/qt/QtGui/qevent.h:661
// void ~QDragLeaveEvent()
extern "C"
void C_ZN15QDragLeaveEventD1Ev(void *this_) {
  delete (QDragLeaveEvent*)(this_);
}
//  main block end
