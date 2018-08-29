//  header block begin
// /usr/include/qt/QtGui/qimagereader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimagereader.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageReader is pure virtual: false
// QImageReader has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQImageReader_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageReader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageReader_t qt_meta_stringdata_MyQImageReader = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQImageReader"
  },
  "MyQImageReader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageReader[] = {
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
class Q_DECL_EXPORT MyQImageReader : public QImageReader {
public:
  virtual ~MyQImageReader() {}
// void QImageReader()
MyQImageReader() : QImageReader() {}
// void QImageReader(QIODevice *, const QByteArray &)
MyQImageReader(QIODevice * device, const QByteArray & format) : QImageReader(device, format) {}
// void QImageReader(const QString &, const QByteArray &)
MyQImageReader(const QString & fileName, const QByteArray & format) : QImageReader(fileName, format) {}
};
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReader2trEPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QImageReader::tr(sourceText, disambiguation, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReader6trUtf8EPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QImageReader::trUtf8(sourceText, disambiguation, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:71
// [-2] void QImageReader()
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReaderC2Ev() {
  return  new QImageReader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:72
// [-2] void QImageReader(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReaderC2EP9QIODeviceRK10QByteArray(QIODevice * device, QByteArray* format) {
  return  new QImageReader(device, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:73
// [-2] void QImageReader(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReaderC2ERK7QStringRK10QByteArray(QString* fileName, QByteArray* format) {
  return  new QImageReader(*fileName, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:74
// [-2] void ~QImageReader()
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReaderD2Ev(void *this_) {
  delete (QImageReader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:76
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QImageReader*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:77
// [8] QByteArray format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader6formatEv(void *this_) {
  auto rv = ((QImageReader*)this_)->format();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:79
// [-2] void setAutoDetectImageFormat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader24setAutoDetectImageFormatEb(void *this_, bool enabled) {
  ((QImageReader*)this_)->setAutoDetectImageFormat(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:80
// [1] bool autoDetectImageFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader21autoDetectImageFormatEv(void *this_) {
  return (bool)((QImageReader*)this_)->autoDetectImageFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:82
// [-2] void setDecideFormatFromContent(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader26setDecideFormatFromContentEb(void *this_, bool ignored) {
  ((QImageReader*)this_)->setDecideFormatFromContent(ignored);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:83
// [1] bool decideFormatFromContent()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader23decideFormatFromContentEv(void *this_) {
  return (bool)((QImageReader*)this_)->decideFormatFromContent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:85
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageReader*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:86
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader6deviceEv(void *this_) {
  return (void*)((QImageReader*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:88
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QImageReader*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:89
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader8fileNameEv(void *this_) {
  auto rv = ((QImageReader*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:91
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader4sizeEv(void *this_) {
  auto rv = ((QImageReader*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qimagereader.h:93
// [4] QImage::Format imageFormat()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QImage::Format C_ZNK12QImageReader11imageFormatEv(void *this_) {
  return (QImage::Format)((QImageReader*)this_)->imageFormat();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagereader.h:95
// [8] QStringList textKeys()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader8textKeysEv(void *this_) {
  auto rv = ((QImageReader*)this_)->textKeys();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagereader.h:96
// [8] QString text(const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader4textERK7QString(void *this_, QString* key) {
  auto rv = ((QImageReader*)this_)->text(*key);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:98
// [-2] void setClipRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader11setClipRectERK5QRect(void *this_, QRect* rect) {
  ((QImageReader*)this_)->setClipRect(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:99
// [16] QRect clipRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader8clipRectEv(void *this_) {
  auto rv = ((QImageReader*)this_)->clipRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:101
// [-2] void setScaledSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader13setScaledSizeERK5QSize(void *this_, QSize* size) {
  ((QImageReader*)this_)->setScaledSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:102
// [8] QSize scaledSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader10scaledSizeEv(void *this_) {
  auto rv = ((QImageReader*)this_)->scaledSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qimagereader.h:104
// [-2] void setQuality(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader10setQualityEi(void *this_, int quality) {
  ((QImageReader*)this_)->setQuality(quality);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qimagereader.h:105
// [4] int quality()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageReader7qualityEv(void *this_) {
  return (int)((QImageReader*)this_)->quality();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:107
// [-2] void setScaledClipRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader17setScaledClipRectERK5QRect(void *this_, QRect* rect) {
  ((QImageReader*)this_)->setScaledClipRect(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:108
// [16] QRect scaledClipRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader14scaledClipRectEv(void *this_) {
  auto rv = ((QImageReader*)this_)->scaledClipRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagereader.h:110
// [-2] void setBackgroundColor(const QColor &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QImageReader*)this_)->setBackgroundColor(*color);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagereader.h:111
// [16] QColor backgroundColor()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader15backgroundColorEv(void *this_) {
  auto rv = ((QImageReader*)this_)->backgroundColor();
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qimagereader.h:113
// [1] bool supportsAnimation()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader17supportsAnimationEv(void *this_) {
  return (bool)((QImageReader*)this_)->supportsAnimation();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagereader.h:115
// [-2] QImageIOHandler::Transformations transformation()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QImageIOHandler::Transformations C_ZNK12QImageReader14transformationEv(void *this_) {
  return (QImageIOHandler::Transformations)((QImageReader*)this_)->transformation();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagereader.h:117
// [-2] void setAutoTransform(bool)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader16setAutoTransformEb(void *this_, bool enabled) {
  ((QImageReader*)this_)->setAutoTransform(enabled);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qimagereader.h:118
// [1] bool autoTransform()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader13autoTransformEv(void *this_) {
  return (bool)((QImageReader*)this_)->autoTransform();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimagereader.h:120
// [-2] void setGamma(float)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN12QImageReader8setGammaEf(void *this_, float gamma) {
  ((QImageReader*)this_)->setGamma(gamma);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qimagereader.h:121
// [4] float gamma()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
float C_ZNK12QImageReader5gammaEv(void *this_) {
  return (float)((QImageReader*)this_)->gamma();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qimagereader.h:123
// [8] QByteArray subType()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader7subTypeEv(void *this_) {
  auto rv = ((QImageReader*)this_)->subType();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qimagereader.h:124
// [8] QList<QByteArray> supportedSubTypes()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK12QImageReader17supportedSubTypesEv(void *this_) {
  auto rv = ((QImageReader*)this_)->supportedSubTypes();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:126
// [1] bool canRead()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader7canReadEv(void *this_) {
  return (bool)((QImageReader*)this_)->canRead();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:127
// [32] QImage read()
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReader4readEv(void *this_) {
  auto rv = ((QImageReader*)this_)->read();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:128
// [1] bool read(QImage *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QImageReader4readEP6QImage(void *this_, QImage * image) {
  return (bool)((QImageReader*)this_)->read(image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:130
// [1] bool jumpToNextImage()
extern "C" Q_DECL_EXPORT
bool C_ZN12QImageReader15jumpToNextImageEv(void *this_) {
  return (bool)((QImageReader*)this_)->jumpToNextImage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:131
// [1] bool jumpToImage(int)
extern "C" Q_DECL_EXPORT
bool C_ZN12QImageReader11jumpToImageEi(void *this_, int imageNumber) {
  return (bool)((QImageReader*)this_)->jumpToImage(imageNumber);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:132
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageReader9loopCountEv(void *this_) {
  return (int)((QImageReader*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:133
// [4] int imageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageReader10imageCountEv(void *this_) {
  return (int)((QImageReader*)this_)->imageCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:134
// [4] int nextImageDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageReader14nextImageDelayEv(void *this_) {
  return (int)((QImageReader*)this_)->nextImageDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:135
// [4] int currentImageNumber()
extern "C" Q_DECL_EXPORT
int C_ZNK12QImageReader18currentImageNumberEv(void *this_) {
  return (int)((QImageReader*)this_)->currentImageNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:136
// [16] QRect currentImageRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader16currentImageRectEv(void *this_) {
  auto rv = ((QImageReader*)this_)->currentImageRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:138
// [4] QImageReader::ImageReaderError error()
extern "C" Q_DECL_EXPORT
QImageReader::ImageReaderError C_ZNK12QImageReader5errorEv(void *this_) {
  return (QImageReader::ImageReaderError)((QImageReader*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:139
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QImageReader11errorStringEv(void *this_) {
  auto rv = ((QImageReader*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qimagereader.h:141
// [1] bool supportsOption(QImageIOHandler::ImageOption)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QImageReader14supportsOptionEN15QImageIOHandler11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  return (bool)((QImageReader*)this_)->supportsOption(option);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:143
// [8] QByteArray imageFormat(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReader11imageFormatERK7QString(QString* fileName) {
  auto rv = QImageReader::imageFormat(*fileName);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:144
// [8] QByteArray imageFormat(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QImageReader11imageFormatEP9QIODevice(QIODevice * device) {
  auto rv = QImageReader::imageFormat(device);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:145
// [8] QList<QByteArray> supportedImageFormats()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN12QImageReader21supportedImageFormatsEv() {
  auto rv = QImageReader::supportedImageFormats();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:146
// [8] QList<QByteArray> supportedMimeTypes()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN12QImageReader18supportedMimeTypesEv() {
  auto rv = QImageReader::supportedMimeTypes();
return new QList<QByteArray>(rv);
}

//  main block end
