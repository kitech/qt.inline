//  header block begin
// /usr/include/qt/QtCore/qsocketnotifier.h
#include <qsocketnotifier.h>
#include <QtCore>

// QSocketNotifier is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:71
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QSocketNotifier5eventEP6QEvent = 0;
extern "C" void set_callback_ZN15QSocketNotifier5eventEP6QEvent(void*cbfn)
{ callback_ZN15QSocketNotifier5eventEP6QEvent = cbfn; }

class MyQSocketNotifier : public QSocketNotifier {
public:
MyQSocketNotifier(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) : QSocketNotifier(socket, arg1, parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * arg0) {
  if (callback_ZN15QSocketNotifier5eventEP6QEvent != 0) {
  // callback_ZN15QSocketNotifier5eventEP6QEvent(arg0);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QSocketNotifier10metaObjectEv(void *this_) {
  return (void*)((QSocketNotifier*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:56
// [-2] void QSocketNotifier(qintptr, enum QSocketNotifier::Type, class QObject *)
extern "C"
void* C_ZN15QSocketNotifierC1ExNS_4TypeEP7QObject(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) {
  (MyQSocketNotifier*)(0);
  return  new MyQSocketNotifier(socket, arg1, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:57
// [-2] void ~QSocketNotifier()
extern "C"
void C_ZN15QSocketNotifierD1Ev(void *this_) {
  delete (QSocketNotifier*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:59
// [8] qintptr socket()
extern "C"
qintptr C_ZNK15QSocketNotifier6socketEv(void *this_) {
  return (qintptr)((QSocketNotifier*)this_)->socket();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:60
// [4] QSocketNotifier::Type type()
extern "C"
QSocketNotifier::Type C_ZNK15QSocketNotifier4typeEv(void *this_) {
  return (QSocketNotifier::Type)((QSocketNotifier*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:62
// [1] bool isEnabled()
extern "C"
bool C_ZNK15QSocketNotifier9isEnabledEv(void *this_) {
  return (bool)((QSocketNotifier*)this_)->isEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:65
// [-2] void setEnabled(_Bool)
extern "C"
void C_ZN15QSocketNotifier10setEnabledEb(void *this_, bool arg0) {
  ((QSocketNotifier*)this_)->setEnabled(arg0);
}
//  main block end
