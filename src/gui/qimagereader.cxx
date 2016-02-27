// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qimagereader.h
// dst-file: /src/gui/qimagereader.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qimagereader.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qsize.h>
#include <qcolor.h>
#include <qimage.h>
#include <qrect.h>
#include <qimageiohandler.h>
// <= header block end

// main block begin =>
void __keep_qimagereader_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QImageReader_Class_Size()
{
  return sizeof(QImageReader);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 129, column 13>
//   // proto:  QString QImageReader::errorString();
// _ZNK12QImageReader11errorStringEv errorString()
extern "C"
QString*
C_ZNK12QImageReader11errorStringEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 131, column 10>
//   // proto:  bool QImageReader::supportsOption(QImageIOHandler::ImageOption option);
// _ZNK12QImageReader14supportsOptionEN15QImageIOHandler11ImageOptionE supportsOption(class QImageIOHandler::ImageOption)
extern "C"
bool
C_ZNK12QImageReader14supportsOptionEN15QImageIOHandler11ImageOptionE(void *qthis,
QImageIOHandler::ImageOption* arg1) {
  auto ret =
  ((QImageReader*)qthis)->supportsOption(*((QImageIOHandler::ImageOption*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 116, column 10>
//   // proto:  bool QImageReader::canRead();
// _ZNK12QImageReader7canReadEv canRead()
extern "C"
bool
C_ZNK12QImageReader7canReadEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->canRead();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QImageReader::~QImageReader();
extern "C"
void C_ZN12QImageReaderD2Ev(void *qthis) {
  delete (QImageReader*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 94, column 10>
//   // proto:  void QImageReader::setScaledSize(const QSize & size);
// _ZN12QImageReader13setScaledSizeERK5QSize setScaledSize(const class QSize &)
extern "C"
void
C_ZN12QImageReader13setScaledSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QImageReader*)qthis)->setScaledSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 118, column 10>
//   // proto:  bool QImageReader::read(QImage * image);
// _ZN12QImageReader4readEP6QImage read(class QImage *)
extern "C"
bool
C_ZN12QImageReader4readEP6QImage(void *qthis,
QImage * arg1) {
  auto ret =
  ((QImageReader*)qthis)->read(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 100, column 10>
//   // proto:  void QImageReader::setScaledClipRect(const QRect & rect);
// _ZN12QImageReader17setScaledClipRectERK5QRect setScaledClipRect(const class QRect &)
extern "C"
void
C_ZN12QImageReader17setScaledClipRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QImageReader*)qthis)->setScaledClipRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 123, column 9>
//   // proto:  int QImageReader::imageCount();
// _ZNK12QImageReader10imageCountEv imageCount()
extern "C"
int
C_ZNK12QImageReader10imageCountEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->imageCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 88, column 17>
//   // proto:  QStringList QImageReader::textKeys();
// _ZNK12QImageReader8textKeysEv textKeys()
extern "C"
QStringList*
C_ZNK12QImageReader8textKeysEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->textKeys();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 76, column 10>
//   // proto:  bool QImageReader::decideFormatFromContent();
// _ZNK12QImageReader23decideFormatFromContentEv decideFormatFromContent()
extern "C"
bool
C_ZNK12QImageReader23decideFormatFromContentEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->decideFormatFromContent();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 79, column 16>
//   // proto:  QIODevice * QImageReader::device();
// _ZNK12QImageReader6deviceEv device()
extern "C"
void*
C_ZNK12QImageReader6deviceEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 111, column 10>
//   // proto:  bool QImageReader::autoTransform();
// _ZNK12QImageReader13autoTransformEv autoTransform()
extern "C"
bool
C_ZNK12QImageReader13autoTransformEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->autoTransform();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 120, column 10>
//   // proto:  bool QImageReader::jumpToNextImage();
// _ZN12QImageReader15jumpToNextImageEv jumpToNextImage()
extern "C"
bool
C_ZN12QImageReader15jumpToNextImageEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->jumpToNextImage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 133, column 23>
//   // proto: static QByteArray QImageReader::imageFormat(const QString & fileName);
// _ZN12QImageReader11imageFormatERK7QString imageFormat(const class QString &)
extern "C"
QByteArray*
C_ZN12QImageReader11imageFormatERK7QString(const QString* arg1) {
  auto ret =
  QImageReader::imageFormat(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 114, column 23>
//   // proto:  QList<QByteArray> QImageReader::supportedSubTypes();
// _ZNK12QImageReader17supportedSubTypesEv supportedSubTypes()
extern "C"
QList<QByteArray>*
C_ZNK12QImageReader17supportedSubTypesEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->supportedSubTypes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 84, column 11>
//   // proto:  QSize QImageReader::size();
// _ZNK12QImageReader4sizeEv size()
extern "C"
QSize*
C_ZNK12QImageReader4sizeEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 104, column 12>
//   // proto:  QColor QImageReader::backgroundColor();
// _ZNK12QImageReader15backgroundColorEv backgroundColor()
extern "C"
QColor*
C_ZNK12QImageReader15backgroundColorEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->backgroundColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 113, column 16>
//   // proto:  QByteArray QImageReader::subType();
// _ZNK12QImageReader7subTypeEv subType()
extern "C"
QByteArray*
C_ZNK12QImageReader7subTypeEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->subType();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 125, column 9>
//   // proto:  int QImageReader::currentImageNumber();
// _ZNK12QImageReader18currentImageNumberEv currentImageNumber()
extern "C"
int
C_ZNK12QImageReader18currentImageNumberEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->currentImageNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 135, column 30>
//   // proto: static QList<QByteArray> QImageReader::supportedImageFormats();
// _ZN12QImageReader21supportedImageFormatsEv supportedImageFormats()
extern "C"
QList<QByteArray>*
C_ZN12QImageReader21supportedImageFormatsEv() {
  auto ret =
  QImageReader::supportedImageFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 122, column 9>
//   // proto:  int QImageReader::loopCount();
// _ZNK12QImageReader9loopCountEv loopCount()
extern "C"
int
C_ZNK12QImageReader9loopCountEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->loopCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 86, column 20>
//   // proto:  QImage::Format QImageReader::imageFormat();
// _ZNK12QImageReader11imageFormatEv imageFormat()
extern "C"
QImage::Format
C_ZNK12QImageReader11imageFormatEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->imageFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 75, column 10>
//   // proto:  void QImageReader::setDecideFormatFromContent(bool ignored);
// _ZN12QImageReader26setDecideFormatFromContentEb setDecideFormatFromContent(_Bool)
extern "C"
void
C_ZN12QImageReader26setDecideFormatFromContentEb(void *qthis,
bool arg1) {
  ((QImageReader*)qthis)->setDecideFormatFromContent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 101, column 11>
//   // proto:  QRect QImageReader::scaledClipRect();
// _ZNK12QImageReader14scaledClipRectEv scaledClipRect()
extern "C"
QRect*
C_ZNK12QImageReader14scaledClipRectEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->scaledClipRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 136, column 30>
//   // proto: static QList<QByteArray> QImageReader::supportedMimeTypes();
// _ZN12QImageReader18supportedMimeTypesEv supportedMimeTypes()
extern "C"
QList<QByteArray>*
C_ZN12QImageReader18supportedMimeTypesEv() {
  auto ret =
  QImageReader::supportedMimeTypes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 89, column 13>
//   // proto:  QString QImageReader::text(const QString & key);
// _ZNK12QImageReader4textERK7QString text(const class QString &)
extern "C"
QString*
C_ZNK12QImageReader4textERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QImageReader*)qthis)->text(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 124, column 9>
//   // proto:  int QImageReader::nextImageDelay();
// _ZNK12QImageReader14nextImageDelayEv nextImageDelay()
extern "C"
int
C_ZNK12QImageReader14nextImageDelayEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->nextImageDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 117, column 12>
//   // proto:  QImage QImageReader::read();
// _ZN12QImageReader4readEv read()
extern "C"
QImage*
C_ZN12QImageReader4readEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->read();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 106, column 10>
//   // proto:  bool QImageReader::supportsAnimation();
// _ZNK12QImageReader17supportsAnimationEv supportsAnimation()
extern "C"
bool
C_ZNK12QImageReader17supportsAnimationEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->supportsAnimation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 121, column 10>
//   // proto:  bool QImageReader::jumpToImage(int imageNumber);
// _ZN12QImageReader11jumpToImageEi jumpToImage(int)
extern "C"
bool
C_ZN12QImageReader11jumpToImageEi(void *qthis,
int arg1) {
  auto ret =
  ((QImageReader*)qthis)->jumpToImage(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 81, column 10>
//   // proto:  void QImageReader::setFileName(const QString & fileName);
// _ZN12QImageReader11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN12QImageReader11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QImageReader*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 95, column 11>
//   // proto:  QSize QImageReader::scaledSize();
// _ZNK12QImageReader10scaledSizeEv scaledSize()
extern "C"
QSize*
C_ZNK12QImageReader10scaledSizeEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->scaledSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 110, column 10>
//   // proto:  void QImageReader::setAutoTransform(bool enabled);
// _ZN12QImageReader16setAutoTransformEb setAutoTransform(_Bool)
extern "C"
void
C_ZN12QImageReader16setAutoTransformEb(void *qthis,
bool arg1) {
  ((QImageReader*)qthis)->setAutoTransform(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 128, column 22>
//   // proto:  QImageReader::ImageReaderError QImageReader::error();
// _ZNK12QImageReader5errorEv error()
extern "C"
QImageReader::ImageReaderError
C_ZNK12QImageReader5errorEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 91, column 10>
//   // proto:  void QImageReader::setClipRect(const QRect & rect);
// _ZN12QImageReader11setClipRectERK5QRect setClipRect(const class QRect &)
extern "C"
void
C_ZN12QImageReader11setClipRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QImageReader*)qthis)->setClipRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 73, column 10>
//   // proto:  bool QImageReader::autoDetectImageFormat();
// _ZNK12QImageReader21autoDetectImageFormatEv autoDetectImageFormat()
extern "C"
bool
C_ZNK12QImageReader21autoDetectImageFormatEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->autoDetectImageFormat();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 126, column 11>
//   // proto:  QRect QImageReader::currentImageRect();
// _ZNK12QImageReader16currentImageRectEv currentImageRect()
extern "C"
QRect*
C_ZNK12QImageReader16currentImageRectEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->currentImageRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 66, column 14>
//   // proto:  void QImageReader::QImageReader(const QString & fileName, const QByteArray & format);
extern "C"
QImageReader*
C_ZN12QImageReaderC2ERK7QStringRK10QByteArray(const QString* arg1,
const QByteArray* arg2) {
  auto ret = new QImageReader(*((const QString*)arg1), *((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 134, column 23>
//   // proto: static QByteArray QImageReader::imageFormat(QIODevice * device);
// _ZN12QImageReader11imageFormatEP9QIODevice imageFormat(class QIODevice *)
extern "C"
QByteArray*
C_ZN12QImageReader11imageFormatEP9QIODevice(QIODevice * arg1) {
  auto ret =
  QImageReader::imageFormat(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 98, column 9>
//   // proto:  int QImageReader::quality();
// _ZNK12QImageReader7qualityEv quality()
extern "C"
int
C_ZNK12QImageReader7qualityEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->quality();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 78, column 10>
//   // proto:  void QImageReader::setDevice(QIODevice * device);
// _ZN12QImageReader9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN12QImageReader9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QImageReader*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 103, column 10>
//   // proto:  void QImageReader::setBackgroundColor(const QColor & color);
// _ZN12QImageReader18setBackgroundColorERK6QColor setBackgroundColor(const class QColor &)
extern "C"
void
C_ZN12QImageReader18setBackgroundColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QImageReader*)qthis)->setBackgroundColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 97, column 10>
//   // proto:  void QImageReader::setQuality(int quality);
// _ZN12QImageReader10setQualityEi setQuality(int)
extern "C"
void
C_ZN12QImageReader10setQualityEi(void *qthis,
int arg1) {
  ((QImageReader*)qthis)->setQuality(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 65, column 14>
//   // proto:  void QImageReader::QImageReader(QIODevice * device, const QByteArray & format);
extern "C"
QImageReader*
C_ZN12QImageReaderC2EP9QIODeviceRK10QByteArray(QIODevice * arg1,
const QByteArray* arg2) {
  auto ret = new QImageReader(arg1, *((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 72, column 10>
//   // proto:  void QImageReader::setAutoDetectImageFormat(bool enabled);
// _ZN12QImageReader24setAutoDetectImageFormatEb setAutoDetectImageFormat(_Bool)
extern "C"
void
C_ZN12QImageReader24setAutoDetectImageFormatEb(void *qthis,
bool arg1) {
  ((QImageReader*)qthis)->setAutoDetectImageFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 64, column 5>
//   // proto:  void QImageReader::QImageReader();
extern "C"
QImageReader*
C_ZN12QImageReaderC2Ev() {
  auto ret = new QImageReader();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 69, column 10>
//   // proto:  void QImageReader::setFormat(const QByteArray & format);
// _ZN12QImageReader9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZN12QImageReader9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QImageReader*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 82, column 13>
//   // proto:  QString QImageReader::fileName();
// _ZNK12QImageReader8fileNameEv fileName()
extern "C"
QString*
C_ZNK12QImageReader8fileNameEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 92, column 11>
//   // proto:  QRect QImageReader::clipRect();
// _ZNK12QImageReader8clipRectEv clipRect()
extern "C"
QRect*
C_ZNK12QImageReader8clipRectEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->clipRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 70, column 16>
//   // proto:  QByteArray QImageReader::format();
// _ZNK12QImageReader6formatEv format()
extern "C"
QByteArray*
C_ZNK12QImageReader6formatEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->format();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagereader.h', line 108, column 38>
//   // proto:  QImageIOHandler::Transformations QImageReader::transformation();
// _ZNK12QImageReader14transformationEv transformation()
extern "C"
QFlags<QImageIOHandler::Transformation>*
C_ZNK12QImageReader14transformationEv(void *qthis) {
  auto ret =
  ((QImageReader*)qthis)->transformation();
  return new QFlags<QImageIOHandler::Transformation>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

