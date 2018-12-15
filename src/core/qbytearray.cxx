//  header block begin

// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArray is pure virtual: false
// QByteArray has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQByteArray_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQByteArray_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQByteArray_t qt_meta_stringdata_MyQByteArray = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQByteArray"
  },
  "MyQByteArray"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQByteArray[] = {
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
class Q_DECL_EXPORT MyQByteArray : public QByteArray {
public:
  virtual ~MyQByteArray() {}
// void QByteArray()
MyQByteArray() : QByteArray() {}
// void QByteArray(const char *, int)
MyQByteArray(const char * arg0, int size) : QByteArray(arg0, size) {}
// void QByteArray(int, char)
MyQByteArray(int size, char c) : QByteArray(size, c) {}
// void QByteArray(int, Qt::Initialization)
MyQByteArray(int size, Qt::Initialization arg1) : QByteArray(size, arg1) {}
// void QByteArray(const QByteArray &)
MyQByteArray(const QByteArray & arg0) : QByteArray(arg0) {}
// void QByteArray(QByteArray &&)
MyQByteArray(QByteArray && other) : QByteArray(other) {}
// void QByteArray(QByteArrayDataPtr)
MyQByteArray(QByteArrayDataPtr dd) : QByteArray(dd) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:170
// [-2] void QByteArray()
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2Ev() {
  return  new QByteArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:171
// [-2] void QByteArray(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2EPKci(const char * arg0, int size) {
  return  new QByteArray(arg0, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:172
// [-2] void QByteArray(int, char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2Eic(int size, char c) {
  return  new QByteArray(size, c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:173
// [-2] void QByteArray(int, Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2EiN2Qt14InitializationE(int size, Qt::Initialization arg1) {
  return  new QByteArray(size, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:174
// [-2] void QByteArray(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2ERKS_(QByteArray* arg0) {
  return  new QByteArray(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:175
// [-2] void ~QByteArray()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArrayD2Ev(void *this_) {
  delete (QByteArray*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:177
// [8] QByteArray & operator=(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayaSERKS_(void *this_, QByteArray* arg0) {
  auto& rv = ((QByteArray*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:178
// [8] QByteArray & operator=(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayaSEPKc(void *this_, const char * str) {
  auto& rv = ((QByteArray*)this_)->operator=(str);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qbytearray.h:180
// [-2] void QByteArray(QByteArray &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2EOS_(QByteArray && other) {
  return  new QByteArray(other);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:181
// [8] QByteArray & operator=(QByteArray &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayaSEOS_(void *this_, QByteArray && other) {
  auto& rv = ((QByteArray*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qbytearray.h:185
// [-2] void swap(QByteArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray4swapERS_(void *this_, QByteArray* other) {
  ((QByteArray*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:188
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray4sizeEv(void *this_) {
  return (int)((QByteArray*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:189
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray7isEmptyEv(void *this_) {
  return (bool)((QByteArray*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:190
// [-2] void resize(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray6resizeEi(void *this_, int size) {
  ((QByteArray*)this_)->resize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:192
// [8] QByteArray & fill(char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray4fillEci(void *this_, char c, int size) {
  auto& rv = ((QByteArray*)this_)->fill(c, size);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:194
// [4] int capacity()
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray8capacityEv(void *this_) {
  return (int)((QByteArray*)this_)->capacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:195
// [-2] void reserve(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray7reserveEi(void *this_, int size) {
  ((QByteArray*)this_)->reserve(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:196
// [-2] void squeeze()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray7squeezeEv(void *this_) {
  ((QByteArray*)this_)->squeeze();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:202
// [8] char * data()
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray4dataEv(void *this_) {
  return (void*)((QByteArray*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:203
// [8] const char * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray4dataEv(void *this_) {
  return (void*)((QByteArray*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:204
// [8] const char * constData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray9constDataEv(void *this_) {
  return (void*)((QByteArray*)this_)->constData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:205
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray6detachEv(void *this_) {
  ((QByteArray*)this_)->detach();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:206
// [1] bool isDetached()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray10isDetachedEv(void *this_) {
  return (bool)((QByteArray*)this_)->isDetached();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:207
// [1] bool isSharedWith(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray12isSharedWithERKS_(void *this_, QByteArray* other) {
  return (bool)((QByteArray*)this_)->isSharedWith(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:208
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray5clearEv(void *this_) {
  ((QByteArray*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:210
// [1] char at(int)
extern "C" Q_DECL_EXPORT
char C_ZNK10QByteArray2atEi(void *this_, int i) {
  return (char)((QByteArray*)this_)->at(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:211
// [1] char operator[](int)
extern "C" Q_DECL_EXPORT
char C_ZNK10QByteArrayixEi(void *this_, int i) {
  return (char)((QByteArray*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:212
// [1] char operator[](uint)
extern "C" Q_DECL_EXPORT
char C_ZNK10QByteArrayixEj(void *this_, uint i) {
  return (char)((QByteArray*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:213
// [16] QByteRef operator[](int)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArrayixEi(void *this_, int i) {
  auto rv = ((QByteArray*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:214
// [16] QByteRef operator[](uint)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArrayixEj(void *this_, uint i) {
  auto rv = ((QByteArray*)this_)->operator[](i);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:216
// [4] int indexOf(char, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray7indexOfEci(void *this_, char c, int from) {
  return (int)((QByteArray*)this_)->indexOf(c, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:217
// [4] int indexOf(const char *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray7indexOfEPKci(void *this_, const char * c, int from) {
  return (int)((QByteArray*)this_)->indexOf(c, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:218
// [4] int indexOf(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray7indexOfERKS_i(void *this_, QByteArray* a, int from) {
  return (int)((QByteArray*)this_)->indexOf(*a, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:219
// [4] int lastIndexOf(char, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray11lastIndexOfEci(void *this_, char c, int from) {
  return (int)((QByteArray*)this_)->lastIndexOf(c, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:220
// [4] int lastIndexOf(const char *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray11lastIndexOfEPKci(void *this_, const char * c, int from) {
  return (int)((QByteArray*)this_)->lastIndexOf(c, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:221
// [4] int lastIndexOf(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray11lastIndexOfERKS_i(void *this_, QByteArray* a, int from) {
  return (int)((QByteArray*)this_)->lastIndexOf(*a, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:223
// [1] bool contains(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8containsEc(void *this_, char c) {
  return (bool)((QByteArray*)this_)->contains(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:224
// [1] bool contains(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8containsEPKc(void *this_, const char * a) {
  return (bool)((QByteArray*)this_)->contains(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:225
// [1] bool contains(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8containsERKS_(void *this_, QByteArray* a) {
  return (bool)((QByteArray*)this_)->contains(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:226
// [4] int count(char)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray5countEc(void *this_, char c) {
  return (int)((QByteArray*)this_)->count(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:227
// [4] int count(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray5countEPKc(void *this_, const char * a) {
  return (int)((QByteArray*)this_)->count(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:228
// [4] int count(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray5countERKS_(void *this_, QByteArray* a) {
  return (int)((QByteArray*)this_)->count(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:230
// [8] QByteArray left(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray4leftEi(void *this_, int len_) {
  auto rv = ((QByteArray*)this_)->left(len_);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:231
// [8] QByteArray right(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray5rightEi(void *this_, int len_) {
  auto rv = ((QByteArray*)this_)->right(len_);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:232
// [8] QByteArray mid(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray3midEii(void *this_, int index, int len_) {
  auto rv = ((QByteArray*)this_)->mid(index, len_);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:234
// [1] bool startsWith(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray10startsWithERKS_(void *this_, QByteArray* a) {
  return (bool)((QByteArray*)this_)->startsWith(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:235
// [1] bool startsWith(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray10startsWithEc(void *this_, char c) {
  return (bool)((QByteArray*)this_)->startsWith(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:236
// [1] bool startsWith(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray10startsWithEPKc(void *this_, const char * c) {
  return (bool)((QByteArray*)this_)->startsWith(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:238
// [1] bool endsWith(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8endsWithERKS_(void *this_, QByteArray* a) {
  return (bool)((QByteArray*)this_)->endsWith(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:239
// [1] bool endsWith(char)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8endsWithEc(void *this_, char c) {
  return (bool)((QByteArray*)this_)->endsWith(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:240
// [1] bool endsWith(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray8endsWithEPKc(void *this_, const char * c) {
  return (bool)((QByteArray*)this_)->endsWith(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:242
// [-2] void truncate(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray8truncateEi(void *this_, int pos) {
  ((QByteArray*)this_)->truncate(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:243
// [-2] void chop(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray4chopEi(void *this_, int n) {
  ((QByteArray*)this_)->chop(n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:253
// [8] QByteArray toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNKR10QByteArray7toLowerEv(void *this_) {
  auto rv = ((QByteArray*)this_)->toLower();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:255
// [8] QByteArray toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNO10QByteArray7toLowerEv(void *this_) {
  auto rv = ((QByteArray*)this_)->toLower();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:257
// [8] QByteArray toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNKR10QByteArray7toUpperEv(void *this_) {
  auto rv = ((QByteArray*)this_)->toUpper();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:259
// [8] QByteArray toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNO10QByteArray7toUpperEv(void *this_) {
  auto rv = ((QByteArray*)this_)->toUpper();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:261
// [8] QByteArray trimmed()
extern "C" Q_DECL_EXPORT
void* C_ZNKR10QByteArray7trimmedEv(void *this_) {
  auto rv = ((QByteArray*)this_)->trimmed();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:263
// [8] QByteArray trimmed()
extern "C" Q_DECL_EXPORT
void* C_ZNO10QByteArray7trimmedEv(void *this_) {
  auto rv = ((QByteArray*)this_)->trimmed();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:265
// [8] QByteArray simplified()
extern "C" Q_DECL_EXPORT
void* C_ZNKR10QByteArray10simplifiedEv(void *this_) {
  auto rv = ((QByteArray*)this_)->simplified();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:267
// [8] QByteArray simplified()
extern "C" Q_DECL_EXPORT
void* C_ZNO10QByteArray10simplifiedEv(void *this_) {
  auto rv = ((QByteArray*)this_)->simplified();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:279
// [8] QByteArray leftJustified(int, char, bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray13leftJustifiedEicb(void *this_, int width, char fill, bool truncate) {
  auto rv = ((QByteArray*)this_)->leftJustified(width, fill, truncate);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:280
// [8] QByteArray rightJustified(int, char, bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray14rightJustifiedEicb(void *this_, int width, char fill, bool truncate) {
  auto rv = ((QByteArray*)this_)->rightJustified(width, fill, truncate);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:282
// [8] QByteArray & prepend(char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7prependEc(void *this_, char c) {
  auto& rv = ((QByteArray*)this_)->prepend(c);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qbytearray.h:283
// [8] QByteArray & prepend(int, char)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7prependEic(void *this_, int count, char c) {
  auto& rv = ((QByteArray*)this_)->prepend(count, c);
return &rv;
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:284
// [8] QByteArray & prepend(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7prependEPKc(void *this_, const char * s) {
  auto& rv = ((QByteArray*)this_)->prepend(s);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qbytearray.h:285
// [8] QByteArray & prepend(const char *, int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7prependEPKci(void *this_, const char * s, int len_) {
  auto& rv = ((QByteArray*)this_)->prepend(s, len_);
return &rv;
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:286
// [8] QByteArray & prepend(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7prependERKS_(void *this_, QByteArray* a) {
  auto& rv = ((QByteArray*)this_)->prepend(*a);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:287
// [8] QByteArray & append(char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendEc(void *this_, char c) {
  auto& rv = ((QByteArray*)this_)->append(c);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qbytearray.h:288
// [8] QByteArray & append(int, char)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendEic(void *this_, int count, char c) {
  auto& rv = ((QByteArray*)this_)->append(count, c);
return &rv;
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:289
// [8] QByteArray & append(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendEPKc(void *this_, const char * s) {
  auto& rv = ((QByteArray*)this_)->append(s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:290
// [8] QByteArray & append(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendEPKci(void *this_, const char * s, int len_) {
  auto& rv = ((QByteArray*)this_)->append(s, len_);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:291
// [8] QByteArray & append(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendERKS_(void *this_, QByteArray* a) {
  auto& rv = ((QByteArray*)this_)->append(*a);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:292
// [8] QByteArray & insert(int, char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEic(void *this_, int i, char c) {
  auto& rv = ((QByteArray*)this_)->insert(i, c);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qbytearray.h:293
// [8] QByteArray & insert(int, int, char)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEiic(void *this_, int i, int count, char c) {
  auto& rv = ((QByteArray*)this_)->insert(i, count, c);
return &rv;
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:294
// [8] QByteArray & insert(int, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEiPKc(void *this_, int i, const char * s) {
  auto& rv = ((QByteArray*)this_)->insert(i, s);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qbytearray.h:295
// [8] QByteArray & insert(int, const char *, int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEiPKci(void *this_, int i, const char * s, int len_) {
  auto& rv = ((QByteArray*)this_)->insert(i, s, len_);
return &rv;
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:296
// [8] QByteArray & insert(int, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEiRKS_(void *this_, int i, QByteArray* a) {
  auto& rv = ((QByteArray*)this_)->insert(i, *a);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:297
// [8] QByteArray & remove(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6removeEii(void *this_, int index, int len_) {
  auto& rv = ((QByteArray*)this_)->remove(index, len_);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:298
// [8] QByteArray & replace(int, int, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEiiPKc(void *this_, int index, int len_, const char * s) {
  auto& rv = ((QByteArray*)this_)->replace(index, len_, s);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qbytearray.h:299
// [8] QByteArray & replace(int, int, const char *, int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEiiPKci(void *this_, int index, int len_, const char * s, int alen) {
  auto& rv = ((QByteArray*)this_)->replace(index, len_, s, alen);
return &rv;
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:300
// [8] QByteArray & replace(int, int, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEiiRKS_(void *this_, int index, int len_, QByteArray* s) {
  auto& rv = ((QByteArray*)this_)->replace(index, len_, *s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:301
// [8] QByteArray & replace(char, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEcPKc(void *this_, char before, const char * after) {
  auto& rv = ((QByteArray*)this_)->replace(before, after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:302
// [8] QByteArray & replace(char, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEcRKS_(void *this_, char before, QByteArray* after) {
  auto& rv = ((QByteArray*)this_)->replace(before, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:303
// [8] QByteArray & replace(const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEPKcS1_(void *this_, const char * before, const char * after) {
  auto& rv = ((QByteArray*)this_)->replace(before, after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:304
// [8] QByteArray & replace(const char *, int, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEPKciS1_i(void *this_, const char * before, int bsize, const char * after, int asize) {
  auto& rv = ((QByteArray*)this_)->replace(before, bsize, after, asize);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:305
// [8] QByteArray & replace(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceERKS_S1_(void *this_, QByteArray* before, QByteArray* after) {
  auto& rv = ((QByteArray*)this_)->replace(*before, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:306
// [8] QByteArray & replace(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceERKS_PKc(void *this_, QByteArray* before, const char * after) {
  auto& rv = ((QByteArray*)this_)->replace(*before, after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:307
// [8] QByteArray & replace(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEPKcRKS_(void *this_, const char * before, QByteArray* after) {
  auto& rv = ((QByteArray*)this_)->replace(before, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:308
// [8] QByteArray & replace(char, char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEcc(void *this_, char before, char after) {
  auto& rv = ((QByteArray*)this_)->replace(before, after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:309
// [8] QByteArray & operator+=(char)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArraypLEc(void *this_, char c) {
  auto& rv = ((QByteArray*)this_)->operator+=(c);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:310
// [8] QByteArray & operator+=(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArraypLEPKc(void *this_, const char * s) {
  auto& rv = ((QByteArray*)this_)->operator+=(s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:311
// [8] QByteArray & operator+=(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArraypLERKS_(void *this_, QByteArray* a) {
  auto& rv = ((QByteArray*)this_)->operator+=(*a);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:313
// [8] QList<QByteArray> split(char)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK10QByteArray5splitEc(void *this_, char sep) {
  auto rv = ((QByteArray*)this_)->split(sep);
return new QList<QByteArray>(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qbytearray.h:315
// [8] QByteArray repeated(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray8repeatedEi(void *this_, int times) {
  auto rv = ((QByteArray*)this_)->repeated(times);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:318
// [8] QByteArray & append(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6appendERK7QString(void *this_, QString* s) {
  auto& rv = ((QByteArray*)this_)->append(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:319
// [8] QByteArray & insert(int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6insertEiRK7QString(void *this_, int i, QString* s) {
  auto& rv = ((QByteArray*)this_)->insert(i, *s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:320
// [8] QByteArray & replace(const QString &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceERK7QStringPKc(void *this_, QString* before, const char * after) {
  auto& rv = ((QByteArray*)this_)->replace(*before, after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:321
// [8] QByteArray & replace(char, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceEcRK7QString(void *this_, char c, QString* after) {
  auto& rv = ((QByteArray*)this_)->replace(c, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:322
// [8] QByteArray & replace(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7replaceERK7QStringRKS_(void *this_, QString* before, QByteArray* after) {
  auto& rv = ((QByteArray*)this_)->replace(*before, *after);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:324
// [8] QByteArray & operator+=(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArraypLERK7QString(void *this_, QString* s) {
  auto& rv = ((QByteArray*)this_)->operator+=(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:325
// [4] int indexOf(const QString &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray7indexOfERK7QStringi(void *this_, QString* s, int from) {
  return (int)((QByteArray*)this_)->indexOf(*s, from);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:326
// [4] int lastIndexOf(const QString &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray11lastIndexOfERK7QStringi(void *this_, QString* s, int from) {
  return (int)((QByteArray*)this_)->lastIndexOf(*s, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:329
// [1] bool operator==(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArrayeqERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator==(*s2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:330
// [1] bool operator!=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArrayneERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator!=(*s2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:331
// [1] bool operator<(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArrayltERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator<(*s2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:332
// [1] bool operator>(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArraygtERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator>(*s2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:333
// [1] bool operator<=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArrayleERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator<=(*s2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:334
// [1] bool operator>=(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArraygeERK7QString(void *this_, QString* s2) {
  return (bool)((QByteArray*)this_)->operator>=(*s2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:337
// [2] short toShort(bool *, int)
extern "C" Q_DECL_EXPORT
short C_ZNK10QByteArray7toShortEPbi(void *this_, bool * ok, int base) {
  return (short)((QByteArray*)this_)->toShort(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:338
// [2] ushort toUShort(bool *, int)
extern "C" Q_DECL_EXPORT
ushort C_ZNK10QByteArray8toUShortEPbi(void *this_, bool * ok, int base) {
  return (ushort)((QByteArray*)this_)->toUShort(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:339
// [4] int toInt(bool *, int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray5toIntEPbi(void *this_, bool * ok, int base) {
  return (int)((QByteArray*)this_)->toInt(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:340
// [4] uint toUInt(bool *, int)
extern "C" Q_DECL_EXPORT
uint C_ZNK10QByteArray6toUIntEPbi(void *this_, bool * ok, int base) {
  return (uint)((QByteArray*)this_)->toUInt(ok, base);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qbytearray.h:341
// [8] long toLong(bool *, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
long C_ZNK10QByteArray6toLongEPbi(void *this_, bool * ok, int base) {
  return (long)((QByteArray*)this_)->toLong(ok, base);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qbytearray.h:342
// [8] ulong toULong(bool *, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
ulong C_ZNK10QByteArray7toULongEPbi(void *this_, bool * ok, int base) {
  return (ulong)((QByteArray*)this_)->toULong(ok, base);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:343
// [8] qlonglong toLongLong(bool *, int)
extern "C" Q_DECL_EXPORT
qlonglong C_ZNK10QByteArray10toLongLongEPbi(void *this_, bool * ok, int base) {
  return (qlonglong)((QByteArray*)this_)->toLongLong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:344
// [8] qulonglong toULongLong(bool *, int)
extern "C" Q_DECL_EXPORT
qulonglong C_ZNK10QByteArray11toULongLongEPbi(void *this_, bool * ok, int base) {
  return (qulonglong)((QByteArray*)this_)->toULongLong(ok, base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:345
// [4] float toFloat(bool *)
extern "C" Q_DECL_EXPORT
float C_ZNK10QByteArray7toFloatEPb(void *this_, bool * ok) {
  return (float)((QByteArray*)this_)->toFloat(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:346
// [8] double toDouble(bool *)
extern "C" Q_DECL_EXPORT
double C_ZNK10QByteArray8toDoubleEPb(void *this_, bool * ok) {
  return (double)((QByteArray*)this_)->toDouble(ok);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:347
// [8] QByteArray toBase64(QByteArray::Base64Options)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray8toBase64E6QFlagsINS_12Base64OptionEE(void *this_, QFlags<QByteArray::Base64Option> options) {
  auto rv = ((QByteArray*)this_)->toBase64(options);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:348
// [8] QByteArray toBase64()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray8toBase64Ev(void *this_) {
  auto rv = ((QByteArray*)this_)->toBase64();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:349
// [8] QByteArray toHex()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray5toHexEv(void *this_) {
  auto rv = ((QByteArray*)this_)->toHex();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qbytearray.h:350
// [8] QByteArray toHex(char)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray5toHexEc(void *this_, char separator) {
  auto rv = ((QByteArray*)this_)->toHex(separator);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qbytearray.h:351
// [8] QByteArray toPercentEncoding(const QByteArray &, const QByteArray &, char)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK10QByteArray17toPercentEncodingERKS_S1_c(void *this_, QByteArray* exclude, QByteArray* include_, char percent) {
  auto rv = ((QByteArray*)this_)->toPercentEncoding(*exclude, *include_, percent);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:355
// [8] QByteArray & setNum(short, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEsi(void *this_, short arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:356
// [8] QByteArray & setNum(ushort, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEti(void *this_, ushort arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:357
// [8] QByteArray & setNum(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEii(void *this_, int arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:358
// [8] QByteArray & setNum(uint, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEji(void *this_, uint arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:359
// [8] QByteArray & setNum(qlonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumExi(void *this_, qlonglong arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:360
// [8] QByteArray & setNum(qulonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEyi(void *this_, qulonglong arg0, int base) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, base);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:361
// [8] QByteArray & setNum(float, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEfci(void *this_, float arg0, char f, int prec) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, f, prec);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:362
// [8] QByteArray & setNum(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6setNumEdci(void *this_, double arg0, char f, int prec) {
  auto& rv = ((QByteArray*)this_)->setNum(arg0, f, prec);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qbytearray.h:363
// [8] QByteArray & setRawData(const char *, uint)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray10setRawDataEPKcj(void *this_, const char * a, uint n) {
  auto& rv = ((QByteArray*)this_)->setRawData(a, n);
return &rv;
}
#endif // QT_VERSION >= 0x040700

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:365
// [8] QByteArray number(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6numberEii(int arg0, int base) {
  auto rv = QByteArray::number(arg0, base);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:366
// [8] QByteArray number(uint, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6numberEji(uint arg0, int base) {
  auto rv = QByteArray::number(arg0, base);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:367
// [8] QByteArray number(qlonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6numberExi(qlonglong arg0, int base) {
  auto rv = QByteArray::number(arg0, base);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:368
// [8] QByteArray number(qulonglong, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6numberEyi(qulonglong arg0, int base) {
  auto rv = QByteArray::number(arg0, base);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:369
// [8] QByteArray number(double, char, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray6numberEdci(double arg0, char f, int prec) {
  auto rv = QByteArray::number(arg0, f, prec);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:370
// [8] QByteArray fromRawData(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray11fromRawDataEPKci(const char * arg0, int size) {
  auto rv = QByteArray::fromRawData(arg0, size);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:371
// [8] QByteArray fromBase64(const QByteArray &, QByteArray::Base64Options)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray10fromBase64ERKS_6QFlagsINS_12Base64OptionEE(QByteArray* base64, QFlags<QByteArray::Base64Option> options) {
  auto rv = QByteArray::fromBase64(*base64, options);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:372
// [8] QByteArray fromBase64(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray10fromBase64ERKS_(QByteArray* base64) {
  auto rv = QByteArray::fromBase64(*base64);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:373
// [8] QByteArray fromHex(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray7fromHexERKS_(QByteArray* hexEncoded) {
  auto rv = QByteArray::fromHex(*hexEncoded);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qbytearray.h:374
// [8] QByteArray fromPercentEncoding(const QByteArray &, char)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray19fromPercentEncodingERKS_c(QByteArray* pctEncoded, char percent) {
  auto rv = QByteArray::fromPercentEncoding(*pctEncoded, percent);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:393
// [8] QByteArray::iterator begin()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray5beginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:394
// [8] QByteArray::const_iterator begin()
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray5beginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qbytearray.h:395
// [8] QByteArray::const_iterator cbegin()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray6cbeginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->cbegin();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:396
// [8] QByteArray::const_iterator constBegin()
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray10constBeginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->constBegin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:397
// [8] QByteArray::iterator end()
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray3endEv(void *this_) {
  auto rv = ((QByteArray*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:398
// [8] QByteArray::const_iterator end()
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray3endEv(void *this_) {
  auto rv = ((QByteArray*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qbytearray.h:399
// [8] QByteArray::const_iterator cend()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray4cendEv(void *this_) {
  auto rv = ((QByteArray*)this_)->cend();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:400
// [8] QByteArray::const_iterator constEnd()
extern "C" Q_DECL_EXPORT
void C_ZNK10QByteArray8constEndEv(void *this_) {
  auto rv = ((QByteArray*)this_)->constEnd();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:401
// [8] QByteArray::reverse_iterator rbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::reverse_iterator* C_ZN10QByteArray6rbeginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->rbegin();
return new QByteArray::reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:402
// [8] QByteArray::reverse_iterator rend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::reverse_iterator* C_ZN10QByteArray4rendEv(void *this_) {
  auto rv = ((QByteArray*)this_)->rend();
return new QByteArray::reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:403
// [8] QByteArray::const_reverse_iterator rbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::const_reverse_iterator* C_ZNK10QByteArray6rbeginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->rbegin();
return new QByteArray::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:404
// [8] QByteArray::const_reverse_iterator rend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::const_reverse_iterator* C_ZNK10QByteArray4rendEv(void *this_) {
  auto rv = ((QByteArray*)this_)->rend();
return new QByteArray::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:405
// [8] QByteArray::const_reverse_iterator crbegin()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::const_reverse_iterator* C_ZNK10QByteArray7crbeginEv(void *this_) {
  auto rv = ((QByteArray*)this_)->crbegin();
return new QByteArray::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qbytearray.h:406
// [8] QByteArray::const_reverse_iterator crend()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QByteArray::const_reverse_iterator* C_ZNK10QByteArray5crendEv(void *this_) {
  auto rv = ((QByteArray*)this_)->crend();
return new QByteArray::const_reverse_iterator(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:416
// [-2] void push_back(char)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray9push_backEc(void *this_, char c) {
  ((QByteArray*)this_)->push_back(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:417
// [-2] void push_back(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray9push_backEPKc(void *this_, const char * c) {
  ((QByteArray*)this_)->push_back(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:418
// [-2] void push_back(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray9push_backERKS_(void *this_, QByteArray* a) {
  ((QByteArray*)this_)->push_back(*a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:419
// [-2] void push_front(char)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray10push_frontEc(void *this_, char c) {
  ((QByteArray*)this_)->push_front(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:420
// [-2] void push_front(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray10push_frontEPKc(void *this_, const char * c) {
  ((QByteArray*)this_)->push_front(c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:421
// [-2] void push_front(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QByteArray10push_frontERKS_(void *this_, QByteArray* a) {
  ((QByteArray*)this_)->push_front(*a);
}

// Public static inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qbytearray.h:423
// [8] QByteArray fromStdString(const std::string &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE(const std::string & s) {
  auto rv = QByteArray::fromStdString(s);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qbytearray.h:424
// [32] std::string toStdString()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
std::string C_ZNK10QByteArray11toStdStringB5cxx11Ev(void *this_) {
  return (std::string)((QByteArray*)this_)->toStdString();
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:426
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray5countEv(void *this_) {
  return (int)((QByteArray*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:427
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK10QByteArray6lengthEv(void *this_) {
  return (int)((QByteArray*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:428
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QByteArray6isNullEv(void *this_) {
  return (bool)((QByteArray*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:430
// [-2] void QByteArray(QByteArrayDataPtr)
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArrayC2E17QByteArrayDataPtr(QByteArrayDataPtr* dd) {
  return  new QByteArray(*dd);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:456
// [8] QByteArray::DataPtr & data_ptr()
extern "C" Q_DECL_EXPORT
void* C_ZN10QByteArray8data_ptrEv(void *this_) {
  auto& rv = ((QByteArray*)this_)->data_ptr();
return &rv;
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
