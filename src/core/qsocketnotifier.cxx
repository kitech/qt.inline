//  header block begin
// /usr/include/qt/QtCore/qsocketnotifier.h
#include <qsocketnotifier.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QSocketNotifier10metaObjectEv(void *this_) {
  /*return*/ ((QSocketNotifier*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsocketnotifier.h:56
// void QSocketNotifier(qintptr, enum QSocketNotifier::Type, class QObject *)
extern "C"
void* C_ZN15QSocketNotifierC1ExNS_4TypeEP7QObject(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) {
  return new QSocketNotifier(socket, arg1, parent);
}
// virtual
// /usr/include/qt/QtCore/qsocketnotifier.h:57
// void ~QSocketNotifier()
extern "C"
void C_ZN15QSocketNotifierD1Ev(void *this_) {
  delete (QSocketNotifier*)(this_);
}
// /usr/include/qt/QtCore/qsocketnotifier.h:59
// qintptr socket()
extern "C"
void C_ZNK15QSocketNotifier6socketEv(void *this_) {
  /*return*/ ((QSocketNotifier*)this_)->socket();
}
// /usr/include/qt/QtCore/qsocketnotifier.h:60
// QSocketNotifier::Type type()
extern "C"
void C_ZNK15QSocketNotifier4typeEv(void *this_) {
  /*return*/ ((QSocketNotifier*)this_)->type();
}
// /usr/include/qt/QtCore/qsocketnotifier.h:62
// bool isEnabled()
extern "C"
void C_ZNK15QSocketNotifier9isEnabledEv(void *this_) {
  /*return*/ ((QSocketNotifier*)this_)->isEnabled();
}
// /usr/include/qt/QtCore/qsocketnotifier.h:65
// void setEnabled(_Bool)
extern "C"
void C_ZN15QSocketNotifier10setEnabledEb(void *this_, bool arg0) {
  ((QSocketNotifier*)this_)->setEnabled(arg0);
}
//  main block end
