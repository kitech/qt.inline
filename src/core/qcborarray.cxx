//  header block begin

// /usr/include/qt/QtCore/qcborarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborArray is pure virtual: false false
// QCborArray has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborArray_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborArray_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborArray_t qt_meta_stringdata_MyQCborArray = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCborArray"
  },
  "MyQCborArray"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborArray[] = {
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
class Q_DECL_EXPORT MyQCborArray : public QCborArray {
public:
  virtual ~MyQCborArray() {}
// void QCborArray()
MyQCborArray() : QCborArray() {}
// void QCborArray(const QCborArray &)
MyQCborArray(const QCborArray & other) : QCborArray(other) {}
// void QCborArray(std::initializer_list<QCborValue>)
MyQCborArray(std::initializer_list<QCborValue> args) : QCborArray(args) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborarray(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:168
// [-2] void QCborArray(std::initializer_list<QCborValue>) 
// (12)qm2236812956 (52)_ZN10QCborArrayC2ESt16initializer_listI10QCborValueE
/*void* qm2236812956(std::initializer_list<QCborValue> args)*/{
  std::initializer_list<QCborValue> args = *(std::initializer_list<QCborValue>*)this_;
  this_ =  new QCborArray(args);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:177
// [-2] void swap(QCborArray &) 
// (12)qm2443249074 (24)_ZN10QCborArray4swapERS_
//static
/*void qm2443249074(QCborArray & other)*/ {
  QCborArray & other = *(QCborArray *)this_;
  (void) ((QCborArray*)this_)->swap(other);
   auto xptr = (void (QCborArray::*)(QCborArray&) ) &QCborArray::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:182
// [24] QCborValue toCborValue() const
// (12)qm4135925061 (31)_ZNK10QCborArray11toCborValueEv
//static
/*void qm4135925061()*/ {
  ;
  (void) ((QCborArray*)this_)->toCborValue();
   auto xptr = (QCborValue (QCborArray::*)() const ) &QCborArray::toCborValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:185
// [1] bool isEmpty() const
// (12)qm2213113256 (26)_ZNK10QCborArray7isEmptyEv
//static
/*void qm2213113256()*/ {
  ;
  (void) ((QCborArray*)this_)->isEmpty();
   auto xptr = (bool (QCborArray::*)() const ) &QCborArray::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:189
// [24] QCborValue first() const
// (12)qm3704712679 (24)_ZNK10QCborArray5firstEv
//static
/*void qm3704712679()*/ {
  ;
  (void) ((QCborArray*)this_)->first();
   auto xptr = (QCborValue (QCborArray::*)() const ) &QCborArray::first;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:190
// [24] QCborValue last() const
// (12)qm4226296873 (23)_ZNK10QCborArray4lastEv
//static
/*void qm4226296873()*/ {
  ;
  (void) ((QCborArray*)this_)->last();
   auto xptr = (QCborValue (QCborArray::*)() const ) &QCborArray::last;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:191
// [24] const QCborValue operator[](qsizetype) const
// (12)qm3057092074 (20)_ZNK10QCborArrayixEx
//static
/*void qm3057092074(long long i)*/ {
  long long i = *(long long*)this_;
  (void) ((QCborArray*)this_)->operator[](i);
  // auto xptr = (const QCborValue (QCborArray::*)(long long) const ) &QCborArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:192
// [16] QCborValueRef first() 
// (12)qm1414011105 (23)_ZN10QCborArray5firstEv
//static
/*void qm1414011105()*/ {
  ;
  (void) ((QCborArray*)this_)->first();
   auto xptr = (QCborValueRef (QCborArray::*)() ) &QCborArray::first;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:193
// [16] QCborValueRef last() 
// (12)qm1791479025 (22)_ZN10QCborArray4lastEv
//static
/*void qm1791479025()*/ {
  ;
  (void) ((QCborArray*)this_)->last();
   auto xptr = (QCborValueRef (QCborArray::*)() ) &QCborArray::last;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:194
// [16] QCborValueRef operator[](qsizetype) 
// (11)qm627328562 (19)_ZN10QCborArrayixEx
//static
/*void qm627328562(long long i)*/ {
  long long i = *(long long*)this_;
  (void) ((QCborArray*)this_)->operator[](i);
  // auto xptr = (QCborValueRef (QCborArray::*)(long long) ) &QCborArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:203
// [-2] void prepend(const QCborValue &) 
// (12)qm2510740018 (38)_ZN10QCborArray7prependERK10QCborValue
//static
/*void qm2510740018(const QCborValue & value)*/ {
  const QCborValue & value = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->prepend(value);
   auto xptr = (void (QCborArray::*)(QCborValue const&) ) &QCborArray::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:204
// [-2] void prepend(QCborValue &&) 
// (12)qm1788920957 (37)_ZN10QCborArray7prependEO10QCborValue
//static
/*void qm1788920957(QCborValue && value)*/ {
  QCborValue && value =  static_cast<QCborValue &&>(*(QCborValue *)this_);
  (void) ((QCborArray*)this_)->prepend(value);
   auto xptr = (void (QCborArray::*)(QCborValue&&) ) &QCborArray::prepend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:205
// [-2] void append(const QCborValue &) 
// (11)qm925399926 (37)_ZN10QCborArray6appendERK10QCborValue
//static
/*void qm925399926(const QCborValue & value)*/ {
  const QCborValue & value = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->append(value);
   auto xptr = (void (QCborArray::*)(QCborValue const&) ) &QCborArray::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:206
// [-2] void append(QCborValue &&) 
// (12)qm2205217374 (36)_ZN10QCborArray6appendEO10QCborValue
//static
/*void qm2205217374(QCborValue && value)*/ {
  QCborValue && value =  static_cast<QCborValue &&>(*(QCborValue *)this_);
  (void) ((QCborArray*)this_)->append(value);
   auto xptr = (void (QCborArray::*)(QCborValue&&) ) &QCborArray::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:207
// [24] QCborValue extract(QCborArray::ConstIterator) 
// (11)qm341860975 (43)_ZN10QCborArray7extractENS_13ConstIteratorE
//static
/*void qm341860975(QCborArray::ConstIterator it)*/ {
  QCborArray::ConstIterator it = *(QCborArray::ConstIterator*)this_;
  (void) ((QCborArray*)this_)->extract(it);
   auto xptr = (QCborValue (QCborArray::*)(QCborArray::ConstIterator) ) &QCborArray::extract;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:210
// [24] QCborValue takeAt(qsizetype) 
// (12)qm2989956084 (24)_ZN10QCborArray6takeAtEx
//static
/*void qm2989956084(long long i)*/ {
  long long i = *(long long*)this_;
  (void) ((QCborArray*)this_)->takeAt(i);
   auto xptr = (QCborValue (QCborArray::*)(long long) ) &QCborArray::takeAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:211
// [-2] void removeFirst() 
// (12)qm1263022758 (30)_ZN10QCborArray11removeFirstEv
//static
/*void qm1263022758()*/ {
  ;
  (void) ((QCborArray*)this_)->removeFirst();
   auto xptr = (void (QCborArray::*)() ) &QCborArray::removeFirst;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:212
// [-2] void removeLast() 
// (12)qm3415160595 (29)_ZN10QCborArray10removeLastEv
//static
/*void qm3415160595()*/ {
  ;
  (void) ((QCborArray*)this_)->removeLast();
   auto xptr = (void (QCborArray::*)() ) &QCborArray::removeLast;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:213
// [24] QCborValue takeFirst() 
// (12)qm4159475921 (27)_ZN10QCborArray9takeFirstEv
//static
/*void qm4159475921()*/ {
  ;
  (void) ((QCborArray*)this_)->takeFirst();
   auto xptr = (QCborValue (QCborArray::*)() ) &QCborArray::takeFirst;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:214
// [24] QCborValue takeLast() 
// (11)qm364272871 (26)_ZN10QCborArray8takeLastEv
//static
/*void qm364272871()*/ {
  ;
  (void) ((QCborArray*)this_)->takeLast();
   auto xptr = (QCborValue (QCborArray::*)() ) &QCborArray::takeLast;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:228
// [1] bool operator==(const QCborArray &) const
// (12)qm2630881766 (23)_ZNK10QCborArrayeqERKS_
//static
/*void qm2630881766(const QCborArray & other)*/ {
  const QCborArray & other = *(const QCborArray *)this_;
  (void) ((QCborArray*)this_)->operator==(other);
  // auto xptr = (bool (QCborArray::*)(QCborArray const&) const ) &QCborArray::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:230
// [1] bool operator!=(const QCborArray &) const
// (11)qm110101905 (23)_ZNK10QCborArrayneERKS_
//static
/*void qm110101905(const QCborArray & other)*/ {
  const QCborArray & other = *(const QCborArray *)this_;
  (void) ((QCborArray*)this_)->operator!=(other);
  // auto xptr = (bool (QCborArray::*)(QCborArray const&) const ) &QCborArray::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:232
// [1] bool operator<(const QCborArray &) const
// (12)qm1501939078 (23)_ZNK10QCborArrayltERKS_
//static
/*void qm1501939078(const QCborArray & other)*/ {
  const QCborArray & other = *(const QCborArray *)this_;
  (void) ((QCborArray*)this_)->operator<(other);
  // auto xptr = (bool (QCborArray::*)(QCborArray const&) const ) &QCborArray::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:238
// [16] QCborArray::iterator begin() 
// (12)qm1372615974 (23)_ZN10QCborArray5beginEv
//static
/*void qm1372615974()*/ {
  ;
  (void) ((QCborArray*)this_)->begin();
   auto xptr = (QCborArray::Iterator (QCborArray::*)() ) &QCborArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:239
// [16] QCborArray::const_iterator constBegin() const
// (11)qm512924858 (30)_ZNK10QCborArray10constBeginEv
//static
/*void qm512924858()*/ {
  ;
  (void) ((QCborArray*)this_)->constBegin();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:240
// [16] QCborArray::const_iterator begin() const
// (12)qm3645440032 (24)_ZNK10QCborArray5beginEv
//static
/*void qm3645440032()*/ {
  ;
  (void) ((QCborArray*)this_)->begin();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:241
// [16] QCborArray::const_iterator cbegin() const
// (12)qm3473914747 (25)_ZNK10QCborArray6cbeginEv
//static
/*void qm3473914747()*/ {
  ;
  (void) ((QCborArray*)this_)->cbegin();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:242
// [16] QCborArray::iterator end() 
// (12)qm1343545999 (21)_ZN10QCborArray3endEv
//static
/*void qm1343545999()*/ {
  ;
  (void) ((QCborArray*)this_)->end();
   auto xptr = (QCborArray::Iterator (QCborArray::*)() ) &QCborArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:243
// [16] QCborArray::const_iterator constEnd() const
// (12)qm3921887275 (27)_ZNK10QCborArray8constEndEv
//static
/*void qm3921887275()*/ {
  ;
  (void) ((QCborArray*)this_)->constEnd();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:244
// [16] QCborArray::const_iterator end() const
// (11)qm462990785 (22)_ZNK10QCborArray3endEv
//static
/*void qm462990785()*/ {
  ;
  (void) ((QCborArray*)this_)->end();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:245
// [16] QCborArray::const_iterator cend() const
// (12)qm1097536526 (23)_ZNK10QCborArray4cendEv
//static
/*void qm1097536526()*/ {
  ;
  (void) ((QCborArray*)this_)->cend();
   auto xptr = (QCborArray::ConstIterator (QCborArray::*)() const ) &QCborArray::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:246
// [16] QCborArray::iterator insert(QCborArray::iterator, const QCborValue &) 
// (12)qm2296866439 (50)_ZN10QCborArray6insertENS_8IteratorERK10QCborValue
//static
/*void qm2296866439(QCborArray::Iterator before, const QCborValue & value)*/ {
  QCborArray::Iterator before = *(QCborArray::Iterator*)this_; const QCborValue & value = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->insert(before, value);
   auto xptr = (QCborArray::Iterator (QCborArray::*)(QCborArray::Iterator, QCborValue const&) ) &QCborArray::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:248
// [16] QCborArray::iterator insert(QCborArray::const_iterator, const QCborValue &) 
// (12)qm2028515557 (56)_ZN10QCborArray6insertENS_13ConstIteratorERK10QCborValue
//static
/*void qm2028515557(QCborArray::ConstIterator before, const QCborValue & value)*/ {
  QCborArray::ConstIterator before = *(QCborArray::ConstIterator*)this_; const QCborValue & value = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->insert(before, value);
   auto xptr = (QCborArray::Iterator (QCborArray::*)(QCborArray::ConstIterator, QCborValue const&) ) &QCborArray::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:250
// [16] QCborArray::iterator erase(QCborArray::iterator) 
// (12)qm2365204391 (35)_ZN10QCborArray5eraseENS_8IteratorE
//static
/*void qm2365204391(QCborArray::Iterator it)*/ {
  QCborArray::Iterator it = *(QCborArray::Iterator*)this_;
  (void) ((QCborArray*)this_)->erase(it);
   auto xptr = (QCborArray::Iterator (QCborArray::*)(QCborArray::Iterator) ) &QCborArray::erase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:251
// [16] QCborArray::iterator erase(QCborArray::const_iterator) 
// (12)qm3603085119 (41)_ZN10QCborArray5eraseENS_13ConstIteratorE
//static
/*void qm3603085119(QCborArray::ConstIterator it)*/ {
  QCborArray::ConstIterator it = *(QCborArray::ConstIterator*)this_;
  (void) ((QCborArray*)this_)->erase(it);
   auto xptr = (QCborArray::Iterator (QCborArray::*)(QCborArray::ConstIterator) ) &QCborArray::erase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:253
// [-2] void push_back(const QCborValue &) 
// (11)qm989258516 (40)_ZN10QCborArray9push_backERK10QCborValue
//static
/*void qm989258516(const QCborValue & t)*/ {
  const QCborValue & t = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->push_back(t);
   auto xptr = (void (QCborArray::*)(QCborValue const&) ) &QCborArray::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:254
// [-2] void push_front(const QCborValue &) 
// (12)qm1883679635 (42)_ZN10QCborArray10push_frontERK10QCborValue
//static
/*void qm1883679635(const QCborValue & t)*/ {
  const QCborValue & t = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->push_front(t);
   auto xptr = (void (QCborArray::*)(QCborValue const&) ) &QCborArray::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:255
// [-2] void pop_front() 
// (12)qm4291516236 (27)_ZN10QCborArray9pop_frontEv
//static
/*void qm4291516236()*/ {
  ;
  (void) ((QCborArray*)this_)->pop_front();
   auto xptr = (void (QCborArray::*)() ) &QCborArray::pop_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:256
// [-2] void pop_back() 
// (12)qm2207787002 (26)_ZN10QCborArray8pop_backEv
//static
/*void qm2207787002()*/ {
  ;
  (void) ((QCborArray*)this_)->pop_back();
   auto xptr = (void (QCborArray::*)() ) &QCborArray::pop_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:257
// [1] bool empty() const
// (12)qm2573716966 (24)_ZNK10QCborArray5emptyEv
//static
/*void qm2573716966()*/ {
  ;
  (void) ((QCborArray*)this_)->empty();
   auto xptr = (bool (QCborArray::*)() const ) &QCborArray::empty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:260
// [8] QCborArray operator+(const QCborValue &) const
// (12)qm1172887008 (33)_ZNK10QCborArrayplERK10QCborValue
//static
/*void qm1172887008(const QCborValue & v)*/ {
  const QCborValue & v = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->operator+(v);
  // auto xptr = (QCborArray (QCborArray::*)(QCborValue const&) const ) &QCborArray::operator+;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:262
// [8] QCborArray & operator+=(const QCborValue &) 
// (12)qm1305406905 (32)_ZN10QCborArraypLERK10QCborValue
//static
/*void qm1305406905(const QCborValue & v)*/ {
  const QCborValue & v = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->operator+=(v);
  // auto xptr = (QCborArray & (QCborArray::*)(QCborValue const&) ) &QCborArray::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:264
// [8] QCborArray & operator<<(const QCborValue &) 
// (12)qm2960473676 (32)_ZN10QCborArraylsERK10QCborValue
//static
/*void qm2960473676(const QCborValue & v)*/ {
  const QCborValue & v = *(const QCborValue *)this_;
  (void) ((QCborArray*)this_)->operator<<(v);
  // auto xptr = (QCborArray & (QCborArray::*)(QCborValue const&) ) &QCborArray::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QCborArrayD2Ev(void *this_)*/ {
  delete (QCborArray*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborarray
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
