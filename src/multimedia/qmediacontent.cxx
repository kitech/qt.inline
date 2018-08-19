//  header block begin
// /usr/include/qt/QtMultimedia/qmediacontent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontent.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaContent is pure virtual: false
// QMediaContent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaContent : public QMediaContent {
public:
  virtual ~MyQMediaContent() {}
// void QMediaContent()
MyQMediaContent() : QMediaContent() {}
// void QMediaContent(const QUrl &)
MyQMediaContent(const QUrl & contentUrl) : QMediaContent(contentUrl) {}
// void QMediaContent(const QNetworkRequest &)
MyQMediaContent(const QNetworkRequest & contentRequest) : QMediaContent(contentRequest) {}
// void QMediaContent(const QMediaResource &)
MyQMediaContent(const QMediaResource & contentResource) : QMediaContent(contentResource) {}
// void QMediaContent(const QMediaResourceList &)
MyQMediaContent(const QMediaResourceList & resources) : QMediaContent(resources) {}
// void QMediaContent(const QMediaContent &)
MyQMediaContent(const QMediaContent & other) : QMediaContent(other) {}
// void QMediaContent(QMediaPlaylist *, const QUrl &, bool)
MyQMediaContent(QMediaPlaylist * playlist, const QUrl & contentUrl, bool takeOwnership) : QMediaContent(playlist, contentUrl, takeOwnership) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:58
// [-2] void QMediaContent()
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2Ev() {
  return  new QMediaContent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:59
// [-2] void QMediaContent(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2ERK4QUrl(QUrl* contentUrl) {
  return  new QMediaContent(*contentUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:60
// [-2] void QMediaContent(const QNetworkRequest &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2ERK15QNetworkRequest(QNetworkRequest* contentRequest) {
  return  new QMediaContent(*contentRequest);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:61
// [-2] void QMediaContent(const QMediaResource &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2ERK14QMediaResource(QMediaResource* contentResource) {
  return  new QMediaContent(*contentResource);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:62
// [-2] void QMediaContent(const QMediaResourceList &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2ERK5QListI14QMediaResourceE(const QMediaResourceList & resources) {
  return  new QMediaContent(resources);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:63
// [-2] void QMediaContent(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2ERKS_(QMediaContent* other) {
  return  new QMediaContent(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:64
// [-2] void QMediaContent(QMediaPlaylist *, const QUrl &, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentC2EP14QMediaPlaylistRK4QUrlb(QMediaPlaylist * playlist, QUrl* contentUrl, bool takeOwnership) {
  return  new QMediaContent(playlist, *contentUrl, takeOwnership);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:65
// [-2] void ~QMediaContent()
extern "C" Q_DECL_EXPORT
void C_ZN13QMediaContentD2Ev(void *this_) {
  delete (QMediaContent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:67
// [8] QMediaContent & operator=(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaContentaSERKS_(void *this_, QMediaContent* other) {
  auto& rv = ((QMediaContent*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:69
// [1] bool operator==(const QMediaContent &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMediaContenteqERKS_(void *this_, QMediaContent* other) {
  return (bool)((QMediaContent*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:70
// [1] bool operator!=(const QMediaContent &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMediaContentneERKS_(void *this_, QMediaContent* other) {
  return (bool)((QMediaContent*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:72
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QMediaContent6isNullEv(void *this_) {
  return (bool)((QMediaContent*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:74
// [8] QUrl canonicalUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaContent12canonicalUrlEv(void *this_) {
  auto rv = ((QMediaContent*)this_)->canonicalUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:75
// [8] QNetworkRequest canonicalRequest()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaContent16canonicalRequestEv(void *this_) {
  auto rv = ((QMediaContent*)this_)->canonicalRequest();
return new QNetworkRequest(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:76
// [8] QMediaResource canonicalResource()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaContent17canonicalResourceEv(void *this_) {
  auto rv = ((QMediaContent*)this_)->canonicalResource();
return new QMediaResource(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:78
// [8] QMediaResourceList resources()
extern "C" Q_DECL_EXPORT
QMediaResourceList* C_ZNK13QMediaContent9resourcesEv(void *this_) {
  auto rv = ((QMediaContent*)this_)->resources();
return new QMediaResourceList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontent.h:80
// [8] QMediaPlaylist * playlist()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaContent8playlistEv(void *this_) {
  return (void*)((QMediaContent*)this_)->playlist();
}

//  main block end
