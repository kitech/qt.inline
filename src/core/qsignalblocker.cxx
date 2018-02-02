//  header block begin
// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

// QSignalBlocker is pure virtual: false
// QSignalBlocker has virtual projected: false
//  header block end

//  main block begin

class MyQSignalBlocker : public QSignalBlocker {
public:
  virtual ~MyQSignalBlocker() {}
// void QSignalBlocker(class QObject *)
MyQSignalBlocker(QObject * o) : QSignalBlocker(o) {}
// void QSignalBlocker(class QObject &)
MyQSignalBlocker(QObject & o) : QSignalBlocker(o) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:547
// [-2] void QSignalBlocker(class QObject *)
extern "C"
void* C_ZN14QSignalBlockerC2EP7QObject(QObject * o) {
  return  new QSignalBlocker(o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:548
// [-2] void QSignalBlocker(class QObject &)
extern "C"
void* C_ZN14QSignalBlockerC2ER7QObject(QObject* o) {
  return  new QSignalBlocker(*o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:549
// [-2] void ~QSignalBlocker()
extern "C"
void C_ZN14QSignalBlockerD2Ev(void *this_) {
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
