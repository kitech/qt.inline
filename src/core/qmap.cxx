// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qmap.h
// dst-file: /src/core/qmap.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmap.h>


// <= header block end

// main block begin =>
void __keep_qmap_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 93, column 11>
//   // proto:  QMapNodeBase::Color QMapNodeBase::color();
if (true) {
  auto f = [](QMapNodeBase flythis) {
    ((QMapNodeBase*)0)->color();
    flythis.color();
  };
  if (f == nullptr){}
}
// _ZNK12QMapNodeBase5colorEv color()
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 96, column 10>
//   // proto:  void QMapNodeBase::setParent(QMapNodeBase * pp);
if (true) {
  auto f = [](QMapNodeBase flythis, QMapNodeBase * arg1) {
    ((QMapNodeBase*)0)->setParent(arg1);
    flythis.setParent(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QMapNodeBase9setParentEPS_ setParent(struct QMapNodeBase *)
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 91, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::previousNode();
if (true) {
  auto f = [](QMapNodeBase flythis) {
    ((QMapNodeBase*)0)->previousNode();
    flythis.previousNode();
  };
  if (f == nullptr){}
}
// _ZN12QMapNodeBase12previousNodeEv previousNode()
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 94, column 10>
//   // proto:  void QMapNodeBase::setColor(QMapNodeBase::Color c);
if (true) {
  auto f = [](QMapNodeBase flythis, QMapNodeBase::Color arg1) {
    ((QMapNodeBase*)0)->setColor(arg1);
    flythis.setColor(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QMapNodeBase8setColorENS_5ColorE setColor(enum QMapNodeBase::Color)
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 89, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::nextNode();
if (true) {
  auto f = [](QMapNodeBase flythis) {
    ((QMapNodeBase*)0)->nextNode();
    flythis.nextNode();
  };
  if (f == nullptr){}
}
// _ZN12QMapNodeBase8nextNodeEv nextNode()
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 95, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::parent();
if (true) {
  auto f = [](QMapNodeBase flythis) {
    ((QMapNodeBase*)0)->parent();
    flythis.parent();
  };
  if (f == nullptr){}
}
// _ZNK12QMapNodeBase6parentEv parent()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMapDataBase_Class_Size()
{
  return sizeof(QMapDataBase);
}

extern "C"
int QMapNodeBase_Class_Size()
{
  return sizeof(QMapNodeBase);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 168, column 10>
//   // proto:  void QMapDataBase::rebalance(QMapNodeBase * x);
// _ZN12QMapDataBase9rebalanceEP12QMapNodeBase rebalance(struct QMapNodeBase *)
extern "C"
void
C_ZN12QMapDataBase9rebalanceEP12QMapNodeBase(void *qthis,
QMapNodeBase * arg1) {
  ((QMapDataBase*)qthis)->rebalance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 177, column 26>
//   // proto: static QMapDataBase * QMapDataBase::createData();
// _ZN12QMapDataBase10createDataEv createData()
extern "C"
void*
C_ZN12QMapDataBase10createDataEv() {
  auto ret =
  QMapDataBase::createData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 167, column 10>
//   // proto:  void QMapDataBase::rotateRight(QMapNodeBase * x);
// _ZN12QMapDataBase11rotateRightEP12QMapNodeBase rotateRight(struct QMapNodeBase *)
extern "C"
void
C_ZN12QMapDataBase11rotateRightEP12QMapNodeBase(void *qthis,
QMapNodeBase * arg1) {
  ((QMapDataBase*)qthis)->rotateRight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 173, column 10>
//   // proto:  void QMapDataBase::freeTree(QMapNodeBase * root, int alignment);
// _ZN12QMapDataBase8freeTreeEP12QMapNodeBasei freeTree(struct QMapNodeBase *, int)
extern "C"
void
C_ZN12QMapDataBase8freeTreeEP12QMapNodeBasei(void *qthis,
QMapNodeBase * arg1,
int arg2) {
  ((QMapDataBase*)qthis)->freeTree(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 178, column 17>
//   // proto: static void QMapDataBase::freeData(QMapDataBase * d);
// _ZN12QMapDataBase8freeDataEPS_ freeData(struct QMapDataBase *)
extern "C"
void
C_ZN12QMapDataBase8freeDataEPS_(QMapDataBase * arg1) {
  QMapDataBase::freeData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 166, column 10>
//   // proto:  void QMapDataBase::rotateLeft(QMapNodeBase * x);
// _ZN12QMapDataBase10rotateLeftEP12QMapNodeBase rotateLeft(struct QMapNodeBase *)
extern "C"
void
C_ZN12QMapDataBase10rotateLeftEP12QMapNodeBase(void *qthis,
QMapNodeBase * arg1) {
  ((QMapDataBase*)qthis)->rotateLeft(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 170, column 10>
//   // proto:  void QMapDataBase::recalcMostLeftNode();
// _ZN12QMapDataBase18recalcMostLeftNodeEv recalcMostLeftNode()
extern "C"
void
C_ZN12QMapDataBase18recalcMostLeftNodeEv(void *qthis) {
  ((QMapDataBase*)qthis)->recalcMostLeftNode();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 172, column 19>
//   // proto:  QMapNodeBase * QMapDataBase::createNode(int size, int alignment, QMapNodeBase * parent, bool left);
// _ZN12QMapDataBase10createNodeEiiP12QMapNodeBaseb createNode(int, int, struct QMapNodeBase *, _Bool)
extern "C"
void*
C_ZN12QMapDataBase10createNodeEiiP12QMapNodeBaseb(void *qthis,
int arg1,
int arg2,
QMapNodeBase * arg3,
bool arg4) {
  auto ret =
  ((QMapDataBase*)qthis)->createNode(arg1,
arg2,
arg3,
arg4);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 169, column 10>
//   // proto:  void QMapDataBase::freeNodeAndRebalance(QMapNodeBase * z);
// _ZN12QMapDataBase20freeNodeAndRebalanceEP12QMapNodeBase freeNodeAndRebalance(struct QMapNodeBase *)
extern "C"
void
C_ZN12QMapDataBase20freeNodeAndRebalanceEP12QMapNodeBase(void *qthis,
QMapNodeBase * arg1) {
  ((QMapDataBase*)qthis)->freeNodeAndRebalance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 93, column 11>
//   // proto:  QMapNodeBase::Color QMapNodeBase::color();
// _ZNK12QMapNodeBase5colorEv color()
extern "C"
QMapNodeBase::Color
C_ZNK12QMapNodeBase5colorEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->color();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 90, column 25>
//   // proto:  const QMapNodeBase * QMapNodeBase::previousNode();
// _ZNK12QMapNodeBase12previousNodeEv previousNode()
extern "C"
void*
C_ZNK12QMapNodeBase12previousNodeEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->previousNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 96, column 10>
//   // proto:  void QMapNodeBase::setParent(QMapNodeBase * pp);
// _ZN12QMapNodeBase9setParentEPS_ setParent(struct QMapNodeBase *)
extern "C"
void
C_ZN12QMapNodeBase9setParentEPS_(void *qthis,
QMapNodeBase * arg1) {
  ((QMapNodeBase*)qthis)->setParent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 91, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::previousNode();
// _ZN12QMapNodeBase12previousNodeEv previousNode()
extern "C"
void*
C_ZN12QMapNodeBase12previousNodeEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->previousNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 88, column 25>
//   // proto:  const QMapNodeBase * QMapNodeBase::nextNode();
// _ZNK12QMapNodeBase8nextNodeEv nextNode()
extern "C"
void*
C_ZNK12QMapNodeBase8nextNodeEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->nextNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 94, column 10>
//   // proto:  void QMapNodeBase::setColor(QMapNodeBase::Color c);
// _ZN12QMapNodeBase8setColorENS_5ColorE setColor(enum QMapNodeBase::Color)
extern "C"
void
C_ZN12QMapNodeBase8setColorENS_5ColorE(void *qthis,
QMapNodeBase::Color arg1) {
  ((QMapNodeBase*)qthis)->setColor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 89, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::nextNode();
// _ZN12QMapNodeBase8nextNodeEv nextNode()
extern "C"
void*
C_ZN12QMapNodeBase8nextNodeEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->nextNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmap.h', line 95, column 19>
//   // proto:  QMapNodeBase * QMapNodeBase::parent();
// _ZNK12QMapNodeBase6parentEv parent()
extern "C"
void*
C_ZNK12QMapNodeBase6parentEv(void *qthis) {
  auto ret =
  ((QMapNodeBase*)qthis)->parent();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

