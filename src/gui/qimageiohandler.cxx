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


struct qt_meta_stringdata_MyQImageIOHandler_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageIOHandler_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageIOHandler_t qt_meta_stringdata_MyQImageIOHandler = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQImageIOHandler"
  },
  "MyQImageIOHandler"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageIOHandler[] = {
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
class Q_DECL_EXPORT MyQImageIOHandler : public QImageIOHandler {
public:
  virtual ~MyQImageIOHandler() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool canRead()
  virtual bool canRead() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"canRead", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool read(QImage *)
  virtual bool read(QImage * image)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"read", &handled, 1, (uint64_t)image, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QImageIOHandler()
MyQImageIOHandler() : QImageIOHandler() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:74
// [1] bool canRead()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:75
// [1] bool read(QImage *)
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
