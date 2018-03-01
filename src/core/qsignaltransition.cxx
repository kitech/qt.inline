//  header block begin
// /usr/include/qt/QtCore/qsignaltransition.h
#ifndef protected
#define protected public
#endif
#include <qsignaltransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalTransition is pure virtual: false
// QSignalTransition has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSignalTransition : public QSignalTransition {
public:
  virtual ~MyQSignalTransition() {}
// void QSignalTransition(class QState *)
MyQSignalTransition(QState * sourceState) : QSignalTransition(sourceState) {}
// void QSignalTransition(const class QObject *, const char *, class QState *)
MyQSignalTransition(const QObject * sender, const char * signal, QState * sourceState) : QSignalTransition(sender, signal, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSignalTransition::eventTest(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSignalTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSignalTransition::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:83
// [1] bool eventTest(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QSignalTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSignalTransition*)this_)->QSignalTransition::eventTest(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:84
// [-2] void onTransition(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QSignalTransition*)this_)->QSignalTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:86
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QSignalTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QSignalTransition*)this_)->QSignalTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition10metaObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:58
// [-2] void QSignalTransition(class QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:59
// [-2] void QSignalTransition(const class QObject *, const char *, class QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransitionC2EPK7QObjectPKcP6QState(const QObject * sender, const char * signal, QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sender, signal, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:74
// [-2] void ~QSignalTransition()
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransitionD2Ev(void *this_) {
  delete (QSignalTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:76
// [8] QObject * senderObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition12senderObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->senderObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:77
// [-2] void setSenderObject(const class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition15setSenderObjectEPK7QObject(void *this_, const QObject * sender) {
  ((QSignalTransition*)this_)->setSenderObject(sender);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:79
// [8] QByteArray signal()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition6signalEv(void *this_) {
  auto rv = ((QSignalTransition*)this_)->signal();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:80
// [-2] void setSignal(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition9setSignalERK10QByteArray(void *this_, QByteArray* signal) {
  ((QSignalTransition*)this_)->setSignal(*signal);
}

//  main block end
