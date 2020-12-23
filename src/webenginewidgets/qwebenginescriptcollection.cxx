//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescriptcollection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScriptCollection is pure virtual: false false
// QWebEngineScriptCollection has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginescriptcollection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:56
// [1] bool isEmpty() const
// (11)qm765006046 (42)_ZNK26QWebEngineScriptCollection7isEmptyEv
//static
/*void qm765006046()*/ {
  ;
  (void) ((QWebEngineScriptCollection*)this_)->isEmpty();
   auto xptr = (bool (QWebEngineScriptCollection::*)() const ) &QWebEngineScriptCollection::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:58
// [4] int size() const
// (12)qm4206576209 (39)_ZNK26QWebEngineScriptCollection4sizeEv
//static
/*void qm4206576209()*/ {
  ;
  (void) ((QWebEngineScriptCollection*)this_)->size();
   auto xptr = (int (QWebEngineScriptCollection::*)() const ) &QWebEngineScriptCollection::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QWebEngineScriptCollectionD2Ev(void *this_)*/ {
  delete (QWebEngineScriptCollection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginescriptcollection
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
