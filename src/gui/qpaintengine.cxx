//  header block begin

// /usr/include/qt/QtGui/qpaintengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEngine is pure virtual: true true
// QPaintEngine has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpaintengine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:150
// [1] bool isActive() const
// (12)qm2303000597 (29)_ZNK12QPaintEngine8isActiveEv
//static
/*void qm2303000597()*/ {
  ;
  (void) ((QPaintEngine*)this_)->isActive();
   auto xptr = (bool (QPaintEngine::*)() const ) &QPaintEngine::isActive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:151
// [-2] void setActive(bool) 
// (12)qm2271055720 (29)_ZN12QPaintEngine9setActiveEb
//static
/*void qm2271055720(bool newState)*/ {
  bool newState = *(bool*)this_;
  (void) ((QPaintEngine*)this_)->setActive(newState);
   auto xptr = (void (QPaintEngine::*)(bool) ) &QPaintEngine::setActive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:216
// [-2] void fix_neg_rect(int *, int *, int *, int *) 
// (12)qm1818295164 (43)_ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_
//static
/*void qm1818295164(int * x, int * y, int * w, int * h)*/ {
  int * x = *(int **)this_; int * y = *(int **)this_; int * w = *(int **)this_; int * h = *(int **)this_;
  (void) ((QPaintEngine*)this_)->fix_neg_rect(x, y, w, h);
   auto xptr = (void (QPaintEngine::*)(int*, int*, int*, int*) ) &QPaintEngine::fix_neg_rect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:218
// [1] bool testDirty(QPaintEngine::DirtyFlags) 
// (12)qm3313179929 (51)_ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE
//static
/*void qm3313179929(QFlags<QPaintEngine::DirtyFlag> df)*/ {
  QFlags<QPaintEngine::DirtyFlag> df = *(QFlags<QPaintEngine::DirtyFlag>*)this_;
  (void) ((QPaintEngine*)this_)->testDirty(df);
   auto xptr = (bool (QPaintEngine::*)(QFlags<QPaintEngine::DirtyFlag>) ) &QPaintEngine::testDirty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:219
// [-2] void setDirty(QPaintEngine::DirtyFlags) 
// (12)qm2671219883 (50)_ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE
//static
/*void qm2671219883(QFlags<QPaintEngine::DirtyFlag> df)*/ {
  QFlags<QPaintEngine::DirtyFlag> df = *(QFlags<QPaintEngine::DirtyFlag>*)this_;
  (void) ((QPaintEngine*)this_)->setDirty(df);
   auto xptr = (void (QPaintEngine::*)(QFlags<QPaintEngine::DirtyFlag>) ) &QPaintEngine::setDirty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:220
// [-2] void clearDirty(QPaintEngine::DirtyFlags) 
// (12)qm3928891860 (53)_ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE
//static
/*void qm3928891860(QFlags<QPaintEngine::DirtyFlag> df)*/ {
  QFlags<QPaintEngine::DirtyFlag> df = *(QFlags<QPaintEngine::DirtyFlag>*)this_;
  (void) ((QPaintEngine*)this_)->clearDirty(df);
   auto xptr = (void (QPaintEngine::*)(QFlags<QPaintEngine::DirtyFlag>) ) &QPaintEngine::clearDirty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:222
// [1] bool hasFeature(QPaintEngine::PaintEngineFeatures) const
// (12)qm2692338419 (64)_ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE
//static
/*void qm2692338419(QFlags<QPaintEngine::PaintEngineFeature> feature)*/ {
  QFlags<QPaintEngine::PaintEngineFeature> feature = *(QFlags<QPaintEngine::PaintEngineFeature>*)this_;
  (void) ((QPaintEngine*)this_)->hasFeature(feature);
   auto xptr = (bool (QPaintEngine::*)(QFlags<QPaintEngine::PaintEngineFeature>) const ) &QPaintEngine::hasFeature;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:227
// [1] bool isExtended() const
// (12)qm4026079263 (32)_ZNK12QPaintEngine10isExtendedEv
//static
/*void qm4026079263()*/ {
  ;
  (void) ((QPaintEngine*)this_)->isExtended();
   auto xptr = (bool (QPaintEngine::*)() const ) &QPaintEngine::isExtended;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QPaintEngineD2Ev(void *this_)*/ {
  delete (QPaintEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpaintengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
