//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(dnslookup)
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsLookup is pure virtual: false false
// QDnsLookup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdnslookup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:178
// [8] QString tr(const char *, const char *, int) 
// (11)qm492003638 (26)_ZN10QDnsLookup2trEPKcS1_i
//static
/*void qm492003638(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDnsLookup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDnsLookup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:213
// [-2] void QDnsLookup(QObject *) 
// (12)qm2635538990 (27)_ZN10QDnsLookupC2EP7QObject
/*void* qm2635538990(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QDnsLookup(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:214
// [-2] void QDnsLookup(QDnsLookup::Type, const QString &, QObject *) 
// (12)qm1935194564 (46)_ZN10QDnsLookupC2ENS_4TypeERK7QStringP7QObject
/*void* qm1935194564(QDnsLookup::Type type_, const QString & name, QObject * parent)*/{
  QDnsLookup::Type type_ = *(QDnsLookup::Type*)this_; const QString & name = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QDnsLookup(type_, name, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:215
// [-2] void QDnsLookup(QDnsLookup::Type, const QString &, const QHostAddress &, QObject *) 
// (12)qm2964841064 (62)_ZN10QDnsLookupC2ENS_4TypeERK7QStringRK12QHostAddressP7QObject
/*void* qm2964841064(QDnsLookup::Type type_, const QString & name, const QHostAddress & nameserver, QObject * parent)*/{
  QDnsLookup::Type type_ = *(QDnsLookup::Type*)this_; const QString & name = *(const QString *)this_; const QHostAddress & nameserver = *(const QHostAddress *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QDnsLookup(type_, name, nameserver, parent);
}


/*void C_ZN10QDnsLookupD2Ev(void *this_)*/ {
  delete (QDnsLookup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdnslookup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dnslookup)
#endif // #ifndef QT_MINIMAL
//  footer block end
