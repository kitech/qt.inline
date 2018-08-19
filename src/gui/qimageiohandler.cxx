//  header block begin
// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageiohandler.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageIOHandler is pure virtual: true
// QImageIOHandler has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQImageIOHandler : public QImageIOHandler {
public:
  virtual ~MyQImageIOHandler() {}
// void QImageIOHandler()
MyQImageIOHandler() : QImageIOHandler() {}
// void QImageIOHandler(QImageIOHandlerPrivate &)
MyQImageIOHandler(QImageIOHandlerPrivate & dd) : QImageIOHandler(dd) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:62
// [-2] void QImageIOHandler()
extern "C" Q_DECL_EXPORT
void* C_ZN15QImageIOHandlerC2Ev() {
  return 0; // new QImageIOHandler();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:63
// [-2] void ~QImageIOHandler()
extern "C" Q_DECL_EXPORT
void C_ZN15QImageIOHandlerD2Ev(void *this_) {
  delete (QImageIOHandler*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:65
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN15QImageIOHandler9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QImageIOHandler*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:66
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QImageIOHandler6deviceEv(void *this_) {
  return (void*)((QImageIOHandler*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:68
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN15QImageIOHandler9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QImageIOHandler*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:69
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZNK15QImageIOHandler9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QImageIOHandler*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:70
// [8] QByteArray format()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QImageIOHandler6formatEv(void *this_) {
  auto rv = ((QImageIOHandler*)this_)->format();
return new QByteArray(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:72
// [8] QByteArray name()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QImageIOHandler4nameEv(void *this_) {
  auto rv = ((QImageIOHandler*)this_)->name();
return new QByteArray(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:74
// [1] bool canRead()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QImageIOHandler7canReadEv(void *this_) {
  return (bool)((QImageIOHandler*)this_)->canRead();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:75
// [1] bool read(QImage *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QImageIOHandler4readEP6QImage(void *this_, QImage * image) {
  return (bool)((QImageIOHandler*)this_)->read(image);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:76
// [1] bool write(const QImage &)
extern "C" Q_DECL_EXPORT
bool C_ZN15QImageIOHandler5writeERK6QImage(void *this_, QImage* image) {
  return (bool)((QImageIOHandler*)this_)->write(*image);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:115
// [16] QVariant option(QImageIOHandler::ImageOption)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QImageIOHandler6optionENS_11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  auto rv = ((QImageIOHandler*)this_)->option(option);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:116
// [-2] void setOption(QImageIOHandler::ImageOption, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QImageIOHandler9setOptionENS_11ImageOptionERK8QVariant(void *this_, QImageIOHandler::ImageOption option, QVariant* value) {
  ((QImageIOHandler*)this_)->setOption(option, *value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:117
// [1] bool supportsOption(QImageIOHandler::ImageOption)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QImageIOHandler14supportsOptionENS_11ImageOptionE(void *this_, QImageIOHandler::ImageOption option) {
  return (bool)((QImageIOHandler*)this_)->supportsOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:120
// [1] bool jumpToNextImage()
extern "C" Q_DECL_EXPORT
bool C_ZN15QImageIOHandler15jumpToNextImageEv(void *this_) {
  return (bool)((QImageIOHandler*)this_)->jumpToNextImage();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:121
// [1] bool jumpToImage(int)
extern "C" Q_DECL_EXPORT
bool C_ZN15QImageIOHandler11jumpToImageEi(void *this_, int imageNumber) {
  return (bool)((QImageIOHandler*)this_)->jumpToImage(imageNumber);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:122
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QImageIOHandler9loopCountEv(void *this_) {
  return (int)((QImageIOHandler*)this_)->loopCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:123
// [4] int imageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QImageIOHandler10imageCountEv(void *this_) {
  return (int)((QImageIOHandler*)this_)->imageCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:124
// [4] int nextImageDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK15QImageIOHandler14nextImageDelayEv(void *this_) {
  return (int)((QImageIOHandler*)this_)->nextImageDelay();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:125
// [4] int currentImageNumber()
extern "C" Q_DECL_EXPORT
int C_ZNK15QImageIOHandler18currentImageNumberEv(void *this_) {
  return (int)((QImageIOHandler*)this_)->currentImageNumber();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:126
// [16] QRect currentImageRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QImageIOHandler16currentImageRectEv(void *this_) {
  auto rv = ((QImageIOHandler*)this_)->currentImageRect();
return new QRect(rv);
}

//  main block end
