// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qlist.h
// dst-file: /src/core/qlist.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlist.h>


// <= header block end

// main block begin =>
void __keep_qlist_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 116, column 19>
//   // proto:  void ** QListData::begin();
if (true) {
  auto f = [](QListData flythis) {
    ((QListData*)0)->begin();
    flythis.begin();
  };
  if (f == nullptr){}
}
// _ZNK9QListData5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 117, column 19>
//   // proto:  void ** QListData::end();
if (true) {
  auto f = [](QListData flythis) {
    ((QListData*)0)->end();
    flythis.end();
  };
  if (f == nullptr){}
}
// _ZNK9QListData3endEv end()
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 100, column 17>
//   // proto:  void QListData::dispose();
if (true) {
  auto f = [](QListData flythis) {
    ((QListData*)0)->dispose();
    flythis.dispose();
  };
  if (f == nullptr){}
}
// _ZN9QListData7disposeEv dispose()
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 113, column 16>
//   // proto:  int QListData::size();
if (true) {
  auto f = [](QListData flythis) {
    ((QListData*)0)->size();
    flythis.size();
  };
  if (f == nullptr){}
}
// _ZNK9QListData4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 114, column 17>
//   // proto:  bool QListData::isEmpty();
if (true) {
  auto f = [](QListData flythis) {
    ((QListData*)0)->isEmpty();
    flythis.isEmpty();
  };
  if (f == nullptr){}
}
// _ZNK9QListData7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 115, column 19>
//   // proto:  void ** QListData::at(int i);
if (true) {
  auto f = [](QListData flythis, int arg1) {
    ((QListData*)0)->at(arg1);
    flythis.at(arg1);
  };
  if (f == nullptr){}
}
// _ZNK9QListData2atEi at(int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QListData_Class_Size()
{
  return sizeof(QListData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 116, column 19>
//   // proto:  void ** QListData::begin();
// _ZNK9QListData5beginEv begin()
extern "C"
void*
C_ZNK9QListData5beginEv(void *qthis) {
  auto ret =
  ((QListData*)qthis)->begin();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 101, column 17>
//   // proto: static void QListData::dispose(QListData::Data * d);
// _ZN9QListData7disposeEPNS_4DataE dispose(struct QListData::Data *)
extern "C"
void
C_ZN9QListData7disposeEPNS_4DataE(QListData::Data * arg1) {
  QListData::dispose(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 98, column 10>
//   // proto:  void QListData::realloc(int alloc);
// _ZN9QListData7reallocEi realloc(int)
extern "C"
void
C_ZN9QListData7reallocEi(void *qthis,
int arg1) {
  ((QListData*)qthis)->realloc(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 117, column 19>
//   // proto:  void ** QListData::end();
// _ZNK9QListData3endEv end()
extern "C"
void*
C_ZNK9QListData3endEv(void *qthis) {
  auto ret =
  ((QListData*)qthis)->end();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 111, column 10>
//   // proto:  void QListData::remove(int i, int n);
// _ZN9QListData6removeEii remove(int, int)
extern "C"
void
C_ZN9QListData6removeEii(void *qthis,
int arg1,
int arg2) {
  ((QListData*)qthis)->remove(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 110, column 10>
//   // proto:  void QListData::remove(int i);
// _ZN9QListData6removeEi remove(int)
extern "C"
void
C_ZN9QListData6removeEi(void *qthis,
int arg1) {
  ((QListData*)qthis)->remove(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 100, column 17>
//   // proto:  void QListData::dispose();
// _ZN9QListData7disposeEv dispose()
extern "C"
void
C_ZN9QListData7disposeEv(void *qthis) {
  ((QListData*)qthis)->dispose();
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 113, column 16>
//   // proto:  int QListData::size();
// _ZNK9QListData4sizeEv size()
extern "C"
int
C_ZNK9QListData4sizeEv(void *qthis) {
  auto ret =
  ((QListData*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 114, column 17>
//   // proto:  bool QListData::isEmpty();
// _ZNK9QListData7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK9QListData7isEmptyEv(void *qthis) {
  auto ret =
  ((QListData*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 115, column 19>
//   // proto:  void ** QListData::at(int i);
// _ZNK9QListData2atEi at(int)
extern "C"
void*
C_ZNK9QListData2atEi(void *qthis,
int arg1) {
  auto ret =
  ((QListData*)qthis)->at(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 104, column 12>
//   // proto:  void ** QListData::erase(void ** xi);
// _ZN9QListData5eraseEPPv erase(void **)
extern "C"
void*
C_ZN9QListData5eraseEPPv(void *qthis,
void ** arg1) {
  auto ret =
  ((QListData*)qthis)->erase(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 96, column 11>
//   // proto:  QListData::Data * QListData::detach(int alloc);
// _ZN9QListData6detachEi detach(int)
extern "C"
void*
C_ZN9QListData6detachEi(void *qthis,
int arg1) {
  auto ret =
  ((QListData*)qthis)->detach(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 112, column 10>
//   // proto:  void QListData::move(int from, int to);
// _ZN9QListData4moveEii move(int, int)
extern "C"
void
C_ZN9QListData4moveEii(void *qthis,
int arg1,
int arg2) {
  ((QListData*)qthis)->move(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 99, column 10>
//   // proto:  void QListData::realloc_grow(int growth);
// _ZN9QListData12realloc_growEi realloc_grow(int)
extern "C"
void
C_ZN9QListData12realloc_growEi(void *qthis,
int arg1) {
  ((QListData*)qthis)->realloc_grow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlist.h', line 97, column 11>
//   // proto:  QListData::Data * QListData::detach_grow(int * i, int n);
// _ZN9QListData11detach_growEPii detach_grow(int *, int)
extern "C"
void*
C_ZN9QListData11detach_growEPii(void *qthis,
int * arg1,
int arg2) {
  auto ret =
  ((QListData*)qthis)->detach_grow(arg1,
arg2);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

