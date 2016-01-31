// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qelapsedtimer.h
// dst-file: /src/core/qelapsedtimer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qelapsedtimer.h>


#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qelapsedtimer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 53, column 22>
//   // proto:  void QElapsedTimer::QElapsedTimer();
if (true) {
  auto f = []() {
    new QElapsedTimer();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QElapsedTimer_Class_Size()
{
  return sizeof(QElapsedTimer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 62, column 10>
//   // proto:  void QElapsedTimer::start();
// _ZN13QElapsedTimer5startEv start()
extern "C"
void
C_ZN13QElapsedTimer5startEv(void *qthis) {
  ((QElapsedTimer*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 67, column 12>
//   // proto:  qint64 QElapsedTimer::nsecsElapsed();
// _ZNK13QElapsedTimer12nsecsElapsedEv nsecsElapsed()
extern "C"
long long
C_ZNK13QElapsedTimer12nsecsElapsedEv(void *qthis) {
  auto ret =
  ((QElapsedTimer*)qthis)->nsecsElapsed();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 64, column 10>
//   // proto:  void QElapsedTimer::invalidate();
// _ZN13QElapsedTimer10invalidateEv invalidate()
extern "C"
void
C_ZN13QElapsedTimer10invalidateEv(void *qthis) {
  ((QElapsedTimer*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 60, column 17>
//   // proto: static bool QElapsedTimer::isMonotonic();
// _ZN13QElapsedTimer11isMonotonicEv isMonotonic()
extern "C"
bool
C_ZN13QElapsedTimer11isMonotonicEv() {
  auto ret =
  QElapsedTimer::isMonotonic();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 53, column 22>
//   // proto:  void QElapsedTimer::QElapsedTimer();
extern "C"
QElapsedTimer*
C_ZN13QElapsedTimerC2Ev() {
  auto ret = new QElapsedTimer();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 72, column 12>
//   // proto:  qint64 QElapsedTimer::msecsTo(const QElapsedTimer & other);
// _ZNK13QElapsedTimer7msecsToERKS_ msecsTo(const class QElapsedTimer &)
extern "C"
long long
C_ZNK13QElapsedTimer7msecsToERKS_(void *qthis,
const QElapsedTimer* arg1) {
  auto ret =
  ((QElapsedTimer*)qthis)->msecsTo(*((const QElapsedTimer*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 71, column 12>
//   // proto:  qint64 QElapsedTimer::msecsSinceReference();
// _ZNK13QElapsedTimer19msecsSinceReferenceEv msecsSinceReference()
extern "C"
long long
C_ZNK13QElapsedTimer19msecsSinceReferenceEv(void *qthis) {
  auto ret =
  ((QElapsedTimer*)qthis)->msecsSinceReference();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 69, column 10>
//   // proto:  bool QElapsedTimer::hasExpired(qint64 timeout);
// _ZNK13QElapsedTimer10hasExpiredEx hasExpired(qint64)
extern "C"
bool
C_ZNK13QElapsedTimer10hasExpiredEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QElapsedTimer*)qthis)->hasExpired(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 59, column 22>
//   // proto: static QElapsedTimer::ClockType QElapsedTimer::clockType();
// _ZN13QElapsedTimer9clockTypeEv clockType()
extern "C"
QElapsedTimer::ClockType
C_ZN13QElapsedTimer9clockTypeEv() {
  auto ret =
  QElapsedTimer::clockType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 63, column 12>
//   // proto:  qint64 QElapsedTimer::restart();
// _ZN13QElapsedTimer7restartEv restart()
extern "C"
long long
C_ZN13QElapsedTimer7restartEv(void *qthis) {
  auto ret =
  ((QElapsedTimer*)qthis)->restart();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 65, column 10>
//   // proto:  bool QElapsedTimer::isValid();
// _ZNK13QElapsedTimer7isValidEv isValid()
extern "C"
bool
C_ZNK13QElapsedTimer7isValidEv(void *qthis) {
  auto ret =
  ((QElapsedTimer*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 73, column 12>
//   // proto:  qint64 QElapsedTimer::secsTo(const QElapsedTimer & other);
// _ZNK13QElapsedTimer6secsToERKS_ secsTo(const class QElapsedTimer &)
extern "C"
long long
C_ZNK13QElapsedTimer6secsToERKS_(void *qthis,
const QElapsedTimer* arg1) {
  auto ret =
  ((QElapsedTimer*)qthis)->secsTo(*((const QElapsedTimer*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qelapsedtimer.h', line 68, column 12>
//   // proto:  qint64 QElapsedTimer::elapsed();
// _ZNK13QElapsedTimer7elapsedEv elapsed()
extern "C"
long long
C_ZNK13QElapsedTimer7elapsedEv(void *qthis) {
  auto ret =
  ((QElapsedTimer*)qthis)->elapsed();
  return ret; // 0 TypeKind.LONGLONG
}
// <= ext block end

// body block begin =>
// <= body block end

