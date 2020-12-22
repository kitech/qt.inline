//  header block begin

// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArray is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbytearray(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:180
// [-2] void QByteArray() 
// (12)qm2565301520 (19)_ZN10QByteArrayC2Ev
/*void* qm2565301520()*/{
  ;
  this_ =  new QByteArray();
  this_ =  new MyQByteArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:181
// [-2] void QByteArray(const char *, int) 
// (12)qm1185669528 (22)_ZN10QByteArrayC2EPKci
/*void* qm1185669528(const char * arg0, int size)*/{
  const char * arg0 = *(const char **)this_; int size = *(int*)this_;
  this_ =  new QByteArray(arg0, size);
  this_ =  new MyQByteArray(arg0, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:182
// [-2] void QByteArray(int, char) 
// (12)qm3603703536 (20)_ZN10QByteArrayC2Eic
/*void* qm3603703536(int size, char c)*/{
  int size = *(int*)this_; char c = *(char*)this_;
  this_ =  new QByteArray(size, c);
  this_ =  new MyQByteArray(size, c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:183
// [-2] void QByteArray(int, Qt::Initialization) 
// (12)qm3671312835 (40)_ZN10QByteArrayC2EiN2Qt14InitializationE
/*void* qm3671312835(int size, Qt::Initialization arg1)*/{
  int size = *(int*)this_; Qt::Initialization arg1 = *(Qt::Initialization*)this_;
  this_ =  new QByteArray(size, arg1);
  this_ =  new MyQByteArray(size, arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:184
// [-2] void QByteArray(const QByteArray &) 
// (12)qm4234054265 (22)_ZN10QByteArrayC2ERKS_
/*void* qm4234054265(const QByteArray & arg0)*/{
  const QByteArray & arg0 = *(const QByteArray *)this_;
  this_ =  new QByteArray(arg0);
  this_ =  new MyQByteArray(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:185
// [-2] void ~QByteArray() 
// (10)qm87055785 (19)_ZN10QByteArrayD2Ev
/*void qm87055785 (void *this_)*/ {
  delete (QByteArray*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:189
// [-2] void QByteArray(QByteArray &&) 
// (12)qm2000392563 (21)_ZN10QByteArrayC2EOS_
/*void* qm2000392563(QByteArray && other)*/{
  QByteArray && other =  static_cast<QByteArray &&>(*(QByteArray *)this_);
  this_ =  new QByteArray(other);
  this_ =  new MyQByteArray(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:190
// [8] QByteArray & operator=(QByteArray &&) 
// (12)qm2567793587 (21)_ZN10QByteArrayaSEOS_
//static
/*void qm2567793587(QByteArray && other)*/ {
  QByteArray && other =  static_cast<QByteArray &&>(*(QByteArray *)this_);
  (void) ((QByteArray*)this_)->operator=(other);
  // auto xptr = (QByteArray & (QByteArray::*)(QByteArray&&) ) &QByteArray::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:193
// [-2] void swap(QByteArray &) 
// (12)qm3216489282 (24)_ZN10QByteArray4swapERS_
//static
/*void qm3216489282(QByteArray & other)*/ {
  QByteArray & other = *(QByteArray *)this_;
  (void) ((QByteArray*)this_)->swap(other);
   auto xptr = (void (QByteArray::*)(QByteArray&) ) &QByteArray::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:196
// [4] int size() const
// (12)qm2381602376 (23)_ZNK10QByteArray4sizeEv
//static
/*void qm2381602376()*/ {
  ;
  (void) ((QByteArray*)this_)->size();
   auto xptr = (int (QByteArray::*)() const ) &QByteArray::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:197
// [1] bool isEmpty() const
// (12)qm1048217866 (26)_ZNK10QByteArray7isEmptyEv
//static
/*void qm1048217866()*/ {
  ;
  (void) ((QByteArray*)this_)->isEmpty();
   auto xptr = (bool (QByteArray::*)() const ) &QByteArray::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:202
// [4] int capacity() const
// (12)qm2980844441 (27)_ZNK10QByteArray8capacityEv
//static
/*void qm2980844441()*/ {
  ;
  (void) ((QByteArray*)this_)->capacity();
   auto xptr = (int (QByteArray::*)() const ) &QByteArray::capacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:203
// [-2] void reserve(int) 
// (12)qm3004373417 (25)_ZN10QByteArray7reserveEi
//static
/*void qm3004373417(int size)*/ {
  int size = *(int*)this_;
  (void) ((QByteArray*)this_)->reserve(size);
   auto xptr = (void (QByteArray::*)(int) ) &QByteArray::reserve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:204
// [-2] void squeeze() 
// (11)qm710409950 (25)_ZN10QByteArray7squeezeEv
//static
/*void qm710409950()*/ {
  ;
  (void) ((QByteArray*)this_)->squeeze();
   auto xptr = (void (QByteArray::*)() ) &QByteArray::squeeze;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:210
// [8] char * data() 
// (12)qm3584956573 (22)_ZN10QByteArray4dataEv
//static
/*void qm3584956573()*/ {
  ;
  (void) ((QByteArray*)this_)->data();
   auto xptr = (char * (QByteArray::*)() ) &QByteArray::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:211
// [8] const char * data() const
// (12)qm1149368389 (23)_ZNK10QByteArray4dataEv
//static
/*void qm1149368389()*/ {
  ;
  (void) ((QByteArray*)this_)->data();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:212
// [8] const char * constData() const
// (12)qm3052966037 (28)_ZNK10QByteArray9constDataEv
//static
/*void qm3052966037()*/ {
  ;
  (void) ((QByteArray*)this_)->constData();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::constData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:213
// [-2] void detach() 
// (12)qm3949639188 (24)_ZN10QByteArray6detachEv
//static
/*void qm3949639188()*/ {
  ;
  (void) ((QByteArray*)this_)->detach();
   auto xptr = (void (QByteArray::*)() ) &QByteArray::detach;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:214
// [1] bool isDetached() const
// (12)qm2630113420 (30)_ZNK10QByteArray10isDetachedEv
//static
/*void qm2630113420()*/ {
  ;
  (void) ((QByteArray*)this_)->isDetached();
   auto xptr = (bool (QByteArray::*)() const ) &QByteArray::isDetached;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:215
// [1] bool isSharedWith(const QByteArray &) const
// (12)qm4045798791 (35)_ZNK10QByteArray12isSharedWithERKS_
//static
/*void qm4045798791(const QByteArray & other)*/ {
  const QByteArray & other = *(const QByteArray *)this_;
  (void) ((QByteArray*)this_)->isSharedWith(other);
   auto xptr = (bool (QByteArray::*)(QByteArray const&) const ) &QByteArray::isSharedWith;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:218
// [1] char at(int) const
// (12)qm3205516273 (21)_ZNK10QByteArray2atEi
//static
/*void qm3205516273(int i)*/ {
  int i = *(int*)this_;
  (void) ((QByteArray*)this_)->at(i);
   auto xptr = (char (QByteArray::*)(int) const ) &QByteArray::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:219
// [1] char operator[](int) const
// (11)qm876538993 (20)_ZNK10QByteArrayixEi
//static
/*void qm876538993(int i)*/ {
  int i = *(int*)this_;
  (void) ((QByteArray*)this_)->operator[](i);
  // auto xptr = (char (QByteArray::*)(int) const ) &QByteArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:220
// [1] char operator[](uint) const
// (12)qm2906111435 (20)_ZNK10QByteArrayixEj
//static
/*void qm2906111435(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QByteArray*)this_)->operator[](i);
  // auto xptr = (char (QByteArray::*)(unsigned int) const ) &QByteArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:221
// [16] QByteRef operator[](int) 
// (12)qm2808950697 (19)_ZN10QByteArrayixEi
//static
/*void qm2808950697(int i)*/ {
  int i = *(int*)this_;
  (void) ((QByteArray*)this_)->operator[](i);
  // auto xptr = (QByteRef (QByteArray::*)(int) ) &QByteArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:222
// [16] QByteRef operator[](uint) 
// (12)qm1046773267 (19)_ZN10QByteArrayixEj
//static
/*void qm1046773267(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QByteArray*)this_)->operator[](i);
  // auto xptr = (QByteRef (QByteArray::*)(unsigned int) ) &QByteArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:223
// [1] char front() const
// (11)qm762327731 (24)_ZNK10QByteArray5frontEv
//static
/*void qm762327731()*/ {
  ;
  (void) ((QByteArray*)this_)->front();
   auto xptr = (char (QByteArray::*)() const ) &QByteArray::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:224
// [16] QByteRef front() 
// (12)qm2783528885 (23)_ZN10QByteArray5frontEv
//static
/*void qm2783528885()*/ {
  ;
  (void) ((QByteArray*)this_)->front();
   auto xptr = (QByteRef (QByteArray::*)() ) &QByteArray::front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:225
// [1] char back() const
// (12)qm1384247720 (23)_ZNK10QByteArray4backEv
//static
/*void qm1384247720()*/ {
  ;
  (void) ((QByteArray*)this_)->back();
   auto xptr = (char (QByteArray::*)() const ) &QByteArray::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:226
// [16] QByteRef back() 
// (12)qm3282964848 (22)_ZN10QByteArray4backEv
//static
/*void qm3282964848()*/ {
  ;
  (void) ((QByteArray*)this_)->back();
   auto xptr = (QByteRef (QByteArray::*)() ) &QByteArray::back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:235
// [1] bool contains(char) const
// (11)qm933179318 (27)_ZNK10QByteArray8containsEc
//static
/*void qm933179318(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteArray*)this_)->contains(c);
   auto xptr = (bool (QByteArray::*)(char) const ) &QByteArray::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:236
// [1] bool contains(const char *) const
// (12)qm3113020642 (29)_ZNK10QByteArray8containsEPKc
//static
/*void qm3113020642(const char * a)*/ {
  const char * a = *(const char **)this_;
  (void) ((QByteArray*)this_)->contains(a);
   auto xptr = (bool (QByteArray::*)(char const*) const ) &QByteArray::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:237
// [1] bool contains(const QByteArray &) const
// (11)qm304370216 (30)_ZNK10QByteArray8containsERKS_
//static
/*void qm304370216(const QByteArray & a)*/ {
  const QByteArray & a = *(const QByteArray *)this_;
  (void) ((QByteArray*)this_)->contains(a);
   auto xptr = (bool (QByteArray::*)(QByteArray const&) const ) &QByteArray::contains;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:242
// [4] int compare(const char *, Qt::CaseSensitivity) const
// (11)qm351724809 (50)_ZNK10QByteArray7compareEPKcN2Qt15CaseSensitivityE
//static
/*void qm351724809(const char * c, Qt::CaseSensitivity cs)*/ {
  const char * c = *(const char **)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QByteArray*)this_)->compare(c, cs);
   auto xptr = (int (QByteArray::*)(char const*, Qt::CaseSensitivity) const ) &QByteArray::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:243
// [4] int compare(const QByteArray &, Qt::CaseSensitivity) const
// (12)qm1634121455 (51)_ZNK10QByteArray7compareERKS_N2Qt15CaseSensitivityE
//static
/*void qm1634121455(const QByteArray & a, Qt::CaseSensitivity cs)*/ {
  const QByteArray & a = *(const QByteArray *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_;
  (void) ((QByteArray*)this_)->compare(a, cs);
   auto xptr = (int (QByteArray::*)(QByteArray const&, Qt::CaseSensitivity) const ) &QByteArray::compare;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:248
// [8] QByteArray chopped(int) const
// (11)qm793990226 (26)_ZNK10QByteArray7choppedEi
//static
/*void qm793990226(int len_)*/ {
  int len_ = *(int*)this_;
  (void) ((QByteArray*)this_)->chopped(len_);
   auto xptr = (QByteArray (QByteArray::*)(int) const ) &QByteArray::chopped;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:273
// [8] QByteArray toLower() const
// (12)qm2211387980 (27)_ZNKR10QByteArray7toLowerEv
//static
/*void qm2211387980()*/ {
  ;
  (void) ((QByteArray*)this_)->toLower();
   auto xptr = (QByteArray (QByteArray::*)() const & ) &QByteArray::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:275
// [8] QByteArray toLower() 
// (12)qm3325906440 (26)_ZNO10QByteArray7toLowerEv
//static
/*void qm3325906440()*/ {
  ;
  (void) ((QByteArray*)this_)->toLower();
  (void) (QByteArray{}).toLower();
   auto xptr = (QByteArray (QByteArray::*)() && ) &QByteArray::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:277
// [8] QByteArray toUpper() const
// (11)qm824815375 (27)_ZNKR10QByteArray7toUpperEv
//static
/*void qm824815375()*/ {
  ;
  (void) ((QByteArray*)this_)->toUpper();
   auto xptr = (QByteArray (QByteArray::*)() const & ) &QByteArray::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:279
// [8] QByteArray toUpper() 
// (12)qm1960573771 (26)_ZNO10QByteArray7toUpperEv
//static
/*void qm1960573771()*/ {
  ;
  (void) ((QByteArray*)this_)->toUpper();
  (void) (QByteArray{}).toUpper();
   auto xptr = (QByteArray (QByteArray::*)() && ) &QByteArray::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:281
// [8] QByteArray trimmed() const
// (12)qm2261244263 (27)_ZNKR10QByteArray7trimmedEv
//static
/*void qm2261244263()*/ {
  ;
  (void) ((QByteArray*)this_)->trimmed();
   auto xptr = (QByteArray (QByteArray::*)() const & ) &QByteArray::trimmed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:283
// [8] QByteArray trimmed() 
// (12)qm3275066659 (26)_ZNO10QByteArray7trimmedEv
//static
/*void qm3275066659()*/ {
  ;
  (void) ((QByteArray*)this_)->trimmed();
  (void) (QByteArray{}).trimmed();
   auto xptr = (QByteArray (QByteArray::*)() && ) &QByteArray::trimmed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:285
// [8] QByteArray simplified() const
// (12)qm2886674147 (31)_ZNKR10QByteArray10simplifiedEv
//static
/*void qm2886674147()*/ {
  ;
  (void) ((QByteArray*)this_)->simplified();
   auto xptr = (QByteArray (QByteArray::*)() const & ) &QByteArray::simplified;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:287
// [8] QByteArray simplified() 
// (12)qm4092615109 (30)_ZNO10QByteArray10simplifiedEv
//static
/*void qm4092615109()*/ {
  ;
  (void) ((QByteArray*)this_)->simplified();
  (void) (QByteArray{}).simplified();
   auto xptr = (QByteArray (QByteArray::*)() && ) &QByteArray::simplified;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:303
// [8] QByteArray & prepend(int, char) 
// (11)qm479799935 (26)_ZN10QByteArray7prependEic
//static
/*void qm479799935(int count, char c)*/ {
  int count = *(int*)this_; char c = *(char*)this_;
  (void) ((QByteArray*)this_)->prepend(count, c);
   auto xptr = (QByteArray & (QByteArray::*)(int, char) ) &QByteArray::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:308
// [8] QByteArray & append(int, char) 
// (12)qm1921386550 (25)_ZN10QByteArray6appendEic
//static
/*void qm1921386550(int count, char c)*/ {
  int count = *(int*)this_; char c = *(char*)this_;
  (void) ((QByteArray*)this_)->append(count, c);
   auto xptr = (QByteArray & (QByteArray::*)(int, char) ) &QByteArray::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:321
// [8] QByteArray & replace(char, const char *) 
// (12)qm1915205513 (28)_ZN10QByteArray7replaceEcPKc
//static
/*void qm1915205513(char before, const char * after)*/ {
  char before = *(char*)this_; const char * after = *(const char **)this_;
  (void) ((QByteArray*)this_)->replace(before, after);
   auto xptr = (QByteArray & (QByteArray::*)(char, char const*) ) &QByteArray::replace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:323
// [8] QByteArray & replace(const char *, const char *) 
// (11)qm388472819 (30)_ZN10QByteArray7replaceEPKcS1_
//static
/*void qm388472819(const char * before, const char * after)*/ {
  const char * before = *(const char **)this_; const char * after = *(const char **)this_;
  (void) ((QByteArray*)this_)->replace(before, after);
   auto xptr = (QByteArray & (QByteArray::*)(char const*, char const*) ) &QByteArray::replace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:326
// [8] QByteArray & replace(const QByteArray &, const char *) 
// (11)qm969489155 (31)_ZN10QByteArray7replaceERKS_PKc
//static
/*void qm969489155(const QByteArray & before, const char * after)*/ {
  const QByteArray & before = *(const QByteArray *)this_; const char * after = *(const char **)this_;
  (void) ((QByteArray*)this_)->replace(before, after);
   auto xptr = (QByteArray & (QByteArray::*)(QByteArray const&, char const*) ) &QByteArray::replace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:329
// [8] QByteArray & operator+=(char) 
// (12)qm1238078446 (19)_ZN10QByteArraypLEc
//static
/*void qm1238078446(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteArray*)this_)->operator+=(c);
  // auto xptr = (QByteArray & (QByteArray::*)(char) ) &QByteArray::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:330
// [8] QByteArray & operator+=(const char *) 
// (11)qm154778189 (21)_ZN10QByteArraypLEPKc
//static
/*void qm154778189(const char * s)*/ {
  const char * s = *(const char **)this_;
  (void) ((QByteArray*)this_)->operator+=(s);
  // auto xptr = (QByteArray & (QByteArray::*)(char const*) ) &QByteArray::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:331
// [8] QByteArray & operator+=(const QByteArray &) 
// (12)qm1425889543 (22)_ZN10QByteArraypLERKS_
//static
/*void qm1425889543(const QByteArray & a)*/ {
  const QByteArray & a = *(const QByteArray *)this_;
  (void) ((QByteArray*)this_)->operator+=(a);
  // auto xptr = (QByteArray & (QByteArray::*)(QByteArray const&) ) &QByteArray::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:357
// [1] bool operator==(const QString &) const
// (12)qm1537515910 (29)_ZNK10QByteArrayeqERK7QString
//static
/*void qm1537515910(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator==(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:358
// [1] bool operator!=(const QString &) const
// (12)qm3010709670 (29)_ZNK10QByteArrayneERK7QString
//static
/*void qm3010709670(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator!=(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:359
// [1] bool operator<(const QString &) const
// (12)qm1150475390 (29)_ZNK10QByteArrayltERK7QString
//static
/*void qm1150475390(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator<(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:360
// [1] bool operator>(const QString &) const
// (12)qm2740675549 (29)_ZNK10QByteArraygtERK7QString
//static
/*void qm2740675549(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator>(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:361
// [1] bool operator<=(const QString &) const
// (12)qm3543105005 (29)_ZNK10QByteArrayleERK7QString
//static
/*void qm3543105005(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator<=(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:362
// [1] bool operator>=(const QString &) const
// (11)qm887538254 (29)_ZNK10QByteArraygeERK7QString
//static
/*void qm887538254(const QString & s2)*/ {
  const QString & s2 = *(const QString *)this_;
  (void) ((QByteArray*)this_)->operator>=(s2);
  // auto xptr = (bool (QByteArray::*)(QString const&) const ) &QByteArray::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:383
// [8] QByteArray & setNum(short, int) 
// (12)qm1729066676 (25)_ZN10QByteArray6setNumEsi
//static
/*void qm1729066676(short arg0, int base)*/ {
  short arg0 = *(short*)this_; int base = *(int*)this_;
  (void) ((QByteArray*)this_)->setNum(arg0, base);
   auto xptr = (QByteArray & (QByteArray::*)(short, int) ) &QByteArray::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:384
// [8] QByteArray & setNum(ushort, int) 
// (11)qm676257907 (25)_ZN10QByteArray6setNumEti
//static
/*void qm676257907(unsigned short arg0, int base)*/ {
  unsigned short arg0 = *(unsigned short*)this_; int base = *(int*)this_;
  (void) ((QByteArray*)this_)->setNum(arg0, base);
   auto xptr = (QByteArray & (QByteArray::*)(unsigned short, int) ) &QByteArray::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:385
// [8] QByteArray & setNum(int, int) 
// (12)qm3609365615 (25)_ZN10QByteArray6setNumEii
//static
/*void qm3609365615(int arg0, int base)*/ {
  int arg0 = *(int*)this_; int base = *(int*)this_;
  (void) ((QByteArray*)this_)->setNum(arg0, base);
   auto xptr = (QByteArray & (QByteArray::*)(int, int) ) &QByteArray::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:386
// [8] QByteArray & setNum(uint, int) 
// (12)qm4228898732 (25)_ZN10QByteArray6setNumEji
//static
/*void qm4228898732(unsigned int arg0, int base)*/ {
  unsigned int arg0 = *(unsigned int*)this_; int base = *(int*)this_;
  (void) ((QByteArray*)this_)->setNum(arg0, base);
   auto xptr = (QByteArray & (QByteArray::*)(unsigned int, int) ) &QByteArray::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:389
// [8] QByteArray & setNum(float, char, int) 
// (12)qm3389376387 (26)_ZN10QByteArray6setNumEfci
//static
/*void qm3389376387(float arg0, char f, int prec)*/ {
  float arg0 = *(float*)this_; char f = *(char*)this_; int prec = *(int*)this_;
  (void) ((QByteArray*)this_)->setNum(arg0, f, prec);
   auto xptr = (QByteArray & (QByteArray::*)(float, char, int) ) &QByteArray::setNum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:425
// [8] QByteArray::iterator begin() 
// (12)qm4083352667 (23)_ZN10QByteArray5beginEv
//static
/*void qm4083352667()*/ {
  ;
  (void) ((QByteArray*)this_)->begin();
   auto xptr = (char * (QByteArray::*)() ) &QByteArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:426
// [8] QByteArray::const_iterator begin() const
// (12)qm2080010589 (24)_ZNK10QByteArray5beginEv
//static
/*void qm2080010589()*/ {
  ;
  (void) ((QByteArray*)this_)->begin();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:427
// [8] QByteArray::const_iterator cbegin() const
// (12)qm3776513419 (25)_ZNK10QByteArray6cbeginEv
//static
/*void qm3776513419()*/ {
  ;
  (void) ((QByteArray*)this_)->cbegin();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:428
// [8] QByteArray::const_iterator constBegin() const
// (12)qm3097961376 (30)_ZNK10QByteArray10constBeginEv
//static
/*void qm3097961376()*/ {
  ;
  (void) ((QByteArray*)this_)->constBegin();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:429
// [8] QByteArray::iterator end() 
// (12)qm3945473004 (21)_ZN10QByteArray3endEv
//static
/*void qm3945473004()*/ {
  ;
  (void) ((QByteArray*)this_)->end();
   auto xptr = (char * (QByteArray::*)() ) &QByteArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:430
// [8] QByteArray::const_iterator end() const
// (12)qm2695326882 (22)_ZNK10QByteArray3endEv
//static
/*void qm2695326882()*/ {
  ;
  (void) ((QByteArray*)this_)->end();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:431
// [8] QByteArray::const_iterator cend() const
// (12)qm2506824493 (23)_ZNK10QByteArray4cendEv
//static
/*void qm2506824493()*/ {
  ;
  (void) ((QByteArray*)this_)->cend();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:432
// [8] QByteArray::const_iterator constEnd() const
// (12)qm3517321483 (27)_ZNK10QByteArray8constEndEv
//static
/*void qm3517321483()*/ {
  ;
  (void) ((QByteArray*)this_)->constEnd();
   auto xptr = (const char * (QByteArray::*)() const ) &QByteArray::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:433
// [8] QByteArray::reverse_iterator rbegin() 
// (12)qm3101886590 (24)_ZN10QByteArray6rbeginEv
//static
/*void qm3101886590()*/ {
  ;
  (void) ((QByteArray*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<char *> (QByteArray::*)() ) &QByteArray::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:434
// [8] QByteArray::reverse_iterator rend() 
// (12)qm3436063435 (22)_ZN10QByteArray4rendEv
//static
/*void qm3436063435()*/ {
  ;
  (void) ((QByteArray*)this_)->rend();
   auto xptr = (std::reverse_iterator<char *> (QByteArray::*)() ) &QByteArray::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:435
// [8] QByteArray::const_reverse_iterator rbegin() const
// (12)qm1359492158 (25)_ZNK10QByteArray6rbeginEv
//static
/*void qm1359492158()*/ {
  ;
  (void) ((QByteArray*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<const char *> (QByteArray::*)() const ) &QByteArray::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:436
// [8] QByteArray::const_reverse_iterator rend() const
// (12)qm1575078419 (23)_ZNK10QByteArray4rendEv
//static
/*void qm1575078419()*/ {
  ;
  (void) ((QByteArray*)this_)->rend();
   auto xptr = (std::reverse_iterator<const char *> (QByteArray::*)() const ) &QByteArray::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:437
// [8] QByteArray::const_reverse_iterator crbegin() const
// (12)qm3899520848 (26)_ZNK10QByteArray7crbeginEv
//static
/*void qm3899520848()*/ {
  ;
  (void) ((QByteArray*)this_)->crbegin();
   auto xptr = (std::reverse_iterator<const char *> (QByteArray::*)() const ) &QByteArray::crbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:438
// [8] QByteArray::const_reverse_iterator crend() const
// (11)qm702457541 (24)_ZNK10QByteArray5crendEv
//static
/*void qm702457541()*/ {
  ;
  (void) ((QByteArray*)this_)->crend();
   auto xptr = (std::reverse_iterator<const char *> (QByteArray::*)() const ) &QByteArray::crend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:448
// [-2] void push_back(char) 
// (12)qm1262805333 (27)_ZN10QByteArray9push_backEc
//static
/*void qm1262805333(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteArray*)this_)->push_back(c);
   auto xptr = (void (QByteArray::*)(char) ) &QByteArray::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:449
// [-2] void push_back(const char *) 
// (12)qm2953043873 (29)_ZN10QByteArray9push_backEPKc
//static
/*void qm2953043873(const char * c)*/ {
  const char * c = *(const char **)this_;
  (void) ((QByteArray*)this_)->push_back(c);
   auto xptr = (void (QByteArray::*)(char const*) ) &QByteArray::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:450
// [-2] void push_back(const QByteArray &) 
// (12)qm4260941105 (30)_ZN10QByteArray9push_backERKS_
//static
/*void qm4260941105(const QByteArray & a)*/ {
  const QByteArray & a = *(const QByteArray *)this_;
  (void) ((QByteArray*)this_)->push_back(a);
   auto xptr = (void (QByteArray::*)(QByteArray const&) ) &QByteArray::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:451
// [-2] void push_front(char) 
// (12)qm3947814458 (29)_ZN10QByteArray10push_frontEc
//static
/*void qm3947814458(char c)*/ {
  char c = *(char*)this_;
  (void) ((QByteArray*)this_)->push_front(c);
   auto xptr = (void (QByteArray::*)(char) ) &QByteArray::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:452
// [-2] void push_front(const char *) 
// (12)qm3825214974 (31)_ZN10QByteArray10push_frontEPKc
//static
/*void qm3825214974(const char * c)*/ {
  const char * c = *(const char **)this_;
  (void) ((QByteArray*)this_)->push_front(c);
   auto xptr = (void (QByteArray::*)(char const*) ) &QByteArray::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:453
// [-2] void push_front(const QByteArray &) 
// (11)qm108561070 (32)_ZN10QByteArray10push_frontERKS_
//static
/*void qm108561070(const QByteArray & a)*/ {
  const QByteArray & a = *(const QByteArray *)this_;
  (void) ((QByteArray*)this_)->push_front(a);
   auto xptr = (void (QByteArray::*)(QByteArray const&) ) &QByteArray::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:454
// [-2] void shrink_to_fit() 
// (12)qm4236871998 (32)_ZN10QByteArray13shrink_to_fitEv
//static
/*void qm4236871998()*/ {
  ;
  (void) ((QByteArray*)this_)->shrink_to_fit();
   auto xptr = (void (QByteArray::*)() ) &QByteArray::shrink_to_fit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:456
// [8] QByteArray fromStdString(const std::string &) 
// (12)qm1628872154 (85)_ZN10QByteArray13fromStdStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//static
/*void qm1628872154(const std::__cxx11::basic_string<char> & s)*/ {
  const std::__cxx11::basic_string<char> & s = *(const std::__cxx11::basic_string<char> *)this_;
  (void) QByteArray::fromStdString(s);
   auto xptr = (QByteArray (*)(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) ) &QByteArray::fromStdString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:457
// [32] std::string toStdString() const
// (12)qm1522008311 (38)_ZNK10QByteArray11toStdStringB5cxx11Ev
//static
/*void qm1522008311()*/ {
  ;
  (void) ((QByteArray*)this_)->toStdString();
   auto xptr = (std::__cxx11::basic_string<char> (QByteArray::*)() const ) &QByteArray::toStdString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:459
// [4] int count() const
// (12)qm3931145074 (24)_ZNK10QByteArray5countEv
//static
/*void qm3931145074()*/ {
  ;
  (void) ((QByteArray*)this_)->count();
   auto xptr = (int (QByteArray::*)() const ) &QByteArray::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:460
// [4] int length() const
// (11)qm833039002 (25)_ZNK10QByteArray6lengthEv
//static
/*void qm833039002()*/ {
  ;
  (void) ((QByteArray*)this_)->length();
   auto xptr = (int (QByteArray::*)() const ) &QByteArray::length;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:463
// [-2] void QByteArray(QByteArrayDataPtr) 
// (12)qm2424989172 (37)_ZN10QByteArrayC2E17QByteArrayDataPtr
/*void* qm2424989172(QByteArrayDataPtr dd)*/{
  QByteArrayDataPtr dd = *(QByteArrayDataPtr*)this_;
  this_ =  new QByteArray(dd);
  this_ =  new MyQByteArray(dd);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:489
// [8] QByteArray::DataPtr & data_ptr() 
// (11)qm439419319 (26)_ZN10QByteArray8data_ptrEv
//static
/*void qm439419319()*/ {
  ;
  (void) ((QByteArray*)this_)->data_ptr();
   auto xptr = (QTypedArrayData<char> *& (QByteArray::*)() ) &QByteArray::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qbytearray
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
