//  header block begin
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalBlocker is pure virtual: false
// QSignalBlocker has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSignalBlocker : public QSignalBlocker {
public:
  virtual ~MyQSignalBlocker() {}
// void QSignalBlocker(class QObject *)
MyQSignalBlocker(QObject * o) : QSignalBlocker(o) {}
// void QSignalBlocker(class QObject &)
MyQSignalBlocker(QObject & o) : QSignalBlocker(o) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:548
// [-2] void QSignalBlocker(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSignalBlockerC2EP7QObject(QObject * o) {
  return  new QSignalBlocker(o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:549
// [-2] void QSignalBlocker(class QObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSignalBlockerC2ER7QObject(QObject* o) {
  return  new QSignalBlocker(*o);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:550
// [-2] void ~QSignalBlocker()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlockerD2Ev(void *this_) {
  delete (QSignalBlocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:557
// [-2] void reblock()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlocker7reblockEv(void *this_) {
  ((QSignalBlocker*)this_)->reblock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:558
// [-2] void unblock()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlocker7unblockEv(void *this_) {
  ((QSignalBlocker*)this_)->unblock();
}

//  main block end
