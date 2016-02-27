// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpicture.h
// dst-file: /src/gui/qpicture.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpicture.h>


#include <qstring.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qstringlist.h>
#include <qglobal.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qpicture_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 78, column 17>
//   // proto:  void QPicture::swap(QPicture & other);
if (true) {
  auto f = [](QPicture flythis, QPicture & arg1) {
    ((QPicture*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QPicture4swapERS_ swap(class QPicture &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPictureIO_Class_Size()
{
  return sizeof(QPictureIO);
}

extern "C"
int QPicture_Class_Size()
{
  return sizeof(QPicture);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 127, column 5>
//   // proto:  void QPictureIO::QPictureIO(const QString & fileName, const char * format);
extern "C"
QPictureIO*
C_ZN10QPictureIOC2ERK7QStringPKc(const QString* arg1,
const char * arg2) {
  auto ret = new QPictureIO(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 136, column 13>
//   // proto:  QString QPictureIO::description();
// _ZNK10QPictureIO11descriptionEv description()
extern "C"
QString*
C_ZNK10QPictureIO11descriptionEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->description();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 155, column 30>
//   // proto: static QList<QByteArray> QPictureIO::inputFormats();
// _ZN10QPictureIO12inputFormatsEv inputFormats()
extern "C"
QList<QByteArray>*
C_ZN10QPictureIO12inputFormatsEv() {
  auto ret =
  QPictureIO::inputFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 148, column 10>
//   // proto:  void QPictureIO::setGamma(float );
// _ZN10QPictureIO8setGammaEf setGamma(float)
extern "C"
void
C_ZN10QPictureIO8setGammaEf(void *qthis,
float arg1) {
  ((QPictureIO*)qthis)->setGamma(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 131, column 9>
//   // proto:  int QPictureIO::status();
// _ZNK10QPictureIO6statusEv status()
extern "C"
int
C_ZNK10QPictureIO6statusEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->status();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 135, column 9>
//   // proto:  int QPictureIO::quality();
// _ZNK10QPictureIO7qualityEv quality()
extern "C"
int
C_ZNK10QPictureIO7qualityEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->quality();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 151, column 10>
//   // proto:  bool QPictureIO::write();
// _ZN10QPictureIO5writeEv write()
extern "C"
bool
C_ZN10QPictureIO5writeEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->write();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 144, column 10>
//   // proto:  void QPictureIO::setFileName(const QString & );
// _ZN10QPictureIO11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN10QPictureIO11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QPictureIO*)qthis)->setFileName(*((const QString*)arg1));
}
//   // proto:  void QPictureIO::~QPictureIO();
extern "C"
void C_ZN10QPictureIOD2Ev(void *qthis) {
  delete (QPictureIO*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 137, column 17>
//   // proto:  const char * QPictureIO::parameters();
// _ZNK10QPictureIO10parametersEv parameters()
extern "C"
void*
C_ZNK10QPictureIO10parametersEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->parameters();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 154, column 23>
//   // proto: static QByteArray QPictureIO::pictureFormat(QIODevice * );
// _ZN10QPictureIO13pictureFormatEP9QIODevice pictureFormat(class QIODevice *)
extern "C"
QByteArray*
C_ZN10QPictureIO13pictureFormatEP9QIODevice(QIODevice * arg1) {
  auto ret =
  QPictureIO::pictureFormat(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 150, column 10>
//   // proto:  bool QPictureIO::read();
// _ZN10QPictureIO4readEv read()
extern "C"
bool
C_ZN10QPictureIO4readEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->read();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 134, column 13>
//   // proto:  QString QPictureIO::fileName();
// _ZNK10QPictureIO8fileNameEv fileName()
extern "C"
QString*
C_ZNK10QPictureIO8fileNameEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 126, column 5>
//   // proto:  void QPictureIO::QPictureIO(QIODevice * ioDevice, const char * format);
extern "C"
QPictureIO*
C_ZN10QPictureIOC2EP9QIODevicePKc(QIODevice * arg1,
const char * arg2) {
  auto ret = new QPictureIO(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 132, column 17>
//   // proto:  const char * QPictureIO::format();
// _ZNK10QPictureIO6formatEv format()
extern "C"
void*
C_ZNK10QPictureIO6formatEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->format();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 145, column 10>
//   // proto:  void QPictureIO::setQuality(int );
// _ZN10QPictureIO10setQualityEi setQuality(int)
extern "C"
void
C_ZN10QPictureIO10setQualityEi(void *qthis,
int arg1) {
  ((QPictureIO*)qthis)->setQuality(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 130, column 21>
//   // proto:  const QPicture & QPictureIO::picture();
// _ZNK10QPictureIO7pictureEv picture()
extern "C"
QPicture*
C_ZNK10QPictureIO7pictureEv(void *qthis) {
  auto& ret =
  ((QPictureIO*)qthis)->picture();
  return new QPicture(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 142, column 10>
//   // proto:  void QPictureIO::setFormat(const char * );
// _ZN10QPictureIO9setFormatEPKc setFormat(const char *)
extern "C"
void
C_ZN10QPictureIO9setFormatEPKc(void *qthis,
const char * arg1) {
  ((QPictureIO*)qthis)->setFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 146, column 10>
//   // proto:  void QPictureIO::setDescription(const QString & );
// _ZN10QPictureIO14setDescriptionERK7QString setDescription(const class QString &)
extern "C"
void
C_ZN10QPictureIO14setDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QPictureIO*)qthis)->setDescription(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 153, column 23>
//   // proto: static QByteArray QPictureIO::pictureFormat(const QString & fileName);
// _ZN10QPictureIO13pictureFormatERK7QString pictureFormat(const class QString &)
extern "C"
QByteArray*
C_ZN10QPictureIO13pictureFormatERK7QString(const QString* arg1) {
  auto ret =
  QPictureIO::pictureFormat(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 143, column 10>
//   // proto:  void QPictureIO::setIODevice(QIODevice * );
// _ZN10QPictureIO11setIODeviceEP9QIODevice setIODevice(class QIODevice *)
extern "C"
void
C_ZN10QPictureIO11setIODeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QPictureIO*)qthis)->setIODevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 141, column 10>
//   // proto:  void QPictureIO::setStatus(int );
// _ZN10QPictureIO9setStatusEi setStatus(int)
extern "C"
void
C_ZN10QPictureIO9setStatusEi(void *qthis,
int arg1) {
  ((QPictureIO*)qthis)->setStatus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 133, column 16>
//   // proto:  QIODevice * QPictureIO::ioDevice();
// _ZNK10QPictureIO8ioDeviceEv ioDevice()
extern "C"
void*
C_ZNK10QPictureIO8ioDeviceEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->ioDevice();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 158, column 17>
//   // proto: static void QPictureIO::defineIOHandler(const char * format, const char * header, const char * flags, picture_io_handler read_picture, picture_io_handler write_picture);
// _ZN10QPictureIO15defineIOHandlerEPKcS1_S1_PFvPS_ES4_ defineIOHandler(const char *, const char *, const char *, picture_io_handler, picture_io_handler)
extern "C"
void
C_ZN10QPictureIO15defineIOHandlerEPKcS1_S1_PFvPS_ES4_(const char * arg1,
const char * arg2,
const char * arg3,
picture_io_handler arg4,
picture_io_handler arg5) {
  QPictureIO::defineIOHandler(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 138, column 11>
//   // proto:  float QPictureIO::gamma();
// _ZNK10QPictureIO5gammaEv gamma()
extern "C"
float
C_ZNK10QPictureIO5gammaEv(void *qthis) {
  auto ret =
  ((QPictureIO*)qthis)->gamma();
  return ret; // 0 TypeKind.FLOAT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 156, column 30>
//   // proto: static QList<QByteArray> QPictureIO::outputFormats();
// _ZN10QPictureIO13outputFormatsEv outputFormats()
extern "C"
QList<QByteArray>*
C_ZN10QPictureIO13outputFormatsEv() {
  auto ret =
  QPictureIO::outputFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 140, column 10>
//   // proto:  void QPictureIO::setPicture(const QPicture & );
// _ZN10QPictureIO10setPictureERK8QPicture setPicture(const class QPicture &)
extern "C"
void
C_ZN10QPictureIO10setPictureERK8QPicture(void *qthis,
const QPicture* arg1) {
  ((QPictureIO*)qthis)->setPicture(*((const QPicture*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 147, column 10>
//   // proto:  void QPictureIO::setParameters(const char * );
// _ZN10QPictureIO13setParametersEPKc setParameters(const char *)
extern "C"
void
C_ZN10QPictureIO13setParametersEPKc(void *qthis,
const char * arg1) {
  ((QPictureIO*)qthis)->setParameters(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 125, column 5>
//   // proto:  void QPictureIO::QPictureIO();
extern "C"
QPictureIO*
C_ZN10QPictureIOC2Ev() {
  auto ret = new QPictureIO();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 60, column 17>
//   // proto:  const char * QPicture::data();
// _ZNK8QPicture4dataEv data()
extern "C"
void*
C_ZNK8QPicture4dataEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 89, column 24>
//   // proto: static QStringList QPicture::inputFormatList();
// _ZN8QPicture15inputFormatListEv inputFormatList()
extern "C"
QStringList*
C_ZN8QPicture15inputFormatListEv() {
  auto ret =
  QPicture::inputFormatList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 78, column 17>
//   // proto:  void QPicture::swap(QPicture & other);
// _ZN8QPicture4swapERS_ swap(class QPicture &)
extern "C"
void
C_ZN8QPicture4swapERS_(void *qthis,
QPicture* arg1) {
  ((QPicture*)qthis)->swap(*((QPicture*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 59, column 10>
//   // proto:  uint QPicture::size();
// _ZNK8QPicture4sizeEv size()
extern "C"
unsigned int
C_ZNK8QPicture4sizeEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->size();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 56, column 10>
//   // proto:  bool QPicture::isNull();
// _ZNK8QPicture6isNullEv isNull()
extern "C"
bool
C_ZNK8QPicture6isNullEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 67, column 10>
//   // proto:  bool QPicture::save(QIODevice * dev, const char * format);
// _ZN8QPicture4saveEP9QIODevicePKc save(class QIODevice *, const char *)
extern "C"
bool
C_ZN8QPicture4saveEP9QIODevicePKc(void *qthis,
QIODevice * arg1,
const char * arg2) {
  auto ret =
  ((QPicture*)qthis)->save(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 80, column 10>
//   // proto:  void QPicture::detach();
// _ZN8QPicture6detachEv detach()
extern "C"
void
C_ZN8QPicture6detachEv(void *qthis) {
  ((QPicture*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 87, column 30>
//   // proto: static QList<QByteArray> QPicture::inputFormats();
// _ZN8QPicture12inputFormatsEv inputFormats()
extern "C"
QList<QByteArray>*
C_ZN8QPicture12inputFormatsEv() {
  auto ret =
  QPicture::inputFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 52, column 14>
//   // proto:  void QPicture::QPicture(int formatVersion);
extern "C"
QPicture*
C_ZN8QPictureC2Ei(int arg1) {
  auto ret = new QPicture(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 53, column 5>
//   // proto:  void QPicture::QPicture(const QPicture & );
extern "C"
QPicture*
C_ZN8QPictureC2ERKS_(const QPicture* arg1) {
  auto ret = new QPicture(*((const QPicture*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 81, column 10>
//   // proto:  bool QPicture::isDetached();
// _ZNK8QPicture10isDetachedEv isDetached()
extern "C"
bool
C_ZNK8QPicture10isDetachedEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 90, column 24>
//   // proto: static QStringList QPicture::outputFormatList();
// _ZN8QPicture16outputFormatListEv outputFormatList()
extern "C"
QStringList*
C_ZN8QPicture16outputFormatListEv() {
  auto ret =
  QPicture::outputFormatList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 61, column 18>
//   // proto:  void QPicture::setData(const char * data, uint size);
// _ZN8QPicture7setDataEPKcj setData(const char *, uint)
extern "C"
void
C_ZN8QPicture7setDataEPKcj(void *qthis,
const char * arg1,
uint arg2) {
  ((QPicture*)qthis)->setData(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 88, column 30>
//   // proto: static QList<QByteArray> QPicture::outputFormats();
// _ZN8QPicture13outputFormatsEv outputFormats()
extern "C"
QList<QByteArray>*
C_ZN8QPicture13outputFormatsEv() {
  auto ret =
  QPicture::outputFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 58, column 9>
//   // proto:  int QPicture::devType();
// _ZNK8QPicture7devTypeEv devType()
extern "C"
int
C_ZNK8QPicture7devTypeEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->devType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 86, column 24>
//   // proto: static const char * QPicture::pictureFormat(const QString & fileName);
// _ZN8QPicture13pictureFormatERK7QString pictureFormat(const class QString &)
extern "C"
void*
C_ZN8QPicture13pictureFormatERK7QString(const QString* arg1) {
  auto ret =
  QPicture::pictureFormat(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 68, column 10>
//   // proto:  bool QPicture::save(const QString & fileName, const char * format);
// _ZN8QPicture4saveERK7QStringPKc save(const class QString &, const char *)
extern "C"
bool
C_ZN8QPicture4saveERK7QStringPKc(void *qthis,
const QString* arg1,
const char * arg2) {
  auto ret =
  ((QPicture*)qthis)->save(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 66, column 10>
//   // proto:  bool QPicture::load(const QString & fileName, const char * format);
// _ZN8QPicture4loadERK7QStringPKc load(const class QString &, const char *)
extern "C"
bool
C_ZN8QPicture4loadERK7QStringPKc(void *qthis,
const QString* arg1,
const char * arg2) {
  auto ret =
  ((QPicture*)qthis)->load(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QPicture::~QPicture();
extern "C"
void C_ZN8QPictureD2Ev(void *qthis) {
  delete (QPicture*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 71, column 10>
//   // proto:  void QPicture::setBoundingRect(const QRect & r);
// _ZN8QPicture15setBoundingRectERK5QRect setBoundingRect(const class QRect &)
extern "C"
void
C_ZN8QPicture15setBoundingRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPicture*)qthis)->setBoundingRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 65, column 10>
//   // proto:  bool QPicture::load(QIODevice * dev, const char * format);
// _ZN8QPicture4loadEP9QIODevicePKc load(class QIODevice *, const char *)
extern "C"
bool
C_ZN8QPicture4loadEP9QIODevicePKc(void *qthis,
QIODevice * arg1,
const char * arg2) {
  auto ret =
  ((QPicture*)qthis)->load(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 70, column 11>
//   // proto:  QRect QPicture::boundingRect();
// _ZNK8QPicture12boundingRectEv boundingRect()
extern "C"
QRect*
C_ZNK8QPicture12boundingRectEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->boundingRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 63, column 10>
//   // proto:  bool QPicture::play(QPainter * p);
// _ZN8QPicture4playEP8QPainter play(class QPainter *)
extern "C"
bool
C_ZN8QPicture4playEP8QPainter(void *qthis,
QPainter * arg1) {
  auto ret =
  ((QPicture*)qthis)->play(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpicture.h', line 92, column 19>
//   // proto:  QPaintEngine * QPicture::paintEngine();
// _ZNK8QPicture11paintEngineEv paintEngine()
extern "C"
void*
C_ZNK8QPicture11paintEngineEv(void *qthis) {
  auto ret =
  ((QPicture*)qthis)->paintEngine();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

