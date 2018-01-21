//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:772
// void QWindowStateChangeEvent(Qt::WindowStates, _Bool)
extern "C"
void* C_ZN23QWindowStateChangeEventC1E6QFlagsIN2Qt11WindowStateEEb(QFlags<Qt::WindowState> aOldState, bool isOverride) {
  return new QWindowStateChangeEvent(aOldState, isOverride);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:773
// void ~QWindowStateChangeEvent()
extern "C"
void C_ZN23QWindowStateChangeEventD1Ev(void *this_) {
  delete (QWindowStateChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:775
// Qt::WindowStates oldState()
extern "C"
void C_ZNK23QWindowStateChangeEvent8oldStateEv(void *this_) {
  /*return*/ ((QWindowStateChangeEvent*)this_)->oldState();
}
// /usr/include/qt/QtGui/qevent.h:776
// bool isOverride()
extern "C"
void C_ZNK23QWindowStateChangeEvent10isOverrideEv(void *this_) {
  /*return*/ ((QWindowStateChangeEvent*)this_)->isOverride();
}
//  main block end
