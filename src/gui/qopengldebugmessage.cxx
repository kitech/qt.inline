//  header block begin

// /usr/include/qt/QtGui/qopengldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengldebug.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLDebugMessage is pure virtual: false false
// QOpenGLDebugMessage has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengldebugmessage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:109
// [-2] void QOpenGLDebugMessage() 
// (12)qm3415398641 (28)_ZN19QOpenGLDebugMessageC2Ev
/*void* qm3415398641()*/{
  ;
  this_ =  new QOpenGLDebugMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:110
// [-2] void QOpenGLDebugMessage(const QOpenGLDebugMessage &) 
// (11)qm628778491 (31)_ZN19QOpenGLDebugMessageC2ERKS_
/*void* qm628778491(const QOpenGLDebugMessage & debugMessage)*/{
  const QOpenGLDebugMessage & debugMessage = *(const QOpenGLDebugMessage *)this_;
  this_ =  new QOpenGLDebugMessage(debugMessage);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:113
// [8] QOpenGLDebugMessage & operator=(QOpenGLDebugMessage &&) 
// (12)qm1807234394 (30)_ZN19QOpenGLDebugMessageaSEOS_
//static
/*void qm1807234394(QOpenGLDebugMessage && other)*/ {
  QOpenGLDebugMessage && other =  static_cast<QOpenGLDebugMessage &&>(*(QOpenGLDebugMessage *)this_);
  (void) ((QOpenGLDebugMessage*)this_)->operator=(other);
  // auto xptr = (QOpenGLDebugMessage & (QOpenGLDebugMessage::*)(QOpenGLDebugMessage&&) ) &QOpenGLDebugMessage::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:116
// [-2] void swap(QOpenGLDebugMessage &) 
// (12)qm2260166470 (33)_ZN19QOpenGLDebugMessage4swapERS_
//static
/*void qm2260166470(QOpenGLDebugMessage & other)*/ {
  QOpenGLDebugMessage & other = *(QOpenGLDebugMessage *)this_;
  (void) ((QOpenGLDebugMessage*)this_)->swap(other);
   auto xptr = (void (QOpenGLDebugMessage::*)(QOpenGLDebugMessage&) ) &QOpenGLDebugMessage::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:134
// [1] bool operator!=(const QOpenGLDebugMessage &) const
// (12)qm1499156283 (32)_ZNK19QOpenGLDebugMessageneERKS_
//static
/*void qm1499156283(const QOpenGLDebugMessage & debugMessage)*/ {
  const QOpenGLDebugMessage & debugMessage = *(const QOpenGLDebugMessage *)this_;
  (void) ((QOpenGLDebugMessage*)this_)->operator!=(debugMessage);
  // auto xptr = (bool (QOpenGLDebugMessage::*)(QOpenGLDebugMessage const&) const ) &QOpenGLDebugMessage::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QOpenGLDebugMessageD2Ev(void *this_)*/ {
  delete (QOpenGLDebugMessage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengldebugmessage
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
