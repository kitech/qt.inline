//  header block begin

// /usr/include/qt/QtCore/qlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QListData is pure virtual: false false
// QListData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlistdata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:102
// [-2] void dispose() 
// (11)qm558346474 (23)_ZN9QListData7disposeEv
//static
/*void qm558346474()*/ {
  ;
  (void) ((QListData*)this_)->dispose();
   auto xptr = (void (QListData::*)() ) &QListData::dispose;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:115
// [4] int size() const
// (12)qm3479618348 (21)_ZNK9QListData4sizeEv
//static
/*void qm3479618348()*/ {
  ;
  (void) ((QListData*)this_)->size();
   auto xptr = (int (QListData::*)() const ) &QListData::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:116
// [1] bool isEmpty() const
// (12)qm2873814155 (24)_ZNK9QListData7isEmptyEv
//static
/*void qm2873814155()*/ {
  ;
  (void) ((QListData*)this_)->isEmpty();
   auto xptr = (bool (QListData::*)() const ) &QListData::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:117
// [8] void ** at(int) const
// (12)qm3583889796 (19)_ZNK9QListData2atEi
//static
/*void qm3583889796(int i)*/ {
  int i = *(int*)this_;
  (void) ((QListData*)this_)->at(i);
   auto xptr = (void ** (QListData::*)(int) const ) &QListData::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:118
// [8] void ** begin() const
// (11)qm828851841 (22)_ZNK9QListData5beginEv
//static
/*void qm828851841()*/ {
  ;
  (void) ((QListData*)this_)->begin();
   auto xptr = (void ** (QListData::*)() const ) &QListData::begin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:119
// [8] void ** end() const
// (12)qm2158126219 (20)_ZNK9QListData3endEv
//static
/*void qm2158126219()*/ {
  ;
  (void) ((QListData*)this_)->end();
   auto xptr = (void ** (QListData::*)() const ) &QListData::end;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QListDataD2Ev(void *this_)*/ {
  delete (QListData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlistdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
