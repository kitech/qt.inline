//  header block begin

// /usr/include/qt/QtWidgets/qdrawutil.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdrawutil.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTileRules is pure virtual: false false
// QTileRules has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtilerules(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:114
// [-2] void QTileRules(Qt::TileRule, Qt::TileRule) 
// (12)qm1662546004 (35)_ZN10QTileRulesC2EN2Qt8TileRuleES1_
/*void* qm1662546004(Qt::TileRule horizontalRule, Qt::TileRule verticalRule)*/{
  Qt::TileRule horizontalRule = *(Qt::TileRule*)this_; Qt::TileRule verticalRule = *(Qt::TileRule*)this_;
  this_ =  new QTileRules(horizontalRule, verticalRule);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:116
// [-2] void QTileRules(Qt::TileRule) 
// (12)qm2498436669 (32)_ZN10QTileRulesC2EN2Qt8TileRuleE
/*void* qm2498436669(Qt::TileRule rule)*/{
  Qt::TileRule rule = *(Qt::TileRule*)this_;
  this_ =  new QTileRules(rule);
}


/*void C_ZN10QTileRulesD2Ev(void *this_)*/ {
  delete (QTileRules*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtilerules
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
