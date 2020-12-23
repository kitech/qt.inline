//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(commandlineparser)
// /usr/include/qt/QtCore/qcommandlineparser.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommandlineparser.h>
#include <QtCore>
#include "callback_inherit.h"

// QCommandLineParser is pure virtual: false false
// QCommandLineParser has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcommandlineparser(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:57
// [8] QString tr(const char *, const char *, int) 
// (11)qm336727517 (34)_ZN18QCommandLineParser2trEPKcS1_i
//static
/*void qm336727517(const char * sourceText, const char * disambiguation, int n)*/ {
  const char * sourceText = *(const char **)this_; const char * disambiguation = *(const char **)this_; int n = *(int*)this_;
  (void) QCommandLineParser::tr(sourceText, disambiguation, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCommandLineParser::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:59
// [-2] void QCommandLineParser() 
// (12)qm1620353516 (27)_ZN18QCommandLineParserC2Ev
/*void* qm1620353516()*/{
  ;
  this_ =  new QCommandLineParser();
}


/*void C_ZN18QCommandLineParserD2Ev(void *this_)*/ {
  delete (QCommandLineParser*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcommandlineparser
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(commandlineparser)
#endif // #ifndef QT_MINIMAL
//  footer block end
