//  header block begin
// /usr/include/qt/QtGui/qimagereader.h
#include <qimagereader.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qimagereader.h:70
// void QImageReader()
extern "C"
void* C_ZN12QImageReaderC1Ev() {
  return new QImageReader();
}
// /usr/include/qt/QtGui/qimagereader.h:71
// void QImageReader(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN12QImageReaderC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format) {
  return new QImageReader(device, format);
}
// /usr/include/qt/QtGui/qimagereader.h:72
// void QImageReader(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN12QImageReaderC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format) {
  return new QImageReader(fileName, format);
}
// /usr/include/qt/QtGui/qimagereader.h:73
// void ~QImageReader()
extern "C"
void C_ZN12QImageReaderD1Ev(void *this_) {
  delete (QImageReader*)(this_);
}
// /usr/include/qt/QtGui/qimagereader.h:75
// void setFormat(const class QByteArray &)
extern "C"
void C_ZN12QImageReader9setFormatERK10QByteArray(void *this_, const QByteArray & format) {
  ((QImageReader*)this_)->setFormat(format);
}
// /usr/include/qt/QtGui/qimagereader.h:76
// QByteArray format()
extern "C"
void C_ZNK12QImageReader6formatEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->format();
}
// /usr/include/qt/QtGui/qimagereader.h:78
// void setAutoDetectImageFormat(_Bool)
extern "C"
void C_ZN12QImageReader24setAutoDetectImageFormatEb(void *this_, bool enabled) {
  ((QImageReader*)this_)->setAutoDetectImageFormat(enabled);
}
// /usr/include/qt/QtGui/qimagereader.h:79
// bool autoDetectImageFormat()
extern "C"
void C_ZNK12QImageReader21autoDetectImageFormatEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->autoDetectImageFormat();
}
// /usr/include/qt/QtGui/qimagereader.h:81
// void setDecideFormatFromContent(_Bool)
extern "C"
void C_ZN12QImageReader26setDecideFormatFromContentEb(void *this_, bool ignored) {
  ((QImageReader*)this_)->setDecideFormatFromContent(ignored);
}
// /usr/include/qt/QtGui/qimagereader.h:82
// bool decideFormatFromContent()
extern "C"
void C_ZNK12QImageReader23decideFormatFromContentEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->decideFormatFromContent();
}
// /usr/include/qt/QtGui/qimagereader.h:84
// void setDevice(class QIODevice *)
extern "C"
void C_ZN12QImageReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageReader*)this_)->setDevice(device);
}
// /usr/include/qt/QtGui/qimagereader.h:85
// QIODevice * device()
extern "C"
void C_ZNK12QImageReader6deviceEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->device();
}
// /usr/include/qt/QtGui/qimagereader.h:87
// void setFileName(const class QString &)
extern "C"
void C_ZN12QImageReader11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QImageReader*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtGui/qimagereader.h:88
// QString fileName()
extern "C"
void C_ZNK12QImageReader8fileNameEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->fileName();
}
// /usr/include/qt/QtGui/qimagereader.h:90
// QSize size()
extern "C"
void C_ZNK12QImageReader4sizeEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->size();
}
// /usr/include/qt/QtGui/qimagereader.h:92
// QImage::Format imageFormat()
extern "C"
void C_ZNK12QImageReader11imageFormatEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->imageFormat();
}
// /usr/include/qt/QtGui/qimagereader.h:94
// QStringList textKeys()
extern "C"
void C_ZNK12QImageReader8textKeysEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->textKeys();
}
// /usr/include/qt/QtGui/qimagereader.h:95
// QString text(const class QString &)
extern "C"
void C_ZNK12QImageReader4textERK7QString(void *this_, const QString & key) {
  /*return*/ ((QImageReader*)this_)->text(key);
}
// /usr/include/qt/QtGui/qimagereader.h:97
// void setClipRect(const class QRect &)
extern "C"
void C_ZN12QImageReader11setClipRectERK5QRect(void *this_, const QRect & rect) {
  ((QImageReader*)this_)->setClipRect(rect);
}
// /usr/include/qt/QtGui/qimagereader.h:98
// QRect clipRect()
extern "C"
void C_ZNK12QImageReader8clipRectEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->clipRect();
}
// /usr/include/qt/QtGui/qimagereader.h:100
// void setScaledSize(const class QSize &)
extern "C"
void C_ZN12QImageReader13setScaledSizeERK5QSize(void *this_, const QSize & size) {
  ((QImageReader*)this_)->setScaledSize(size);
}
// /usr/include/qt/QtGui/qimagereader.h:101
// QSize scaledSize()
extern "C"
void C_ZNK12QImageReader10scaledSizeEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->scaledSize();
}
// /usr/include/qt/QtGui/qimagereader.h:103
// void setQuality(int)
extern "C"
void C_ZN12QImageReader10setQualityEi(void *this_, int quality) {
  ((QImageReader*)this_)->setQuality(quality);
}
// /usr/include/qt/QtGui/qimagereader.h:104
// int quality()
extern "C"
void C_ZNK12QImageReader7qualityEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->quality();
}
// /usr/include/qt/QtGui/qimagereader.h:106
// void setScaledClipRect(const class QRect &)
extern "C"
void C_ZN12QImageReader17setScaledClipRectERK5QRect(void *this_, const QRect & rect) {
  ((QImageReader*)this_)->setScaledClipRect(rect);
}
// /usr/include/qt/QtGui/qimagereader.h:107
// QRect scaledClipRect()
extern "C"
void C_ZNK12QImageReader14scaledClipRectEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->scaledClipRect();
}
// /usr/include/qt/QtGui/qimagereader.h:109
// void setBackgroundColor(const class QColor &)
extern "C"
void C_ZN12QImageReader18setBackgroundColorERK6QColor(void *this_, const QColor & color) {
  ((QImageReader*)this_)->setBackgroundColor(color);
}
// /usr/include/qt/QtGui/qimagereader.h:110
// QColor backgroundColor()
extern "C"
void C_ZNK12QImageReader15backgroundColorEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->backgroundColor();
}
// /usr/include/qt/QtGui/qimagereader.h:112
// bool supportsAnimation()
extern "C"
void C_ZNK12QImageReader17supportsAnimationEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->supportsAnimation();
}
// /usr/include/qt/QtGui/qimagereader.h:114
// QImageIOHandler::Transformations transformation()
extern "C"
void C_ZNK12QImageReader14transformationEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->transformation();
}
// /usr/include/qt/QtGui/qimagereader.h:116
// void setAutoTransform(_Bool)
extern "C"
void C_ZN12QImageReader16setAutoTransformEb(void *this_, bool enabled) {
  ((QImageReader*)this_)->setAutoTransform(enabled);
}
// /usr/include/qt/QtGui/qimagereader.h:117
// bool autoTransform()
extern "C"
void C_ZNK12QImageReader13autoTransformEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->autoTransform();
}
// /usr/include/qt/QtGui/qimagereader.h:119
// void setGamma(float)
extern "C"
void C_ZN12QImageReader8setGammaEf(void *this_, float gamma) {
  ((QImageReader*)this_)->setGamma(gamma);
}
// /usr/include/qt/QtGui/qimagereader.h:120
// float gamma()
extern "C"
void C_ZNK12QImageReader5gammaEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->gamma();
}
// /usr/include/qt/QtGui/qimagereader.h:122
// QByteArray subType()
extern "C"
void C_ZNK12QImageReader7subTypeEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->subType();
}
// /usr/include/qt/QtGui/qimagereader.h:123
// QList<QByteArray> supportedSubTypes()
extern "C"
void C_ZNK12QImageReader17supportedSubTypesEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->supportedSubTypes();
}
// /usr/include/qt/QtGui/qimagereader.h:125
// bool canRead()
extern "C"
void C_ZNK12QImageReader7canReadEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->canRead();
}
// /usr/include/qt/QtGui/qimagereader.h:126
// QImage read()
extern "C"
void C_ZN12QImageReader4readEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->read();
}
// /usr/include/qt/QtGui/qimagereader.h:127
// bool read(class QImage *)
extern "C"
void C_ZN12QImageReader4readEP6QImage(void *this_, QImage * image) {
  /*return*/ ((QImageReader*)this_)->read(image);
}
// /usr/include/qt/QtGui/qimagereader.h:129
// bool jumpToNextImage()
extern "C"
void C_ZN12QImageReader15jumpToNextImageEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->jumpToNextImage();
}
// /usr/include/qt/QtGui/qimagereader.h:130
// bool jumpToImage(int)
extern "C"
void C_ZN12QImageReader11jumpToImageEi(void *this_, int imageNumber) {
  /*return*/ ((QImageReader*)this_)->jumpToImage(imageNumber);
}
// /usr/include/qt/QtGui/qimagereader.h:131
// int loopCount()
extern "C"
void C_ZNK12QImageReader9loopCountEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->loopCount();
}
// /usr/include/qt/QtGui/qimagereader.h:132
// int imageCount()
extern "C"
void C_ZNK12QImageReader10imageCountEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->imageCount();
}
// /usr/include/qt/QtGui/qimagereader.h:133
// int nextImageDelay()
extern "C"
void C_ZNK12QImageReader14nextImageDelayEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->nextImageDelay();
}
// /usr/include/qt/QtGui/qimagereader.h:134
// int currentImageNumber()
extern "C"
void C_ZNK12QImageReader18currentImageNumberEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->currentImageNumber();
}
// /usr/include/qt/QtGui/qimagereader.h:135
// QRect currentImageRect()
extern "C"
void C_ZNK12QImageReader16currentImageRectEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->currentImageRect();
}
// /usr/include/qt/QtGui/qimagereader.h:137
// QImageReader::ImageReaderError error()
extern "C"
void C_ZNK12QImageReader5errorEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->error();
}
// /usr/include/qt/QtGui/qimagereader.h:138
// QString errorString()
extern "C"
void C_ZNK12QImageReader11errorStringEv(void *this_) {
  /*return*/ ((QImageReader*)this_)->errorString();
}
// /usr/include/qt/QtGui/qimagereader.h:140
// bool supportsOption(class QImageIOHandler::ImageOption)
extern "C"
void C_ZNK12QImageReader14supportsOptionEN15QImageIOHandler11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  /*return*/ ((QImageReader*)this_)->supportsOption(option);
}
// static
// /usr/include/qt/QtGui/qimagereader.h:142
// QByteArray imageFormat(const class QString &)
extern "C"
void C_ZN12QImageReader11imageFormatERK7QString(const QString & fileName) {
  /*return*/ QImageReader::imageFormat(fileName);
}
// static
// /usr/include/qt/QtGui/qimagereader.h:143
// QByteArray imageFormat(class QIODevice *)
extern "C"
void C_ZN12QImageReader11imageFormatEP9QIODevice(QIODevice * device) {
  /*return*/ QImageReader::imageFormat(device);
}
// static
// /usr/include/qt/QtGui/qimagereader.h:144
// QList<QByteArray> supportedImageFormats()
extern "C"
void C_ZN12QImageReader21supportedImageFormatsEv() {
  /*return*/ QImageReader::supportedImageFormats();
}
// static
// /usr/include/qt/QtGui/qimagereader.h:145
// QList<QByteArray> supportedMimeTypes()
extern "C"
void C_ZN12QImageReader18supportedMimeTypesEv() {
  /*return*/ QImageReader::supportedMimeTypes();
}
//  main block end
