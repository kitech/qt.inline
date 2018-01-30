//  header block begin
// /usr/include/qt/QtCore/qsignaltransition.h
#include <qsignaltransition.h>
#include <QtCore>

// QSignalTransition is pure virtual: false
// QSignalTransition has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:83
// [1] bool eventTest(class QEvent *)
extern "C"
void* callback_ZN17QSignalTransition9eventTestEP6QEvent = 0;
extern "C" void set_callback_ZN17QSignalTransition9eventTestEP6QEvent(void*cbfn)
{ callback_ZN17QSignalTransition9eventTestEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:84
// [-2] void onTransition(class QEvent *)
extern "C"
void* callback_ZN17QSignalTransition12onTransitionEP6QEvent = 0;
extern "C" void set_callback_ZN17QSignalTransition12onTransitionEP6QEvent(void*cbfn)
{ callback_ZN17QSignalTransition12onTransitionEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:86
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN17QSignalTransition5eventEP6QEvent = 0;
extern "C" void set_callback_ZN17QSignalTransition5eventEP6QEvent(void*cbfn)
{ callback_ZN17QSignalTransition5eventEP6QEvent = cbfn; }

class MyQSignalTransition : public QSignalTransition {
public:
  virtual ~MyQSignalTransition() {}
// void QSignalTransition(class QState *)
MyQSignalTransition(QState * sourceState) : QSignalTransition(sourceState) {}
// void QSignalTransition(const class QObject *, const char *, class QState *)
MyQSignalTransition(const QObject * sender, const char * signal, QState * sourceState) : QSignalTransition(sender, signal, sourceState) {}
// bool eventTest(class QEvent *)
  virtual bool eventTest(QEvent * event) {
    if (callback_ZN17QSignalTransition9eventTestEP6QEvent != 0) {
      // callback_ZN17QSignalTransition9eventTestEP6QEvent(event);
    }
    return QSignalTransition::eventTest(event);
  }
// void onTransition(class QEvent *)
  virtual void onTransition(QEvent * event) {
    if (callback_ZN17QSignalTransition12onTransitionEP6QEvent != 0) {
      // callback_ZN17QSignalTransition12onTransitionEP6QEvent(event);
    }
    QSignalTransition::onTransition(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN17QSignalTransition5eventEP6QEvent != 0) {
      // callback_ZN17QSignalTransition5eventEP6QEvent(e);
    }
    return QSignalTransition::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QSignalTransition10metaObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:58
// [-2] void QSignalTransition(class QState *)
extern "C"
void* C_ZN17QSignalTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sourceState);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:59
// [-2] void QSignalTransition(const class QObject *, const char *, class QState *)
extern "C"
void* C_ZN17QSignalTransitionC2EPK7QObjectPKcP6QState(const QObject * sender, const char * signal, QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sender, signal, sourceState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:74
// [-2] void ~QSignalTransition()
extern "C"
void C_ZN17QSignalTransitionD2Ev(void *this_) {
  delete (QSignalTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:76
// [8] QObject * senderObject()
extern "C"
void* C_ZNK17QSignalTransition12senderObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->senderObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:77
// [-2] void setSenderObject(const class QObject *)
extern "C"
void C_ZN17QSignalTransition15setSenderObjectEPK7QObject(void *this_, const QObject * sender) {
  ((QSignalTransition*)this_)->setSenderObject(sender);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:79
// [8] QByteArray signal()
extern "C"
void* C_ZNK17QSignalTransition6signalEv(void *this_) {
  auto rv = ((QSignalTransition*)this_)->signal();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:80
// [-2] void setSignal(const class QByteArray &)
extern "C"
void C_ZN17QSignalTransition9setSignalERK10QByteArray(void *this_, const QByteArray & signal) {
  ((QSignalTransition*)this_)->setSignal(signal);
}
//  main block end
