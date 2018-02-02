//  header block begin
// /usr/include/qt/QtCore/qabstractanimation.h
#include <qabstractanimation.h>
#include <QtCore>

// QAnimationDriver is pure virtual: false
// QAnimationDriver has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:161
// [-2] void advanceAnimation(qint64)
extern "C"
void* callback_ZN16QAnimationDriver16advanceAnimationEx_fnptr = 0;
extern "C" void set_callback_ZN16QAnimationDriver16advanceAnimationEx(void*cbfn)
{ callback_ZN16QAnimationDriver16advanceAnimationEx_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:162
// [-2] void start()
extern "C"
void* callback_ZN16QAnimationDriver5startEv_fnptr = 0;
extern "C" void set_callback_ZN16QAnimationDriver5startEv(void*cbfn)
{ callback_ZN16QAnimationDriver5startEv_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:163
// [-2] void stop()
extern "C"
void* callback_ZN16QAnimationDriver4stopEv_fnptr = 0;
extern "C" void set_callback_ZN16QAnimationDriver4stopEv(void*cbfn)
{ callback_ZN16QAnimationDriver4stopEv_fnptr = cbfn; }

class MyQAnimationDriver : public QAnimationDriver {
public:
  virtual ~MyQAnimationDriver() {}
// void QAnimationDriver(class QObject *)
MyQAnimationDriver(QObject * parent) : QAnimationDriver(parent) {}
// void advanceAnimation(qint64)
  virtual void advanceAnimation(qint64 timeStep) {
    auto fnptr = ((void (*)(void* , qint64))(callback_ZN16QAnimationDriver16advanceAnimationEx_fnptr));
    if (fnptr != 0) {
      fnptr(this , timeStep);
    }
    QAnimationDriver::advanceAnimation(timeStep);
  }
// void start()
  virtual void start() {
    auto fnptr = ((void (*)(void* ))(callback_ZN16QAnimationDriver5startEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    QAnimationDriver::start();
  }
// void stop()
  virtual void stop() {
    auto fnptr = ((void (*)(void* ))(callback_ZN16QAnimationDriver4stopEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    QAnimationDriver::stop();
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:135
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QAnimationDriver10metaObjectEv(void *this_) {
  return (void*)((QAnimationDriver*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:139
// [-2] void QAnimationDriver(class QObject *)
extern "C"
void* C_ZN16QAnimationDriverC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationDriver*)(0);
  return  new MyQAnimationDriver(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:140
// [-2] void ~QAnimationDriver()
extern "C"
void C_ZN16QAnimationDriverD2Ev(void *this_) {
  delete (QAnimationDriver*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:142
// [-2] void advance()
extern "C"
void C_ZN16QAnimationDriver7advanceEv(void *this_) {
  ((QAnimationDriver*)this_)->advance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:144
// [-2] void install()
extern "C"
void C_ZN16QAnimationDriver7installEv(void *this_) {
  ((QAnimationDriver*)this_)->install();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:145
// [-2] void uninstall()
extern "C"
void C_ZN16QAnimationDriver9uninstallEv(void *this_) {
  ((QAnimationDriver*)this_)->uninstall();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:147
// [1] bool isRunning()
extern "C"
bool C_ZNK16QAnimationDriver9isRunningEv(void *this_) {
  return (bool)((QAnimationDriver*)this_)->isRunning();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:149
// [8] qint64 elapsed()
extern "C"
qint64 C_ZNK16QAnimationDriver7elapsedEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->elapsed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:152
// [-2] void setStartTime(qint64)
extern "C"
void C_ZN16QAnimationDriver12setStartTimeEx(void *this_, qint64 startTime) {
  ((QAnimationDriver*)this_)->setStartTime(startTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:153
// [8] qint64 startTime()
extern "C"
qint64 C_ZNK16QAnimationDriver9startTimeEv(void *this_) {
  return (qint64)((QAnimationDriver*)this_)->startTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:156
// [-2] void started()
extern "C"
void C_ZN16QAnimationDriver7startedEv(void *this_) {
  ((QAnimationDriver*)this_)->started();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractanimation.h:157
// [-2] void stopped()
extern "C"
void C_ZN16QAnimationDriver7stoppedEv(void *this_) {
  ((QAnimationDriver*)this_)->stopped();
}
//  main block end
