//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#include <qeventloop.h>
#include <QtCore>

// QEventLoopLocker is pure virtual: false
//  header block end

//  main block begin

class MyQEventLoopLocker : public QEventLoopLocker {
public:
MyQEventLoopLocker() : QEventLoopLocker() {}
MyQEventLoopLocker(QEventLoop * loop) : QEventLoopLocker(loop) {}
MyQEventLoopLocker(QThread * thread) : QEventLoopLocker(thread) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:93
// [-2] void QEventLoopLocker()
extern "C"
void* C_ZN16QEventLoopLockerC1Ev() {
  (MyQEventLoopLocker*)(0);
  return  new MyQEventLoopLocker();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:94
// [-2] void QEventLoopLocker(class QEventLoop *)
extern "C"
void* C_ZN16QEventLoopLockerC1EP10QEventLoop(QEventLoop * loop) {
  (MyQEventLoopLocker*)(0);
  return  new MyQEventLoopLocker(loop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:95
// [-2] void QEventLoopLocker(class QThread *)
extern "C"
void* C_ZN16QEventLoopLockerC1EP7QThread(QThread * thread) {
  (MyQEventLoopLocker*)(0);
  return  new MyQEventLoopLocker(thread);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:96
// [-2] void ~QEventLoopLocker()
extern "C"
void C_ZN16QEventLoopLockerD1Ev(void *this_) {
  delete (QEventLoopLocker*)(this_);
}
//  main block end
