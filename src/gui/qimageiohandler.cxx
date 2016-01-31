// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qimageiohandler.h
// dst-file: /src/gui/qimageiohandler.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qimageiohandler.h>


#include <qrect.h>
#include <qvariant.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qimageiohandler_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QImageIOHandler_Class_Size()
{
  return sizeof(QImageIOHandler);
}

extern "C"
int QImageIOPlugin_Class_Size()
{
  return sizeof(QImageIOPlugin);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 116, column 17>
//   // proto:  int QImageIOHandler::imageCount();
// _ZNK15QImageIOHandler10imageCountEv imageCount()
extern "C"
int
C_ZNK15QImageIOHandler10imageCountEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->imageCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 110, column 18>
//   // proto:  bool QImageIOHandler::supportsOption(QImageIOHandler::ImageOption option);
// _ZNK15QImageIOHandler14supportsOptionENS_11ImageOptionE supportsOption(enum QImageIOHandler::ImageOption)
extern "C"
bool
C_ZNK15QImageIOHandler14supportsOptionENS_11ImageOptionE(void *qthis,
QImageIOHandler::ImageOption arg1) {
  auto ret =
  ((QImageIOHandler*)qthis)->supportsOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 119, column 19>
//   // proto:  QRect QImageIOHandler::currentImageRect();
// _ZNK15QImageIOHandler16currentImageRectEv currentImageRect()
extern "C"
QRect*
C_ZNK15QImageIOHandler16currentImageRectEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->currentImageRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 114, column 18>
//   // proto:  bool QImageIOHandler::jumpToImage(int imageNumber);
// _ZN15QImageIOHandler11jumpToImageEi jumpToImage(int)
extern "C"
bool
C_ZN15QImageIOHandler11jumpToImageEi(void *qthis,
int arg1) {
  auto ret =
  ((QImageIOHandler*)qthis)->jumpToImage(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 118, column 17>
//   // proto:  int QImageIOHandler::currentImageNumber();
// _ZNK15QImageIOHandler18currentImageNumberEv currentImageNumber()
extern "C"
int
C_ZNK15QImageIOHandler18currentImageNumberEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->currentImageNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 108, column 22>
//   // proto:  QVariant QImageIOHandler::option(QImageIOHandler::ImageOption option);
// _ZNK15QImageIOHandler6optionENS_11ImageOptionE option(enum QImageIOHandler::ImageOption)
extern "C"
QVariant*
C_ZNK15QImageIOHandler6optionENS_11ImageOptionE(void *qthis,
QImageIOHandler::ImageOption arg1) {
  auto ret =
  ((QImageIOHandler*)qthis)->option(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 61, column 10>
//   // proto:  void QImageIOHandler::setFormat(const QByteArray & format);
// _ZN15QImageIOHandler9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZN15QImageIOHandler9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QImageIOHandler*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 113, column 18>
//   // proto:  bool QImageIOHandler::jumpToNextImage();
// _ZN15QImageIOHandler15jumpToNextImageEv jumpToNextImage()
extern "C"
bool
C_ZN15QImageIOHandler15jumpToNextImageEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->jumpToNextImage();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QImageIOHandler::~QImageIOHandler();
extern "C"
void C_ZN15QImageIOHandlerD2Ev(void *qthis) {
  delete (QImageIOHandler*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 115, column 17>
//   // proto:  int QImageIOHandler::loopCount();
// _ZNK15QImageIOHandler9loopCountEv loopCount()
extern "C"
int
C_ZNK15QImageIOHandler9loopCountEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->loopCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 55, column 5>
//   // proto:  void QImageIOHandler::QImageIOHandler();
extern "C"
QImageIOHandler*
C_ZN15QImageIOHandlerC2Ev() {
  // auto ret = new QImageIOHandler();
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 68, column 18>
//   // proto:  bool QImageIOHandler::read(QImage * image);
// _ZN15QImageIOHandler4readEP6QImage read(class QImage *)
extern "C"
bool
C_ZN15QImageIOHandler4readEP6QImage(void *qthis,
QImage * arg1) {
  auto ret =
  ((QImageIOHandler*)qthis)->read(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 65, column 24>
//   // proto:  QByteArray QImageIOHandler::name();
// _ZNK15QImageIOHandler4nameEv name()
extern "C"
QByteArray*
C_ZNK15QImageIOHandler4nameEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->name();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 63, column 16>
//   // proto:  QByteArray QImageIOHandler::format();
// _ZNK15QImageIOHandler6formatEv format()
extern "C"
QByteArray*
C_ZNK15QImageIOHandler6formatEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->format();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 109, column 18>
//   // proto:  void QImageIOHandler::setOption(QImageIOHandler::ImageOption option, const QVariant & value);
// _ZN15QImageIOHandler9setOptionENS_11ImageOptionERK8QVariant setOption(enum QImageIOHandler::ImageOption, const class QVariant &)
extern "C"
void
C_ZN15QImageIOHandler9setOptionENS_11ImageOptionERK8QVariant(void *qthis,
QImageIOHandler::ImageOption arg1,
const QVariant* arg2) {
  ((QImageIOHandler*)qthis)->setOption(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 117, column 17>
//   // proto:  int QImageIOHandler::nextImageDelay();
// _ZNK15QImageIOHandler14nextImageDelayEv nextImageDelay()
extern "C"
int
C_ZNK15QImageIOHandler14nextImageDelayEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->nextImageDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 62, column 10>
//   // proto:  void QImageIOHandler::setFormat(const QByteArray & format);
// _ZNK15QImageIOHandler9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZNK15QImageIOHandler9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QImageIOHandler*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 58, column 10>
//   // proto:  void QImageIOHandler::setDevice(QIODevice * device);
// _ZN15QImageIOHandler9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN15QImageIOHandler9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QImageIOHandler*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 67, column 18>
//   // proto:  bool QImageIOHandler::canRead();
// _ZNK15QImageIOHandler7canReadEv canRead()
extern "C"
bool
C_ZNK15QImageIOHandler7canReadEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->canRead();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 59, column 16>
//   // proto:  QIODevice * QImageIOHandler::device();
// _ZNK15QImageIOHandler6deviceEv device()
extern "C"
void*
C_ZNK15QImageIOHandler6deviceEv(void *qthis) {
  auto ret =
  ((QImageIOHandler*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 69, column 18>
//   // proto:  bool QImageIOHandler::write(const QImage & image);
// _ZN15QImageIOHandler5writeERK6QImage write(const class QImage &)
extern "C"
bool
C_ZN15QImageIOHandler5writeERK6QImage(void *qthis,
const QImage* arg1) {
  auto ret =
  ((QImageIOHandler*)qthis)->write(*((const QImage*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 146, column 26>
//   // proto:  Capabilities QImageIOPlugin::capabilities(QIODevice * device, const QByteArray & format);
// _ZNK14QImageIOPlugin12capabilitiesEP9QIODeviceRK10QByteArray capabilities(class QIODevice *, const class QByteArray &)
extern "C"
QFlags<QImageIOPlugin::Capability>*
C_ZNK14QImageIOPlugin12capabilitiesEP9QIODeviceRK10QByteArray(void *qthis,
QIODevice * arg1,
const QByteArray* arg2) {
  auto ret =
  ((QImageIOPlugin*)qthis)->capabilities(arg1,
*((const QByteArray*)arg2));
  return new QFlags<QImageIOPlugin::Capability>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 134, column 5>
//   // proto:  const QMetaObject * QImageIOPlugin::metaObject();
// _ZNK14QImageIOPlugin10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QImageIOPlugin10metaObjectEv(void *qthis) {
  auto ret =
  ((QImageIOPlugin*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QImageIOPlugin::~QImageIOPlugin();
extern "C"
void C_ZN14QImageIOPluginD2Ev(void *qthis) {
  delete (QImageIOPlugin*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 147, column 30>
//   // proto:  QImageIOHandler * QImageIOPlugin::create(QIODevice * device, const QByteArray & format);
// _ZNK14QImageIOPlugin6createEP9QIODeviceRK10QByteArray create(class QIODevice *, const class QByteArray &)
extern "C"
void*
C_ZNK14QImageIOPlugin6createEP9QIODeviceRK10QByteArray(void *qthis,
QIODevice * arg1,
const QByteArray* arg2) {
  auto ret =
  ((QImageIOPlugin*)qthis)->create(arg1,
*((const QByteArray*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qimageiohandler.h', line 136, column 14>
//   // proto:  void QImageIOPlugin::QImageIOPlugin(QObject * parent);
extern "C"
QImageIOPlugin*
C_ZN14QImageIOPluginC2EP7QObject(QObject * arg1) {
  // auto ret = new QImageIOPlugin(arg1);
}
// <= ext block end

// body block begin =>
// QImageIOPlugin_SlotProxy here
class QImageIOPlugin_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QImageIOPlugin_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qimageiohandler.moc"

extern "C" {
  QImageIOPlugin_SlotProxy* QImageIOPlugin_SlotProxy_new()
  {
    return new QImageIOPlugin_SlotProxy();
  }
};

// <= body block end

