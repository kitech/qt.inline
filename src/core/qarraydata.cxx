//  header block begin

// /usr/include/qt/QtCore/qarraydata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qarraydata.h>
#include <QtCore>
#include "callback_inherit.h"

// QArrayData is pure virtual: false false
// QArrayData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qarraydata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:57
// [8] void * data() 
// (12)qm1300495711 (22)_ZN10QArrayData4dataEv
//static
/*void qm1300495711()*/ {
  ;
  (void) ((QArrayData*)this_)->data();
   auto xptr = (void * (QArrayData::*)() ) &QArrayData::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:64
// [8] const void * data() const
// (12)qm3702267271 (23)_ZNK10QArrayData4dataEv
//static
/*void qm3702267271()*/ {
  ;
  (void) ((QArrayData*)this_)->data();
   auto xptr = (const void * (QArrayData::*)() const ) &QArrayData::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:74
// [1] bool isMutable() const
// (12)qm1858795647 (28)_ZNK10QArrayData9isMutableEv
//static
/*void qm1858795647()*/ {
  ;
  (void) ((QArrayData*)this_)->isMutable();
   auto xptr = (bool (QArrayData::*)() const ) &QArrayData::isMutable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:92
// [8] size_t detachCapacity(size_t) const
// (12)qm3595454163 (34)_ZNK10QArrayData14detachCapacityEm
//static
/*void qm3595454163(unsigned long newSize)*/ {
  unsigned long newSize = *(unsigned long*)this_;
  (void) ((QArrayData*)this_)->detachCapacity(newSize);
   auto xptr = (unsigned long (QArrayData::*)(unsigned long) const ) &QArrayData::detachCapacity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:99
// [4] QArrayData::AllocationOptions detachFlags() const
// (12)qm1181496548 (31)_ZNK10QArrayData11detachFlagsEv
//static
/*void qm1181496548()*/ {
  ;
  (void) ((QArrayData*)this_)->detachFlags();
   auto xptr = (QFlags<QArrayData::AllocationOption> (QArrayData::*)() const ) &QArrayData::detachFlags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:107
// [4] QArrayData::AllocationOptions cloneFlags() const
// (12)qm3616955146 (30)_ZNK10QArrayData10cloneFlagsEv
//static
/*void qm3616955146()*/ {
  ;
  (void) ((QArrayData*)this_)->cloneFlags();
   auto xptr = (QFlags<QArrayData::AllocationOption> (QArrayData::*)() const ) &QArrayData::cloneFlags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:123
// [8] QArrayData * sharedNull() 
// (12)qm2956128912 (29)_ZN10QArrayData10sharedNullEv
//static
/*void qm2956128912()*/ {
  ;
  (void) QArrayData::sharedNull();
   auto xptr = (QArrayData * (*)() ) &QArrayData::sharedNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QArrayDataD2Ev(void *this_)*/ {
  delete (QArrayData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qarraydata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
