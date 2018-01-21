//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qcoreevent.h:295
// void QEvent(enum QEvent::Type)
extern "C"
void* C_ZN6QEventC1ENS_4TypeE(QEvent::Type type) {
  return new QEvent(type);
}
// virtual
// /usr/include/qt/QtCore/qcoreevent.h:297
// void ~QEvent()
extern "C"
void C_ZN6QEventD1Ev(void *this_) {
  delete (QEvent*)(this_);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:299
// QEvent::Type type()
extern "C"
void C_ZNK6QEvent4typeEv(void *this_) {
  /*return*/ ((QEvent*)this_)->type();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:300
// bool spontaneous()
extern "C"
void C_ZNK6QEvent11spontaneousEv(void *this_) {
  /*return*/ ((QEvent*)this_)->spontaneous();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:302
// void setAccepted(_Bool)
extern "C"
void C_ZN6QEvent11setAcceptedEb(void *this_, bool accepted) {
  ((QEvent*)this_)->setAccepted(accepted);
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:303
// bool isAccepted()
extern "C"
void C_ZNK6QEvent10isAcceptedEv(void *this_) {
  /*return*/ ((QEvent*)this_)->isAccepted();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:305
// void accept()
extern "C"
void C_ZN6QEvent6acceptEv(void *this_) {
  ((QEvent*)this_)->accept();
}
// inline
// /usr/include/qt/QtCore/qcoreevent.h:306
// void ignore()
extern "C"
void C_ZN6QEvent6ignoreEv(void *this_) {
  ((QEvent*)this_)->ignore();
}
// static
// /usr/include/qt/QtCore/qcoreevent.h:308
// int registerEventType(int)
extern "C"
void C_ZN6QEvent17registerEventTypeEi(int hint) {
  /*return*/ QEvent::registerEventType(hint);
}
//  main block end
