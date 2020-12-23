//  header block begin

// /usr/include/qt/QtSvg/qsvgrenderer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsvgrenderer.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgRenderer is pure virtual: false false
// QSvgRenderer has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsvgrenderer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:63
// [8] QString tr(const char *, const char *, int) 
// (12)qm2021331973 (28)_ZN12QSvgRenderer2trEPKcS1_i
//static
/*void qm2021331973(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSvgRenderer::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSvgRenderer::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:70
// [-2] void QSvgRenderer(QObject *) 
// (11)qm581069645 (29)_ZN12QSvgRendererC2EP7QObject
/*void* qm581069645(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSvgRenderer(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:71
// [-2] void QSvgRenderer(const QString &, QObject *) 
// (12)qm3079462595 (39)_ZN12QSvgRendererC2ERK7QStringP7QObject
/*void* qm3079462595(const QString & filename, QObject * parent)*/{
  const QString & filename = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSvgRenderer(filename, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:72
// [-2] void QSvgRenderer(const QByteArray &, QObject *) 
// (12)qm1006773911 (43)_ZN12QSvgRendererC2ERK10QByteArrayP7QObject
/*void* qm1006773911(const QByteArray & contents, QObject * parent)*/{
  const QByteArray & contents = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSvgRenderer(contents, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:73
// [-2] void QSvgRenderer(QXmlStreamReader *, QObject *) 
// (12)qm2093721650 (48)_ZN12QSvgRendererC2EP16QXmlStreamReaderP7QObject
/*void* qm2093721650(QXmlStreamReader * contents, QObject * parent)*/{
  QXmlStreamReader * contents = *(QXmlStreamReader **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSvgRenderer(contents, parent);
}


/*void C_ZN12QSvgRendererD2Ev(void *this_)*/ {
  delete (QSvgRenderer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsvgrenderer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
