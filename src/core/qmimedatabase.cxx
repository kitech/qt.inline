//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(mimetype)
// /usr/include/qt/QtCore/qmimedatabase.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimedatabase.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeDatabase is pure virtual: false false
// QMimeDatabase has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmimedatabase(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedatabase.h:63
// [-2] void QMimeDatabase() 
// (11)qm662991940 (22)_ZN13QMimeDatabaseC2Ev
/*void* qm662991940()*/{
  ;
  this_ =  new QMimeDatabase();
}


/*void C_ZN13QMimeDatabaseD2Ev(void *this_)*/ {
  delete (QMimeDatabase*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmimedatabase
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mimetype)
#endif // #ifndef QT_MINIMAL
//  footer block end
