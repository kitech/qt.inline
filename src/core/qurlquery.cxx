//  header block begin

// /usr/include/qt/QtCore/qurlquery.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qurlquery.h>
#include <QtCore>
#include "callback_inherit.h"

// QUrlQuery is pure virtual: false false
// QUrlQuery has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qurlquery(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:61
// [-2] void QUrlQuery() 
// (11)qm919631586 (17)_ZN9QUrlQueryC2Ev
/*void* qm919631586()*/{
  ;
  this_ =  new QUrlQuery();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:62
// [-2] void QUrlQuery(const QUrl &) 
// (12)qm3496568067 (23)_ZN9QUrlQueryC2ERK4QUrl
/*void* qm3496568067(const QUrl & url)*/{
  const QUrl & url = *(const QUrl *)this_;
  this_ =  new QUrlQuery(url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:63
// [-2] void QUrlQuery(const QString &) 
// (12)qm3642577418 (26)_ZN9QUrlQueryC2ERK7QString
/*void* qm3642577418(const QString & queryString)*/{
  const QString & queryString = *(const QString *)this_;
  this_ =  new QUrlQuery(queryString);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:64
// [-2] void QUrlQuery(std::initializer_list<QPair<QString, QString>>) 
// (12)qm1220165977 (57)_ZN9QUrlQueryC2ESt16initializer_listI5QPairI7QStringS2_EE
/*void* qm1220165977(std::initializer_list<QPair<QString, QString>> list)*/{
  std::initializer_list<QPair<QString, QString>> list = *(std::initializer_list<QPair<QString, QString>>*)this_;
  this_ =  new QUrlQuery(list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:71
// [-2] void QUrlQuery(const QUrlQuery &) 
// (12)qm2471283188 (20)_ZN9QUrlQueryC2ERKS_
/*void* qm2471283188(const QUrlQuery & other)*/{
  const QUrlQuery & other = *(const QUrlQuery *)this_;
  this_ =  new QUrlQuery(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:73
// [8] QUrlQuery & operator=(QUrlQuery &&) 
// (11)qm993593189 (19)_ZN9QUrlQueryaSEOS_
//static
/*void qm993593189(QUrlQuery && other)*/ {
  QUrlQuery && other =  static_cast<QUrlQuery &&>(*(QUrlQuery *)this_);
  (void) ((QUrlQuery*)this_)->operator=(other);
  // auto xptr = (QUrlQuery & (QUrlQuery::*)(QUrlQuery&&) ) &QUrlQuery::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:77
// [1] bool operator!=(const QUrlQuery &) const
// (12)qm2755043522 (21)_ZNK9QUrlQueryneERKS_
//static
/*void qm2755043522(const QUrlQuery & other)*/ {
  const QUrlQuery & other = *(const QUrlQuery *)this_;
  (void) ((QUrlQuery*)this_)->operator!=(other);
  // auto xptr = (bool (QUrlQuery::*)(QUrlQuery const&) const ) &QUrlQuery::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:80
// [-2] void swap(QUrlQuery &) 
// (12)qm3729728124 (22)_ZN9QUrlQuery4swapERS_
//static
/*void qm3729728124(QUrlQuery & other)*/ {
  QUrlQuery & other = *(QUrlQuery *)this_;
  (void) ((QUrlQuery*)this_)->swap(other);
   auto xptr = (void (QUrlQuery::*)(QUrlQuery&) ) &QUrlQuery::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:88
// [8] QString toString(QUrl::ComponentFormattingOptions) const
// (12)qm2579932276 (67)_ZNK9QUrlQuery8toStringE6QFlagsIN4QUrl25ComponentFormattingOptionEE
//static
/*void qm2579932276(QFlags<QUrl::ComponentFormattingOption> encoding)*/ {
  QFlags<QUrl::ComponentFormattingOption> encoding = *(QFlags<QUrl::ComponentFormattingOption>*)this_;
  (void) ((QUrlQuery*)this_)->toString(encoding);
   auto xptr = (QString (QUrlQuery::*)(QFlags<QUrl::ComponentFormattingOption>) const ) &QUrlQuery::toString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:105
// [2] QChar defaultQueryValueDelimiter() 
// (12)qm1997982414 (43)_ZN9QUrlQuery26defaultQueryValueDelimiterEv
//static
/*void qm1997982414()*/ {
  ;
  (void) QUrlQuery::defaultQueryValueDelimiter();
   auto xptr = (QChar (*)() ) &QUrlQuery::defaultQueryValueDelimiter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:107
// [2] QChar defaultQueryPairDelimiter() 
// (12)qm2105036997 (42)_ZN9QUrlQuery25defaultQueryPairDelimiterEv
//static
/*void qm2105036997()*/ {
  ;
  (void) QUrlQuery::defaultQueryPairDelimiter();
   auto xptr = (QChar (*)() ) &QUrlQuery::defaultQueryPairDelimiter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:116
// [8] QUrlQuery::DataPtr & data_ptr() 
// (12)qm3525791954 (24)_ZN9QUrlQuery8data_ptrEv
//static
/*void qm3525791954()*/ {
  ;
  (void) ((QUrlQuery*)this_)->data_ptr();
   auto xptr = (QSharedDataPointer<QUrlQueryPrivate> & (QUrlQuery::*)() ) &QUrlQuery::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QUrlQueryD2Ev(void *this_)*/ {
  delete (QUrlQuery*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qurlquery
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
