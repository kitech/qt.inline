// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qarraydata.h
// dst-file: /src/core/qarraydata.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qarraydata.h>


// <= header block end

// main block begin =>
void __keep_qarraydata_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 116, column 24>
//   // proto: static QArrayData * QArrayData::sharedNull();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->sharedNull();
    flythis.sharedNull();
  };
  if (f == nullptr){}
}
// _ZN10QArrayData10sharedNullEv sharedNull()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 58, column 17>
//   // proto:  const void * QArrayData::data();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->data();
    flythis.data();
  };
  if (f == nullptr){}
}
// _ZNK10QArrayData4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 101, column 23>
//   // proto:  AllocationOptions QArrayData::cloneFlags();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->cloneFlags();
    flythis.cloneFlags();
  };
  if (f == nullptr){}
}
// _ZNK10QArrayData10cloneFlagsEv cloneFlags()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 51, column 11>
//   // proto:  void * QArrayData::data();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->data();
    flythis.data();
  };
  if (f == nullptr){}
}
// _ZN10QArrayData4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 68, column 10>
//   // proto:  bool QArrayData::isMutable();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->isMutable();
    flythis.isMutable();
  };
  if (f == nullptr){}
}
// _ZNK10QArrayData9isMutableEv isMutable()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 93, column 23>
//   // proto:  AllocationOptions QArrayData::detachFlags();
if (true) {
  auto f = [](QArrayData flythis) {
    ((QArrayData*)0)->detachFlags();
    flythis.detachFlags();
  };
  if (f == nullptr){}
}
// _ZNK10QArrayData11detachFlagsEv detachFlags()
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 86, column 12>
//   // proto:  int QArrayData::detachCapacity(int newSize);
if (true) {
  auto f = [](QArrayData flythis, int arg1) {
    ((QArrayData*)0)->detachCapacity(arg1);
    flythis.detachCapacity(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QArrayData14detachCapacityEi detachCapacity(int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QArrayData_Class_Size()
{
  return sizeof(QArrayData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 116, column 24>
//   // proto: static QArrayData * QArrayData::sharedNull();
// _ZN10QArrayData10sharedNullEv sharedNull()
extern "C"
void*
C_ZN10QArrayData10sharedNullEv() {
  auto ret =
  QArrayData::sharedNull();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 109, column 24>
//   // proto: static QArrayData * QArrayData::allocate(int objectSize, int alignment, int capacity, AllocationOptions options);
// _ZN10QArrayData8allocateEiii6QFlagsINS_16AllocationOptionEE allocate(int, int, int, AllocationOptions)
extern "C"
void*
C_ZN10QArrayData8allocateEiii6QFlagsINS_16AllocationOptionEE(int arg1,
int arg2,
int arg3,
QArrayData::AllocationOptions arg4) {
  auto ret =
  QArrayData::allocate(arg1,
arg2,
arg3,
arg4);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 58, column 17>
//   // proto:  const void * QArrayData::data();
// _ZNK10QArrayData4dataEv data()
extern "C"
void*
C_ZNK10QArrayData4dataEv(void *qthis) {
  auto ret =
  ((QArrayData*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 101, column 23>
//   // proto:  AllocationOptions QArrayData::cloneFlags();
// _ZNK10QArrayData10cloneFlagsEv cloneFlags()
extern "C"
QFlags<QArrayData::AllocationOption>*
C_ZNK10QArrayData10cloneFlagsEv(void *qthis) {
  auto ret =
  ((QArrayData*)qthis)->cloneFlags();
  return new QFlags<QArrayData::AllocationOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 51, column 11>
//   // proto:  void * QArrayData::data();
// _ZN10QArrayData4dataEv data()
extern "C"
void*
C_ZN10QArrayData4dataEv(void *qthis) {
  auto ret =
  ((QArrayData*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 112, column 17>
//   // proto: static void QArrayData::deallocate(QArrayData * data, int objectSize, int alignment);
// _ZN10QArrayData10deallocateEPS_ii deallocate(struct QArrayData *, int, int)
extern "C"
void
C_ZN10QArrayData10deallocateEPS_ii(QArrayData * arg1,
int arg2,
int arg3) {
  QArrayData::deallocate(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 68, column 10>
//   // proto:  bool QArrayData::isMutable();
// _ZNK10QArrayData9isMutableEv isMutable()
extern "C"
bool
C_ZNK10QArrayData9isMutableEv(void *qthis) {
  auto ret =
  ((QArrayData*)qthis)->isMutable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 93, column 23>
//   // proto:  AllocationOptions QArrayData::detachFlags();
// _ZNK10QArrayData11detachFlagsEv detachFlags()
extern "C"
QFlags<QArrayData::AllocationOption>*
C_ZNK10QArrayData11detachFlagsEv(void *qthis) {
  auto ret =
  ((QArrayData*)qthis)->detachFlags();
  return new QFlags<QArrayData::AllocationOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qarraydata.h', line 86, column 12>
//   // proto:  int QArrayData::detachCapacity(int newSize);
// _ZNK10QArrayData14detachCapacityEi detachCapacity(int)
extern "C"
int
C_ZNK10QArrayData14detachCapacityEi(void *qthis,
int arg1) {
  auto ret =
  ((QArrayData*)qthis)->detachCapacity(arg1);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

