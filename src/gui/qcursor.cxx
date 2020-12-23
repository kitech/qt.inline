//  header block begin

// /usr/include/qt/QtGui/qcursor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcursor.h>
#include <QtGui>
#include "callback_inherit.h"

// QCursor is pure virtual: false false
// QCursor has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcursor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:82
// [-2] void QCursor() 
// (12)qm2060366876 (15)_ZN7QCursorC2Ev
/*void* qm2060366876()*/{
  ;
  this_ =  new QCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:83
// [-2] void QCursor(Qt::CursorShape) 
// (12)qm2270285397 (32)_ZN7QCursorC2EN2Qt11CursorShapeE
/*void* qm2270285397(Qt::CursorShape shape)*/{
  Qt::CursorShape shape = *(Qt::CursorShape*)this_;
  this_ =  new QCursor(shape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:84
// [-2] void QCursor(const QBitmap &, const QBitmap &, int, int) 
// (11)qm789977789 (29)_ZN7QCursorC2ERK7QBitmapS2_ii
/*void* qm789977789(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY)*/{
  const QBitmap & bitmap = *(const QBitmap *)this_; const QBitmap & mask = *(const QBitmap *)this_; int hotX = *(int*)this_; int hotY = *(int*)this_;
  this_ =  new QCursor(bitmap, mask, hotX, hotY);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:85
// [-2] void QCursor(const QPixmap &, int, int) 
// (12)qm2656705789 (26)_ZN7QCursorC2ERK7QPixmapii
/*void* qm2656705789(const QPixmap & pixmap, int hotX, int hotY)*/{
  const QPixmap & pixmap = *(const QPixmap *)this_; int hotX = *(int*)this_; int hotY = *(int*)this_;
  this_ =  new QCursor(pixmap, hotX, hotY);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:86
// [-2] void QCursor(const QCursor &) 
// (11)qm802496461 (18)_ZN7QCursorC2ERKS_
/*void* qm802496461(const QCursor & cursor)*/{
  const QCursor & cursor = *(const QCursor *)this_;
  this_ =  new QCursor(cursor);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:89
// [-2] void QCursor(QCursor &&) 
// (11)qm710598164 (17)_ZN7QCursorC2EOS_
/*void* qm710598164(QCursor && other)*/{
  QCursor && other =  static_cast<QCursor &&>(*(QCursor *)this_);
  this_ =  new QCursor(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:90
// [8] QCursor & operator=(QCursor &&) 
// (12)qm3295421652 (17)_ZN7QCursoraSEOS_
//static
/*void qm3295421652(QCursor && other)*/ {
  QCursor && other =  static_cast<QCursor &&>(*(QCursor *)this_);
  (void) ((QCursor*)this_)->operator=(other);
  // auto xptr = (QCursor & (QCursor::*)(QCursor&&) ) &QCursor::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:93
// [-2] void swap(QCursor &) 
// (12)qm3212534974 (20)_ZN7QCursor4swapERS_
//static
/*void qm3212534974(QCursor & other)*/ {
  QCursor & other = *(QCursor *)this_;
  (void) ((QCursor*)this_)->swap(other);
   auto xptr = (void (QCursor::*)(QCursor&) ) &QCursor::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:120
// [-2] void setPos(const QPoint &) 
// (12)qm3847847402 (28)_ZN7QCursor6setPosERK6QPoint
//static
/*void qm3847847402(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) QCursor::setPos(p);
   auto xptr = (void (*)(QPoint const&) ) &QCursor::setPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:121
// [-2] void setPos(QScreen *, const QPoint &) 
// (12)qm2961776494 (37)_ZN7QCursor6setPosEP7QScreenRK6QPoint
//static
/*void qm2961776494(QScreen * screen, const QPoint & p)*/ {
  QScreen * screen = *(QScreen **)this_; const QPoint & p = *(const QPoint *)this_;
  (void) QCursor::setPos(screen, p);
   auto xptr = (void (*)(QScreen*, QPoint const&) ) &QCursor::setPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QCursorD2Ev(void *this_)*/ {
  delete (QCursor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcursor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
