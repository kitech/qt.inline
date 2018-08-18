//  header block begin
// /usr/include/qt/QtCore/qabstractanimation.h
#ifndef protected
#define protected public
#endif
#include <qabstractanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QAnimationDriver is pure virtual: false
// QAnimationDriver has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAnimationDriver : public QAnimationDriver {
public:
  virtual ~MyQAnimationDriver() {}
// void QAnimationDriver(QObject *)
MyQAnimationDriver(QObject * parent) : QAnimationDriver(parent) {}
// Protected Visibility=Default Availability=Available
// void advanceAnimation(qint64)
  virtual void advanceAnimation(qint64 timeStep) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"advanceAnimation", &handled, 1, (uint64_t)timeStep, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAnimationDriver::advanceAnimation(timeStep);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void start()
  virtual void start() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAnimationDriver::start();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void stop()
  virtual void stop() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAnimationDriver::stop();
  }
  }

// void QAnimationDriver(QAnimationDriverPrivate &, QObject *)
MyQAnimationDriver(QAnimationDriverPrivate & dd, QObject * parent) : QAnimationDriver(dd, parent) {}
};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:161
// [-2] void advanceAnimation(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver16advanceAnimationEx(void *this_, qint64 timeStep) {
  ((QAnimationDriver*)this_)->QAnimationDriver::advanceAnimation(timeStep);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:162
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver5startEv(void *this_) {
  ((QAnimationDriver*)this_)->QAnimationDriver::start();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:163
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver4stopEv(void *this_) {
  ((QAnimationDriver*)this_)->QAnimationDriver::stop();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAnimationDriver10metaObjectEv(void *this_) {
  return (void*)((QAnimationDriver*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAnimationDriver*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QAnimationDriver11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAnimationDriver*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationDriver::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriver6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationDriver::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:139
// [-2] void QAnimationDriver(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAnimationDriverC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationDriver*)(0);
  return  new MyQAnimationDriver(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:140
// [-2] void ~QAnimationDriver()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriverD2Ev(void *this_) {
  delete (QAnimationDriver*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:142
// [-2] void advance()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7advanceEv(void *this_) {
  ((QAnimationDriver*)this_)->advance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:144
// [-2] void install()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7installEv(void *this_) {
  ((QAnimationDriver*)this_)->install();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:145
// [-2] void uninstall()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver9uninstallEv(void *this_) {
  ((QAnimationDriver*)this_)->uninstall();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:147
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QAnimationDriver9isRunningEv(void *this_) {
  return (bool)((QAnimationDriver*)this_)->isRunning();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:149
// [8] qint64 elapsed()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QAnimationDriver7elapsedEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->elapsed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:152
// [-2] void setStartTime(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver12setStartTimeEx(void *this_, qint64 startTime) {
  ((QAnimationDriver*)this_)->setStartTime(startTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:153
// [8] qint64 startTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QAnimationDriver9startTimeEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->startTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:156
// [-2] void started()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7startedEv(void *this_) {
  ((QAnimationDriver*)this_)->started();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:157
// [-2] void stopped()
extern "C" Q_DECL_EXPORT
void C_ZN16QAnimationDriver7stoppedEv(void *this_) {
  ((QAnimationDriver*)this_)->stopped();
}

//  main block end
