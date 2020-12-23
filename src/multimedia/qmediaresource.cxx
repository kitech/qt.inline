//  header block begin

// /usr/include/qt/QtMultimedia/qmediaresource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaresource.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaResource is pure virtual: false false
// QMediaResource has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaresource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:56
// [-2] void QMediaResource() 
// (12)qm1810597091 (23)_ZN14QMediaResourceC2Ev
/*void* qm1810597091()*/{
  ;
  this_ =  new QMediaResource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:57
// [-2] void QMediaResource(const QUrl &, const QString &) 
// (12)qm1561323774 (39)_ZN14QMediaResourceC2ERK4QUrlRK7QString
/*void* qm1561323774(const QUrl & url, const QString & mimeType)*/{
  const QUrl & url = *(const QUrl *)this_; const QString & mimeType = *(const QString *)this_;
  this_ =  new QMediaResource(url, mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:58
// [-2] void QMediaResource(const QNetworkRequest &, const QString &) 
// (12)qm1003722228 (51)_ZN14QMediaResourceC2ERK15QNetworkRequestRK7QString
/*void* qm1003722228(const QNetworkRequest & request, const QString & mimeType)*/{
  const QNetworkRequest & request = *(const QNetworkRequest *)this_; const QString & mimeType = *(const QString *)this_;
  this_ =  new QMediaResource(request, mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:59
// [-2] void QMediaResource(const QMediaResource &) 
// (10)qm84920709 (26)_ZN14QMediaResourceC2ERKS_
/*void* qm84920709(const QMediaResource & other)*/{
  const QMediaResource & other = *(const QMediaResource *)this_;
  this_ =  new QMediaResource(other);
}


/*void C_ZN14QMediaResourceD2Ev(void *this_)*/ {
  delete (QMediaResource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaresource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
