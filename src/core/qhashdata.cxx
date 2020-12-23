//  header block begin

// /usr/include/qt/QtCore/qhash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhash.h>
#include <QtCore>
#include "callback_inherit.h"

// QHashData is pure virtual: false false
// QHashData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhashdata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:86
// [1] bool willGrow() 
// (12)qm2760128699 (24)_ZN9QHashData8willGrowEv
//static
/*void qm2760128699()*/ {
  ;
  (void) ((QHashData*)this_)->willGrow();
   auto xptr = (bool (QHashData::*)() ) &QHashData::willGrow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:87
// [-2] void hasShrunk() 
// (12)qm1436022214 (25)_ZN9QHashData9hasShrunkEv
//static
/*void qm1436022214()*/ {
  ;
  (void) ((QHashData*)this_)->hasShrunk();
   auto xptr = (void (QHashData::*)() ) &QHashData::hasShrunk;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:90
// [8] QHashData::Node * firstNode() 
// (12)qm1720621824 (25)_ZN9QHashData9firstNodeEv
//static
/*void qm1720621824()*/ {
  ;
  (void) ((QHashData*)this_)->firstNode();
   auto xptr = (QHashData::Node * (QHashData::*)() ) &QHashData::firstNode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QHashDataD2Ev(void *this_)*/ {
  delete (QHashData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhashdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
