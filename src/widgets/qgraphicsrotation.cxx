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

// QGraphicsRotation is pure virtual: false false
// QGraphicsRotation has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsrotation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] QString tr(const char *, const char *, int) 
// (12)qm3039879022 (33)_ZN17QGraphicsRotation2trEPKcS1_i
//static
/*void qm3039879022(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsRotation::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsRotation::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:126
// [-2] void QGraphicsRotation(QObject *) 
// (12)qm4161771606 (34)_ZN17QGraphicsRotationC2EP7QObject
/*void* qm4161771606(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QGraphicsRotation(parent);
}


/*void C_ZN17QGraphicsRotationD2Ev(void *this_)*/ {
  delete (QGraphicsRotation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsrotation
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
