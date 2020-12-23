//  header block begin

// /usr/include/qt/QtGui/qfontdatabase.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontdatabase.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontDatabase is pure virtual: false false
// QFontDatabase has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfontdatabase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontdatabase.h:118
// [-2] void QFontDatabase() 
// (12)qm1247138191 (22)_ZN13QFontDatabaseC2Ev
/*void* qm1247138191()*/{
  ;
  this_ =  new QFontDatabase();
}


/*void C_ZN13QFontDatabaseD2Ev(void *this_)*/ {
  delete (QFontDatabase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfontdatabase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
