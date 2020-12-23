//  header block begin

// /usr/include/qt/QtCore/qjsonobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonObject is pure virtual: false false
// QJsonObject has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:62
// [-2] void QJsonObject() 
// (12)qm2710310538 (20)_ZN11QJsonObjectC2Ev
/*void* qm2710310538()*/{
  ;
  this_ =  new QJsonObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:64
// [-2] void QJsonObject(std::initializer_list<QPair<QString, QJsonValue>>) 
// (12)qm1123035815 (69)_ZN11QJsonObjectC2ESt16initializer_listI5QPairI7QString10QJsonValueEE
/*void* qm1123035815(std::initializer_list<QPair<QString, QJsonValue>> args)*/{
  std::initializer_list<QPair<QString, QJsonValue>> args = *(std::initializer_list<QPair<QString, QJsonValue>>*)this_;
  this_ =  new QJsonObject(args);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:68
// [-2] void QJsonObject(const QJsonObject &) 
// (12)qm1353956826 (23)_ZN11QJsonObjectC2ERKS_
/*void* qm1353956826(const QJsonObject & other)*/{
  const QJsonObject & other = *(const QJsonObject *)this_;
  this_ =  new QJsonObject(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:71
// [-2] void QJsonObject(QJsonObject &&) 
// (11)qm653619800 (22)_ZN11QJsonObjectC2EOS_
/*void* qm653619800(QJsonObject && other)*/{
  QJsonObject && other =  static_cast<QJsonObject &&>(*(QJsonObject *)this_);
  this_ =  new QJsonObject(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:73
// [16] QJsonObject & operator=(QJsonObject &&) 
// (12)qm3368257688 (22)_ZN11QJsonObjectaSEOS_
//static
/*void qm3368257688(QJsonObject && other)*/ {
  QJsonObject && other =  static_cast<QJsonObject &&>(*(QJsonObject *)this_);
  (void) ((QJsonObject*)this_)->operator=(other);
  // auto xptr = (QJsonObject & (QJsonObject::*)(QJsonObject&&) ) &QJsonObject::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:79
// [-2] void swap(QJsonObject &) 
// (12)qm2183159178 (25)_ZN11QJsonObject4swapERS_
//static
/*void qm2183159178(QJsonObject & other)*/ {
  QJsonObject & other = *(QJsonObject *)this_;
  (void) ((QJsonObject*)this_)->swap(other);
   auto xptr = (void (QJsonObject::*)(QJsonObject&) ) &QJsonObject::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:91
// [4] int count() const
// (12)qm3293697361 (25)_ZNK11QJsonObject5countEv
//static
/*void qm3293697361()*/ {
  ;
  (void) ((QJsonObject*)this_)->count();
   auto xptr = (int (QJsonObject::*)() const ) &QJsonObject::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:92
// [4] int length() const
// (12)qm2481871550 (26)_ZNK11QJsonObject6lengthEv
//static
/*void qm2481871550()*/ {
  ;
  (void) ((QJsonObject*)this_)->length();
   auto xptr = (int (QJsonObject::*)() const ) &QJsonObject::length;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:103
// [24] QJsonValue operator[](QLatin1String) const
// (11)qm186023515 (35)_ZNK11QJsonObjectixE13QLatin1String
//static
/*void qm186023515(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QJsonObject*)this_)->operator[](key);
  // auto xptr = (QJsonValue (QJsonObject::*)(QLatin1String) const ) &QJsonObject::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:236
// [16] QJsonObject::iterator begin() 
// (12)qm3155172158 (24)_ZN11QJsonObject5beginEv
//static
/*void qm3155172158()*/ {
  ;
  (void) ((QJsonObject*)this_)->begin();
   auto xptr = (QJsonObject::iterator (QJsonObject::*)() ) &QJsonObject::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:237
// [16] QJsonObject::const_iterator begin() const
// (12)qm1442523006 (25)_ZNK11QJsonObject5beginEv
//static
/*void qm1442523006()*/ {
  ;
  (void) ((QJsonObject*)this_)->begin();
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)() const ) &QJsonObject::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:238
// [16] QJsonObject::const_iterator constBegin() const
// (10)qm77816540 (31)_ZNK11QJsonObject10constBeginEv
//static
/*void qm77816540()*/ {
  ;
  (void) ((QJsonObject*)this_)->constBegin();
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)() const ) &QJsonObject::constBegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:239
// [16] QJsonObject::iterator end() 
// (12)qm3135619271 (22)_ZN11QJsonObject3endEv
//static
/*void qm3135619271()*/ {
  ;
  (void) ((QJsonObject*)this_)->end();
   auto xptr = (QJsonObject::iterator (QJsonObject::*)() ) &QJsonObject::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:240
// [16] QJsonObject::const_iterator end() const
// (11)qm734666783 (23)_ZNK11QJsonObject3endEv
//static
/*void qm734666783()*/ {
  ;
  (void) ((QJsonObject*)this_)->end();
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)() const ) &QJsonObject::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:241
// [16] QJsonObject::const_iterator constEnd() const
// (12)qm1883972568 (28)_ZNK11QJsonObject8constEndEv
//static
/*void qm1883972568()*/ {
  ;
  (void) ((QJsonObject*)this_)->constEnd();
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)() const ) &QJsonObject::constEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:249
// [16] QJsonObject::const_iterator find(const QString &) const
// (12)qm3545532349 (33)_ZNK11QJsonObject4findERK7QString
//static
/*void qm3545532349(const QString & key)*/ {
  const QString & key = *(const QString *)this_;
  (void) ((QJsonObject*)this_)->find(key);
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)(QString const&) const ) &QJsonObject::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:256
// [16] QJsonObject::const_iterator find(QLatin1String) const
// (12)qm2506447130 (38)_ZNK11QJsonObject4findE13QLatin1String
//static
/*void qm2506447130(QLatin1String key)*/ {
  QLatin1String key = *(QLatin1String*)this_;
  (void) ((QJsonObject*)this_)->find(key);
   auto xptr = (QJsonObject::const_iterator (QJsonObject::*)(QLatin1String) const ) &QJsonObject::find;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:267
// [1] bool empty() const
// (11)qm366340792 (25)_ZNK11QJsonObject5emptyEv
//static
/*void qm366340792()*/ {
  ;
  (void) ((QJsonObject*)this_)->empty();
   auto xptr = (bool (QJsonObject::*)() const ) &QJsonObject::empty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QJsonObjectD2Ev(void *this_)*/ {
  delete (QJsonObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
