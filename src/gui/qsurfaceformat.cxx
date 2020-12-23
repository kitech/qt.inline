//  header block begin

// /usr/include/qt/QtGui/qsurfaceformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurfaceformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurfaceFormat is pure virtual: false false
// QSurfaceFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsurfaceformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:94
// [-2] void QSurfaceFormat() 
// (12)qm1643703757 (23)_ZN14QSurfaceFormatC2Ev
/*void* qm1643703757()*/{
  ;
  this_ =  new QSurfaceFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:95
// [-2] void QSurfaceFormat(QSurfaceFormat::FormatOptions) 
// (12)qm2659620541 (49)_ZN14QSurfaceFormatC2E6QFlagsINS_12FormatOptionEE
/*void* qm2659620541(QFlags<QSurfaceFormat::FormatOption> options)*/{
  QFlags<QSurfaceFormat::FormatOption> options = *(QFlags<QSurfaceFormat::FormatOption>*)this_;
  this_ =  new QSurfaceFormat(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:96
// [-2] void QSurfaceFormat(const QSurfaceFormat &) 
// (11)qm123548501 (26)_ZN14QSurfaceFormatC2ERKS_
/*void* qm123548501(const QSurfaceFormat & other)*/{
  const QSurfaceFormat & other = *(const QSurfaceFormat *)this_;
  this_ =  new QSurfaceFormat(other);
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:138
// [1] bool stereo() const
// (12)qm3404121054 (29)_ZNK14QSurfaceFormat6stereoEv
//static
/*void qm3404121054()*/ {
  ;
  (void) ((QSurfaceFormat*)this_)->stereo();
   auto xptr = (bool (QSurfaceFormat::*)() const ) &QSurfaceFormat::stereo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QSurfaceFormatD2Ev(void *this_)*/ {
  delete (QSurfaceFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsurfaceformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
