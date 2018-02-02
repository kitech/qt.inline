//  header block begin
// /usr/include/qt/QtCore/qrunnable.h
#include <qrunnable.h>
#include <QtCore>
#include "callback_inherit.h"

// QRunnable is pure virtual: true
// QRunnable has virtual projected: false
//  header block end

//  main block begin

class MyQRunnable : public QRunnable {
public:
  virtual ~MyQRunnable() {}
// void QRunnable()
MyQRunnable() : QRunnable() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:58
// [-2] void run()
extern "C"
void C_ZN9QRunnable3runEv(void *this_) {
  ((QRunnable*)this_)->run();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:60
// [-2] void QRunnable()
extern "C"
void* C_ZN9QRunnableC1Ev() {
  return 0; // new QRunnable();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:61
// [-2] void ~QRunnable()
extern "C"
void C_ZN9QRunnableD2Ev(void *this_) {
  delete (QRunnable*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:63
// [1] bool autoDelete()
extern "C"
bool C_ZNK9QRunnable10autoDeleteEv(void *this_) {
  return (bool)((QRunnable*)this_)->autoDelete();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:64
// [-2] void setAutoDelete(_Bool)
extern "C"
void C_ZN9QRunnable13setAutoDeleteEb(void *this_, bool _autoDelete) {
  ((QRunnable*)this_)->setAutoDelete(_autoDelete);
}
//  main block end
