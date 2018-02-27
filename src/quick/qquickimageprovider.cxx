//  header block begin
// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageProvider is pure virtual: false
// QQuickImageProvider has virtual projected: false
//  header block end

//  main block begin

class MyQQuickImageProvider : public QQuickImageProvider {
public:
  virtual ~MyQQuickImageProvider() {}
// void QQuickImageProvider(enum QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags)
MyQQuickImageProvider(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags) : QQuickImageProvider(type_, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:92
// [-2] void QQuickImageProvider(enum QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags)
extern "C"
void* C_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags) {
  return  new QQuickImageProvider(type_, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:93
// [-2] void ~QQuickImageProvider()
extern "C"
void C_ZN19QQuickImageProviderD2Ev(void *this_) {
  delete (QQuickImageProvider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:95
// [4] QQmlImageProviderBase::ImageType imageType()
extern "C"
QQmlImageProviderBase::ImageType C_ZNK19QQuickImageProvider9imageTypeEv(void *this_) {
  return (QQmlImageProviderBase::ImageType)((QQuickImageProvider*)this_)->imageType();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:96
// [4] QQmlImageProviderBase::Flags flags()
extern "C"
QQmlImageProviderBase::Flags* C_ZNK19QQuickImageProvider5flagsEv(void *this_) {
  auto rv = ((QQuickImageProvider*)this_)->flags();
return new QQmlImageProviderBase::Flags(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:103
// [32] QImage requestImage(const class QString &, class QSize *, const class QSize &)
extern "C"
void* C_ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  auto rv = ((QQuickImageProvider*)this_)->requestImage(*id, size, *requestedSize);
return new QImage(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:104
// [32] QPixmap requestPixmap(const class QString &, class QSize *, const class QSize &)
extern "C"
void* C_ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  auto rv = ((QQuickImageProvider*)this_)->requestPixmap(*id, size, *requestedSize);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:105
// [8] QQuickTextureFactory * requestTexture(const class QString &, class QSize *, const class QSize &)
extern "C"
void* C_ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  return (void*)((QQuickImageProvider*)this_)->requestTexture(*id, size, *requestedSize);
}

//  main block end
