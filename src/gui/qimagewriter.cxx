// /usr/include/qt/QtGui/qimagewriter.h
#include <qimagewriter.h>
#include <QtGui>

// /usr/include/qt/QtGui/qimagewriter.h:65
// void QImageWriter()
extern "C"
void* C_ZN12QImageWriterC1Ev() {
  return new QImageWriter();
}
// /usr/include/qt/QtGui/qimagewriter.h:66
// void QImageWriter(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN12QImageWriterC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format) {
  return new QImageWriter(device, format);
}
// /usr/include/qt/QtGui/qimagewriter.h:67
// void QImageWriter(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN12QImageWriterC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format) {
  return new QImageWriter(fileName, format);
}
// /usr/include/qt/QtGui/qimagewriter.h:68
// void ~QImageWriter()
extern "C"
void C_ZN12QImageWriterD1Ev(void *this_) {
  delete (QImageWriter*)(this_);
}
// /usr/include/qt/QtGui/qimagewriter.h:70
// void setFormat(const class QByteArray &)
extern "C"
void C_ZN12QImageWriter9setFormatERK10QByteArray(void *this_, const QByteArray & format) {
  ((QImageWriter*)this_)->setFormat(format);
}
// /usr/include/qt/QtGui/qimagewriter.h:71
// QByteArray format()
extern "C"
void C_ZNK12QImageWriter6formatEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->format();
}
// /usr/include/qt/QtGui/qimagewriter.h:73
// void setDevice(class QIODevice *)
extern "C"
void C_ZN12QImageWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageWriter*)this_)->setDevice(device);
}
// /usr/include/qt/QtGui/qimagewriter.h:74
// QIODevice * device()
extern "C"
void C_ZNK12QImageWriter6deviceEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->device();
}
// /usr/include/qt/QtGui/qimagewriter.h:76
// void setFileName(const class QString &)
extern "C"
void C_ZN12QImageWriter11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QImageWriter*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtGui/qimagewriter.h:77
// QString fileName()
extern "C"
void C_ZNK12QImageWriter8fileNameEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->fileName();
}
// /usr/include/qt/QtGui/qimagewriter.h:79
// void setQuality(int)
extern "C"
void C_ZN12QImageWriter10setQualityEi(void *this_, int quality) {
  ((QImageWriter*)this_)->setQuality(quality);
}
// /usr/include/qt/QtGui/qimagewriter.h:80
// int quality()
extern "C"
void C_ZNK12QImageWriter7qualityEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->quality();
}
// /usr/include/qt/QtGui/qimagewriter.h:82
// void setCompression(int)
extern "C"
void C_ZN12QImageWriter14setCompressionEi(void *this_, int compression) {
  ((QImageWriter*)this_)->setCompression(compression);
}
// /usr/include/qt/QtGui/qimagewriter.h:83
// int compression()
extern "C"
void C_ZNK12QImageWriter11compressionEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->compression();
}
// /usr/include/qt/QtGui/qimagewriter.h:85
// void setGamma(float)
extern "C"
void C_ZN12QImageWriter8setGammaEf(void *this_, float gamma) {
  ((QImageWriter*)this_)->setGamma(gamma);
}
// /usr/include/qt/QtGui/qimagewriter.h:86
// float gamma()
extern "C"
void C_ZNK12QImageWriter5gammaEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->gamma();
}
// /usr/include/qt/QtGui/qimagewriter.h:88
// void setSubType(const class QByteArray &)
extern "C"
void C_ZN12QImageWriter10setSubTypeERK10QByteArray(void *this_, const QByteArray & type) {
  ((QImageWriter*)this_)->setSubType(type);
}
// /usr/include/qt/QtGui/qimagewriter.h:89
// QByteArray subType()
extern "C"
void C_ZNK12QImageWriter7subTypeEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->subType();
}
// /usr/include/qt/QtGui/qimagewriter.h:90
// QList<QByteArray> supportedSubTypes()
extern "C"
void C_ZNK12QImageWriter17supportedSubTypesEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->supportedSubTypes();
}
// /usr/include/qt/QtGui/qimagewriter.h:92
// void setOptimizedWrite(_Bool)
extern "C"
void C_ZN12QImageWriter17setOptimizedWriteEb(void *this_, bool optimize) {
  ((QImageWriter*)this_)->setOptimizedWrite(optimize);
}
// /usr/include/qt/QtGui/qimagewriter.h:93
// bool optimizedWrite()
extern "C"
void C_ZNK12QImageWriter14optimizedWriteEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->optimizedWrite();
}
// /usr/include/qt/QtGui/qimagewriter.h:95
// void setProgressiveScanWrite(_Bool)
extern "C"
void C_ZN12QImageWriter23setProgressiveScanWriteEb(void *this_, bool progressive) {
  ((QImageWriter*)this_)->setProgressiveScanWrite(progressive);
}
// /usr/include/qt/QtGui/qimagewriter.h:96
// bool progressiveScanWrite()
extern "C"
void C_ZNK12QImageWriter20progressiveScanWriteEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->progressiveScanWrite();
}
// /usr/include/qt/QtGui/qimagewriter.h:98
// QImageIOHandler::Transformations transformation()
extern "C"
void C_ZNK12QImageWriter14transformationEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->transformation();
}
// /usr/include/qt/QtGui/qimagewriter.h:99
// void setTransformation(class QImageIOHandler::Transformations)
extern "C"
void C_ZN12QImageWriter17setTransformationE6QFlagsIN15QImageIOHandler14TransformationEE(void *this_, QFlags<QImageIOHandler::Transformation> orientation) {
  ((QImageWriter*)this_)->setTransformation(orientation);
}
// /usr/include/qt/QtGui/qimagewriter.h:102
// void setDescription(const class QString &)
extern "C"
void C_ZN12QImageWriter14setDescriptionERK7QString(void *this_, const QString & description) {
  ((QImageWriter*)this_)->setDescription(description);
}
// /usr/include/qt/QtGui/qimagewriter.h:103
// QString description()
extern "C"
void C_ZNK12QImageWriter11descriptionEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->description();
}
// /usr/include/qt/QtGui/qimagewriter.h:105
// void setText(const class QString &, const class QString &)
extern "C"
void C_ZN12QImageWriter7setTextERK7QStringS2_(void *this_, const QString & key, const QString & text) {
  ((QImageWriter*)this_)->setText(key, text);
}
// /usr/include/qt/QtGui/qimagewriter.h:107
// bool canWrite()
extern "C"
void C_ZNK12QImageWriter8canWriteEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->canWrite();
}
// /usr/include/qt/QtGui/qimagewriter.h:108
// bool write(const class QImage &)
extern "C"
void C_ZN12QImageWriter5writeERK6QImage(void *this_, const QImage & image) {
  /*return*/ ((QImageWriter*)this_)->write(image);
}
// /usr/include/qt/QtGui/qimagewriter.h:110
// QImageWriter::ImageWriterError error()
extern "C"
void C_ZNK12QImageWriter5errorEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->error();
}
// /usr/include/qt/QtGui/qimagewriter.h:111
// QString errorString()
extern "C"
void C_ZNK12QImageWriter11errorStringEv(void *this_) {
  /*return*/ ((QImageWriter*)this_)->errorString();
}
// /usr/include/qt/QtGui/qimagewriter.h:113
// bool supportsOption(class QImageIOHandler::ImageOption)
extern "C"
void C_ZNK12QImageWriter14supportsOptionEN15QImageIOHandler11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  /*return*/ ((QImageWriter*)this_)->supportsOption(option);
}
// static
// /usr/include/qt/QtGui/qimagewriter.h:115
// QList<QByteArray> supportedImageFormats()
extern "C"
void C_ZN12QImageWriter21supportedImageFormatsEv() {
  /*return*/ QImageWriter::supportedImageFormats();
}
// static
// /usr/include/qt/QtGui/qimagewriter.h:116
// QList<QByteArray> supportedMimeTypes()
extern "C"
void C_ZN12QImageWriter18supportedMimeTypesEv() {
  /*return*/ QImageWriter::supportedMimeTypes();
}