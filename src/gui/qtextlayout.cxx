//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLayout is pure virtual: false false
// QTextLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:108
// [-2] void QTextLayout() 
// (12)qm2112850331 (20)_ZN11QTextLayoutC2Ev
/*void* qm2112850331()*/{
  ;
  this_ =  new QTextLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:109
// [-2] void QTextLayout(const QString &) 
// (12)qm2564951670 (29)_ZN11QTextLayoutC2ERK7QString
/*void* qm2564951670(const QString & text)*/{
  const QString & text = *(const QString *)this_;
  this_ =  new QTextLayout(text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:111
// [-2] void QTextLayout(const QString &, const QFont &, QPaintDevice *) 
// (12)qm3878359469 (52)_ZN11QTextLayoutC2ERK7QStringRK5QFontP12QPaintDevice
/*void* qm3878359469(const QString & text, const QFont & font, QPaintDevice * paintdevice)*/{
  const QString & text = *(const QString *)this_; const QFont & font = *(const QFont *)this_; QPaintDevice * paintdevice = *(QPaintDevice **)this_;
  this_ =  new QTextLayout(text, font, paintdevice);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:123
// [-2] void QTextLayout(const QTextBlock &) 
// (12)qm3036762907 (33)_ZN11QTextLayoutC2ERK10QTextBlock
/*void* qm3036762907(const QTextBlock & b)*/{
  const QTextBlock & b = *(const QTextBlock *)this_;
  this_ =  new QTextLayout(b);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:205
// [8] QTextEngine * engine() const
// (12)qm1811354036 (26)_ZNK11QTextLayout6engineEv
//static
/*void qm1811354036()*/ {
  ;
  (void) ((QTextLayout*)this_)->engine();
   auto xptr = (QTextEngine * (QTextLayout::*)() const ) &QTextLayout::engine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextLayoutD2Ev(void *this_)*/ {
  delete (QTextLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
