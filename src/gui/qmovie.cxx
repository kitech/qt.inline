//  header block begin

#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(movie)
// /usr/include/qt/QtGui/qmovie.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmovie.h>
#include <QtGui>
#include "callback_inherit.h"

// QMovie is pure virtual: false false
// QMovie has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmovie(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] QString tr(const char *, const char *, int) 
// (11)qm517108480 (21)_ZN6QMovie2trEPKcS1_i
//static
/*void qm517108480(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMovie::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMovie::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:82
// [-2] void QMovie(QObject *) 
// (12)qm1387148965 (22)_ZN6QMovieC2EP7QObject
/*void* qm1387148965(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:83
// [-2] void QMovie(QIODevice *, const QByteArray &, QObject *) 
// (12)qm1044922179 (47)_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject
/*void* qm1044922179(QIODevice * device, const QByteArray & format, QObject * parent)*/{
  QIODevice * device = *(QIODevice **)this_; const QByteArray & format = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(device, format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:84
// [-2] void QMovie(const QString &, const QByteArray &, QObject *) 
// (12)qm2183735277 (46)_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject
/*void* qm2183735277(const QString & fileName, const QByteArray & format, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; const QByteArray & format = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(fileName, format, parent);
}


/*void C_ZN6QMovieD2Ev(void *this_)*/ {
  delete (QMovie*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmovie
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(movie)
#endif // #ifndef QT_MINIMAL
//  footer block end
