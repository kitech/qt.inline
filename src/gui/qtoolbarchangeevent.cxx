//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:743
// void QToolBarChangeEvent(_Bool)
extern "C"
void* C_ZN19QToolBarChangeEventC1Eb(bool t) {
  return new QToolBarChangeEvent(t);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:744
// void ~QToolBarChangeEvent()
extern "C"
void C_ZN19QToolBarChangeEventD1Ev(void *this_) {
  delete (QToolBarChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:746
// bool toggle()
extern "C"
void C_ZNK19QToolBarChangeEvent6toggleEv(void *this_) {
  /*return*/ ((QToolBarChangeEvent*)this_)->toggle();
}
//  main block end
