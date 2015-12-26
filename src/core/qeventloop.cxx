// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qeventloop.h
// dst-file: /src/core/qeventloop.cxx
//

// header block begin =>
#include <qeventloop.h>

extern "C" {

int QEventLoop_Class_Size()
{
  return sizeof(QEventLoop);
}

// QEventLoop(class QObject *)
QEventLoop* dector_ZN10QEventLoopC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QEventLoop) == 32, "tyszerr");
  QEventLoop* rthis = new QEventLoop(parent);
  return rthis;
}

// ~QEventLoop()
void dedtor_ZN10QEventLoopD0Ev(QEventLoop* that)
{
  QEventLoop* rthis = (QEventLoop*)that;
  delete rthis;
}

int QEventLoopLocker_Class_Size()
{
  return sizeof(QEventLoopLocker);
}

// QEventLoopLocker(class QThread *)
QEventLoopLocker* dector_ZN16QEventLoopLockerC1EP7QThread(QThread * thread)
{
  // static_assert(sizeof(QEventLoopLocker) == 32, "tyszerr");
  QEventLoopLocker* rthis = new QEventLoopLocker(thread);
  return rthis;
}

// QEventLoopLocker(class QEventLoop *)
QEventLoopLocker* dector_ZN16QEventLoopLockerC1EP10QEventLoop(QEventLoop * loop)
{
  // static_assert(sizeof(QEventLoopLocker) == 32, "tyszerr");
  QEventLoopLocker* rthis = new QEventLoopLocker(loop);
  return rthis;
}

// QEventLoopLocker()
QEventLoopLocker* dector_ZN16QEventLoopLockerC1Ev()
{
  // static_assert(sizeof(QEventLoopLocker) == 32, "tyszerr");
  QEventLoopLocker* rthis = new QEventLoopLocker();
  return rthis;
}

// ~QEventLoopLocker()
void dedtor_ZN16QEventLoopLockerD0Ev(QEventLoopLocker* that)
{
  QEventLoopLocker* rthis = (QEventLoopLocker*)that;
  delete rthis;
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
// <= body block end

