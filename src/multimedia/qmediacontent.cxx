//  header block begin

// /usr/include/qt/QtMultimedia/qmediacontent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontent.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaContent is pure virtual: false false
// QMediaContent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediacontent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:58
// [-2] void QMediaContent() 
// (12)qm2757429219 (22)_ZN13QMediaContentC2Ev
/*void* qm2757429219()*/{
  ;
  this_ =  new QMediaContent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:59
// [-2] void QMediaContent(const QUrl &) 
// (11)qm457712253 (28)_ZN13QMediaContentC2ERK4QUrl
/*void* qm457712253(const QUrl & contentUrl)*/{
  const QUrl & contentUrl = *(const QUrl *)this_;
  this_ =  new QMediaContent(contentUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:60
// [-2] void QMediaContent(const QNetworkRequest &) 
// (12)qm3272073408 (40)_ZN13QMediaContentC2ERK15QNetworkRequest
/*void* qm3272073408(const QNetworkRequest & contentRequest)*/{
  const QNetworkRequest & contentRequest = *(const QNetworkRequest *)this_;
  this_ =  new QMediaContent(contentRequest);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:65
// [-2] void QMediaContent(const QMediaContent &) 
// (12)qm3737170254 (25)_ZN13QMediaContentC2ERKS_
/*void* qm3737170254(const QMediaContent & other)*/{
  const QMediaContent & other = *(const QMediaContent *)this_;
  this_ =  new QMediaContent(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:66
// [-2] void QMediaContent(QMediaPlaylist *, const QUrl &, bool) 
// (12)qm2384954431 (46)_ZN13QMediaContentC2EP14QMediaPlaylistRK4QUrlb
/*void* qm2384954431(QMediaPlaylist * playlist, const QUrl & contentUrl, bool takeOwnership)*/{
  QMediaPlaylist * playlist = *(QMediaPlaylist **)this_; const QUrl & contentUrl = *(const QUrl *)this_; bool takeOwnership = *(bool*)this_;
  this_ =  new QMediaContent(playlist, contentUrl, takeOwnership);
}


/*void C_ZN13QMediaContentD2Ev(void *this_)*/ {
  delete (QMediaContent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediacontent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
