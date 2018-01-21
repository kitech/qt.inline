//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcoreevent.h:375
// void QDeferredDeleteEvent()
extern "C"
void* C_ZN20QDeferredDeleteEventC1Ev() {
  return new QDeferredDeleteEvent();
}
// virtual
// /usr/include/qt/QtCore/qcoreevent.h:376
// void ~QDeferredDeleteEvent()
extern "C"
void C_ZN20QDeferredDeleteEventD1Ev(void *this_) {
  delete (QDeferredDeleteEvent*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:377
// int loopLevel()
extern "C"
void C_ZNK20QDeferredDeleteEvent9loopLevelEv(void *this_) {
  /*return*/ ((QDeferredDeleteEvent*)this_)->loopLevel();
}
//  main block end
