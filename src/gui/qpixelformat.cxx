//  header block begin
// since 0x050400
// /usr/include/qt/QtGui/qpixelformat.h
#ifndef protected
#define protected public
#endif
#include <qpixelformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixelFormat is pure virtual: false
// QPixelFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPixelFormat : public QPixelFormat {
public:
  virtual ~MyQPixelFormat() {}
// void QPixelFormat()
MyQPixelFormat() : QPixelFormat() {}
// void QPixelFormat(enum QPixelFormat::ColorModel, uchar, uchar, uchar, uchar, uchar, uchar, enum QPixelFormat::AlphaUsage, enum QPixelFormat::AlphaPosition, enum QPixelFormat::AlphaPremultiplied, enum QPixelFormat::TypeInterpretation, enum QPixelFormat::ByteOrder, uchar)
MyQPixelFormat(QPixelFormat::ColorModel colorModel, uchar firstSize, uchar secondSize, uchar thirdSize, uchar fourthSize, uchar fifthSize, uchar alphaSize, QPixelFormat::AlphaUsage alphaUsage, QPixelFormat::AlphaPosition alphaPosition, QPixelFormat::AlphaPremultiplied premultiplied, QPixelFormat::TypeInterpretation typeInterpretation, QPixelFormat::ByteOrder byteOrder, uchar subEnum) : QPixelFormat(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:163
// [-2] void QPixelFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN12QPixelFormatC2Ev() {
  return  new QPixelFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:164
// [-2] void QPixelFormat(enum QPixelFormat::ColorModel, uchar, uchar, uchar, uchar, uchar, uchar, enum QPixelFormat::AlphaUsage, enum QPixelFormat::AlphaPosition, enum QPixelFormat::AlphaPremultiplied, enum QPixelFormat::TypeInterpretation, enum QPixelFormat::ByteOrder, uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPixelFormatC2ENS_10ColorModelEhhhhhhNS_10AlphaUsageENS_13AlphaPositionENS_18AlphaPremultipliedENS_18TypeInterpretationENS_9ByteOrderEh(QPixelFormat::ColorModel colorModel, uchar firstSize, uchar secondSize, uchar thirdSize, uchar fourthSize, uchar fifthSize, uchar alphaSize, QPixelFormat::AlphaUsage alphaUsage, QPixelFormat::AlphaPosition alphaPosition, QPixelFormat::AlphaPremultiplied premultiplied, QPixelFormat::TypeInterpretation typeInterpretation, QPixelFormat::ByteOrder byteOrder, uchar subEnum) {
  return  new QPixelFormat(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:178
// [4] QPixelFormat::ColorModel colorModel()
extern "C" Q_DECL_EXPORT
QPixelFormat::ColorModel C_ZNK12QPixelFormat10colorModelEv(void *this_) {
  return (QPixelFormat::ColorModel)((QPixelFormat*)this_)->colorModel();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:179
// [1] uchar channelCount()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat12channelCountEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->channelCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:186
// [1] uchar redSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat7redSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->redSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:187
// [1] uchar greenSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat9greenSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->greenSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:188
// [1] uchar blueSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat8blueSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->blueSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:190
// [1] uchar cyanSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat8cyanSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->cyanSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:191
// [1] uchar magentaSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat11magentaSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->magentaSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:192
// [1] uchar yellowSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat10yellowSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->yellowSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:193
// [1] uchar blackSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat9blackSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->blackSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:195
// [1] uchar hueSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat7hueSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->hueSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:196
// [1] uchar saturationSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat14saturationSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->saturationSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:197
// [1] uchar lightnessSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat13lightnessSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->lightnessSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:198
// [1] uchar brightnessSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat14brightnessSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->brightnessSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:200
// [1] uchar alphaSize()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat9alphaSizeEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->alphaSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:202
// [1] uchar bitsPerPixel()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat12bitsPerPixelEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->bitsPerPixel();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:209
// [4] QPixelFormat::AlphaUsage alphaUsage()
extern "C" Q_DECL_EXPORT
QPixelFormat::AlphaUsage C_ZNK12QPixelFormat10alphaUsageEv(void *this_) {
  return (QPixelFormat::AlphaUsage)((QPixelFormat*)this_)->alphaUsage();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:210
// [4] QPixelFormat::AlphaPosition alphaPosition()
extern "C" Q_DECL_EXPORT
QPixelFormat::AlphaPosition C_ZNK12QPixelFormat13alphaPositionEv(void *this_) {
  return (QPixelFormat::AlphaPosition)((QPixelFormat*)this_)->alphaPosition();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:211
// [4] QPixelFormat::AlphaPremultiplied premultiplied()
extern "C" Q_DECL_EXPORT
QPixelFormat::AlphaPremultiplied C_ZNK12QPixelFormat13premultipliedEv(void *this_) {
  return (QPixelFormat::AlphaPremultiplied)((QPixelFormat*)this_)->premultiplied();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:212
// [4] QPixelFormat::TypeInterpretation typeInterpretation()
extern "C" Q_DECL_EXPORT
QPixelFormat::TypeInterpretation C_ZNK12QPixelFormat18typeInterpretationEv(void *this_) {
  return (QPixelFormat::TypeInterpretation)((QPixelFormat*)this_)->typeInterpretation();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:213
// [4] QPixelFormat::ByteOrder byteOrder()
extern "C" Q_DECL_EXPORT
QPixelFormat::ByteOrder C_ZNK12QPixelFormat9byteOrderEv(void *this_) {
  return (QPixelFormat::ByteOrder)((QPixelFormat*)this_)->byteOrder();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:215
// [4] QPixelFormat::YUVLayout yuvLayout()
extern "C" Q_DECL_EXPORT
QPixelFormat::YUVLayout C_ZNK12QPixelFormat9yuvLayoutEv(void *this_) {
  return (QPixelFormat::YUVLayout)((QPixelFormat*)this_)->yuvLayout();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:216
// [1] uchar subEnum()
extern "C" Q_DECL_EXPORT
uchar C_ZNK12QPixelFormat7subEnumEv(void *this_) {
  return (uchar)((QPixelFormat*)this_)->subEnum();
}


extern "C" Q_DECL_EXPORT
void C_ZN12QPixelFormatD2Ev(void *this_) {
  delete (QPixelFormat*)(this_);
}
//  main block end
