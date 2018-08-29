//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbitarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QBitArray is pure virtual: false
// QBitArray has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQBitArray_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBitArray_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBitArray_t qt_meta_stringdata_MyQBitArray = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQBitArray"
  },
  "MyQBitArray"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBitArray[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQBitArray : public QBitArray {
public:
  virtual ~MyQBitArray() {}
// void QBitArray()
MyQBitArray() : QBitArray() {}
// void QBitArray(int, bool)
MyQBitArray(int size, bool val) : QBitArray(size, val) {}
// void QBitArray(const QBitArray &)
MyQBitArray(const QBitArray & other) : QBitArray(other) {}
// void QBitArray(QBitArray &&)
MyQBitArray(QBitArray && other) : QBitArray(other) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:57
// [-2] void QBitArray()
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayC2Ev() {
  return  new QBitArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:58
// [-2] void QBitArray(int, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayC2Eib(int size, bool val) {
  return  new QBitArray(size, val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:59
// [-2] void QBitArray(const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayC2ERKS_(QBitArray* other) {
  return  new QBitArray(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:60
// [8] QBitArray & operator=(const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayaSERKS_(void *this_, QBitArray* other) {
  auto& rv = ((QBitArray*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qbitarray.h:62
// [-2] void QBitArray(QBitArray &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayC2EOS_(QBitArray && other) {
  return  new QBitArray(other);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:63
// [8] QBitArray & operator=(QBitArray &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayaSEOS_(void *this_, QBitArray && other) {
  auto& rv = ((QBitArray*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qbitarray.h:67
// [-2] void swap(QBitArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray4swapERS_(void *this_, QBitArray* other) {
  ((QBitArray*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:69
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK9QBitArray4sizeEv(void *this_) {
  return (int)((QBitArray*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:70
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QBitArray5countEv(void *this_) {
  return (int)((QBitArray*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:71
// [4] int count(bool)
extern "C" Q_DECL_EXPORT
int C_ZNK9QBitArray5countEb(void *this_, bool on) {
  return (int)((QBitArray*)this_)->count(on);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:73
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArray7isEmptyEv(void *this_) {
  return (bool)((QBitArray*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:74
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArray6isNullEv(void *this_) {
  return (bool)((QBitArray*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:76
// [-2] void resize(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray6resizeEi(void *this_, int size) {
  ((QBitArray*)this_)->resize(size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:78
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray6detachEv(void *this_) {
  ((QBitArray*)this_)->detach();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:79
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArray10isDetachedEv(void *this_) {
  return (bool)((QBitArray*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:80
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray5clearEv(void *this_) {
  ((QBitArray*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:82
// [1] bool testBit(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArray7testBitEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->testBit(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:83
// [-2] void setBit(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray6setBitEi(void *this_, int i) {
  ((QBitArray*)this_)->setBit(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:84
// [-2] void setBit(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray6setBitEib(void *this_, int i, bool val) {
  ((QBitArray*)this_)->setBit(i, val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:85
// [-2] void clearBit(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray8clearBitEi(void *this_, int i) {
  ((QBitArray*)this_)->clearBit(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:86
// [1] bool toggleBit(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QBitArray9toggleBitEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->toggleBit(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:88
// [1] bool at(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArray2atEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->at(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:89
// [16] QBitRef operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArrayixEi(void *this_, int i) {
  auto rv = ((QBitArray*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:90
// [1] bool operator[](int)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArrayixEi(void *this_, int i) {
  return (bool)((QBitArray*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:91
// [16] QBitRef operator[](uint)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArrayixEj(void *this_, uint i) {
  auto rv = ((QBitArray*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:92
// [1] bool operator[](uint)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArrayixEj(void *this_, uint i) {
  return (bool)((QBitArray*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:94
// [8] QBitArray & operator&=(const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayaNERKS_(void *this_, QBitArray* arg0) {
  auto& rv = ((QBitArray*)this_)->operator&=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:95
// [8] QBitArray & operator|=(const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayoRERKS_(void *this_, QBitArray* arg0) {
  auto& rv = ((QBitArray*)this_)->operator|=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:96
// [8] QBitArray & operator^=(const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArrayeOERKS_(void *this_, QBitArray* arg0) {
  auto& rv = ((QBitArray*)this_)->operator^=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:97
// [8] QBitArray operator~()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QBitArraycoEv(void *this_) {
  auto rv = ((QBitArray*)this_)->operator~();
return new QBitArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:99
// [1] bool operator==(const QBitArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArrayeqERKS_(void *this_, QBitArray* other) {
  return (bool)((QBitArray*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:100
// [1] bool operator!=(const QBitArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QBitArrayneERKS_(void *this_, QBitArray* other) {
  return (bool)((QBitArray*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:102
// [1] bool fill(bool, int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QBitArray4fillEbi(void *this_, bool val, int size) {
  return (bool)((QBitArray*)this_)->fill(val, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:103
// [-2] void fill(bool, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray4fillEbii(void *this_, bool val, int first, int last) {
  ((QBitArray*)this_)->fill(val, first, last);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:105
// [-2] void truncate(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QBitArray8truncateEi(void *this_, int pos) {
  ((QBitArray*)this_)->truncate(pos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:109
// [8] QBitArray::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN9QBitArray8data_ptrEv(void *this_) {
  auto& rv = ((QBitArray*)this_)->data_ptr();
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN9QBitArrayD2Ev(void *this_) {
  delete (QBitArray*)(this_);
}
//  main block end
