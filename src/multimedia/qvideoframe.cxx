//  header block begin
// /usr/include/qt/QtMultimedia/qvideoframe.h
#ifndef protected
#define protected public
#endif
#include <qvideoframe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoFrame is pure virtual: false
// QVideoFrame has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoFrame : public QVideoFrame {
public:
  virtual ~MyQVideoFrame() {}
// void QVideoFrame()
MyQVideoFrame() : QVideoFrame() {}
// void QVideoFrame(QAbstractVideoBuffer *, const QSize &, QVideoFrame::PixelFormat)
MyQVideoFrame(QAbstractVideoBuffer * buffer, const QSize & size, QVideoFrame::PixelFormat format) : QVideoFrame(buffer, size, format) {}
// void QVideoFrame(int, const QSize &, int, QVideoFrame::PixelFormat)
MyQVideoFrame(int bytes, const QSize & size, int bytesPerLine, QVideoFrame::PixelFormat format) : QVideoFrame(bytes, size, bytesPerLine, format) {}
// void QVideoFrame(const QImage &)
MyQVideoFrame(const QImage & image) : QVideoFrame(image) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:111
// [-2] void QVideoFrame()
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrameC2Ev() {
  return  new QVideoFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:112
// [-2] void QVideoFrame(QAbstractVideoBuffer *, const QSize &, QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrameC2EP20QAbstractVideoBufferRK5QSizeNS_11PixelFormatE(QAbstractVideoBuffer * buffer, QSize* size, QVideoFrame::PixelFormat format) {
  return  new QVideoFrame(buffer, *size, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:113
// [-2] void QVideoFrame(int, const QSize &, int, QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrameC2EiRK5QSizeiNS_11PixelFormatE(int bytes, QSize* size, int bytesPerLine, QVideoFrame::PixelFormat format) {
  return  new QVideoFrame(bytes, *size, bytesPerLine, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:114
// [-2] void QVideoFrame(const QImage &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrameC2ERK6QImage(QImage* image) {
  return  new QVideoFrame(*image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:116
// [-2] void ~QVideoFrame()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrameD2Ev(void *this_) {
  delete (QVideoFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:118
// [8] QVideoFrame & operator=(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrameaSERKS_(void *this_, QVideoFrame* other) {
  auto& rv = ((QVideoFrame*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:119
// [1] bool operator==(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrameeqERKS_(void *this_, QVideoFrame* other) {
  return (bool)((QVideoFrame*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:120
// [1] bool operator!=(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrameneERKS_(void *this_, QVideoFrame* other) {
  return (bool)((QVideoFrame*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:122
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrame7isValidEv(void *this_) {
  return (bool)((QVideoFrame*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:124
// [4] QVideoFrame::PixelFormat pixelFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK11QVideoFrame11pixelFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QVideoFrame*)this_)->pixelFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:126
// [4] QAbstractVideoBuffer::HandleType handleType()
extern "C" Q_DECL_EXPORT
QAbstractVideoBuffer::HandleType C_ZNK11QVideoFrame10handleTypeEv(void *this_) {
  return (QAbstractVideoBuffer::HandleType)((QVideoFrame*)this_)->handleType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:128
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoFrame4sizeEv(void *this_) {
  auto rv = ((QVideoFrame*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:129
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame5widthEv(void *this_) {
  return (int)((QVideoFrame*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:130
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame6heightEv(void *this_) {
  return (int)((QVideoFrame*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:132
// [4] QVideoFrame::FieldType fieldType()
extern "C" Q_DECL_EXPORT
QVideoFrame::FieldType C_ZNK11QVideoFrame9fieldTypeEv(void *this_) {
  return (QVideoFrame::FieldType)((QVideoFrame*)this_)->fieldType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:133
// [-2] void setFieldType(QVideoFrame::FieldType)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrame12setFieldTypeENS_9FieldTypeE(void *this_, QVideoFrame::FieldType arg0) {
  ((QVideoFrame*)this_)->setFieldType(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:135
// [1] bool isMapped()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrame8isMappedEv(void *this_) {
  return (bool)((QVideoFrame*)this_)->isMapped();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:136
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrame10isReadableEv(void *this_) {
  return (bool)((QVideoFrame*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:137
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoFrame10isWritableEv(void *this_) {
  return (bool)((QVideoFrame*)this_)->isWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:139
// [4] QAbstractVideoBuffer::MapMode mapMode()
extern "C" Q_DECL_EXPORT
QAbstractVideoBuffer::MapMode C_ZNK11QVideoFrame7mapModeEv(void *this_) {
  return (QAbstractVideoBuffer::MapMode)((QVideoFrame*)this_)->mapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:141
// [1] bool map(QAbstractVideoBuffer::MapMode)
extern "C" Q_DECL_EXPORT
bool C_ZN11QVideoFrame3mapEN20QAbstractVideoBuffer7MapModeE(void *this_, QAbstractVideoBuffer::MapMode mode) {
  return (bool)((QVideoFrame*)this_)->map(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:142
// [-2] void unmap()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrame5unmapEv(void *this_) {
  ((QVideoFrame*)this_)->unmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:144
// [4] int bytesPerLine()
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame12bytesPerLineEv(void *this_) {
  return (int)((QVideoFrame*)this_)->bytesPerLine();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtMultimedia/qvideoframe.h:145
// [4] int bytesPerLine(int)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame12bytesPerLineEi(void *this_, int plane) {
  return (int)((QVideoFrame*)this_)->bytesPerLine(plane);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:147
// [8] uchar * bits()
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrame4bitsEv(void *this_) {
  return (void*)((QVideoFrame*)this_)->bits();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtMultimedia/qvideoframe.h:148
// [8] uchar * bits(int)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoFrame4bitsEi(void *this_, int plane) {
  return (void*)((QVideoFrame*)this_)->bits(plane);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:149
// [8] const uchar * bits()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoFrame4bitsEv(void *this_) {
  return (void*)((QVideoFrame*)this_)->bits();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtMultimedia/qvideoframe.h:150
// [8] const uchar * bits(int)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoFrame4bitsEi(void *this_, int plane) {
  return (void*)((QVideoFrame*)this_)->bits(plane);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:151
// [4] int mappedBytes()
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame11mappedBytesEv(void *this_) {
  return (int)((QVideoFrame*)this_)->mappedBytes();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtMultimedia/qvideoframe.h:152
// [4] int planeCount()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
int C_ZNK11QVideoFrame10planeCountEv(void *this_) {
  return (int)((QVideoFrame*)this_)->planeCount();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:154
// [16] QVariant handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoFrame6handleEv(void *this_) {
  auto rv = ((QVideoFrame*)this_)->handle();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:156
// [8] qint64 startTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QVideoFrame9startTimeEv(void *this_) {
  return (qint64)((QVideoFrame*)this_)->startTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:157
// [-2] void setStartTime(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrame12setStartTimeEx(void *this_, qint64 time) {
  ((QVideoFrame*)this_)->setStartTime(time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:159
// [8] qint64 endTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QVideoFrame7endTimeEv(void *this_) {
  return (qint64)((QVideoFrame*)this_)->endTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:160
// [-2] void setEndTime(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrame10setEndTimeEx(void *this_, qint64 time) {
  ((QVideoFrame*)this_)->setEndTime(time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:163
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoFrame8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QVideoFrame*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:164
// [-2] void setMetaData(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoFrame11setMetaDataERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QVideoFrame*)this_)->setMetaData(*key, *value);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:166
// [4] QVideoFrame::PixelFormat pixelFormatFromImageFormat(QImage::Format)
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZN11QVideoFrame26pixelFormatFromImageFormatEN6QImage6FormatE(QImage::Format format) {
  return (QVideoFrame::PixelFormat)QVideoFrame::pixelFormatFromImageFormat(format);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoframe.h:167
// [4] QImage::Format imageFormatFromPixelFormat(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
QImage::Format C_ZN11QVideoFrame26imageFormatFromPixelFormatENS_11PixelFormatE(QVideoFrame::PixelFormat format) {
  return (QImage::Format)QVideoFrame::imageFormatFromPixelFormat(format);
}

//  main block end
