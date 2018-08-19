//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qrunnable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrunnable.h>
#include <QtCore>
#include "callback_inherit.h"

// QRunnable is pure virtual: true
// QRunnable has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRunnable : public QRunnable {
public:
  virtual ~MyQRunnable() {}
// void QRunnable()
MyQRunnable() : QRunnable() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:58
// [-2] void run()
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnable3runEv(void *this_) {
  ((QRunnable*)this_)->run();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:60
// [-2] void QRunnable()
extern "C" Q_DECL_EXPORT
void* C_ZN9QRunnableC2Ev() {
  return 0; // new QRunnable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:61
// [-2] void ~QRunnable()
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnableD2Ev(void *this_) {
  delete (QRunnable*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:63
// [1] bool autoDelete()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QRunnable10autoDeleteEv(void *this_) {
  return (bool)((QRunnable*)this_)->autoDelete();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:64
// [-2] void setAutoDelete(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnable13setAutoDeleteEb(void *this_, bool _autoDelete) {
  ((QRunnable*)this_)->setAutoDelete(_autoDelete);
}

//  main block end
