//  header block begin

// /usr/include/qt/QtGui/qoffscreensurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qoffscreensurface.h>
#include <QtGui>
#include "callback_inherit.h"

// QOffscreenSurface is pure virtual: false false
// QOffscreenSurface has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qoffscreensurface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1790817671 (33)_ZN17QOffscreenSurface2trEPKcS1_i
//static
/*void qm1790817671(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOffscreenSurface::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOffscreenSurface::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:61
// [-2] void QOffscreenSurface(QScreen *, QObject *) 
// (12)qm1329342925 (43)_ZN17QOffscreenSurfaceC2EP7QScreenP7QObject
/*void* qm1329342925(QScreen * screen, QObject * parent)*/{
  QScreen * screen = *(QScreen **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QOffscreenSurface(screen, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qoffscreensurface.h:62
// [-2] void QOffscreenSurface(QScreen *) 
// (12)qm1458013500 (34)_ZN17QOffscreenSurfaceC2EP7QScreen
/*void* qm1458013500(QScreen * screen)*/{
  QScreen * screen = *(QScreen **)this_;
  this_ =  new QOffscreenSurface(screen);
}


/*void C_ZN17QOffscreenSurfaceD2Ev(void *this_)*/ {
  delete (QOffscreenSurface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qoffscreensurface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
