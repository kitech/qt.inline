//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecontextmenudata.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineContextMenuData is pure virtual: false false
// QWebEngineContextMenuData has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginecontextmenudata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:58
// [-2] void QWebEngineContextMenuData() 
// (12)qm2498260231 (34)_ZN25QWebEngineContextMenuDataC2Ev
/*void* qm2498260231()*/{
  ;
  this_ =  new QWebEngineContextMenuData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:59
// [-2] void QWebEngineContextMenuData(const QWebEngineContextMenuData &) 
// (12)qm3176245273 (37)_ZN25QWebEngineContextMenuDataC2ERKS_
/*void* qm3176245273(const QWebEngineContextMenuData & other)*/{
  const QWebEngineContextMenuData & other = *(const QWebEngineContextMenuData *)this_;
  this_ =  new QWebEngineContextMenuData(other);
}


/*void C_ZN25QWebEngineContextMenuDataD2Ev(void *this_)*/ {
  delete (QWebEngineContextMenuData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginecontextmenudata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
