// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickimageprovider.h
// dst-file: /src/quick/qquickimageprovider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickimageprovider.h>


#include <qimage.h>
#include <qqmlengine.h>
#include <qpixmap.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qquickimageprovider_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickImageProvider_Class_Size()
{
  return sizeof(QQuickImageProvider);
}

extern "C"
int QQuickTextureFactory_Class_Size()
{
  return sizeof(QQuickTextureFactory);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 75, column 20>
//   // proto:  QImage QQuickImageProvider::requestImage(const QString & id, QSize * size, const QSize & requestedSize);
// _ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_ requestImage(const class QString &, class QSize *, const class QSize &)
extern "C"
QImage*
C_ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_(void *qthis,
const QString* arg1,
QSize * arg2,
const QSize* arg3) {
  auto ret =
  ((QQuickImageProvider*)qthis)->requestImage(*((const QString*)arg1),
arg2,
*((const QSize*)arg3));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 77, column 35>
//   // proto:  QQuickTextureFactory * QQuickImageProvider::requestTexture(const QString & id, QSize * size, const QSize & requestedSize);
// _ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_ requestTexture(const class QString &, class QSize *, const class QSize &)
extern "C"
void*
C_ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_(void *qthis,
const QString* arg1,
QSize * arg2,
const QSize* arg3) {
  auto ret =
  ((QQuickImageProvider*)qthis)->requestTexture(*((const QString*)arg1),
arg2,
*((const QSize*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 68, column 11>
//   // proto:  Flags QQuickImageProvider::flags();
// _ZNK19QQuickImageProvider5flagsEv flags()
extern "C"
QFlags<QQmlImageProviderBase::Flag>*
C_ZNK19QQuickImageProvider5flagsEv(void *qthis) {
  auto ret =
  ((QQuickImageProvider*)qthis)->flags();
  return new QFlags<QQmlImageProviderBase::Flag>(ret); // 5
}
//   // proto:  void QQuickImageProvider::~QQuickImageProvider();
extern "C"
void C_ZN19QQuickImageProviderD2Ev(void *qthis) {
  delete (QQuickImageProvider*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 64, column 5>
//   // proto:  void QQuickImageProvider::QQuickImageProvider(QQmlImageProviderBase::ImageType type, Flags flags);
extern "C"
QQuickImageProvider*
C_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE(QQmlImageProviderBase::ImageType arg1,
QQmlImageProviderBase::Flags arg2) {
  auto ret = new QQuickImageProvider(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 76, column 21>
//   // proto:  QPixmap QQuickImageProvider::requestPixmap(const QString & id, QSize * size, const QSize & requestedSize);
// _ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_ requestPixmap(const class QString &, class QSize *, const class QSize &)
extern "C"
QPixmap*
C_ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_(void *qthis,
const QString* arg1,
QSize * arg2,
const QSize* arg3) {
  auto ret =
  ((QQuickImageProvider*)qthis)->requestPixmap(*((const QString*)arg1),
arg2,
*((const QSize*)arg3));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 67, column 15>
//   // proto:  QQmlImageProviderBase::ImageType QQuickImageProvider::imageType();
// _ZNK19QQuickImageProvider9imageTypeEv imageType()
extern "C"
QQmlImageProviderBase::ImageType
C_ZNK19QQuickImageProvider9imageTypeEv(void *qthis) {
  auto ret =
  ((QQuickImageProvider*)qthis)->imageType();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QQuickTextureFactory::~QQuickTextureFactory();
extern "C"
void C_ZN20QQuickTextureFactoryD2Ev(void *qthis) {
  delete (QQuickTextureFactory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 58, column 20>
//   // proto:  QImage QQuickTextureFactory::image();
// _ZNK20QQuickTextureFactory5imageEv image()
extern "C"
QImage*
C_ZNK20QQuickTextureFactory5imageEv(void *qthis) {
  auto ret =
  ((QQuickTextureFactory*)qthis)->image();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 55, column 25>
//   // proto:  QSGTexture * QQuickTextureFactory::createTexture(QQuickWindow * window);
// _ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow createTexture(class QQuickWindow *)
extern "C"
void*
C_ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow(void *qthis,
QQuickWindow * arg1) {
  auto ret =
  ((QQuickTextureFactory*)qthis)->createTexture(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 57, column 17>
//   // proto:  int QQuickTextureFactory::textureByteCount();
// _ZNK20QQuickTextureFactory16textureByteCountEv textureByteCount()
extern "C"
int
C_ZNK20QQuickTextureFactory16textureByteCountEv(void *qthis) {
  auto ret =
  ((QQuickTextureFactory*)qthis)->textureByteCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 56, column 19>
//   // proto:  QSize QQuickTextureFactory::textureSize();
// _ZNK20QQuickTextureFactory11textureSizeEv textureSize()
extern "C"
QSize*
C_ZNK20QQuickTextureFactory11textureSizeEv(void *qthis) {
  auto ret =
  ((QQuickTextureFactory*)qthis)->textureSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 52, column 5>
//   // proto:  void QQuickTextureFactory::QQuickTextureFactory();
extern "C"
QQuickTextureFactory*
C_ZN20QQuickTextureFactoryC2Ev() {
  // auto ret = new QQuickTextureFactory();
}
// <= ext block end

// body block begin =>
// QQuickTextureFactory_SlotProxy here
class QQuickTextureFactory_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickTextureFactory_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/quick/qquickimageprovider.moc"

extern "C" {
  QQuickTextureFactory_SlotProxy* QQuickTextureFactory_SlotProxy_new()
  {
    return new QQuickTextureFactory_SlotProxy();
  }
};

// <= body block end

