// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qprocess.h
// dst-file: /src/core/qprocess.cxx
//

// header block begin =>
#include <qprocess.h>

extern "C" {

int QProcess_Class_Size()
{
  return sizeof(QProcess);
}

// ~QProcess()
void dedtor_ZN8QProcessD0Ev(QProcess* that)
{
  QProcess* rthis = (QProcess*)that;
  delete rthis;
}

// QProcess(class QObject *)
QProcess* dector_ZN8QProcessC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QProcess) == 32, "tyszerr");
  QProcess* rthis = new QProcess(parent);
  return rthis;
}

int QProcessEnvironment_Class_Size()
{
  return sizeof(QProcessEnvironment);
}

// ~QProcessEnvironment()
void dedtor_ZN19QProcessEnvironmentD0Ev(QProcessEnvironment* that)
{
  QProcessEnvironment* rthis = (QProcessEnvironment*)that;
  delete rthis;
}

// QProcessEnvironment(const class QProcessEnvironment &)
QProcessEnvironment* dector_ZN19QProcessEnvironmentC1ERKS_(const QProcessEnvironment & other)
{
  // static_assert(sizeof(QProcessEnvironment) == 32, "tyszerr");
  QProcessEnvironment* rthis = new QProcessEnvironment(other);
  return rthis;
}

// QProcessEnvironment()
QProcessEnvironment* dector_ZN19QProcessEnvironmentC1Ev()
{
  // static_assert(sizeof(QProcessEnvironment) == 32, "tyszerr");
  QProcessEnvironment* rthis = new QProcessEnvironment();
  return rthis;
}

  // proto:  void QProcessEnvironment::swap(QProcessEnvironment & other);
void demth_ZN19QProcessEnvironment4swapERS_(void *that, QProcessEnvironment & other)
{
  QProcessEnvironment *cthat = (QProcessEnvironment *)that;
   cthat->swap(other);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QProcess_SlotProxy here
class QProcess_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProcess_SlotProxy():QObject(){}

public slots:
  // error(class QProcess::ProcessError)
  void slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0);
public:
  void (*slot_func__ZN8QProcess5errorENS_12ProcessErrorE)(void* rsfptr, QProcess::ProcessError arg0) = NULL;
public slots:
  // finished(int, class QProcess::ExitStatus)
  void slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1);
public:
  void (*slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE)(void* rsfptr, int arg0, QProcess::ExitStatus arg1) = NULL;
public slots:
  // finished(int)
  void slot_proxy_func__ZN8QProcess8finishedEi(int arg0);
public:
  void (*slot_func__ZN8QProcess8finishedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qprocess.moc"

extern "C" {
  QProcess_SlotProxy* QProcess_SlotProxy_new()
  {
    return new QProcess_SlotProxy();
  }
};

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0) {
  if (this->slot_func__ZN8QProcess5errorENS_12ProcessErrorE != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess5errorENS_12ProcessErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess5errorENS_12ProcessErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess5errorENS_12ProcessErrorE = (decltype(that->slot_func__ZN8QProcess5errorENS_12ProcessErrorE))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(error(class QProcess::ProcessError)), that, SLOT(slot_proxy_func__ZN8QProcess5errorENS_12ProcessErrorE(QProcess::ProcessError arg0)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess5errorENS_12ProcessErrorE(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1) {
  if (this->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess8finishedEiNS_10ExitStatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE = (decltype(that->slot_func__ZN8QProcess8finishedEiNS_10ExitStatusE))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(finished(int, class QProcess::ExitStatus)), that, SLOT(slot_proxy_func__ZN8QProcess8finishedEiNS_10ExitStatusE(int arg0, QProcess::ExitStatus arg1)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess8finishedEiNS_10ExitStatusE(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QProcess_SlotProxy::slot_proxy_func__ZN8QProcess8finishedEi(int arg0) {
  if (this->slot_func__ZN8QProcess8finishedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QProcess8finishedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QProcess_SlotProxy_connect__ZN8QProcess8finishedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProcess_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QProcess8finishedEi = (decltype(that->slot_func__ZN8QProcess8finishedEi))ffifptr;
  QObject::connect((QProcess*)sender, SIGNAL(finished(int)), that, SLOT(slot_proxy_func__ZN8QProcess8finishedEi(int arg0)));
  return that;
}
extern "C"
void QProcess_SlotProxy_disconnect__ZN8QProcess8finishedEi(QProcess_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

