// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qobject.h
// dst-file: /src/core/qobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qobject.h>


#include <qobjectdefs.h>
#include <qlist.h>
#include <qbytearray.h>
#include <qvariant.h>
#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 561, column 17>
//   // proto:  void QSignalBlocker::unblock();
if (true) {
  auto f = [](QSignalBlocker flythis) {
    ((QSignalBlocker*)0)->unblock();
    flythis.unblock();
  };
  if (f == nullptr){}
}
// _ZN14QSignalBlocker7unblockEv unblock()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 552, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject & o);
if (true) {
  auto f = [](QObject & arg1) {
    new QSignalBlocker(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 551, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject * o);
if (true) {
  auto f = [](QObject * arg1) {
    new QSignalBlocker(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 560, column 17>
//   // proto:  void QSignalBlocker::reblock();
if (true) {
  auto f = [](QSignalBlocker flythis) {
    ((QSignalBlocker*)0)->reblock();
    flythis.reblock();
  };
  if (f == nullptr){}
}
// _ZN14QSignalBlocker7reblockEv reblock()
//   // proto:  void QSignalBlocker::~QSignalBlocker();
if (true) {
  delete ((QSignalBlocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 421, column 17>
//   // proto:  bool QObject::inherits(const char * classname);
if (true) {
  auto f = [](QObject flythis, const char * arg1) {
    ((QObject*)0)->inherits(arg1);
    flythis.inherits(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QObject8inheritsEPKc inherits(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 203, column 36>
//   // proto:  QMetaObject::Connection QObject::connect(const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type);
if (true) {
  auto f = [](QObject flythis, const QObject * arg1, const char * arg2, const char * arg3, Qt::ConnectionType arg4) {
    ((QObject*)0)->connect(arg1, arg2, arg3, arg4);
    flythis.connect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 137, column 17>
//   // proto:  bool QObject::isWidgetType();
if (true) {
  auto f = [](QObject flythis) {
    ((QObject*)0)->isWidgetType();
    flythis.isWidgetType();
  };
  if (f == nullptr){}
}
// _ZNK7QObject12isWidgetTypeEv isWidgetType()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 360, column 17>
//   // proto:  bool QObject::disconnect(const QObject * receiver, const char * member);
if (true) {
  auto f = [](QObject flythis, const QObject * arg1, const char * arg2) {
    ((QObject*)0)->disconnect(arg1, arg2);
    flythis.disconnect(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK7QObject10disconnectEPKS_PKc disconnect(const class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 190, column 31>
//   // proto:  const QObjectList & QObject::children();
if (true) {
  auto f = [](QObject flythis) {
    ((QObject*)0)->children();
    flythis.children();
  };
  if (f == nullptr){}
}
// _ZNK7QObject8childrenEv children()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 138, column 17>
//   // proto:  bool QObject::isWindowType();
if (true) {
  auto f = [](QObject flythis) {
    ((QObject*)0)->isWindowType();
    flythis.isWindowType();
  };
  if (f == nullptr){}
}
// _ZNK7QObject12isWindowTypeEv isWindowType()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 357, column 17>
//   // proto:  bool QObject::disconnect(const char * signal, const QObject * receiver, const char * member);
if (true) {
  auto f = [](QObject flythis, const char * arg1, const QObject * arg2, const char * arg3) {
    ((QObject*)0)->disconnect(arg1, arg2, arg3);
    flythis.disconnect(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK7QObject10disconnectEPKcPKS_S1_ disconnect(const char *, const class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 140, column 17>
//   // proto:  bool QObject::signalsBlocked();
if (true) {
  auto f = [](QObject flythis) {
    ((QObject*)0)->signalsBlocked();
    flythis.signalsBlocked();
  };
  if (f == nullptr){}
}
// _ZNK7QObject14signalsBlockedEv signalsBlocked()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 419, column 21>
//   // proto:  QObject * QObject::parent();
if (true) {
  auto f = [](QObject flythis) {
    ((QObject*)0)->parent();
    flythis.parent();
  };
  if (f == nullptr){}
}
// _ZNK7QObject6parentEv parent()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSignalBlocker_Class_Size()
{
  return sizeof(QSignalBlocker);
}

extern "C"
int QObjectData_Class_Size()
{
  return sizeof(QObjectData);
}

extern "C"
int QObjectUserData_Class_Size()
{
  return sizeof(QObjectUserData);
}

extern "C"
int QObject_Class_Size()
{
  return sizeof(QObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 561, column 17>
//   // proto:  void QSignalBlocker::unblock();
// _ZN14QSignalBlocker7unblockEv unblock()
extern "C"
void
C_ZN14QSignalBlocker7unblockEv(void *qthis) {
  ((QSignalBlocker*)qthis)->unblock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 552, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject & o);
extern "C"
QSignalBlocker*
C_ZN14QSignalBlockerC2ER7QObject(QObject* arg1) {
  auto ret = new QSignalBlocker(*((QObject*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 551, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject * o);
extern "C"
QSignalBlocker*
C_ZN14QSignalBlockerC2EP7QObject(QObject * arg1) {
  auto ret = new QSignalBlocker(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 560, column 17>
//   // proto:  void QSignalBlocker::reblock();
// _ZN14QSignalBlocker7reblockEv reblock()
extern "C"
void
C_ZN14QSignalBlocker7reblockEv(void *qthis) {
  ((QSignalBlocker*)qthis)->reblock();
}
//   // proto:  void QSignalBlocker::~QSignalBlocker();
extern "C"
void C_ZN14QSignalBlockerD2Ev(void *qthis) {
  delete (QSignalBlocker*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 102, column 18>
//   // proto:  QMetaObject * QObjectData::dynamicMetaObject();
// _ZNK11QObjectData17dynamicMetaObjectEv dynamicMetaObject()
extern "C"
void*
C_ZNK11QObjectData17dynamicMetaObjectEv(void *qthis) {
  auto ret =
  ((QObjectData*)qthis)->dynamicMetaObject();
  return (void*)ret;
}
//   // proto:  void QObjectData::~QObjectData();
extern "C"
void C_ZN11QObjectDataD2Ev(void *qthis) {
  delete (QObjectData*)qthis;
}
//   // proto:  void QObjectUserData::~QObjectUserData();
extern "C"
void C_ZN15QObjectUserDataD2Ev(void *qthis) {
  delete (QObjectUserData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 421, column 17>
//   // proto:  bool QObject::inherits(const char * classname);
// _ZNK7QObject8inheritsEPKc inherits(const char *)
extern "C"
bool
C_ZNK7QObject8inheritsEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QObject*)qthis)->inherits(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 415, column 10>
//   // proto:  void QObject::destroyed(QObject * );
// _ZN7QObject9destroyedEPS_ destroyed(class QObject *)
extern "C"
void
C_ZN7QObject9destroyedEPS_(void *qthis,
QObject * arg1) {
  ((QObject*)qthis)->destroyed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 144, column 10>
//   // proto:  void QObject::moveToThread(QThread * thread);
// _ZN7QObject12moveToThreadEP7QThread moveToThread(class QThread *)
extern "C"
void
C_ZN7QObject12moveToThreadEP7QThread(void *qthis,
QThread * arg1) {
  ((QObject*)qthis)->moveToThread(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 194, column 10>
//   // proto:  void QObject::removeEventFilter(QObject * );
// _ZN7QObject17removeEventFilterEPS_ removeEventFilter(class QObject *)
extern "C"
void
C_ZN7QObject17removeEventFilterEPS_(void *qthis,
QObject * arg1) {
  ((QObject*)qthis)->removeEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 399, column 10>
//   // proto:  void QObject::dumpObjectTree();
// _ZN7QObject14dumpObjectTreeEv dumpObjectTree()
extern "C"
void
C_ZN7QObject14dumpObjectTreeEv(void *qthis) {
  ((QObject*)qthis)->dumpObjectTree();
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 203, column 36>
//   // proto:  QMetaObject::Connection QObject::connect(const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type);
// _ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
extern "C"
QMetaObject::Connection*
C_ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE(void *qthis,
const QObject * arg1,
const char * arg2,
const char * arg3,
Qt::ConnectionType* arg4) {
  auto ret =
  ((QObject*)qthis)->connect(arg1,
arg2,
arg3,
*((Qt::ConnectionType*)arg4));
  return new QMetaObject::Connection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 117, column 18>
//   // proto:  bool QObject::eventFilter(QObject * , QEvent * );
// _ZN7QObject11eventFilterEPS_P6QEvent eventFilter(class QObject *, class QEvent *)
extern "C"
bool
C_ZN7QObject11eventFilterEPS_P6QEvent(void *qthis,
QObject * arg1,
QEvent * arg2) {
  auto ret =
  ((QObject*)qthis)->eventFilter(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 410, column 10>
//   // proto:  void QObject::setUserData(uint id, QObjectUserData * data);
// _ZN7QObject11setUserDataEjP15QObjectUserData setUserData(uint, class QObjectUserData *)
extern "C"
void
C_ZN7QObject11setUserDataEjP15QObjectUserData(void *qthis,
uint arg1,
QObjectUserData * arg2) {
  ((QObject*)qthis)->setUserData(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 355, column 17>
//   // proto: static bool QObject::disconnect(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & member);
// _ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_ disconnect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &)
extern "C"
bool
C_ZN7QObject10disconnectEPKS_RK11QMetaMethodS1_S4_(const QObject * arg1,
const QMetaMethod* arg2,
const QObject * arg3,
const QMetaMethod* arg4) {
  auto ret =
  QObject::disconnect(arg1,
*((const QMetaMethod*)arg2),
arg3,
*((const QMetaMethod*)arg4));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 116, column 18>
//   // proto:  bool QObject::event(QEvent * );
// _ZN7QObject5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN7QObject5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QObject*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 405, column 23>
//   // proto:  QList<QByteArray> QObject::dynamicPropertyNames();
// _ZNK7QObject20dynamicPropertyNamesEv dynamicPropertyNames()
extern "C"
QList<QByteArray>*
C_ZNK7QObject20dynamicPropertyNamesEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->dynamicPropertyNames();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 196, column 36>
//   // proto: static QMetaObject::Connection QObject::connect(const QObject * sender, const char * signal, const QObject * receiver, const char * member, Qt::ConnectionType );
// _ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE connect(const class QObject *, const char *, const class QObject *, const char *, Qt::ConnectionType)
extern "C"
QMetaObject::Connection*
C_ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(const QObject * arg1,
const char * arg2,
const QObject * arg3,
const char * arg4,
Qt::ConnectionType* arg5) {
  auto ret =
  QObject::connect(arg1,
arg2,
arg3,
arg4,
*((Qt::ConnectionType*)arg5));
  return new QMetaObject::Connection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 137, column 17>
//   // proto:  bool QObject::isWidgetType();
// _ZNK7QObject12isWidgetTypeEv isWidgetType()
extern "C"
bool
C_ZNK7QObject12isWidgetTypeEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->isWidgetType();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 404, column 14>
//   // proto:  QVariant QObject::property(const char * name);
// _ZNK7QObject8propertyEPKc property(const char *)
extern "C"
QVariant*
C_ZNK7QObject8propertyEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QObject*)qthis)->property(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 143, column 14>
//   // proto:  QThread * QObject::thread();
// _ZNK7QObject6threadEv thread()
extern "C"
void*
C_ZNK7QObject6threadEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->thread();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 108, column 5>
//   // proto:  const QMetaObject * QObject::metaObject();
// _ZNK7QObject10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QObject10metaObjectEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 192, column 10>
//   // proto:  void QObject::setParent(QObject * );
// _ZN7QObject9setParentEPS_ setParent(class QObject *)
extern "C"
void
C_ZN7QObject9setParentEPS_(void *qthis,
QObject * arg1) {
  ((QObject*)qthis)->setParent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 146, column 9>
//   // proto:  int QObject::startTimer(int interval, Qt::TimerType timerType);
// _ZN7QObject10startTimerEiN2Qt9TimerTypeE startTimer(int, Qt::TimerType)
extern "C"
int
C_ZN7QObject10startTimerEiN2Qt9TimerTypeE(void *qthis,
int arg1,
Qt::TimerType* arg2) {
  auto ret =
  ((QObject*)qthis)->startTimer(arg1,
*((Qt::TimerType*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 362, column 17>
//   // proto: static bool QObject::disconnect(const QMetaObject::Connection & );
// _ZN7QObject10disconnectERKN11QMetaObject10ConnectionE disconnect(const struct QMetaObject::Connection &)
extern "C"
bool
C_ZN7QObject10disconnectERKN11QMetaObject10ConnectionE(const QMetaObject::Connection* arg1) {
  auto ret =
  QObject::disconnect(*((const QMetaObject::Connection*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 360, column 17>
//   // proto:  bool QObject::disconnect(const QObject * receiver, const char * member);
// _ZNK7QObject10disconnectEPKS_PKc disconnect(const class QObject *, const char *)
extern "C"
bool
C_ZNK7QObject10disconnectEPKS_PKc(void *qthis,
const QObject * arg1,
const char * arg2) {
  auto ret =
  ((QObject*)qthis)->disconnect(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 190, column 31>
//   // proto:  const QObjectList & QObject::children();
// _ZNK7QObject8childrenEv children()
extern "C"
QList<QObject *>*
C_ZNK7QObject8childrenEv(void *qthis) {
  auto& ret =
  ((QObject*)qthis)->children();
  return new QList<QObject *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 138, column 17>
//   // proto:  bool QObject::isWindowType();
// _ZNK7QObject12isWindowTypeEv isWindowType()
extern "C"
bool
C_ZNK7QObject12isWindowTypeEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->isWindowType();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 357, column 17>
//   // proto:  bool QObject::disconnect(const char * signal, const QObject * receiver, const char * member);
// _ZNK7QObject10disconnectEPKcPKS_S1_ disconnect(const char *, const class QObject *, const char *)
extern "C"
bool
C_ZNK7QObject10disconnectEPKcPKS_S1_(void *qthis,
const char * arg1,
const QObject * arg2,
const char * arg3) {
  auto ret =
  ((QObject*)qthis)->disconnect(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 425, column 10>
//   // proto:  void QObject::deleteLater();
// _ZN7QObject11deleteLaterEv deleteLater()
extern "C"
void
C_ZN7QObject11deleteLaterEv(void *qthis) {
  ((QObject*)qthis)->deleteLater();
}
//   // proto:  void QObject::~QObject();
extern "C"
void C_ZN7QObjectD2Ev(void *qthis) {
  delete (QObject*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 113, column 26>
//   // proto:  void QObject::QObject(QObject * parent);
extern "C"
QObject*
C_ZN7QObjectC2EPS_(QObject * arg1) {
  auto ret = new QObject(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 134, column 13>
//   // proto:  QString QObject::objectName();
// _ZNK7QObject10objectNameEv objectName()
extern "C"
QString*
C_ZNK7QObject10objectNameEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->objectName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 403, column 10>
//   // proto:  bool QObject::setProperty(const char * name, const QVariant & value);
// _ZN7QObject11setPropertyEPKcRK8QVariant setProperty(const char *, const class QVariant &)
extern "C"
bool
C_ZN7QObject11setPropertyEPKcRK8QVariant(void *qthis,
const char * arg1,
const QVariant* arg2) {
  auto ret =
  ((QObject*)qthis)->setProperty(arg1,
*((const QVariant*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 353, column 17>
//   // proto: static bool QObject::disconnect(const QObject * sender, const char * signal, const QObject * receiver, const char * member);
// _ZN7QObject10disconnectEPKS_PKcS1_S3_ disconnect(const class QObject *, const char *, const class QObject *, const char *)
extern "C"
bool
C_ZN7QObject10disconnectEPKS_PKcS1_S3_(const QObject * arg1,
const char * arg2,
const QObject * arg3,
const char * arg4) {
  auto ret =
  QObject::disconnect(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 140, column 17>
//   // proto:  bool QObject::signalsBlocked();
// _ZNK7QObject14signalsBlockedEv signalsBlocked()
extern "C"
bool
C_ZNK7QObject14signalsBlockedEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->signalsBlocked();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 409, column 17>
//   // proto: static uint QObject::registerUserData();
// _ZN7QObject16registerUserDataEv registerUserData()
extern "C"
unsigned int
C_ZN7QObject16registerUserDataEv() {
  auto ret =
  QObject::registerUserData();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 411, column 22>
//   // proto:  QObjectUserData * QObject::userData(uint id);
// _ZNK7QObject8userDataEj userData(uint)
extern "C"
void*
C_ZNK7QObject8userDataEj(void *qthis,
uint arg1) {
  auto ret =
  ((QObject*)qthis)->userData(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 419, column 21>
//   // proto:  QObject * QObject::parent();
// _ZNK7QObject6parentEv parent()
extern "C"
void*
C_ZNK7QObject6parentEv(void *qthis) {
  auto ret =
  ((QObject*)qthis)->parent();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 193, column 10>
//   // proto:  void QObject::installEventFilter(QObject * );
// _ZN7QObject18installEventFilterEPS_ installEventFilter(class QObject *)
extern "C"
void
C_ZN7QObject18installEventFilterEPS_(void *qthis,
QObject * arg1) {
  ((QObject*)qthis)->installEventFilter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 199, column 36>
//   // proto: static QMetaObject::Connection QObject::connect(const QObject * sender, const QMetaMethod & signal, const QObject * receiver, const QMetaMethod & method, Qt::ConnectionType type);
// _ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE connect(const class QObject *, const class QMetaMethod &, const class QObject *, const class QMetaMethod &, Qt::ConnectionType)
extern "C"
QMetaObject::Connection*
C_ZN7QObject7connectEPKS_RK11QMetaMethodS1_S4_N2Qt14ConnectionTypeE(const QObject * arg1,
const QMetaMethod* arg2,
const QObject * arg3,
const QMetaMethod* arg4,
Qt::ConnectionType* arg5) {
  auto ret =
  QObject::connect(arg1,
*((const QMetaMethod*)arg2),
arg3,
*((const QMetaMethod*)arg4),
*((Qt::ConnectionType*)arg5));
  return new QMetaObject::Connection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 141, column 10>
//   // proto:  bool QObject::blockSignals(bool b);
// _ZN7QObject12blockSignalsEb blockSignals(_Bool)
extern "C"
bool
C_ZN7QObject12blockSignalsEb(void *qthis,
bool arg1) {
  auto ret =
  ((QObject*)qthis)->blockSignals(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 135, column 10>
//   // proto:  void QObject::setObjectName(const QString & name);
// _ZN7QObject13setObjectNameERK7QString setObjectName(const class QString &)
extern "C"
void
C_ZN7QObject13setObjectNameERK7QString(void *qthis,
const QString* arg1) {
  ((QObject*)qthis)->setObjectName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 400, column 10>
//   // proto:  void QObject::dumpObjectInfo();
// _ZN7QObject14dumpObjectInfoEv dumpObjectInfo()
extern "C"
void
C_ZN7QObject14dumpObjectInfoEv(void *qthis) {
  ((QObject*)qthis)->dumpObjectInfo();
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 147, column 10>
//   // proto:  void QObject::killTimer(int id);
// _ZN7QObject9killTimerEi killTimer(int)
extern "C"
void
C_ZN7QObject9killTimerEi(void *qthis,
int arg1) {
  ((QObject*)qthis)->killTimer(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

