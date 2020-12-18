//  header block begin

// /usr/include/qt/QtGui/qpaintdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintDevice is pure virtual: true true
// QPaintDevice has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpaintdevice(void* this_) {
  uint64_t fnptrsumval = 0;

// Public virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:74
// [4] int devType() const
// (12)qm2740044500 (28)_ZNK12QPaintDevice7devTypeEv
//static
/*void qm2740044500()*/ {
  ;
  (void) ((QPaintDevice*)this_)->devType();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::devType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:75
// [1] bool paintingActive() const
// (12)qm4098809866 (36)_ZNK12QPaintDevice14paintingActiveEv
//static
/*void qm4098809866()*/ {
  ;
  (void) ((QPaintDevice*)this_)->paintingActive();
   auto xptr = (bool (QPaintDevice::*)() const ) &QPaintDevice::paintingActive;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:78
// [4] int width() const
// (12)qm4251465228 (26)_ZNK12QPaintDevice5widthEv
//static
/*void qm4251465228()*/ {
  ;
  (void) ((QPaintDevice*)this_)->width();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:79
// [4] int height() const
// (12)qm1938128564 (27)_ZNK12QPaintDevice6heightEv
//static
/*void qm1938128564()*/ {
  ;
  (void) ((QPaintDevice*)this_)->height();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:80
// [4] int widthMM() const
// (12)qm4290881768 (28)_ZNK12QPaintDevice7widthMMEv
//static
/*void qm4290881768()*/ {
  ;
  (void) ((QPaintDevice*)this_)->widthMM();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::widthMM;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:81
// [4] int heightMM() const
// (12)qm4250480684 (29)_ZNK12QPaintDevice8heightMMEv
//static
/*void qm4250480684()*/ {
  ;
  (void) ((QPaintDevice*)this_)->heightMM();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::heightMM;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:82
// [4] int logicalDpiX() const
// (12)qm1690059126 (33)_ZNK12QPaintDevice11logicalDpiXEv
//static
/*void qm1690059126()*/ {
  ;
  (void) ((QPaintDevice*)this_)->logicalDpiX();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::logicalDpiX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:83
// [4] int logicalDpiY() const
// (12)qm1702767425 (33)_ZNK12QPaintDevice11logicalDpiYEv
//static
/*void qm1702767425()*/ {
  ;
  (void) ((QPaintDevice*)this_)->logicalDpiY();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::logicalDpiY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:84
// [4] int physicalDpiX() const
// (12)qm1606783227 (34)_ZNK12QPaintDevice12physicalDpiXEv
//static
/*void qm1606783227()*/ {
  ;
  (void) ((QPaintDevice*)this_)->physicalDpiX();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::physicalDpiX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:85
// [4] int physicalDpiY() const
// (12)qm1577581260 (34)_ZNK12QPaintDevice12physicalDpiYEv
//static
/*void qm1577581260()*/ {
  ;
  (void) ((QPaintDevice*)this_)->physicalDpiY();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::physicalDpiY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:86
// [4] int devicePixelRatio() const
// (12)qm2416087545 (38)_ZNK12QPaintDevice16devicePixelRatioEv
//static
/*void qm2416087545()*/ {
  ;
  (void) ((QPaintDevice*)this_)->devicePixelRatio();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::devicePixelRatio;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:87
// [8] qreal devicePixelRatioF() const
// (12)qm1021285250 (39)_ZNK12QPaintDevice17devicePixelRatioFEv
//static
/*void qm1021285250()*/ {
  ;
  (void) ((QPaintDevice*)this_)->devicePixelRatioF();
   auto xptr = (double (QPaintDevice::*)() const ) &QPaintDevice::devicePixelRatioF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:88
// [4] int colorCount() const
// (12)qm3927565789 (32)_ZNK12QPaintDevice10colorCountEv
//static
/*void qm3927565789()*/ {
  ;
  (void) ((QPaintDevice*)this_)->colorCount();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::colorCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:89
// [4] int depth() const
// (12)qm1241268582 (26)_ZNK12QPaintDevice5depthEv
//static
/*void qm1241268582()*/ {
  ;
  (void) ((QPaintDevice*)this_)->depth();
   auto xptr = (int (QPaintDevice::*)() const ) &QPaintDevice::depth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:91
// [8] qreal devicePixelRatioFScale() 
// (12)qm3846552345 (43)_ZN12QPaintDevice22devicePixelRatioFScaleEv
//static
/*void qm3846552345()*/ {
  ;
  (void) QPaintDevice::devicePixelRatioFScale();
   auto xptr = (double (*)() ) &QPaintDevice::devicePixelRatioFScale;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qpaintdevice
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
