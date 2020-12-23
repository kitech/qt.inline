//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginefindtextresult.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineFindTextResult is pure virtual: false false
// QWebEngineFindTextResult has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginefindtextresult(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h:64
// [-2] void QWebEngineFindTextResult() 
// (12)qm2289131765 (33)_ZN24QWebEngineFindTextResultC2Ev
/*void* qm2289131765()*/{
  ;
  this_ =  new QWebEngineFindTextResult();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebenginefindtextresult.h:65
// [-2] void QWebEngineFindTextResult(const QWebEngineFindTextResult &) 
// (11)qm929847830 (36)_ZN24QWebEngineFindTextResultC2ERKS_
/*void* qm929847830(const QWebEngineFindTextResult & other)*/{
  const QWebEngineFindTextResult & other = *(const QWebEngineFindTextResult *)this_;
  this_ =  new QWebEngineFindTextResult(other);
}


/*void C_ZN24QWebEngineFindTextResultD2Ev(void *this_)*/ {
  delete (QWebEngineFindTextResult*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginefindtextresult
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
