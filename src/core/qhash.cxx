// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qhash.h
// dst-file: /src/core/qhash.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qhash.h>


// <= header block end

// main block begin =>
void __keep_qhash_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 87, column 10>
//   // proto:  void QHashData::hasShrunk();
if (true) {
  auto f = [](QHashData flythis) {
    ((QHashData*)0)->hasShrunk();
    flythis.hasShrunk();
  };
  if (f == nullptr){}
}
// _ZN9QHashData9hasShrunkEv hasShrunk()
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 86, column 10>
//   // proto:  bool QHashData::willGrow();
if (true) {
  auto f = [](QHashData flythis) {
    ((QHashData*)0)->willGrow();
    flythis.willGrow();
  };
  if (f == nullptr){}
}
// _ZN9QHashData8willGrowEv willGrow()
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 90, column 11>
//   // proto:  QHashData::Node * QHashData::firstNode();
if (true) {
  auto f = [](QHashData flythis) {
    ((QHashData*)0)->firstNode();
    flythis.firstNode();
  };
  if (f == nullptr){}
}
// _ZN9QHashData9firstNodeEv firstNode()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHashDummyValue_Class_Size()
{
  return sizeof(QHashDummyValue);
}

extern "C"
int QHashData_Class_Size()
{
  return sizeof(QHashData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 95, column 18>
//   // proto: static QHashData::Node * QHashData::nextNode(QHashData::Node * node);
// _ZN9QHashData8nextNodeEPNS_4NodeE nextNode(struct QHashData::Node *)
extern "C"
void*
C_ZN9QHashData8nextNodeEPNS_4NodeE(QHashData::Node * arg1) {
  auto ret =
  QHashData::nextNode(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 84, column 16>
//   // proto:  QHashData * QHashData::detach_helper(void (*)(QHashData::Node *, void *) node_duplicate, void (*)(QHashData::Node *) node_delete, int nodeSize, int nodeAlign);
// _ZN9QHashData13detach_helperEPFvPNS_4NodeEPvEPFvS1_Eii detach_helper(void (*)(struct QHashData::Node *, void *), void (*)(struct QHashData::Node *), int, int)
extern "C"
void*
C_ZN9QHashData13detach_helperEPFvPNS_4NodeEPvEPFvS1_Eii(void *qthis,
void (*arg1)(QHashData::Node *, void *),
void (*arg2)(QHashData::Node *),
int arg3,
int arg4) {
  auto ret =
  ((QHashData*)qthis)->detach_helper(arg1,
arg2,
arg3,
arg4);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 87, column 10>
//   // proto:  void QHashData::hasShrunk();
// _ZN9QHashData9hasShrunkEv hasShrunk()
extern "C"
void
C_ZN9QHashData9hasShrunkEv(void *qthis) {
  ((QHashData*)qthis)->hasShrunk();
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 89, column 10>
//   // proto:  void QHashData::free_helper(void (*)(QHashData::Node *) node_delete);
// _ZN9QHashData11free_helperEPFvPNS_4NodeEE free_helper(void (*)(struct QHashData::Node *))
extern "C"
void
C_ZN9QHashData11free_helperEPFvPNS_4NodeEE(void *qthis,
void (*arg1)(QHashData::Node *)) {
  ((QHashData*)qthis)->free_helper(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 82, column 11>
//   // proto:  void * QHashData::allocateNode(int nodeAlign);
// _ZN9QHashData12allocateNodeEi allocateNode(int)
extern "C"
void*
C_ZN9QHashData12allocateNodeEi(void *qthis,
int arg1) {
  auto ret =
  ((QHashData*)qthis)->allocateNode(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 86, column 10>
//   // proto:  bool QHashData::willGrow();
// _ZN9QHashData8willGrowEv willGrow()
extern "C"
bool
C_ZN9QHashData8willGrowEv(void *qthis) {
  auto ret =
  ((QHashData*)qthis)->willGrow();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 88, column 10>
//   // proto:  void QHashData::rehash(int hint);
// _ZN9QHashData6rehashEi rehash(int)
extern "C"
void
C_ZN9QHashData6rehashEi(void *qthis,
int arg1) {
  ((QHashData*)qthis)->rehash(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 83, column 10>
//   // proto:  void QHashData::freeNode(void * node);
// _ZN9QHashData8freeNodeEPv freeNode(void *)
extern "C"
void
C_ZN9QHashData8freeNodeEPv(void *qthis,
void * arg1) {
  ((QHashData*)qthis)->freeNode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 90, column 11>
//   // proto:  QHashData::Node * QHashData::firstNode();
// _ZN9QHashData9firstNodeEv firstNode()
extern "C"
void*
C_ZN9QHashData9firstNodeEv(void *qthis) {
  auto ret =
  ((QHashData*)qthis)->firstNode();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qhash.h', line 96, column 18>
//   // proto: static QHashData::Node * QHashData::previousNode(QHashData::Node * node);
// _ZN9QHashData12previousNodeEPNS_4NodeE previousNode(struct QHashData::Node *)
extern "C"
void*
C_ZN9QHashData12previousNodeEPNS_4NodeE(QHashData::Node * arg1) {
  auto ret =
  QHashData::previousNode(arg1);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

