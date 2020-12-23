//  header block begin

// /usr/include/qt/QtGui/qpixelformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpixelformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixelFormat is pure virtual: false false
// QPixelFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpixelformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:163
// [-2] void QPixelFormat() 
// (11)qm426697196 (21)_ZN12QPixelFormatC2Ev
/*void* qm426697196()*/{
  ;
  this_ =  new QPixelFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:164
// [-2] void QPixelFormat(QPixelFormat::ColorModel, uchar, uchar, uchar, uchar, uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation, QPixelFormat::ByteOrder, uchar) 
// (12)qm1123328726 (140)_ZN12QPixelFormatC2ENS_10ColorModelEhhhhhhNS_10AlphaUsageENS_13AlphaPositionENS_18AlphaPremultipliedENS_18TypeInterpretationENS_9ByteOrderEh
/*void* qm1123328726(QPixelFormat::ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, QPixelFormat::AlphaUsage alphaUsage, QPixelFormat::AlphaPosition alphaPosition, QPixelFormat::AlphaPremultiplied premultiplied, QPixelFormat::TypeInterpretation typeInterpretation, QPixelFormat::ByteOrder byteOrder, unsigned char subEnum)*/{
  QPixelFormat::ColorModel colorModel = *(QPixelFormat::ColorModel*)this_; unsigned char firstSize = *(unsigned char*)this_; unsigned char secondSize = *(unsigned char*)this_; unsigned char thirdSize = *(unsigned char*)this_; unsigned char fourthSize = *(unsigned char*)this_; unsigned char fifthSize = *(unsigned char*)this_; unsigned char alphaSize = *(unsigned char*)this_; QPixelFormat::AlphaUsage alphaUsage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition alphaPosition = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::AlphaPremultiplied premultiplied = *(QPixelFormat::AlphaPremultiplied*)this_; QPixelFormat::TypeInterpretation typeInterpretation = *(QPixelFormat::TypeInterpretation*)this_; QPixelFormat::ByteOrder byteOrder = *(QPixelFormat::ByteOrder*)this_; unsigned char subEnum = *(unsigned char*)this_;
  this_ =  new QPixelFormat(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:178
// [4] QPixelFormat::ColorModel colorModel() const
// (11)qm837904754 (32)_ZNK12QPixelFormat10colorModelEv
//static
/*void qm837904754()*/ {
  ;
  (void) ((QPixelFormat*)this_)->colorModel();
   auto xptr = (QPixelFormat::ColorModel (QPixelFormat::*)() const ) &QPixelFormat::colorModel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:179
// [1] uchar channelCount() const
// (12)qm4008742080 (34)_ZNK12QPixelFormat12channelCountEv
//static
/*void qm4008742080()*/ {
  ;
  (void) ((QPixelFormat*)this_)->channelCount();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::channelCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:186
// [1] uchar redSize() const
// (12)qm1904657303 (28)_ZNK12QPixelFormat7redSizeEv
//static
/*void qm1904657303()*/ {
  ;
  (void) ((QPixelFormat*)this_)->redSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::redSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:187
// [1] uchar greenSize() const
// (12)qm2017173239 (30)_ZNK12QPixelFormat9greenSizeEv
//static
/*void qm2017173239()*/ {
  ;
  (void) ((QPixelFormat*)this_)->greenSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::greenSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:188
// [1] uchar blueSize() const
// (11)qm550794376 (29)_ZNK12QPixelFormat8blueSizeEv
//static
/*void qm550794376()*/ {
  ;
  (void) ((QPixelFormat*)this_)->blueSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::blueSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:190
// [1] uchar cyanSize() const
// (12)qm3552015267 (29)_ZNK12QPixelFormat8cyanSizeEv
//static
/*void qm3552015267()*/ {
  ;
  (void) ((QPixelFormat*)this_)->cyanSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::cyanSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:191
// [1] uchar magentaSize() const
// (12)qm2316795969 (33)_ZNK12QPixelFormat11magentaSizeEv
//static
/*void qm2316795969()*/ {
  ;
  (void) ((QPixelFormat*)this_)->magentaSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::magentaSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:192
// [1] uchar yellowSize() const
// (12)qm1808968041 (32)_ZNK12QPixelFormat10yellowSizeEv
//static
/*void qm1808968041()*/ {
  ;
  (void) ((QPixelFormat*)this_)->yellowSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::yellowSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:193
// [1] uchar blackSize() const
// (12)qm4189123778 (30)_ZNK12QPixelFormat9blackSizeEv
//static
/*void qm4189123778()*/ {
  ;
  (void) ((QPixelFormat*)this_)->blackSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::blackSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:195
// [1] uchar hueSize() const
// (12)qm2460234215 (28)_ZNK12QPixelFormat7hueSizeEv
//static
/*void qm2460234215()*/ {
  ;
  (void) ((QPixelFormat*)this_)->hueSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::hueSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:196
// [1] uchar saturationSize() const
// (12)qm3052617462 (36)_ZNK12QPixelFormat14saturationSizeEv
//static
/*void qm3052617462()*/ {
  ;
  (void) ((QPixelFormat*)this_)->saturationSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::saturationSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:197
// [1] uchar lightnessSize() const
// (12)qm2858211843 (35)_ZNK12QPixelFormat13lightnessSizeEv
//static
/*void qm2858211843()*/ {
  ;
  (void) ((QPixelFormat*)this_)->lightnessSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::lightnessSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:198
// [1] uchar brightnessSize() const
// (12)qm1872456994 (36)_ZNK12QPixelFormat14brightnessSizeEv
//static
/*void qm1872456994()*/ {
  ;
  (void) ((QPixelFormat*)this_)->brightnessSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::brightnessSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:200
// [1] uchar alphaSize() const
// (11)qm586385385 (30)_ZNK12QPixelFormat9alphaSizeEv
//static
/*void qm586385385()*/ {
  ;
  (void) ((QPixelFormat*)this_)->alphaSize();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::alphaSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:202
// [1] uchar bitsPerPixel() const
// (12)qm4252033719 (34)_ZNK12QPixelFormat12bitsPerPixelEv
//static
/*void qm4252033719()*/ {
  ;
  (void) ((QPixelFormat*)this_)->bitsPerPixel();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::bitsPerPixel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:209
// [4] QPixelFormat::AlphaUsage alphaUsage() const
// (12)qm2733819830 (32)_ZNK12QPixelFormat10alphaUsageEv
//static
/*void qm2733819830()*/ {
  ;
  (void) ((QPixelFormat*)this_)->alphaUsage();
   auto xptr = (QPixelFormat::AlphaUsage (QPixelFormat::*)() const ) &QPixelFormat::alphaUsage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:210
// [4] QPixelFormat::AlphaPosition alphaPosition() const
// (12)qm2510653502 (35)_ZNK12QPixelFormat13alphaPositionEv
//static
/*void qm2510653502()*/ {
  ;
  (void) ((QPixelFormat*)this_)->alphaPosition();
   auto xptr = (QPixelFormat::AlphaPosition (QPixelFormat::*)() const ) &QPixelFormat::alphaPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:211
// [4] QPixelFormat::AlphaPremultiplied premultiplied() const
// (11)qm611966789 (35)_ZNK12QPixelFormat13premultipliedEv
//static
/*void qm611966789()*/ {
  ;
  (void) ((QPixelFormat*)this_)->premultiplied();
   auto xptr = (QPixelFormat::AlphaPremultiplied (QPixelFormat::*)() const ) &QPixelFormat::premultiplied;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:212
// [4] QPixelFormat::TypeInterpretation typeInterpretation() const
// (12)qm1814653051 (40)_ZNK12QPixelFormat18typeInterpretationEv
//static
/*void qm1814653051()*/ {
  ;
  (void) ((QPixelFormat*)this_)->typeInterpretation();
   auto xptr = (QPixelFormat::TypeInterpretation (QPixelFormat::*)() const ) &QPixelFormat::typeInterpretation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:213
// [4] QPixelFormat::ByteOrder byteOrder() const
// (11)qm109989190 (30)_ZNK12QPixelFormat9byteOrderEv
//static
/*void qm109989190()*/ {
  ;
  (void) ((QPixelFormat*)this_)->byteOrder();
   auto xptr = (QPixelFormat::ByteOrder (QPixelFormat::*)() const ) &QPixelFormat::byteOrder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:215
// [4] QPixelFormat::YUVLayout yuvLayout() const
// (12)qm2410354562 (30)_ZNK12QPixelFormat9yuvLayoutEv
//static
/*void qm2410354562()*/ {
  ;
  (void) ((QPixelFormat*)this_)->yuvLayout();
   auto xptr = (QPixelFormat::YUVLayout (QPixelFormat::*)() const ) &QPixelFormat::yuvLayout;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:216
// [1] uchar subEnum() const
// (12)qm1212788669 (28)_ZNK12QPixelFormat7subEnumEv
//static
/*void qm1212788669()*/ {
  ;
  (void) ((QPixelFormat*)this_)->subEnum();
   auto xptr = (unsigned char (QPixelFormat::*)() const ) &QPixelFormat::subEnum;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QPixelFormatD2Ev(void *this_)*/ {
  delete (QPixelFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpixelformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
