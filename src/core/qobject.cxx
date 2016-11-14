// /usr/include/qt/QtCore/qobject.h
#include <qobject.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qobject.h:549
// void QSignalBlocker(class QObject *)
extern "C"
void* C_ZN14QSignalBlockerC1EP7QObject(QObject * o) {
  return new QSignalBlocker(o);
}
// inline
// /usr/include/qt/QtCore/qobject.h:550
// void QSignalBlocker(class QObject &)
extern "C"
void* C_ZN14QSignalBlockerC1ER7QObject(QObject & o) {
  return new QSignalBlocker(o);
}
// inline
// /usr/include/qt/QtCore/qobject.h:551
// void ~QSignalBlocker()
extern "C"
void C_ZN14QSignalBlockerD1Ev(void *this_) {
  delete (QSignalBlocker*)(this_);
}
// inline
// /usr/include/qt/QtCore/qobject.h:558
// void reblock()
extern "C"
void C_ZN14QSignalBlocker7reblockEv(void *this_) {
  ((QSignalBlocker*)this_)->reblock();
}
// inline
// /usr/include/qt/QtCore/qobject.h:559
// void unblock()
extern "C"
void C_ZN14QSignalBlocker7unblockEv(void *this_) {
  ((QSignalBlocker*)this_)->unblock();
}