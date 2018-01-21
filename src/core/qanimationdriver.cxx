//  header block begin
// /usr/include/qt/QtCore/qabstractanimation.h
#include <qabstractanimation.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qabstractanimation.h:135
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QAnimationDriver10metaObjectEv(void *this_) {
  /*return*/ ((QAnimationDriver*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qabstractanimation.h:139
// void QAnimationDriver(class QObject *)
extern "C"
void* C_ZN16QAnimationDriverC1EP7QObject(QObject * parent) {
  return new QAnimationDriver(parent);
}
// virtual
// /usr/include/qt/QtCore/qabstractanimation.h:140
// void ~QAnimationDriver()
extern "C"
void C_ZN16QAnimationDriverD1Ev(void *this_) {
  delete (QAnimationDriver*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qabstractanimation.h:142
// void advance()
extern "C"
void C_ZN16QAnimationDriver7advanceEv(void *this_) {
  ((QAnimationDriver*)this_)->advance();
}
// /usr/include/qt/QtCore/qabstractanimation.h:144
// void install()
extern "C"
void C_ZN16QAnimationDriver7installEv(void *this_) {
  ((QAnimationDriver*)this_)->install();
}
// /usr/include/qt/QtCore/qabstractanimation.h:145
// void uninstall()
extern "C"
void C_ZN16QAnimationDriver9uninstallEv(void *this_) {
  ((QAnimationDriver*)this_)->uninstall();
}
// /usr/include/qt/QtCore/qabstractanimation.h:147
// bool isRunning()
extern "C"
void C_ZNK16QAnimationDriver9isRunningEv(void *this_) {
  /*return*/ ((QAnimationDriver*)this_)->isRunning();
}
// virtual
// /usr/include/qt/QtCore/qabstractanimation.h:149
// qint64 elapsed()
extern "C"
void C_ZNK16QAnimationDriver7elapsedEv(void *this_) {
  /*return*/ ((QAnimationDriver*)this_)->elapsed();
}
// /usr/include/qt/QtCore/qabstractanimation.h:152
// void setStartTime(qint64)
extern "C"
void C_ZN16QAnimationDriver12setStartTimeEx(void *this_, qint64 startTime) {
  ((QAnimationDriver*)this_)->setStartTime(startTime);
}
// /usr/include/qt/QtCore/qabstractanimation.h:153
// qint64 startTime()
extern "C"
void C_ZNK16QAnimationDriver9startTimeEv(void *this_) {
  /*return*/ ((QAnimationDriver*)this_)->startTime();
}
// /usr/include/qt/QtCore/qabstractanimation.h:156
// void started()
extern "C"
void C_ZN16QAnimationDriver7startedEv(void *this_) {
  ((QAnimationDriver*)this_)->started();
}
// /usr/include/qt/QtCore/qabstractanimation.h:157
// void stopped()
extern "C"
void C_ZN16QAnimationDriver7stoppedEv(void *this_) {
  ((QAnimationDriver*)this_)->stopped();
}
//  main block end
