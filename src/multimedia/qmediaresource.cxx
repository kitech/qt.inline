//  header block begin
// /usr/include/qt/QtMultimedia/qmediaresource.h
#ifndef protected
#define protected public
#endif
#include <qmediaresource.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaResource is pure virtual: false
// QMediaResource has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaResource : public QMediaResource {
public:
  virtual ~MyQMediaResource() {}
// void QMediaResource()
MyQMediaResource() : QMediaResource() {}
// void QMediaResource(const QUrl &, const QString &)
MyQMediaResource(const QUrl & url, const QString & mimeType) : QMediaResource(url, mimeType) {}
// void QMediaResource(const QNetworkRequest &, const QString &)
MyQMediaResource(const QNetworkRequest & request, const QString & mimeType) : QMediaResource(request, mimeType) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:56
// [-2] void QMediaResource()
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaResourceC2Ev() {
  return  new QMediaResource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:57
// [-2] void QMediaResource(const QUrl &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaResourceC2ERK4QUrlRK7QString(QUrl* url, QString* mimeType) {
  return  new QMediaResource(*url, *mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:58
// [-2] void QMediaResource(const QNetworkRequest &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaResourceC2ERK15QNetworkRequestRK7QString(QNetworkRequest* request, QString* mimeType) {
  return  new QMediaResource(*request, *mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:60
// [8] QMediaResource & operator=(const QMediaResource &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaResourceaSERKS_(void *this_, QMediaResource* other) {
  auto& rv = ((QMediaResource*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:61
// [-2] void ~QMediaResource()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResourceD2Ev(void *this_) {
  delete (QMediaResource*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:63
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaResource6isNullEv(void *this_) {
  return (bool)((QMediaResource*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:65
// [1] bool operator==(const QMediaResource &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaResourceeqERKS_(void *this_, QMediaResource* other) {
  return (bool)((QMediaResource*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:66
// [1] bool operator!=(const QMediaResource &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaResourceneERKS_(void *this_, QMediaResource* other) {
  return (bool)((QMediaResource*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:68
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource3urlEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:69
// [8] QNetworkRequest request()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource7requestEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->request();
return new QNetworkRequest(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:70
// [8] QString mimeType()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource8mimeTypeEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->mimeType();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:72
// [8] QString language()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource8languageEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->language();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:73
// [-2] void setLanguage(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource11setLanguageERK7QString(void *this_, QString* language) {
  ((QMediaResource*)this_)->setLanguage(*language);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:75
// [8] QString audioCodec()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource10audioCodecEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->audioCodec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:76
// [-2] void setAudioCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource13setAudioCodecERK7QString(void *this_, QString* codec) {
  ((QMediaResource*)this_)->setAudioCodec(*codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:78
// [8] QString videoCodec()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource10videoCodecEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->videoCodec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:79
// [-2] void setVideoCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource13setVideoCodecERK7QString(void *this_, QString* codec) {
  ((QMediaResource*)this_)->setVideoCodec(*codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:81
// [8] qint64 dataSize()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QMediaResource8dataSizeEv(void *this_) {
  return (qint64)((QMediaResource*)this_)->dataSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:82
// [-2] void setDataSize(const qint64)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource11setDataSizeEx(void *this_, const qint64 size) {
  ((QMediaResource*)this_)->setDataSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:84
// [4] int audioBitRate()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaResource12audioBitRateEv(void *this_) {
  return (int)((QMediaResource*)this_)->audioBitRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:85
// [-2] void setAudioBitRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource15setAudioBitRateEi(void *this_, int rate) {
  ((QMediaResource*)this_)->setAudioBitRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:87
// [4] int sampleRate()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaResource10sampleRateEv(void *this_) {
  return (int)((QMediaResource*)this_)->sampleRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:88
// [-2] void setSampleRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource13setSampleRateEi(void *this_, int frequency) {
  ((QMediaResource*)this_)->setSampleRate(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:90
// [4] int channelCount()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaResource12channelCountEv(void *this_) {
  return (int)((QMediaResource*)this_)->channelCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:91
// [-2] void setChannelCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource15setChannelCountEi(void *this_, int channels) {
  ((QMediaResource*)this_)->setChannelCount(channels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:93
// [4] int videoBitRate()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaResource12videoBitRateEv(void *this_) {
  return (int)((QMediaResource*)this_)->videoBitRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:94
// [-2] void setVideoBitRate(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource15setVideoBitRateEi(void *this_, int rate) {
  ((QMediaResource*)this_)->setVideoBitRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:96
// [8] QSize resolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaResource10resolutionEv(void *this_) {
  auto rv = ((QMediaResource*)this_)->resolution();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:97
// [-2] void setResolution(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource13setResolutionERK5QSize(void *this_, QSize* resolution) {
  ((QMediaResource*)this_)->setResolution(*resolution);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:98
// [-2] void setResolution(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaResource13setResolutionEii(void *this_, int width, int height) {
  ((QMediaResource*)this_)->setResolution(width, height);
}

//  main block end
