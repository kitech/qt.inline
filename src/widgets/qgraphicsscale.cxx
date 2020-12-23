//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsScale is pure virtual: false false
// QGraphicsScale has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscale(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] QString tr(const char *, const char *, int) 
// (12)qm3153071726 (30)_ZN14QGraphicsScale2trEPKcS1_i
//static
/*void qm3153071726(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsScale::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsScale::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:88
// [-2] void QGraphicsScale(QObject *) 
// (12)qm4160837767 (31)_ZN14QGraphicsScaleC2EP7QObject
/*void* qm4160837767(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QGraphicsScale(parent);
}


/*void C_ZN14QGraphicsScaleD2Ev(void *this_)*/ {
  delete (QGraphicsScale*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscale
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
