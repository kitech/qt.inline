//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#include <qbitarray.h>
#include <QtCore>

// QBitArray is pure virtual: false
// QBitArray has virtual projected: false
//  header block end

//  main block begin

class MyQBitArray : public QBitArray {
public:
  virtual ~MyQBitArray() {}
// void QBitArray()
MyQBitArray() : QBitArray() {}
// void QBitArray(int, _Bool)
MyQBitArray(int size, bool val) : QBitArray(size, val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:57
// [-2] void QBitArray()
extern "C"
void* C_ZN9QBitArrayC2Ev() {
  return  new QBitArray();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:58
// [-2] void QBitArray(int, _Bool)
extern "C"
void* C_ZN9QBitArrayC2Eib(int size, bool val) {
  return  new QBitArray(size, val);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:67
// [-2] void swap(class QBitArray &)
extern "C"
void C_ZN9QBitArray4swapERS_(void *this_, QBitArray* other) {
  ((QBitArray*)this_)->swap(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:69
// [4] int size()
extern "C"
int C_ZNK9QBitArray4sizeEv(void *this_) {
  return (int)((QBitArray*)this_)->size();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:70
// [4] int count()
extern "C"
int C_ZNK9QBitArray5countEv(void *this_) {
  return (int)((QBitArray*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:71
// [4] int count(_Bool)
extern "C"
int C_ZNK9QBitArray5countEb(void *this_, bool on) {
  return (int)((QBitArray*)this_)->count(on);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:73
// [1] bool isEmpty()
extern "C"
bool C_ZNK9QBitArray7isEmptyEv(void *this_) {
  return (bool)((QBitArray*)this_)->isEmpty();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:74
// [1] bool isNull()
extern "C"
bool C_ZNK9QBitArray6isNullEv(void *this_) {
  return (bool)((QBitArray*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:76
// [-2] void resize(int)
extern "C"
void C_ZN9QBitArray6resizeEi(void *this_, int size) {
  ((QBitArray*)this_)->resize(size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:78
// [-2] void detach()
extern "C"
void C_ZN9QBitArray6detachEv(void *this_) {
  ((QBitArray*)this_)->detach();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:79
// [1] bool isDetached()
extern "C"
bool C_ZNK9QBitArray10isDetachedEv(void *this_) {
  return (bool)((QBitArray*)this_)->isDetached();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:80
// [-2] void clear()
extern "C"
void C_ZN9QBitArray5clearEv(void *this_) {
  ((QBitArray*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:82
// [1] bool testBit(int)
extern "C"
bool C_ZNK9QBitArray7testBitEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->testBit(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:83
// [-2] void setBit(int)
extern "C"
void C_ZN9QBitArray6setBitEi(void *this_, int i) {
  ((QBitArray*)this_)->setBit(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:84
// [-2] void setBit(int, _Bool)
extern "C"
void C_ZN9QBitArray6setBitEib(void *this_, int i, bool val) {
  ((QBitArray*)this_)->setBit(i, val);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:85
// [-2] void clearBit(int)
extern "C"
void C_ZN9QBitArray8clearBitEi(void *this_, int i) {
  ((QBitArray*)this_)->clearBit(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:86
// [1] bool toggleBit(int)
extern "C"
bool C_ZN9QBitArray9toggleBitEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->toggleBit(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:88
// [1] bool at(int)
extern "C"
bool C_ZNK9QBitArray2atEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->at(i);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:102
// [1] bool fill(_Bool, int)
extern "C"
bool C_ZN9QBitArray4fillEbi(void *this_, bool val, int size) {
  return (bool)((QBitArray*)this_)->fill(val, size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:103
// [-2] void fill(_Bool, int, int)
extern "C"
void C_ZN9QBitArray4fillEbii(void *this_, bool val, int first, int last) {
  ((QBitArray*)this_)->fill(val, first, last);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:105
// [-2] void truncate(int)
extern "C"
void C_ZN9QBitArray8truncateEi(void *this_, int pos) {
  ((QBitArray*)this_)->truncate(pos);
}

extern "C"
void C_ZN9QBitArrayD2Ev(void *this_) {
  delete (QBitArray*)(this_);
}
//  main block end
