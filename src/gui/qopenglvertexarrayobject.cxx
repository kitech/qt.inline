//  header block begin

// /usr/include/qt/QtGui/qopenglvertexarrayobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglvertexarrayobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVertexArrayObject is pure virtual: false false
// QOpenGLVertexArrayObject has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglvertexarrayobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3706655201 (40)_ZN24QOpenGLVertexArrayObject2trEPKcS1_i
//static
/*void qm3706655201(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLVertexArrayObject::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLVertexArrayObject::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:59
// [-2] void QOpenGLVertexArrayObject(QObject *) 
// (12)qm2237782313 (41)_ZN24QOpenGLVertexArrayObjectC2EP7QObject
/*void* qm2237782313(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QOpenGLVertexArrayObject(parent);
}


/*void C_ZN24QOpenGLVertexArrayObjectD2Ev(void *this_)*/ {
  delete (QOpenGLVertexArrayObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglvertexarrayobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
