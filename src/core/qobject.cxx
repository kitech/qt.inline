#include <qobjectdefs.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qobject.h
// dst-file: /src/core/qobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qobject.h>

extern "C" {

int QSignalBlocker_Class_Size()
{
  return sizeof(QSignalBlocker);
}

int QObjectData_Class_Size()
{
  return sizeof(QObjectData);
}

int QObjectUserData_Class_Size()
{
  return sizeof(QObjectUserData);
}

int QObject_Class_Size()
{
  return sizeof(QObject);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 561, column 17>
//   // proto:  void QSignalBlocker::unblock();
if (false) {
  auto f = []() {
    ((QSignalBlocker*)0)->unblock();
  };
}
// _ZN14QSignalBlocker7unblockEv unblock()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 552, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject & o);
if (false) {
  auto f = [](QObject & arg1) {
    new QSignalBlocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 551, column 21>
//   // proto:  void QSignalBlocker::QSignalBlocker(QObject * o);
if (false) {
  auto f = [](QObject * arg1) {
    new QSignalBlocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 560, column 17>
//   // proto:  void QSignalBlocker::reblock();
if (false) {
  auto f = []() {
    ((QSignalBlocker*)0)->reblock();
  };
}
// _ZN14QSignalBlocker7reblockEv reblock()
//   // proto:  void QSignalBlocker::~QSignalBlocker();
if (false) {
  delete ((QSignalBlocker*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 556, column 12>
//   // proto:  void QSignalBlocker::QSignalBlocker(QSignalBlocker && other);
if (false) {
  auto f = [](QSignalBlocker && arg1) {
      // new QSignalBlocker(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 421, column 17>
//   // proto:  bool QObject::inherits(const char * classname);
if (false) {
  auto f = [](const char * arg1) {
    ((QObject*)0)->inherits(arg1);
  };
}
// _ZNK7QObject8inheritsEPKc inherits(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 203, column 36>
//   // proto:  QMetaObject::Connection QObject::connect(const QObject * sender, const char * signal, const char * member, Qt::ConnectionType type);
if (false) {
  auto f = [](const QObject * arg1, const char * arg2, const char * arg3, Qt::ConnectionType arg4) {
    ((QObject*)0)->connect(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QObject7connectEPKS_PKcS3_N2Qt14ConnectionTypeE connect(const class QObject *, const char *, const char *, Qt::ConnectionType)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 137, column 17>
//   // proto:  bool QObject::isWidgetType();
if (false) {
  auto f = []() {
    ((QObject*)0)->isWidgetType();
  };
}
// _ZNK7QObject12isWidgetTypeEv isWidgetType()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 360, column 17>
//   // proto:  bool QObject::disconnect(const QObject * receiver, const char * member);
if (false) {
  auto f = [](const QObject * arg1, const char * arg2) {
    ((QObject*)0)->disconnect(arg1, arg2);
  };
}
// _ZNK7QObject10disconnectEPKS_PKc disconnect(const class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 190, column 31>
//   // proto:  const QObjectList & QObject::children();
if (false) {
  auto f = []() {
    ((QObject*)0)->children();
  };
}
// _ZNK7QObject8childrenEv children()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 138, column 17>
//   // proto:  bool QObject::isWindowType();
if (false) {
  auto f = []() {
    ((QObject*)0)->isWindowType();
  };
}
// _ZNK7QObject12isWindowTypeEv isWindowType()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 357, column 17>
//   // proto:  bool QObject::disconnect(const char * signal, const QObject * receiver, const char * member);
if (false) {
  auto f = [](const char * arg1, const QObject * arg2, const char * arg3) {
    ((QObject*)0)->disconnect(arg1, arg2, arg3);
  };
}
// _ZNK7QObject10disconnectEPKcPKS_S1_ disconnect(const char *, const class QObject *, const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 140, column 17>
//   // proto:  bool QObject::signalsBlocked();
if (false) {
  auto f = []() {
    ((QObject*)0)->signalsBlocked();
  };
}
// _ZNK7QObject14signalsBlockedEv signalsBlocked()
// <SourceLocation file '/usr/include/qt/QtCore/qobject.h', line 419, column 21>
//   // proto:  QObject * QObject::parent();
if (false) {
  auto f = []() {
    ((QObject*)0)->parent();
  };
}
// _ZNK7QObject6parentEv parent()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

