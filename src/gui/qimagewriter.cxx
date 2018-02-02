//  header block begin
// /usr/include/qt/QtGui/qimagewriter.h
#include <qimagewriter.h>
#include <QtGui>

// QImageWriter is pure virtual: false
// QImageWriter has virtual projected: false
//  header block end

//  main block begin

class MyQImageWriter : public QImageWriter {
public:
  virtual ~MyQImageWriter() {}
// void QImageWriter()
MyQImageWriter() : QImageWriter() {}
// void QImageWriter(class QIODevice *, const class QByteArray &)
MyQImageWriter(QIODevice * device, const QByteArray & format) : QImageWriter(device, format) {}
// void QImageWriter(const class QString &, const class QByteArray &)
MyQImageWriter(const QString & fileName, const QByteArray & format) : QImageWriter(fileName, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:67
// [-2] void QImageWriter()
extern "C"
void* C_ZN12QImageWriterC2Ev() {
  return  new QImageWriter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:68
// [-2] void QImageWriter(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN12QImageWriterC2EP9QIODeviceRK10QByteArray(QIODevice * device, QByteArray* format) {
  return  new QImageWriter(device, *format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:69
// [-2] void QImageWriter(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN12QImageWriterC2ERK7QStringRK10QByteArray(QString* fileName, QByteArray* format) {
  return  new QImageWriter(*fileName, *format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:70
// [-2] void ~QImageWriter()
extern "C"
void C_ZN12QImageWriterD2Ev(void *this_) {
  delete (QImageWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:72
// [-2] void setFormat(const class QByteArray &)
extern "C"
void C_ZN12QImageWriter9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QImageWriter*)this_)->setFormat(*format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:73
// [8] QByteArray format()
extern "C"
void* C_ZNK12QImageWriter6formatEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->format();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:75
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN12QImageWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageWriter*)this_)->setDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:76
// [8] QIODevice * device()
extern "C"
void* C_ZNK12QImageWriter6deviceEv(void *this_) {
  return (void*)((QImageWriter*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:78
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN12QImageWriter11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QImageWriter*)this_)->setFileName(*fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:79
// [8] QString fileName()
extern "C"
void* C_ZNK12QImageWriter8fileNameEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:81
// [-2] void setQuality(int)
extern "C"
void C_ZN12QImageWriter10setQualityEi(void *this_, int quality) {
  ((QImageWriter*)this_)->setQuality(quality);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:82
// [4] int quality()
extern "C"
int C_ZNK12QImageWriter7qualityEv(void *this_) {
  return (int)((QImageWriter*)this_)->quality();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:84
// [-2] void setCompression(int)
extern "C"
void C_ZN12QImageWriter14setCompressionEi(void *this_, int compression) {
  ((QImageWriter*)this_)->setCompression(compression);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:85
// [4] int compression()
extern "C"
int C_ZNK12QImageWriter11compressionEv(void *this_) {
  return (int)((QImageWriter*)this_)->compression();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:87
// [-2] void setGamma(float)
extern "C"
void C_ZN12QImageWriter8setGammaEf(void *this_, float gamma) {
  ((QImageWriter*)this_)->setGamma(gamma);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:88
// [4] float gamma()
extern "C"
float C_ZNK12QImageWriter5gammaEv(void *this_) {
  return (float)((QImageWriter*)this_)->gamma();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:90
// [-2] void setSubType(const class QByteArray &)
extern "C"
void C_ZN12QImageWriter10setSubTypeERK10QByteArray(void *this_, QByteArray* type) {
  ((QImageWriter*)this_)->setSubType(*type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:91
// [8] QByteArray subType()
extern "C"
void* C_ZNK12QImageWriter7subTypeEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->subType();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:94
// [-2] void setOptimizedWrite(_Bool)
extern "C"
void C_ZN12QImageWriter17setOptimizedWriteEb(void *this_, bool optimize) {
  ((QImageWriter*)this_)->setOptimizedWrite(optimize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:95
// [1] bool optimizedWrite()
extern "C"
bool C_ZNK12QImageWriter14optimizedWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->optimizedWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:97
// [-2] void setProgressiveScanWrite(_Bool)
extern "C"
void C_ZN12QImageWriter23setProgressiveScanWriteEb(void *this_, bool progressive) {
  ((QImageWriter*)this_)->setProgressiveScanWrite(progressive);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:98
// [1] bool progressiveScanWrite()
extern "C"
bool C_ZNK12QImageWriter20progressiveScanWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->progressiveScanWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:100
// [-2] QImageIOHandler::Transformations transformation()
extern "C"
QImageIOHandler::Transformations C_ZNK12QImageWriter14transformationEv(void *this_) {
  return (QImageIOHandler::Transformations)((QImageWriter*)this_)->transformation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:104
// [-2] void setDescription(const class QString &)
extern "C"
void C_ZN12QImageWriter14setDescriptionERK7QString(void *this_, QString* description) {
  ((QImageWriter*)this_)->setDescription(*description);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:105
// [8] QString description()
extern "C"
void* C_ZNK12QImageWriter11descriptionEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->description();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:107
// [-2] void setText(const class QString &, const class QString &)
extern "C"
void C_ZN12QImageWriter7setTextERK7QStringS2_(void *this_, QString* key, QString* text) {
  ((QImageWriter*)this_)->setText(*key, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:109
// [1] bool canWrite()
extern "C"
bool C_ZNK12QImageWriter8canWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->canWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:110
// [1] bool write(const class QImage &)
extern "C"
bool C_ZN12QImageWriter5writeERK6QImage(void *this_, QImage* image) {
  return (bool)((QImageWriter*)this_)->write(*image);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:112
// [4] QImageWriter::ImageWriterError error()
extern "C"
QImageWriter::ImageWriterError C_ZNK12QImageWriter5errorEv(void *this_) {
  return (QImageWriter::ImageWriterError)((QImageWriter*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:113
// [8] QString errorString()
extern "C"
void* C_ZNK12QImageWriter11errorStringEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:115
// [1] bool supportsOption(class QImageIOHandler::ImageOption)
extern "C"
bool C_ZNK12QImageWriter14supportsOptionEN15QImageIOHandler11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  return (bool)((QImageWriter*)this_)->supportsOption(option);
}
//  main block end
