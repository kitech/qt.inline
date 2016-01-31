#include <qsize.h>
#include <qpixmap.h>
#include <qqmlengine.h>
#include <qimage.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qquickimageprovider.h
// dst-file: /src/quick/qquickimageprovider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickimageprovider.h>

extern "C" {

int QQuickImageProvider_Class_Size()
{
  return sizeof(QQuickImageProvider);
}

int QQuickTextureFactory_Class_Size()
{
  return sizeof(QQuickTextureFactory);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickimageprovider_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 75, column 20>
//   // proto:  QImage QQuickImageProvider::requestImage(const QString & id, QSize * size, const QSize & requestedSize);
if (true) {
  auto f = [](QQuickImageProvider flythis, const QString & arg1, QSize * arg2, const QSize & arg3) {
    ((QQuickImageProvider*)0)->requestImage(arg1, arg2, arg3);
    flythis.requestImage(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_ requestImage(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 77, column 35>
//   // proto:  QQuickTextureFactory * QQuickImageProvider::requestTexture(const QString & id, QSize * size, const QSize & requestedSize);
if (true) {
  auto f = [](QQuickImageProvider flythis, const QString & arg1, QSize * arg2, const QSize & arg3) {
    ((QQuickImageProvider*)0)->requestTexture(arg1, arg2, arg3);
    flythis.requestTexture(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_ requestTexture(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 68, column 11>
//   // proto:  Flags QQuickImageProvider::flags();
if (true) {
  auto f = [](QQuickImageProvider flythis) {
    ((QQuickImageProvider*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK19QQuickImageProvider5flagsEv flags()
//   // proto:  void QQuickImageProvider::~QQuickImageProvider();
if (true) {
  delete ((QQuickImageProvider*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 64, column 5>
//   // proto:  void QQuickImageProvider::QQuickImageProvider(QQmlImageProviderBase::ImageType type, Flags flags);
if (true) {
  auto f = [](QQmlImageProviderBase::ImageType arg1, QQmlImageProviderBase::Flags arg2) {
    new QQuickImageProvider(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 76, column 21>
//   // proto:  QPixmap QQuickImageProvider::requestPixmap(const QString & id, QSize * size, const QSize & requestedSize);
if (true) {
  auto f = [](QQuickImageProvider flythis, const QString & arg1, QSize * arg2, const QSize & arg3) {
    ((QQuickImageProvider*)0)->requestPixmap(arg1, arg2, arg3);
    flythis.requestPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_ requestPixmap(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 67, column 15>
//   // proto:  QQmlImageProviderBase::ImageType QQuickImageProvider::imageType();
if (true) {
  auto f = [](QQuickImageProvider flythis) {
    ((QQuickImageProvider*)0)->imageType();
    flythis.imageType();
  };
  if (f == nullptr){}
}
// _ZNK19QQuickImageProvider9imageTypeEv imageType()
//   // proto:  void QQuickTextureFactory::~QQuickTextureFactory();
if (true) {
  delete ((QQuickTextureFactory*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 58, column 20>
//   // proto:  QImage QQuickTextureFactory::image();
if (true) {
  auto f = []() {
    ((QQuickTextureFactory*)0)->image();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickTextureFactory5imageEv image()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 55, column 25>
//   // proto:  QSGTexture * QQuickTextureFactory::createTexture(QQuickWindow * window);
if (true) {
  auto f = [](QQuickWindow * arg1) {
    ((QQuickTextureFactory*)0)->createTexture(arg1);
  };
  if (f == nullptr){}
}
// _ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow createTexture(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 57, column 17>
//   // proto:  int QQuickTextureFactory::textureByteCount();
if (true) {
  auto f = []() {
    ((QQuickTextureFactory*)0)->textureByteCount();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickTextureFactory16textureByteCountEv textureByteCount()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 56, column 19>
//   // proto:  QSize QQuickTextureFactory::textureSize();
if (true) {
  auto f = []() {
    ((QQuickTextureFactory*)0)->textureSize();
  };
  if (f == nullptr){}
}
// _ZNK20QQuickTextureFactory11textureSizeEv textureSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 52, column 5>
//   // proto:  void QQuickTextureFactory::QQuickTextureFactory();
if (true) {
  auto f = []() {
    // new QQuickTextureFactory();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 75, column 20>
//   // proto:  QImage QQuickImageProvider::requestImage(const QString & id, QSize * size, const QSize & requestedSize);
extern "C"
void C_ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_(void *qthis, const QString & arg1, QSize * arg2, const QSize & arg3) {
  ((QQuickImageProvider*)qthis)->requestImage(arg1, arg2, arg3);
}
// _ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_ requestImage(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 77, column 35>
//   // proto:  QQuickTextureFactory * QQuickImageProvider::requestTexture(const QString & id, QSize * size, const QSize & requestedSize);
extern "C"
void C_ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_(void *qthis, const QString & arg1, QSize * arg2, const QSize & arg3) {
  ((QQuickImageProvider*)qthis)->requestTexture(arg1, arg2, arg3);
}
// _ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_ requestTexture(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 68, column 11>
//   // proto:  Flags QQuickImageProvider::flags();
extern "C"
void C_ZNK19QQuickImageProvider5flagsEv(void *qthis) {
  ((QQuickImageProvider*)qthis)->flags();
}
// _ZNK19QQuickImageProvider5flagsEv flags()
//   // proto:  void QQuickImageProvider::~QQuickImageProvider();
extern "C"
void C_ZN19QQuickImageProviderD2Ev(void *qthis) {
  delete (QQuickImageProvider*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 64, column 5>
//   // proto:  void QQuickImageProvider::QQuickImageProvider(QQmlImageProviderBase::ImageType type, Flags flags);
extern "C"
void C_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE(QQmlImageProviderBase::ImageType arg1, QQmlImageProviderBase::Flags arg2) {
  new QQuickImageProvider(arg1, arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 76, column 21>
//   // proto:  QPixmap QQuickImageProvider::requestPixmap(const QString & id, QSize * size, const QSize & requestedSize);
extern "C"
void C_ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_(void *qthis, const QString & arg1, QSize * arg2, const QSize & arg3) {
  ((QQuickImageProvider*)qthis)->requestPixmap(arg1, arg2, arg3);
}
// _ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_ requestPixmap(const class QString &, class QSize *, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 67, column 15>
//   // proto:  QQmlImageProviderBase::ImageType QQuickImageProvider::imageType();
extern "C"
void C_ZNK19QQuickImageProvider9imageTypeEv(void *qthis) {
  ((QQuickImageProvider*)qthis)->imageType();
}
// _ZNK19QQuickImageProvider9imageTypeEv imageType()
//   // proto:  void QQuickTextureFactory::~QQuickTextureFactory();
extern "C"
void C_ZN20QQuickTextureFactoryD2Ev(void *qthis) {
  delete (QQuickTextureFactory*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 58, column 20>
//   // proto:  QImage QQuickTextureFactory::image();
extern "C"
void C_ZNK20QQuickTextureFactory5imageEv(void *qthis) {
  ((QQuickTextureFactory*)qthis)->image();
}
// _ZNK20QQuickTextureFactory5imageEv image()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 55, column 25>
//   // proto:  QSGTexture * QQuickTextureFactory::createTexture(QQuickWindow * window);
extern "C"
void C_ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow(void *qthis, QQuickWindow * arg1) {
  ((QQuickTextureFactory*)qthis)->createTexture(arg1);
}
// _ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow createTexture(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 57, column 17>
//   // proto:  int QQuickTextureFactory::textureByteCount();
extern "C"
void C_ZNK20QQuickTextureFactory16textureByteCountEv(void *qthis) {
  ((QQuickTextureFactory*)qthis)->textureByteCount();
}
// _ZNK20QQuickTextureFactory16textureByteCountEv textureByteCount()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 56, column 19>
//   // proto:  QSize QQuickTextureFactory::textureSize();
extern "C"
void C_ZNK20QQuickTextureFactory11textureSizeEv(void *qthis) {
  ((QQuickTextureFactory*)qthis)->textureSize();
}
// _ZNK20QQuickTextureFactory11textureSizeEv textureSize()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickimageprovider.h', line 52, column 5>
//   // proto:  void QQuickTextureFactory::QQuickTextureFactory();
extern "C"
void C_ZN20QQuickTextureFactoryC2Ev() {
  // new QQuickTextureFactory();
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

