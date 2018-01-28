//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

// QSignalBlocker is pure virtual: false
//  header block end

//  main block begin

class MyQSignalBlocker : public QSignalBlocker {
public:
MyQSignalBlocker(QObject * o) : QSignalBlocker(o) {}
MyQSignalBlocker(QObject & o) : QSignalBlocker(o) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:547
// [-2] void QSignalBlocker(class QObject *)
extern "C"
void* C_ZN14QSignalBlockerC1EP7QObject(QObject * o) {
  (MyQSignalBlocker*)(0);
  return  new MyQSignalBlocker(o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:548
// [-2] void QSignalBlocker(class QObject &)
extern "C"
void* C_ZN14QSignalBlockerC1ER7QObject(QObject & o) {
  (MyQSignalBlocker*)(0);
  return  new MyQSignalBlocker(o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:549
// [-2] void ~QSignalBlocker()
extern "C"
void C_ZN14QSignalBlockerD1Ev(void *this_) {
  delete (QSignalBlocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:556
// [-2] void reblock()
extern "C"
void C_ZN14QSignalBlocker7reblockEv(void *this_) {
  ((QSignalBlocker*)this_)->reblock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:557
// [-2] void unblock()
extern "C"
void C_ZN14QSignalBlocker7unblockEv(void *this_) {
  ((QSignalBlocker*)this_)->unblock();
}
//  main block end
