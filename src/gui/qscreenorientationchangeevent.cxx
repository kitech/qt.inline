//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScreenOrientationChangeEvent is pure virtual: false false
// QScreenOrientationChangeEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscreenorientationchangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1097
// [-2] void QScreenOrientationChangeEvent(QScreen *, Qt::ScreenOrientation) 
// (12)qm1494436171 (70)_ZN29QScreenOrientationChangeEventC2EP7QScreenN2Qt17ScreenOrientationE
/*void* qm1494436171(QScreen * screen, Qt::ScreenOrientation orientation)*/{
  QScreen * screen = *(QScreen **)this_; Qt::ScreenOrientation orientation = *(Qt::ScreenOrientation*)this_;
  this_ =  new QScreenOrientationChangeEvent(screen, orientation);
}


/*void C_ZN29QScreenOrientationChangeEventD2Ev(void *this_)*/ {
  delete (QScreenOrientationChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscreenorientationchangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
