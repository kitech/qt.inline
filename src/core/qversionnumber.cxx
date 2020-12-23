//  header block begin

// /usr/include/qt/QtCore/qversionnumber.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qversionnumber.h>
#include <QtCore>
#include "callback_inherit.h"

// QVersionNumber is pure virtual: false false
// QVersionNumber has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qversionnumber(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:217
// [-2] void QVersionNumber() 
// (12)qm2155026613 (23)_ZN14QVersionNumberC2Ev
/*void* qm2155026613()*/{
  ;
  this_ =  new QVersionNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:220
// [-2] void QVersionNumber(const QVector<int> &) 
// (11)qm957326860 (35)_ZN14QVersionNumberC2ERK7QVectorIiE
/*void* qm957326860(const QVector<int> & seg)*/{
  const QVector<int> & seg = *(const QVector<int> *)this_;
  this_ =  new QVersionNumber(seg);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:226
// [-2] void QVersionNumber(QVector<int> &&) 
// (12)qm2433266494 (34)_ZN14QVersionNumberC2EO7QVectorIiE
/*void* qm2433266494(QVector<int> && seg)*/{
  QVector<int> && seg =  static_cast<QVector<int> &&>(*(QVector<int> *)this_);
  this_ =  new QVersionNumber(seg);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:230
// [-2] void QVersionNumber(std::initializer_list<int>) 
// (12)qm3522872855 (45)_ZN14QVersionNumberC2ESt16initializer_listIiE
/*void* qm3522872855(std::initializer_list<int> args)*/{
  std::initializer_list<int> args = *(std::initializer_list<int>*)this_;
  this_ =  new QVersionNumber(args);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:234
// [-2] void QVersionNumber(int) 
// (11)qm226170176 (23)_ZN14QVersionNumberC2Ei
/*void* qm226170176(int maj)*/{
  int maj = *(int*)this_;
  this_ =  new QVersionNumber(maj);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:237
// [-2] void QVersionNumber(int, int) 
// (12)qm2428308724 (24)_ZN14QVersionNumberC2Eii
/*void* qm2428308724(int maj, int min)*/{
  int maj = *(int*)this_; int min = *(int*)this_;
  this_ =  new QVersionNumber(maj, min);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:240
// [-2] void QVersionNumber(int, int, int) 
// (12)qm1546435960 (25)_ZN14QVersionNumberC2Eiii
/*void* qm1546435960(int maj, int min, int mic)*/{
  int maj = *(int*)this_; int min = *(int*)this_; int mic = *(int*)this_;
  this_ =  new QVersionNumber(maj, min, mic);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:243
// [1] bool isNull() const
// (12)qm2418045906 (29)_ZNK14QVersionNumber6isNullEv
//static
/*void qm2418045906()*/ {
  ;
  (void) ((QVersionNumber*)this_)->isNull();
   auto xptr = (bool (QVersionNumber::*)() const ) &QVersionNumber::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:246
// [1] bool isNormalized() const
// (11)qm619412466 (36)_ZNK14QVersionNumber12isNormalizedEv
//static
/*void qm619412466()*/ {
  ;
  (void) ((QVersionNumber*)this_)->isNormalized();
   auto xptr = (bool (QVersionNumber::*)() const ) &QVersionNumber::isNormalized;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:249
// [4] int majorVersion() const
// (11)qm180558212 (36)_ZNK14QVersionNumber12majorVersionEv
//static
/*void qm180558212()*/ {
  ;
  (void) ((QVersionNumber*)this_)->majorVersion();
   auto xptr = (int (QVersionNumber::*)() const ) &QVersionNumber::majorVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:252
// [4] int minorVersion() const
// (12)qm1405546902 (36)_ZNK14QVersionNumber12minorVersionEv
//static
/*void qm1405546902()*/ {
  ;
  (void) ((QVersionNumber*)this_)->minorVersion();
   auto xptr = (int (QVersionNumber::*)() const ) &QVersionNumber::minorVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:255
// [4] int microVersion() const
// (12)qm2052813804 (36)_ZNK14QVersionNumber12microVersionEv
//static
/*void qm2052813804()*/ {
  ;
  (void) ((QVersionNumber*)this_)->microVersion();
   auto xptr = (int (QVersionNumber::*)() const ) &QVersionNumber::microVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:262
// [4] int segmentAt(int) const
// (11)qm406112528 (32)_ZNK14QVersionNumber9segmentAtEi
//static
/*void qm406112528(int index)*/ {
  int index = *(int*)this_;
  (void) ((QVersionNumber*)this_)->segmentAt(index);
   auto xptr = (int (QVersionNumber::*)(int) const ) &QVersionNumber::segmentAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:265
// [4] int segmentCount() const
// (11)qm923221113 (36)_ZNK14QVersionNumber12segmentCountEv
//static
/*void qm923221113()*/ {
  ;
  (void) ((QVersionNumber*)this_)->segmentCount();
   auto xptr = (int (QVersionNumber::*)() const ) &QVersionNumber::segmentCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QVersionNumberD2Ev(void *this_)*/ {
  delete (QVersionNumber*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qversionnumber
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
