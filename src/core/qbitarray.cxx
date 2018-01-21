//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#include <qbitarray.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qbitarray.h:57
// void QBitArray()
extern "C"
void* C_ZN9QBitArrayC1Ev() {
  return new QBitArray();
}
// /usr/include/qt/QtCore/qbitarray.h:58
// void QBitArray(int, _Bool)
extern "C"
void* C_ZN9QBitArrayC1Eib(int size, bool val) {
  return new QBitArray(size, val);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:67
// void swap(class QBitArray &)
extern "C"
void C_ZN9QBitArray4swapERS_(void *this_, QBitArray & other) {
  ((QBitArray*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:69
// int size()
extern "C"
void C_ZNK9QBitArray4sizeEv(void *this_) {
  /*return*/ ((QBitArray*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:70
// int count()
extern "C"
void C_ZNK9QBitArray5countEv(void *this_) {
  /*return*/ ((QBitArray*)this_)->count();
}
// /usr/include/qt/QtCore/qbitarray.h:71
// int count(_Bool)
extern "C"
void C_ZNK9QBitArray5countEb(void *this_, bool on) {
  /*return*/ ((QBitArray*)this_)->count(on);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:73
// bool isEmpty()
extern "C"
void C_ZNK9QBitArray7isEmptyEv(void *this_) {
  /*return*/ ((QBitArray*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:74
// bool isNull()
extern "C"
void C_ZNK9QBitArray6isNullEv(void *this_) {
  /*return*/ ((QBitArray*)this_)->isNull();
}
// /usr/include/qt/QtCore/qbitarray.h:76
// void resize(int)
extern "C"
void C_ZN9QBitArray6resizeEi(void *this_, int size) {
  ((QBitArray*)this_)->resize(size);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:78
// void detach()
extern "C"
void C_ZN9QBitArray6detachEv(void *this_) {
  ((QBitArray*)this_)->detach();
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:79
// bool isDetached()
extern "C"
void C_ZNK9QBitArray10isDetachedEv(void *this_) {
  /*return*/ ((QBitArray*)this_)->isDetached();
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:80
// void clear()
extern "C"
void C_ZN9QBitArray5clearEv(void *this_) {
  ((QBitArray*)this_)->clear();
}
// /usr/include/qt/QtCore/qbitarray.h:82
// bool testBit(int)
extern "C"
void C_ZNK9QBitArray7testBitEi(void *this_, int i) {
  /*return*/ ((QBitArray*)this_)->testBit(i);
}
// /usr/include/qt/QtCore/qbitarray.h:83
// void setBit(int)
extern "C"
void C_ZN9QBitArray6setBitEi(void *this_, int i) {
  ((QBitArray*)this_)->setBit(i);
}
// /usr/include/qt/QtCore/qbitarray.h:84
// void setBit(int, _Bool)
extern "C"
void C_ZN9QBitArray6setBitEib(void *this_, int i, bool val) {
  ((QBitArray*)this_)->setBit(i, val);
}
// /usr/include/qt/QtCore/qbitarray.h:85
// void clearBit(int)
extern "C"
void C_ZN9QBitArray8clearBitEi(void *this_, int i) {
  ((QBitArray*)this_)->clearBit(i);
}
// /usr/include/qt/QtCore/qbitarray.h:86
// bool toggleBit(int)
extern "C"
void C_ZN9QBitArray9toggleBitEi(void *this_, int i) {
  /*return*/ ((QBitArray*)this_)->toggleBit(i);
}
// /usr/include/qt/QtCore/qbitarray.h:88
// bool at(int)
extern "C"
void C_ZNK9QBitArray2atEi(void *this_, int i) {
  /*return*/ ((QBitArray*)this_)->at(i);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:102
// bool fill(_Bool, int)
extern "C"
void C_ZN9QBitArray4fillEbi(void *this_, bool val, int size) {
  /*return*/ ((QBitArray*)this_)->fill(val, size);
}
// /usr/include/qt/QtCore/qbitarray.h:103
// void fill(_Bool, int, int)
extern "C"
void C_ZN9QBitArray4fillEbii(void *this_, bool val, int first, int last) {
  ((QBitArray*)this_)->fill(val, first, last);
}
// inline
// /usr/include/qt/QtCore/qbitarray.h:105
// void truncate(int)
extern "C"
void C_ZN9QBitArray8truncateEi(void *this_, int pos) {
  ((QBitArray*)this_)->truncate(pos);
}
//  main block end
