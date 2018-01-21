//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:689
// void QStatusTipEvent(const class QString &)
extern "C"
void* C_ZN15QStatusTipEventC1ERK7QString(const QString & tip) {
  return new QStatusTipEvent(tip);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:690
// void ~QStatusTipEvent()
extern "C"
void C_ZN15QStatusTipEventD1Ev(void *this_) {
  delete (QStatusTipEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:692
// QString tip()
extern "C"
void C_ZNK15QStatusTipEvent3tipEv(void *this_) {
  /*return*/ ((QStatusTipEvent*)this_)->tip();
}
//  main block end
