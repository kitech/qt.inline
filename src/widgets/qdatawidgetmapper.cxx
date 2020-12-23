//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(datawidgetmapper)
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatawidgetmapper.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDataWidgetMapper is pure virtual: false false
// QDataWidgetMapper has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdatawidgetmapper(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm2441646777 (33)_ZN17QDataWidgetMapper2trEPKcS1_i
//static
/*void qm2441646777(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDataWidgetMapper::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDataWidgetMapper::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:64
// [-2] void QDataWidgetMapper(QObject *) 
// (12)qm3768346476 (34)_ZN17QDataWidgetMapperC2EP7QObject
/*void* qm3768346476(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QDataWidgetMapper(parent);
}


/*void C_ZN17QDataWidgetMapperD2Ev(void *this_)*/ {
  delete (QDataWidgetMapper*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdatawidgetmapper
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(datawidgetmapper)
#endif // #ifndef QT_MINIMAL
//  footer block end
