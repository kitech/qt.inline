//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineprofile.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineProfile is pure virtual: false false
// QWebEngineProfile has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineprofile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:69
// [8] QString tr(const char *, const char *, int) 
// (11)qm689378008 (33)_ZN17QWebEngineProfile2trEPKcS1_i
//static
/*void qm689378008(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebEngineProfile::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebEngineProfile::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:71
// [-2] void QWebEngineProfile(QObject *) 
// (12)qm3666979106 (34)_ZN17QWebEngineProfileC2EP7QObject
/*void* qm3666979106(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QWebEngineProfile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineprofile.h:72
// [-2] void QWebEngineProfile(const QString &, QObject *) 
// (12)qm1568836304 (44)_ZN17QWebEngineProfileC2ERK7QStringP7QObject
/*void* qm1568836304(const QString & name, QObject * parent)*/{
  const QString & name = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QWebEngineProfile(name, parent);
}


/*void C_ZN17QWebEngineProfileD2Ev(void *this_)*/ {
  delete (QWebEngineProfile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineprofile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
