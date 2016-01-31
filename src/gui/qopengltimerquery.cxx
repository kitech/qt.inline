// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qopengltimerquery.h
// dst-file: /src/gui/qopengltimerquery.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopengltimerquery.h>


#include <qopenglext.h>
#include <qvector.h>
#include <qimage.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qopengltimerquery_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLTimerQuery_Class_Size()
{
  return sizeof(QOpenGLTimerQuery);
}

extern "C"
int QOpenGLTimeMonitor_Class_Size()
{
  return sizeof(QOpenGLTimeMonitor);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 56, column 10>
//   // proto:  bool QOpenGLTimerQuery::create();
// _ZN17QOpenGLTimerQuery6createEv create()
extern "C"
bool
C_ZN17QOpenGLTimerQuery6createEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 58, column 10>
//   // proto:  bool QOpenGLTimerQuery::isCreated();
// _ZNK17QOpenGLTimerQuery9isCreatedEv isCreated()
extern "C"
bool
C_ZNK17QOpenGLTimerQuery9isCreatedEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->isCreated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 62, column 10>
//   // proto:  void QOpenGLTimerQuery::end();
// _ZN17QOpenGLTimerQuery3endEv end()
extern "C"
void
C_ZN17QOpenGLTimerQuery3endEv(void *qthis) {
  ((QOpenGLTimerQuery*)qthis)->end();
}
//   // proto:  void QOpenGLTimerQuery::~QOpenGLTimerQuery();
extern "C"
void C_ZN17QOpenGLTimerQueryD2Ev(void *qthis) {
  delete (QOpenGLTimerQuery*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 61, column 10>
//   // proto:  void QOpenGLTimerQuery::begin();
// _ZN17QOpenGLTimerQuery5beginEv begin()
extern "C"
void
C_ZN17QOpenGLTimerQuery5beginEv(void *qthis) {
  ((QOpenGLTimerQuery*)qthis)->begin();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 53, column 14>
//   // proto:  void QOpenGLTimerQuery::QOpenGLTimerQuery(QObject * parent);
extern "C"
QOpenGLTimerQuery*
C_ZN17QOpenGLTimerQueryC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLTimerQuery(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 57, column 10>
//   // proto:  void QOpenGLTimerQuery::destroy();
// _ZN17QOpenGLTimerQuery7destroyEv destroy()
extern "C"
void
C_ZN17QOpenGLTimerQuery7destroyEv(void *qthis) {
  ((QOpenGLTimerQuery*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 66, column 14>
//   // proto:  GLuint64 QOpenGLTimerQuery::waitForResult();
// _ZNK17QOpenGLTimerQuery13waitForResultEv waitForResult()
extern "C"
unsigned long
C_ZNK17QOpenGLTimerQuery13waitForResultEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->waitForResult();
  return ret; // 0 TypeKind.ULONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 59, column 12>
//   // proto:  GLuint QOpenGLTimerQuery::objectId();
// _ZNK17QOpenGLTimerQuery8objectIdEv objectId()
extern "C"
unsigned int
C_ZNK17QOpenGLTimerQuery8objectIdEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->objectId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 63, column 14>
//   // proto:  GLuint64 QOpenGLTimerQuery::waitForTimestamp();
// _ZNK17QOpenGLTimerQuery16waitForTimestampEv waitForTimestamp()
extern "C"
unsigned long
C_ZNK17QOpenGLTimerQuery16waitForTimestampEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->waitForTimestamp();
  return ret; // 0 TypeKind.ULONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 50, column 5>
//   // proto:  const QMetaObject * QOpenGLTimerQuery::metaObject();
// _ZNK17QOpenGLTimerQuery10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QOpenGLTimerQuery10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 64, column 10>
//   // proto:  void QOpenGLTimerQuery::recordTimestamp();
// _ZN17QOpenGLTimerQuery15recordTimestampEv recordTimestamp()
extern "C"
void
C_ZN17QOpenGLTimerQuery15recordTimestampEv(void *qthis) {
  ((QOpenGLTimerQuery*)qthis)->recordTimestamp();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 65, column 10>
//   // proto:  bool QOpenGLTimerQuery::isResultAvailable();
// _ZNK17QOpenGLTimerQuery17isResultAvailableEv isResultAvailable()
extern "C"
bool
C_ZNK17QOpenGLTimerQuery17isResultAvailableEv(void *qthis) {
  auto ret =
  ((QOpenGLTimerQuery*)qthis)->isResultAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 84, column 10>
//   // proto:  void QOpenGLTimeMonitor::setSampleCount(int sampleCount);
// _ZN18QOpenGLTimeMonitor14setSampleCountEi setSampleCount(int)
extern "C"
void
C_ZN18QOpenGLTimeMonitor14setSampleCountEi(void *qthis,
int arg1) {
  ((QOpenGLTimeMonitor*)qthis)->setSampleCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 85, column 9>
//   // proto:  int QOpenGLTimeMonitor::sampleCount();
// _ZNK18QOpenGLTimeMonitor11sampleCountEv sampleCount()
extern "C"
int
C_ZNK18QOpenGLTimeMonitor11sampleCountEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->sampleCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 88, column 10>
//   // proto:  void QOpenGLTimeMonitor::destroy();
// _ZN18QOpenGLTimeMonitor7destroyEv destroy()
extern "C"
void
C_ZN18QOpenGLTimeMonitor7destroyEv(void *qthis) {
  ((QOpenGLTimeMonitor*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 87, column 10>
//   // proto:  bool QOpenGLTimeMonitor::create();
// _ZN18QOpenGLTimeMonitor6createEv create()
extern "C"
bool
C_ZN18QOpenGLTimeMonitor6createEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QOpenGLTimeMonitor::~QOpenGLTimeMonitor();
extern "C"
void C_ZN18QOpenGLTimeMonitorD2Ev(void *qthis) {
  delete (QOpenGLTimeMonitor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 94, column 10>
//   // proto:  bool QOpenGLTimeMonitor::isResultAvailable();
// _ZNK18QOpenGLTimeMonitor17isResultAvailableEv isResultAvailable()
extern "C"
bool
C_ZNK18QOpenGLTimeMonitor17isResultAvailableEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->isResultAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 97, column 23>
//   // proto:  QVector<GLuint64> QOpenGLTimeMonitor::waitForIntervals();
// _ZNK18QOpenGLTimeMonitor16waitForIntervalsEv waitForIntervals()
extern "C"
QVector<unsigned long>*
C_ZNK18QOpenGLTimeMonitor16waitForIntervalsEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->waitForIntervals();
  return new QVector<unsigned long>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 90, column 21>
//   // proto:  QVector<GLuint> QOpenGLTimeMonitor::objectIds();
// _ZNK18QOpenGLTimeMonitor9objectIdsEv objectIds()
extern "C"
QVector<unsigned int>*
C_ZNK18QOpenGLTimeMonitor9objectIdsEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->objectIds();
  return new QVector<unsigned int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 92, column 9>
//   // proto:  int QOpenGLTimeMonitor::recordSample();
// _ZN18QOpenGLTimeMonitor12recordSampleEv recordSample()
extern "C"
int
C_ZN18QOpenGLTimeMonitor12recordSampleEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->recordSample();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 99, column 10>
//   // proto:  void QOpenGLTimeMonitor::reset();
// _ZN18QOpenGLTimeMonitor5resetEv reset()
extern "C"
void
C_ZN18QOpenGLTimeMonitor5resetEv(void *qthis) {
  ((QOpenGLTimeMonitor*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 81, column 14>
//   // proto:  void QOpenGLTimeMonitor::QOpenGLTimeMonitor(QObject * parent);
extern "C"
QOpenGLTimeMonitor*
C_ZN18QOpenGLTimeMonitorC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLTimeMonitor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 96, column 23>
//   // proto:  QVector<GLuint64> QOpenGLTimeMonitor::waitForSamples();
// _ZNK18QOpenGLTimeMonitor14waitForSamplesEv waitForSamples()
extern "C"
QVector<unsigned long>*
C_ZNK18QOpenGLTimeMonitor14waitForSamplesEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->waitForSamples();
  return new QVector<unsigned long>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 89, column 10>
//   // proto:  bool QOpenGLTimeMonitor::isCreated();
// _ZNK18QOpenGLTimeMonitor9isCreatedEv isCreated()
extern "C"
bool
C_ZNK18QOpenGLTimeMonitor9isCreatedEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->isCreated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopengltimerquery.h', line 78, column 5>
//   // proto:  const QMetaObject * QOpenGLTimeMonitor::metaObject();
// _ZNK18QOpenGLTimeMonitor10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QOpenGLTimeMonitor10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLTimeMonitor*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QOpenGLTimerQuery_SlotProxy here
class QOpenGLTimerQuery_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLTimerQuery_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QOpenGLTimerQuery_SlotProxy* QOpenGLTimerQuery_SlotProxy_new()
  {
    return new QOpenGLTimerQuery_SlotProxy();
  }
};

// QOpenGLTimeMonitor_SlotProxy here
class QOpenGLTimeMonitor_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLTimeMonitor_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopengltimerquery.moc"

extern "C" {
  QOpenGLTimeMonitor_SlotProxy* QOpenGLTimeMonitor_SlotProxy_new()
  {
    return new QOpenGLTimeMonitor_SlotProxy();
  }
};

// <= body block end

