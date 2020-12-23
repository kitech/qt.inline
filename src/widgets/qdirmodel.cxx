//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(dirmodel)
// /usr/include/qt/QtWidgets/qdirmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdirmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDirModel is pure virtual: false false
// QDirModel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdirmodel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3943355704 (24)_ZN9QDirModel2trEPKcS1_i
//static
/*void qm3943355704(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDirModel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDirModel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QDirModelD2Ev(void *this_)*/ {
  delete (QDirModel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdirmodel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dirmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
