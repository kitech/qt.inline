//  header block begin

// /usr/include/qt/QtGui/qimagewriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimagewriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageWriter is pure virtual: false
// QImageWriter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImageWriter_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageWriter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageWriter_t qt_meta_stringdata_MyQImageWriter = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQImageWriter"
  },
  "MyQImageWriter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageWriter[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQImageWriter : public QImageWriter {
public:
  virtual ~MyQImageWriter() {}
// void QImageWriter()
MyQImageWriter() : QImageWriter() {}
// void QImageWriter(QIODevice *, const QByteArray &)
MyQImageWriter(QIODevice * device, const QByteArray & format) : QImageWriter(device, format) {}
// void QImageWriter(const QString &, const QByteArray &)
MyQImageWriter(const QString & fileName, const QByteArray & format) : QImageWriter(fileName, format) {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageWriter2trEPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QImageWriter::tr(sourceText, disambiguation, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageWriter6trUtf8EPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QImageWriter::trUtf8(sourceText, disambiguation, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:67
// [-2] void QImageWriter()
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageWriterC2Ev() {
  return  new QImageWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:68
// [-2] void QImageWriter(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageWriterC2EP9QIODeviceRK10QByteArray(QIODevice * device, QByteArray* format) {
  return  new QImageWriter(device, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:69
// [-2] void QImageWriter(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageWriterC2ERK7QStringRK10QByteArray(QString* fileName, QByteArray* format) {
  return  new QImageWriter(*fileName, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:70
// [-2] void ~QImageWriter()
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriterD2Ev(void *this_) {
  delete (QImageWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:72
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QImageWriter*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:73
// [8] QByteArray format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter6formatEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->format();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:75
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageWriter*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:76
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter6deviceEv(void *this_) {
  return (void*)((QImageWriter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:78
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QImageWriter*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:79
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter8fileNameEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:81
// [-2] void setQuality(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter10setQualityEi(void *this_, int quality) {
  ((QImageWriter*)this_)->setQuality(quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:82
// [4] int quality()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageWriter7qualityEv(void *this_) {
  return (int)((QImageWriter*)this_)->quality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:84
// [-2] void setCompression(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter14setCompressionEi(void *this_, int compression) {
  ((QImageWriter*)this_)->setCompression(compression);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:85
// [4] int compression()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageWriter11compressionEv(void *this_) {
  return (int)((QImageWriter*)this_)->compression();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:87
// [-2] void setGamma(float)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter8setGammaEf(void *this_, float gamma) {
  ((QImageWriter*)this_)->setGamma(gamma);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:88
// [4] float gamma()
extern "C" Q_DECL_EXPORT
float C_ZNK12QImageWriter5gammaEv(void *this_) {
  return (float)((QImageWriter*)this_)->gamma();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qimagewriter.h:90
// [-2] void setSubType(const QByteArray &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter10setSubTypeERK10QByteArray(void *this_, QByteArray* type_) {
  ((QImageWriter*)this_)->setSubType(*type_);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qimagewriter.h:91
// [8] QByteArray subType()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter7subTypeEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->subType();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qimagewriter.h:92
// [8] QList<QByteArray> supportedSubTypes()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK12QImageWriter17supportedSubTypesEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->supportedSubTypes();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:94
// [-2] void setOptimizedWrite(bool)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter17setOptimizedWriteEb(void *this_, bool optimize) {
  ((QImageWriter*)this_)->setOptimizedWrite(optimize);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:95
// [1] bool optimizedWrite()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageWriter14optimizedWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->optimizedWrite();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:97
// [-2] void setProgressiveScanWrite(bool)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter23setProgressiveScanWriteEb(void *this_, bool progressive) {
  ((QImageWriter*)this_)->setProgressiveScanWrite(progressive);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:98
// [1] bool progressiveScanWrite()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageWriter20progressiveScanWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->progressiveScanWrite();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:100
// [-2] QImageIOHandler::Transformations transformation()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QImageIOHandler::Transformations C_ZNK12QImageWriter14transformationEv(void *this_) {
  return (QImageIOHandler::Transformations)((QImageWriter*)this_)->transformation();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagewriter.h:101
// [-2] void setTransformation(QImageIOHandler::Transformations)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter17setTransformationE6QFlagsIN15QImageIOHandler14TransformationEE(void *this_, QFlags<QImageIOHandler::Transformation> orientation) {
  ((QImageWriter*)this_)->setTransformation(orientation);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:104
// [-2] void setDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter14setDescriptionERK7QString(void *this_, QString* description) {
  ((QImageWriter*)this_)->setDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:105
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter11descriptionEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagewriter.h:107
// [-2] void setText(const QString &, const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QImageWriter7setTextERK7QStringS2_(void *this_, QString* key, QString* text) {
  ((QImageWriter*)this_)->setText(*key, *text);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:109
// [1] bool canWrite()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageWriter8canWriteEv(void *this_) {
  return (bool)((QImageWriter*)this_)->canWrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:110
// [1] bool write(const QImage &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QImageWriter5writeERK6QImage(void *this_, QImage* image) {
  return (bool)((QImageWriter*)this_)->write(*image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:112
// [4] QImageWriter::ImageWriterError error()
extern "C" Q_DECL_EXPORT
QImageWriter::ImageWriterError C_ZNK12QImageWriter5errorEv(void *this_) {
  return (QImageWriter::ImageWriterError)((QImageWriter*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:113
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageWriter11errorStringEv(void *this_) {
  auto rv = ((QImageWriter*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qimagewriter.h:115
// [1] bool supportsOption(QImageIOHandler::ImageOption)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageWriter14supportsOptionEN15QImageIOHandler11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  return (bool)((QImageWriter*)this_)->supportsOption(option);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:117
// [8] QList<QByteArray> supportedImageFormats()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN12QImageWriter21supportedImageFormatsEv() {
  auto rv = QImageWriter::supportedImageFormats();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:118
// [8] QList<QByteArray> supportedMimeTypes()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN12QImageWriter18supportedMimeTypesEv() {
  auto rv = QImageWriter::supportedMimeTypes();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qimagewriter.h:119
// [8] QList<QByteArray> imageFormatsForMimeType(const QByteArray &)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN12QImageWriter23imageFormatsForMimeTypeERK10QByteArray(QByteArray* mimeType) {
  auto rv = QImageWriter::imageFormatsForMimeType(*mimeType);
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050c00

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
