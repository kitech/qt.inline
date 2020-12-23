//  header block begin

// /usr/include/qt/QtQuick/qquickrendercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickrendercontrol.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickRenderControl is pure virtual: false false
// QQuickRenderControl has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickrendercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1948339017 (35)_ZN19QQuickRenderControl2trEPKcS1_i
//static
/*void qm1948339017(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickRenderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickRenderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:58
// [-2] void QQuickRenderControl(QObject *) 
// (12)qm1573141673 (36)_ZN19QQuickRenderControlC2EP7QObject
/*void* qm1573141673(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQuickRenderControl(parent);
}

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickrendercontrol.h:72
// [8] QWindow * renderWindow(QPoint *) 
// (11)qm564904829 (47)_ZN19QQuickRenderControl12renderWindowEP6QPoint
//static
/*void qm564904829(QPoint * offset)*/ {
  QPoint * offset = *(QPoint **)this_;
  (void) ((QQuickRenderControl*)this_)->renderWindow(offset);
   auto xptr = (QWindow * (QQuickRenderControl::*)(QPoint*) ) &QQuickRenderControl::renderWindow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QQuickRenderControlD2Ev(void *this_)*/ {
  delete (QQuickRenderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickrendercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
