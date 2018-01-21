//  header block begin
// /usr/include/qt/QtCore/qsignaltransition.h
#include <qsignaltransition.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qsignaltransition.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QSignalTransition10metaObjectEv(void *this_) {
  /*return*/ ((QSignalTransition*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsignaltransition.h:59
// void QSignalTransition(class QState *)
extern "C"
void* C_ZN17QSignalTransitionC1EP6QState(QState * sourceState) {
  return new QSignalTransition(sourceState);
}
// /usr/include/qt/QtCore/qsignaltransition.h:60
// void QSignalTransition(const class QObject *, const char *, class QState *)
extern "C"
void* C_ZN17QSignalTransitionC1EPK7QObjectPKcP6QState(const QObject * sender, const char * signal, QState * sourceState) {
  return new QSignalTransition(sender, signal, sourceState);
}
// virtual
// /usr/include/qt/QtCore/qsignaltransition.h:74
// void ~QSignalTransition()
extern "C"
void C_ZN17QSignalTransitionD1Ev(void *this_) {
  delete (QSignalTransition*)(this_);
}
// /usr/include/qt/QtCore/qsignaltransition.h:76
// QObject * senderObject()
extern "C"
void C_ZNK17QSignalTransition12senderObjectEv(void *this_) {
  /*return*/ ((QSignalTransition*)this_)->senderObject();
}
// /usr/include/qt/QtCore/qsignaltransition.h:77
// void setSenderObject(const class QObject *)
extern "C"
void C_ZN17QSignalTransition15setSenderObjectEPK7QObject(void *this_, const QObject * sender) {
  ((QSignalTransition*)this_)->setSenderObject(sender);
}
// /usr/include/qt/QtCore/qsignaltransition.h:79
// QByteArray signal()
extern "C"
void C_ZNK17QSignalTransition6signalEv(void *this_) {
  /*return*/ ((QSignalTransition*)this_)->signal();
}
// /usr/include/qt/QtCore/qsignaltransition.h:80
// void setSignal(const class QByteArray &)
extern "C"
void C_ZN17QSignalTransition9setSignalERK10QByteArray(void *this_, const QByteArray & signal) {
  ((QSignalTransition*)this_)->setSignal(signal);
}
//  main block end
