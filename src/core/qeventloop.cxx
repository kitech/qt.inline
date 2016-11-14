// /usr/include/qt/QtCore/qeventloop.h
#include <qeventloop.h>
#include <QtCore>

// /usr/include/qt/QtCore/qeventloop.h:93
// void QEventLoopLocker()
extern "C"
void* C_ZN16QEventLoopLockerC1Ev() {
  return new QEventLoopLocker();
}
// /usr/include/qt/QtCore/qeventloop.h:94
// void QEventLoopLocker(class QEventLoop *)
extern "C"
void* C_ZN16QEventLoopLockerC1EP10QEventLoop(QEventLoop * loop) {
  return new QEventLoopLocker(loop);
}
// /usr/include/qt/QtCore/qeventloop.h:95
// void QEventLoopLocker(class QThread *)
extern "C"
void* C_ZN16QEventLoopLockerC1EP7QThread(QThread * thread) {
  return new QEventLoopLocker(thread);
}
// /usr/include/qt/QtCore/qeventloop.h:96
// void ~QEventLoopLocker()
extern "C"
void C_ZN16QEventLoopLockerD1Ev(void *this_) {
  delete (QEventLoopLocker*)(this_);
}