//  header block begin

// /usr/include/qt/QtCore/qmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmap.h>
#include <QtCore>
#include "callback_inherit.h"

// QMapNodeBase is pure virtual: false false
// QMapNodeBase has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmapnodebase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:89
// [8] QMapNodeBase * nextNode() 
// (12)qm2959720061 (28)_ZN12QMapNodeBase8nextNodeEv
//static
/*void qm2959720061()*/ {
  ;
  (void) ((QMapNodeBase*)this_)->nextNode();
   auto xptr = (QMapNodeBase * (QMapNodeBase::*)() ) &QMapNodeBase::nextNode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:91
// [8] QMapNodeBase * previousNode() 
// (12)qm1467737195 (33)_ZN12QMapNodeBase12previousNodeEv
//static
/*void qm1467737195()*/ {
  ;
  (void) ((QMapNodeBase*)this_)->previousNode();
   auto xptr = (QMapNodeBase * (QMapNodeBase::*)() ) &QMapNodeBase::previousNode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:93
// [4] QMapNodeBase::Color color() const
// (12)qm2256023906 (26)_ZNK12QMapNodeBase5colorEv
//static
/*void qm2256023906()*/ {
  ;
  (void) ((QMapNodeBase*)this_)->color();
   auto xptr = (QMapNodeBase::Color (QMapNodeBase::*)() const ) &QMapNodeBase::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:94
// [-2] void setColor(QMapNodeBase::Color) 
// (12)qm2990001414 (37)_ZN12QMapNodeBase8setColorENS_5ColorE
//static
/*void qm2990001414(QMapNodeBase::Color c)*/ {
  QMapNodeBase::Color c = *(QMapNodeBase::Color*)this_;
  (void) ((QMapNodeBase*)this_)->setColor(c);
   auto xptr = (void (QMapNodeBase::*)(QMapNodeBase::Color) ) &QMapNodeBase::setColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:95
// [8] QMapNodeBase * parent() const
// (12)qm3954789227 (27)_ZNK12QMapNodeBase6parentEv
//static
/*void qm3954789227()*/ {
  ;
  (void) ((QMapNodeBase*)this_)->parent();
   auto xptr = (QMapNodeBase * (QMapNodeBase::*)() const ) &QMapNodeBase::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmap.h:96
// [-2] void setParent(QMapNodeBase *) 
// (12)qm3249493520 (31)_ZN12QMapNodeBase9setParentEPS_
//static
/*void qm3249493520(QMapNodeBase * pp)*/ {
  QMapNodeBase * pp = *(QMapNodeBase **)this_;
  (void) ((QMapNodeBase*)this_)->setParent(pp);
   auto xptr = (void (QMapNodeBase::*)(QMapNodeBase*) ) &QMapNodeBase::setParent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QMapNodeBaseD2Ev(void *this_)*/ {
  delete (QMapNodeBase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmapnodebase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
