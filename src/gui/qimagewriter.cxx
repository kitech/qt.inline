// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qimagewriter.h
// dst-file: /src/gui/qimagewriter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qimagewriter.h>


#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>
#include <qimageiohandler.h>
// <= header block end

// main block begin =>
void __keep_qimagewriter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QImageWriter_Class_Size()
{
  return sizeof(QImageWriter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 99, column 10>
//   // proto:  void QImageWriter::setText(const QString & key, const QString & text);
// _ZN12QImageWriter7setTextERK7QStringS2_ setText(const class QString &, const class QString &)
extern "C"
void
C_ZN12QImageWriter7setTextERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QImageWriter*)qthis)->setText(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 79, column 10>
//   // proto:  void QImageWriter::setGamma(float gamma);
// _ZN12QImageWriter8setGammaEf setGamma(float)
extern "C"
void
C_ZN12QImageWriter8setGammaEf(void *qthis,
float arg1) {
  ((QImageWriter*)qthis)->setGamma(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 70, column 10>
//   // proto:  void QImageWriter::setFileName(const QString & fileName);
// _ZN12QImageWriter11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN12QImageWriter11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QImageWriter*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 87, column 10>
//   // proto:  bool QImageWriter::optimizedWrite();
// _ZNK12QImageWriter14optimizedWriteEv optimizedWrite()
extern "C"
bool
C_ZNK12QImageWriter14optimizedWriteEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->optimizedWrite();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QImageWriter::~QImageWriter();
extern "C"
void C_ZN12QImageWriterD2Ev(void *qthis) {
  delete (QImageWriter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 68, column 16>
//   // proto:  QIODevice * QImageWriter::device();
// _ZNK12QImageWriter6deviceEv device()
extern "C"
void*
C_ZNK12QImageWriter6deviceEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 83, column 16>
//   // proto:  QByteArray QImageWriter::subType();
// _ZNK12QImageWriter7subTypeEv subType()
extern "C"
QByteArray*
C_ZNK12QImageWriter7subTypeEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->subType();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 110, column 30>
//   // proto: static QList<QByteArray> QImageWriter::supportedMimeTypes();
// _ZN12QImageWriter18supportedMimeTypesEv supportedMimeTypes()
extern "C"
QList<QByteArray>*
C_ZN12QImageWriter18supportedMimeTypesEv() {
  auto ret =
  QImageWriter::supportedMimeTypes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 74, column 9>
//   // proto:  int QImageWriter::quality();
// _ZNK12QImageWriter7qualityEv quality()
extern "C"
int
C_ZNK12QImageWriter7qualityEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->quality();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 102, column 10>
//   // proto:  bool QImageWriter::write(const QImage & image);
// _ZN12QImageWriter5writeERK6QImage write(const class QImage &)
extern "C"
bool
C_ZN12QImageWriter5writeERK6QImage(void *qthis,
const QImage* arg1) {
  auto ret =
  ((QImageWriter*)qthis)->write(*((const QImage*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 76, column 10>
//   // proto:  void QImageWriter::setCompression(int compression);
// _ZN12QImageWriter14setCompressionEi setCompression(int)
extern "C"
void
C_ZN12QImageWriter14setCompressionEi(void *qthis,
int arg1) {
  ((QImageWriter*)qthis)->setCompression(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 109, column 30>
//   // proto: static QList<QByteArray> QImageWriter::supportedImageFormats();
// _ZN12QImageWriter21supportedImageFormatsEv supportedImageFormats()
extern "C"
QList<QByteArray>*
C_ZN12QImageWriter21supportedImageFormatsEv() {
  auto ret =
  QImageWriter::supportedImageFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 71, column 13>
//   // proto:  QString QImageWriter::fileName();
// _ZNK12QImageWriter8fileNameEv fileName()
extern "C"
QString*
C_ZNK12QImageWriter8fileNameEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 86, column 10>
//   // proto:  void QImageWriter::setOptimizedWrite(bool optimize);
// _ZN12QImageWriter17setOptimizedWriteEb setOptimizedWrite(_Bool)
extern "C"
void
C_ZN12QImageWriter17setOptimizedWriteEb(void *qthis,
bool arg1) {
  ((QImageWriter*)qthis)->setOptimizedWrite(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 107, column 10>
//   // proto:  bool QImageWriter::supportsOption(QImageIOHandler::ImageOption option);
// _ZNK12QImageWriter14supportsOptionEN15QImageIOHandler11ImageOptionE supportsOption(class QImageIOHandler::ImageOption)
extern "C"
bool
C_ZNK12QImageWriter14supportsOptionEN15QImageIOHandler11ImageOptionE(void *qthis,
QImageIOHandler::ImageOption* arg1) {
  auto ret =
  ((QImageWriter*)qthis)->supportsOption(*((QImageIOHandler::ImageOption*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 105, column 13>
//   // proto:  QString QImageWriter::errorString();
// _ZNK12QImageWriter11errorStringEv errorString()
extern "C"
QString*
C_ZNK12QImageWriter11errorStringEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 73, column 10>
//   // proto:  void QImageWriter::setQuality(int quality);
// _ZN12QImageWriter10setQualityEi setQuality(int)
extern "C"
void
C_ZN12QImageWriter10setQualityEi(void *qthis,
int arg1) {
  ((QImageWriter*)qthis)->setQuality(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 80, column 11>
//   // proto:  float QImageWriter::gamma();
// _ZNK12QImageWriter5gammaEv gamma()
extern "C"
float
C_ZNK12QImageWriter5gammaEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->gamma();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 97, column 13>
//   // proto:  QString QImageWriter::description();
// _ZNK12QImageWriter11descriptionEv description()
extern "C"
QString*
C_ZNK12QImageWriter11descriptionEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->description();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 59, column 5>
//   // proto:  void QImageWriter::QImageWriter();
extern "C"
QImageWriter*
C_ZN12QImageWriterC2Ev() {
  auto ret = new QImageWriter();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 64, column 10>
//   // proto:  void QImageWriter::setFormat(const QByteArray & format);
// _ZN12QImageWriter9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZN12QImageWriter9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QImageWriter*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 93, column 10>
//   // proto:  void QImageWriter::setTransformation(QImageIOHandler::Transformations orientation);
// _ZN12QImageWriter17setTransformationE6QFlagsIN15QImageIOHandler14TransformationEE setTransformation(class QImageIOHandler::Transformations)
extern "C"
void
C_ZN12QImageWriter17setTransformationE6QFlagsIN15QImageIOHandler14TransformationEE(void *qthis,
QImageIOHandler::Transformations* arg1) {
  ((QImageWriter*)qthis)->setTransformation(*((QImageIOHandler::Transformations*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 61, column 14>
//   // proto:  void QImageWriter::QImageWriter(const QString & fileName, const QByteArray & format);
extern "C"
QImageWriter*
C_ZN12QImageWriterC2ERK7QStringRK10QByteArray(const QString* arg1,
const QByteArray* arg2) {
  auto ret = new QImageWriter(*((const QString*)arg1),
*((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 104, column 22>
//   // proto:  QImageWriter::ImageWriterError QImageWriter::error();
// _ZNK12QImageWriter5errorEv error()
extern "C"
QImageWriter::ImageWriterError
C_ZNK12QImageWriter5errorEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 67, column 10>
//   // proto:  void QImageWriter::setDevice(QIODevice * device);
// _ZN12QImageWriter9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN12QImageWriter9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QImageWriter*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 82, column 10>
//   // proto:  void QImageWriter::setSubType(const QByteArray & type);
// _ZN12QImageWriter10setSubTypeERK10QByteArray setSubType(const class QByteArray &)
extern "C"
void
C_ZN12QImageWriter10setSubTypeERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QImageWriter*)qthis)->setSubType(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 90, column 10>
//   // proto:  bool QImageWriter::progressiveScanWrite();
// _ZNK12QImageWriter20progressiveScanWriteEv progressiveScanWrite()
extern "C"
bool
C_ZNK12QImageWriter20progressiveScanWriteEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->progressiveScanWrite();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 65, column 16>
//   // proto:  QByteArray QImageWriter::format();
// _ZNK12QImageWriter6formatEv format()
extern "C"
QByteArray*
C_ZNK12QImageWriter6formatEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->format();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 92, column 38>
//   // proto:  QImageIOHandler::Transformations QImageWriter::transformation();
// _ZNK12QImageWriter14transformationEv transformation()
extern "C"
QFlags<QImageIOHandler::Transformation>*
C_ZNK12QImageWriter14transformationEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->transformation();
  return new QFlags<QImageIOHandler::Transformation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 84, column 23>
//   // proto:  QList<QByteArray> QImageWriter::supportedSubTypes();
// _ZNK12QImageWriter17supportedSubTypesEv supportedSubTypes()
extern "C"
QList<QByteArray>*
C_ZNK12QImageWriter17supportedSubTypesEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->supportedSubTypes();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 101, column 10>
//   // proto:  bool QImageWriter::canWrite();
// _ZNK12QImageWriter8canWriteEv canWrite()
extern "C"
bool
C_ZNK12QImageWriter8canWriteEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->canWrite();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 60, column 14>
//   // proto:  void QImageWriter::QImageWriter(QIODevice * device, const QByteArray & format);
extern "C"
QImageWriter*
C_ZN12QImageWriterC2EP9QIODeviceRK10QByteArray(QIODevice * arg1,
const QByteArray* arg2) {
  auto ret = new QImageWriter(arg1,
*((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 77, column 9>
//   // proto:  int QImageWriter::compression();
// _ZNK12QImageWriter11compressionEv compression()
extern "C"
int
C_ZNK12QImageWriter11compressionEv(void *qthis) {
  auto ret =
  ((QImageWriter*)qthis)->compression();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 89, column 10>
//   // proto:  void QImageWriter::setProgressiveScanWrite(bool progressive);
// _ZN12QImageWriter23setProgressiveScanWriteEb setProgressiveScanWrite(_Bool)
extern "C"
void
C_ZN12QImageWriter23setProgressiveScanWriteEb(void *qthis,
bool arg1) {
  ((QImageWriter*)qthis)->setProgressiveScanWrite(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimagewriter.h', line 96, column 10>
//   // proto:  void QImageWriter::setDescription(const QString & description);
// _ZN12QImageWriter14setDescriptionERK7QString setDescription(const class QString &)
extern "C"
void
C_ZN12QImageWriter14setDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QImageWriter*)qthis)->setDescription(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

