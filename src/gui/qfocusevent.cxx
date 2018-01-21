//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:379
// void QFocusEvent(enum QEvent::Type, Qt::FocusReason)
extern "C"
void* C_ZN11QFocusEventC1EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type, Qt::FocusReason reason) {
  return new QFocusEvent(type, reason);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:380
// void ~QFocusEvent()
extern "C"
void C_ZN11QFocusEventD1Ev(void *this_) {
  delete (QFocusEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:382
// bool gotFocus()
extern "C"
void C_ZNK11QFocusEvent8gotFocusEv(void *this_) {
  /*return*/ ((QFocusEvent*)this_)->gotFocus();
}
// inline
// /usr/include/qt/QtGui/qevent.h:383
// bool lostFocus()
extern "C"
void C_ZNK11QFocusEvent9lostFocusEv(void *this_) {
  /*return*/ ((QFocusEvent*)this_)->lostFocus();
}
// /usr/include/qt/QtGui/qevent.h:385
// Qt::FocusReason reason()
extern "C"
void C_ZNK11QFocusEvent6reasonEv(void *this_) {
  /*return*/ ((QFocusEvent*)this_)->reason();
}
//  main block end
