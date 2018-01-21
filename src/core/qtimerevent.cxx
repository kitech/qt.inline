//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcoreevent.h:338
// void QTimerEvent(int)
extern "C"
void* C_ZN11QTimerEventC1Ei(int timerId) {
  return new QTimerEvent(timerId);
}
// virtual
// /usr/include/qt/QtCore/qcoreevent.h:339
// void ~QTimerEvent()
extern "C"
void C_ZN11QTimerEventD1Ev(void *this_) {
  delete (QTimerEvent*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:340
// int timerId()
extern "C"
void C_ZNK11QTimerEvent7timerIdEv(void *this_) {
  /*return*/ ((QTimerEvent*)this_)->timerId();
}
//  main block end
