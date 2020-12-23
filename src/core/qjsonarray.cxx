//  header block begin

// /usr/include/qt/QtCore/qjsonarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonArray is pure virtual: false false
// QJsonArray has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonarray(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:58
// [-2] void QJsonArray() 
// (12)qm1575282276 (19)_ZN10QJsonArrayC2Ev
/*void* qm1575282276()*/{
  ;
  this_ =  new QJsonArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:60
// [-2] void QJsonArray(std::initializer_list<QJsonValue>) 
// (12)qm4153761749 (52)_ZN10QJsonArrayC2ESt16initializer_listI10QJsonValueE
/*void* qm4153761749(std::initializer_list<QJsonValue> args)*/{
  std::initializer_list<QJsonValue> args = *(std::initializer_list<QJsonValue>*)this_;
  this_ =  new QJsonArray(args);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:64
// [-2] void QJsonArray(const QJsonArray &) 
// (11)qm637652994 (22)_ZN10QJsonArrayC2ERKS_
/*void* qm637652994(const QJsonArray & other)*/{
  const QJsonArray & other = *(const QJsonArray *)this_;
  this_ =  new QJsonArray(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:67
// [-2] void QJsonArray(QJsonArray &&) 
// (12)qm1222195736 (21)_ZN10QJsonArrayC2EOS_
/*void* qm1222195736(QJsonArray && other)*/{
  QJsonArray && other =  static_cast<QJsonArray &&>(*(QJsonArray *)this_);
  this_ =  new QJsonArray(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:69
// [16] QJsonArray & operator=(QJsonArray &&) 
// (12)qm2800730328 (21)_ZN10QJsonArrayaSEOS_
//static
/*void qm2800730328(QJsonArray && other)*/ {
  QJsonArray && other =  static_cast<QJsonArray &&>(*(QJsonArray *)this_);
  (void) ((QJsonArray*)this_)->operator=(other);
  // auto xptr = (QJsonArray & (QJsonArray::*)(QJsonArray&&) ) &QJsonArray::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:80
// [4] int count() const
// (11)qm761099420 (24)_ZNK10QJsonArray5countEv
//static
/*void qm761099420()*/ {
  ;
  (void) ((QJsonArray*)this_)->count();
   auto xptr = (int (QJsonArray::*)() const ) &QJsonArray::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:91
// [-2] void removeFirst() 
// (12)qm4270725254 (30)_ZN10QJsonArray11removeFirstEv
//static
/*void qm4270725254()*/ {
  ;
  (void) ((QJsonArray*)this_)->removeFirst();
   auto xptr = (void (QJsonArray::*)() ) &QJsonArray::removeFirst;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:92
// [-2] void removeLast() 
// (12)qm3714721454 (29)_ZN10QJsonArray10removeLastEv
//static
/*void qm3714721454()*/ {
  ;
  (void) ((QJsonArray*)this_)->removeLast();
   auto xptr = (void (QJsonArray::*)() ) &QJsonArray::removeLast;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:104
// [-2] void swap(QJsonArray &) 
// (12)qm4173494730 (24)_ZN10QJsonArray4swapERS_
//static
/*void qm4173494730(QJsonArray & other)*/ {
  QJsonArray & other = *(QJsonArray *)this_;
  (void) ((QJsonArray*)this_)->swap(other);
   auto xptr = (void (QJsonArray::*)(QJsonArray&) ) &QJsonArray::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:199
// [16] QJsonArray::iterator begin() 
// (11)qm879686581 (23)_ZN10QJsonArray5beginEv
//static
/*void qm879686581()*/ {
  ;
  (void) ((QJsonArray*)this_)->begin();
   auto xptr = (QJsonArray::iterator (QJsonArray::*)() ) &QJsonArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:200
// [16] QJsonArray::const_iterator begin() const
// (12)qm3170338483 (24)_ZNK10QJsonArray5beginEv
//static
/*void qm3170338483()*/ {
  ;
  (void) ((QJsonArray*)this_)->begin();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:201
// [16] QJsonArray::const_iterator constBegin() const
// (11)qm142052615 (30)_ZNK10QJsonArray10constBeginEv
//static
/*void qm142052615()*/ {
  ;
  (void) ((QJsonArray*)this_)->constBegin();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:202
// [16] QJsonArray::const_iterator cbegin() const
// (12)qm2792146691 (25)_ZNK10QJsonArray6cbeginEv
//static
/*void qm2792146691()*/ {
  ;
  (void) ((QJsonArray*)this_)->cbegin();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:203
// [16] QJsonArray::iterator end() 
// (12)qm3569977479 (21)_ZN10QJsonArray3endEv
//static
/*void qm3569977479()*/ {
  ;
  (void) ((QJsonArray*)this_)->end();
   auto xptr = (QJsonArray::iterator (QJsonArray::*)() ) &QJsonArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:204
// [16] QJsonArray::const_iterator end() const
// (12)qm2672150473 (22)_ZNK10QJsonArray3endEv
//static
/*void qm2672150473()*/ {
  ;
  (void) ((QJsonArray*)this_)->end();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:205
// [16] QJsonArray::const_iterator constEnd() const
// (12)qm1469507489 (27)_ZNK10QJsonArray8constEndEv
//static
/*void qm1469507489()*/ {
  ;
  (void) ((QJsonArray*)this_)->constEnd();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:206
// [16] QJsonArray::const_iterator cend() const
// (12)qm1328824662 (23)_ZNK10QJsonArray4cendEv
//static
/*void qm1328824662()*/ {
  ;
  (void) ((QJsonArray*)this_)->cend();
   auto xptr = (QJsonArray::const_iterator (QJsonArray::*)() const ) &QJsonArray::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:207
// [16] QJsonArray::iterator insert(QJsonArray::iterator, const QJsonValue &) 
// (12)qm3464738045 (50)_ZN10QJsonArray6insertENS_8iteratorERK10QJsonValue
//static
/*void qm3464738045(QJsonArray::iterator before, const QJsonValue & value)*/ {
  QJsonArray::iterator before = *(QJsonArray::iterator*)this_; const QJsonValue & value = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->insert(before, value);
   auto xptr = (QJsonArray::iterator (QJsonArray::*)(QJsonArray::iterator, QJsonValue const&) ) &QJsonArray::insert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:208
// [16] QJsonArray::iterator erase(QJsonArray::iterator) 
// (11)qm215315797 (35)_ZN10QJsonArray5eraseENS_8iteratorE
//static
/*void qm215315797(QJsonArray::iterator it)*/ {
  QJsonArray::iterator it = *(QJsonArray::iterator*)this_;
  (void) ((QJsonArray*)this_)->erase(it);
   auto xptr = (QJsonArray::iterator (QJsonArray::*)(QJsonArray::iterator) ) &QJsonArray::erase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:215
// [16] QJsonArray operator+(const QJsonValue &) const
// (12)qm1668401244 (33)_ZNK10QJsonArrayplERK10QJsonValue
//static
/*void qm1668401244(const QJsonValue & v)*/ {
  const QJsonValue & v = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->operator+(v);
  // auto xptr = (QJsonArray (QJsonArray::*)(QJsonValue const&) const ) &QJsonArray::operator+;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:217
// [16] QJsonArray & operator+=(const QJsonValue &) 
// (12)qm1800925189 (32)_ZN10QJsonArraypLERK10QJsonValue
//static
/*void qm1800925189(const QJsonValue & v)*/ {
  const QJsonValue & v = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->operator+=(v);
  // auto xptr = (QJsonArray & (QJsonArray::*)(QJsonValue const&) ) &QJsonArray::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:219
// [16] QJsonArray & operator<<(const QJsonValue &) 
// (12)qm2532058096 (32)_ZN10QJsonArraylsERK10QJsonValue
//static
/*void qm2532058096(const QJsonValue & v)*/ {
  const QJsonValue & v = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->operator<<(v);
  // auto xptr = (QJsonArray & (QJsonArray::*)(QJsonValue const&) ) &QJsonArray::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:223
// [-2] void push_back(const QJsonValue &) 
// (12)qm3294004032 (40)_ZN10QJsonArray9push_backERK10QJsonValue
//static
/*void qm3294004032(const QJsonValue & t)*/ {
  const QJsonValue & t = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->push_back(t);
   auto xptr = (void (QJsonArray::*)(QJsonValue const&) ) &QJsonArray::push_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:224
// [-2] void push_front(const QJsonValue &) 
// (11)qm330307842 (42)_ZN10QJsonArray10push_frontERK10QJsonValue
//static
/*void qm330307842(const QJsonValue & t)*/ {
  const QJsonValue & t = *(const QJsonValue *)this_;
  (void) ((QJsonArray*)this_)->push_front(t);
   auto xptr = (void (QJsonArray::*)(QJsonValue const&) ) &QJsonArray::push_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:225
// [-2] void pop_front() 
// (12)qm4061685973 (27)_ZN10QJsonArray9pop_frontEv
//static
/*void qm4061685973()*/ {
  ;
  (void) ((QJsonArray*)this_)->pop_front();
   auto xptr = (void (QJsonArray::*)() ) &QJsonArray::pop_front;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:226
// [-2] void pop_back() 
// (12)qm1036877936 (26)_ZN10QJsonArray8pop_backEv
//static
/*void qm1036877936()*/ {
  ;
  (void) ((QJsonArray*)this_)->pop_back();
   auto xptr = (void (QJsonArray::*)() ) &QJsonArray::pop_back;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:227
// [1] bool empty() const
// (12)qm4242099061 (24)_ZNK10QJsonArray5emptyEv
//static
/*void qm4242099061()*/ {
  ;
  (void) ((QJsonArray*)this_)->empty();
   auto xptr = (bool (QJsonArray::*)() const ) &QJsonArray::empty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QJsonArrayD2Ev(void *this_)*/ {
  delete (QJsonArray*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonarray
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
