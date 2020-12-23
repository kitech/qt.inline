//  header block begin

// /usr/include/qt/QtGui/qicon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qicon.h>
#include <QtGui>
#include "callback_inherit.h"

// QIcon is pure virtual: false false
// QIcon has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qicon(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:61
// [-2] void QIcon() 
// (12)qm1359309426 (13)_ZN5QIconC2Ev
/*void* qm1359309426()*/{
  ;
  this_ =  new QIcon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:62
// [-2] void QIcon(const QPixmap &) 
// (12)qm2794313597 (22)_ZN5QIconC2ERK7QPixmap
/*void* qm2794313597(const QPixmap & pixmap)*/{
  const QPixmap & pixmap = *(const QPixmap *)this_;
  this_ =  new QIcon(pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:63
// [-2] void QIcon(const QIcon &) 
// (12)qm2123434597 (16)_ZN5QIconC2ERKS_
/*void* qm2123434597(const QIcon & other)*/{
  const QIcon & other = *(const QIcon *)this_;
  this_ =  new QIcon(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:64
// [-2] void QIcon(QIcon &&) 
// (12)qm2957986853 (15)_ZN5QIconC2EOS_
/*void* qm2957986853(QIcon && other)*/{
  QIcon && other =  static_cast<QIcon &&>(*(QIcon *)this_);
  this_ =  new QIcon(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:67
// [-2] void QIcon(const QString &) 
// (12)qm3566610256 (22)_ZN5QIconC2ERK7QString
/*void* qm3566610256(const QString & fileName)*/{
  const QString & fileName = *(const QString *)this_;
  this_ =  new QIcon(fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:68
// [-2] void QIcon(QIconEngine *) 
// (12)qm1644732391 (26)_ZN5QIconC2EP11QIconEngine
/*void* qm1644732391(QIconEngine * engine)*/{
  QIconEngine * engine = *(QIconEngine **)this_;
  this_ =  new QIcon(engine);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:71
// [8] QIcon & operator=(QIcon &&) 
// (12)qm1585034981 (15)_ZN5QIconaSEOS_
//static
/*void qm1585034981(QIcon && other)*/ {
  QIcon && other =  static_cast<QIcon &&>(*(QIcon *)this_);
  (void) ((QIcon*)this_)->operator=(other);
  // auto xptr = (QIcon & (QIcon::*)(QIcon&&) ) &QIcon::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:73
// [-2] void swap(QIcon &) 
// (12)qm3027822576 (18)_ZN5QIcon4swapERS_
//static
/*void qm3027822576(QIcon & other)*/ {
  QIcon & other = *(QIcon *)this_;
  (void) ((QIcon*)this_)->swap(other);
   auto xptr = (void (QIcon::*)(QIcon&) ) &QIcon::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:79
// [32] QPixmap pixmap(int, int, QIcon::Mode, QIcon::State) const
// (12)qm3249504268 (39)_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE
//static
/*void qm3249504268(int w, int h, QIcon::Mode mode, QIcon::State state)*/ {
  int w = *(int*)this_; int h = *(int*)this_; QIcon::Mode mode = *(QIcon::Mode*)this_; QIcon::State state = *(QIcon::State*)this_;
  (void) ((QIcon*)this_)->pixmap(w, h, mode, state);
   auto xptr = (QPixmap (QIcon::*)(int, int, QIcon::Mode, QIcon::State) const ) &QIcon::pixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:81
// [32] QPixmap pixmap(int, QIcon::Mode, QIcon::State) const
// (12)qm1170536639 (38)_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE
//static
/*void qm1170536639(int extent, QIcon::Mode mode, QIcon::State state)*/ {
  int extent = *(int*)this_; QIcon::Mode mode = *(QIcon::Mode*)this_; QIcon::State state = *(QIcon::State*)this_;
  (void) ((QIcon*)this_)->pixmap(extent, mode, state);
   auto xptr = (QPixmap (QIcon::*)(int, QIcon::Mode, QIcon::State) const ) &QIcon::pixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:91
// [-2] void paint(QPainter *, int, int, int, int, Qt::Alignment, QIcon::Mode, QIcon::State) const
// (12)qm1274983377 (79)_ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE
//static
/*void qm1274983377(QPainter * painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state)*/ {
  QPainter * painter = *(QPainter **)this_; int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; QFlags<Qt::AlignmentFlag> alignment = *(QFlags<Qt::AlignmentFlag>*)this_; QIcon::Mode mode = *(QIcon::Mode*)this_; QIcon::State state = *(QIcon::State*)this_;
  (void) ((QIcon*)this_)->paint(painter, x, y, w, h, alignment, mode, state);
   auto xptr = (void (QIcon::*)(QPainter*, int, int, int, int, QFlags<Qt::AlignmentFlag>, QIcon::Mode, QIcon::State) const ) &QIcon::paint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:138
// [8] QIcon::DataPtr & data_ptr() 
// (12)qm2921323421 (20)_ZN5QIcon8data_ptrEv
//static
/*void qm2921323421()*/ {
  ;
  (void) ((QIcon*)this_)->data_ptr();
   auto xptr = (QIconPrivate *& (QIcon::*)() ) &QIcon::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QIconD2Ev(void *this_)*/ {
  delete (QIcon*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qicon
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
