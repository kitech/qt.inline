//  header block begin

// /usr/include/qt/QtGui/qrgba64.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrgba64.h>
#include <QtGui>
#include "callback_inherit.h"

// QRgba64 is pure virtual: false false
// QRgba64 has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrgba64(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:69
// [-2] void QRgba64() 
// (12)qm1079802919 (15)_ZN7QRgba64C2Ev
/*void* qm1079802919()*/{
  ;
  this_ =  new QRgba64();
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:72
// [8] QRgba64 fromRgba64(quint64) 
// (12)qm3447503964 (25)_ZN7QRgba6410fromRgba64Ey
//static
/*void qm3447503964(unsigned long long c)*/ {
  unsigned long long c = *(unsigned long long*)this_;
  (void) QRgba64::fromRgba64(c);
   auto xptr = (QRgba64 (*)(unsigned long long) ) &QRgba64::fromRgba64;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:77
// [8] QRgba64 fromRgba64(quint16, quint16, quint16, quint16) 
// (11)qm915260206 (28)_ZN7QRgba6410fromRgba64Etttt
//static
/*void qm915260206(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha)*/ {
  unsigned short red = *(unsigned short*)this_; unsigned short green = *(unsigned short*)this_; unsigned short blue = *(unsigned short*)this_; unsigned short alpha = *(unsigned short*)this_;
  (void) QRgba64::fromRgba64(red, green, blue, alpha);
   auto xptr = (QRgba64 (*)(unsigned short, unsigned short, unsigned short, unsigned short) ) &QRgba64::fromRgba64;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:84
// [8] QRgba64 fromRgba(quint8, quint8, quint8, quint8) 
// (12)qm2087352141 (25)_ZN7QRgba648fromRgbaEhhhh
//static
/*void qm2087352141(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)*/ {
  unsigned char red = *(unsigned char*)this_; unsigned char green = *(unsigned char*)this_; unsigned char blue = *(unsigned char*)this_; unsigned char alpha = *(unsigned char*)this_;
  (void) QRgba64::fromRgba(red, green, blue, alpha);
   auto xptr = (QRgba64 (*)(unsigned char, unsigned char, unsigned char, unsigned char) ) &QRgba64::fromRgba;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:92
// [8] QRgba64 fromArgb32(uint) 
// (12)qm2855149504 (25)_ZN7QRgba6410fromArgb32Ej
//static
/*void qm2855149504(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) QRgba64::fromArgb32(rgb);
   auto xptr = (QRgba64 (*)(unsigned int) ) &QRgba64::fromArgb32;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:97
// [1] bool isOpaque() const
// (12)qm2331452792 (23)_ZNK7QRgba648isOpaqueEv
//static
/*void qm2331452792()*/ {
  ;
  (void) ((QRgba64*)this_)->isOpaque();
   auto xptr = (bool (QRgba64::*)() const ) &QRgba64::isOpaque;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:101
// [1] bool isTransparent() const
// (11)qm901111933 (29)_ZNK7QRgba6413isTransparentEv
//static
/*void qm901111933()*/ {
  ;
  (void) ((QRgba64*)this_)->isTransparent();
   auto xptr = (bool (QRgba64::*)() const ) &QRgba64::isTransparent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:106
// [2] quint16 red() const
// (11)qm589081038 (18)_ZNK7QRgba643redEv
//static
/*void qm589081038()*/ {
  ;
  (void) ((QRgba64*)this_)->red();
   auto xptr = (unsigned short (QRgba64::*)() const ) &QRgba64::red;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:107
// [2] quint16 green() const
// (12)qm3992929197 (20)_ZNK7QRgba645greenEv
//static
/*void qm3992929197()*/ {
  ;
  (void) ((QRgba64*)this_)->green();
   auto xptr = (unsigned short (QRgba64::*)() const ) &QRgba64::green;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:108
// [2] quint16 blue() const
// (12)qm4168713684 (19)_ZNK7QRgba644blueEv
//static
/*void qm4168713684()*/ {
  ;
  (void) ((QRgba64*)this_)->blue();
   auto xptr = (unsigned short (QRgba64::*)() const ) &QRgba64::blue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:109
// [2] quint16 alpha() const
// (12)qm3871707758 (20)_ZNK7QRgba645alphaEv
//static
/*void qm3871707758()*/ {
  ;
  (void) ((QRgba64*)this_)->alpha();
   auto xptr = (unsigned short (QRgba64::*)() const ) &QRgba64::alpha;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:110
// [-2] void setRed(quint16) 
// (11)qm118532481 (20)_ZN7QRgba646setRedEt
//static
/*void qm118532481(unsigned short _red)*/ {
  unsigned short _red = *(unsigned short*)this_;
  (void) ((QRgba64*)this_)->setRed(_red);
   auto xptr = (void (QRgba64::*)(unsigned short) ) &QRgba64::setRed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:111
// [-2] void setGreen(quint16) 
// (12)qm3817710504 (22)_ZN7QRgba648setGreenEt
//static
/*void qm3817710504(unsigned short _green)*/ {
  unsigned short _green = *(unsigned short*)this_;
  (void) ((QRgba64*)this_)->setGreen(_green);
   auto xptr = (void (QRgba64::*)(unsigned short) ) &QRgba64::setGreen;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:112
// [-2] void setBlue(quint16) 
// (12)qm3898835915 (21)_ZN7QRgba647setBlueEt
//static
/*void qm3898835915(unsigned short _blue)*/ {
  unsigned short _blue = *(unsigned short*)this_;
  (void) ((QRgba64*)this_)->setBlue(_blue);
   auto xptr = (void (QRgba64::*)(unsigned short) ) &QRgba64::setBlue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:113
// [-2] void setAlpha(quint16) 
// (12)qm3904336491 (22)_ZN7QRgba648setAlphaEt
//static
/*void qm3904336491(unsigned short _alpha)*/ {
  unsigned short _alpha = *(unsigned short*)this_;
  (void) ((QRgba64*)this_)->setAlpha(_alpha);
   auto xptr = (void (QRgba64::*)(unsigned short) ) &QRgba64::setAlpha;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:115
// [1] quint8 red8() const
// (12)qm2055104551 (19)_ZNK7QRgba644red8Ev
//static
/*void qm2055104551()*/ {
  ;
  (void) ((QRgba64*)this_)->red8();
   auto xptr = (unsigned char (QRgba64::*)() const ) &QRgba64::red8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:116
// [1] quint8 green8() const
// (12)qm1377941860 (21)_ZNK7QRgba646green8Ev
//static
/*void qm1377941860()*/ {
  ;
  (void) ((QRgba64*)this_)->green8();
   auto xptr = (unsigned char (QRgba64::*)() const ) &QRgba64::green8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:117
// [1] quint8 blue8() const
// (12)qm2395654753 (20)_ZNK7QRgba645blue8Ev
//static
/*void qm2395654753()*/ {
  ;
  (void) ((QRgba64*)this_)->blue8();
   auto xptr = (unsigned char (QRgba64::*)() const ) &QRgba64::blue8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:118
// [1] quint8 alpha8() const
// (12)qm1346834623 (21)_ZNK7QRgba646alpha8Ev
//static
/*void qm1346834623()*/ {
  ;
  (void) ((QRgba64*)this_)->alpha8();
   auto xptr = (unsigned char (QRgba64::*)() const ) &QRgba64::alpha8;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:119
// [4] uint toArgb32() const
// (12)qm3067325637 (23)_ZNK7QRgba648toArgb32Ev
//static
/*void qm3067325637()*/ {
  ;
  (void) ((QRgba64*)this_)->toArgb32();
   auto xptr = (unsigned int (QRgba64::*)() const ) &QRgba64::toArgb32;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:143
// [2] ushort toRgb16() const
// (12)qm2263917929 (22)_ZNK7QRgba647toRgb16Ev
//static
/*void qm2263917929()*/ {
  ;
  (void) ((QRgba64*)this_)->toRgb16();
   auto xptr = (unsigned short (QRgba64::*)() const ) &QRgba64::toRgb16;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:148
// [8] QRgba64 premultiplied() const
// (12)qm3575960144 (29)_ZNK7QRgba6413premultipliedEv
//static
/*void qm3575960144()*/ {
  ;
  (void) ((QRgba64*)this_)->premultiplied();
   auto xptr = (QRgba64 (QRgba64::*)() const ) &QRgba64::premultiplied;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:170
// [8] QRgba64 unpremultiplied() const
// (12)qm3565381410 (31)_ZNK7QRgba6415unpremultipliedEv
//static
/*void qm3565381410()*/ {
  ;
  (void) ((QRgba64*)this_)->unpremultiplied();
   auto xptr = (QRgba64 (QRgba64::*)() const ) &QRgba64::unpremultiplied;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:184
// [8] QRgba64 operator=(quint64) 
// (12)qm2479728404 (15)_ZN7QRgba64aSEy
//static
/*void qm2479728404(unsigned long long _rgba)*/ {
  unsigned long long _rgba = *(unsigned long long*)this_;
  (void) ((QRgba64*)this_)->operator=(_rgba);
  // auto xptr = (QRgba64 (QRgba64::*)(unsigned long long) ) &QRgba64::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QRgba64D2Ev(void *this_)*/ {
  delete (QRgba64*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrgba64
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
