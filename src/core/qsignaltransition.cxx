//  header block begin
// since 0x040600
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
// void QSignalTransition(QState *)
MyQSignalTransition(QState * sourceState) : QSignalTransition(sourceState) {}
// void QSignalTransition(const QObject *, const char *, QState *)
MyQSignalTransition(const QObject * sender, const char * signal, QState * sourceState) : QSignalTransition(sender, signal, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSignalTransition::eventTest(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onTransition(QEvent *)
  virtual void onTransition(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSignalTransition::onTransition(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QSignalTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSignalTransition*)this_)->QSignalTransition::eventTest(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:84
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QSignalTransition*)this_)->QSignalTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:86
// [1] bool event(QEvent *)
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSignalTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QSignalTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSignalTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:58
// [-2] void QSignalTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:59
// [-2] void QSignalTransition(const QObject *, const char *, QState *)
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
// [-2] void setSenderObject(const QObject *)
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
// [-2] void setSignal(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition9setSignalERK10QByteArray(void *this_, QByteArray* signal) {
  ((QSignalTransition*)this_)->setSignal(*signal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:89
// [-2] void senderObjectChanged(QSignalTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition19senderObjectChangedENS_14QPrivateSignalE(void *this_, QSignalTransition::QPrivateSignal* arg0) {
  ((QSignalTransition*)this_)->senderObjectChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:90
// [-2] void signalChanged(QSignalTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition13signalChangedENS_14QPrivateSignalE(void *this_, QSignalTransition::QPrivateSignal* arg0) {
  ((QSignalTransition*)this_)->signalChanged(*arg0);
}

//  main block end
