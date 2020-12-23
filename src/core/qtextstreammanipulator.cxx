//  header block begin

// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStreamManipulator is pure virtual: false false
// QTextStreamManipulator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextstreammanipulator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:216
// [-2] void QTextStreamManipulator(QTSMFI, int) 
// (12)qm3319755925 (49)_ZN22QTextStreamManipulatorC2EM11QTextStreamFviEi
/*void* qm3319755925(QTSMFI m, int a)*/{
  QTSMFI m = *(QTSMFI*)this_; int a = *(int*)this_;
  this_ =  new QTextStreamManipulator(m, a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:217
// [-2] void QTextStreamManipulator(QTSMFC, QChar) 
// (12)qm3354470984 (56)_ZN22QTextStreamManipulatorC2EM11QTextStreamFv5QCharES1_
/*void* qm3354470984(QTSMFC m, QChar c)*/{
  QTSMFC m = *(QTSMFC*)this_; QChar c = *(QChar*)this_;
  this_ =  new QTextStreamManipulator(m, c);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:218
// [-2] void exec(QTextStream &) 
// (12)qm3932411176 (47)_ZN22QTextStreamManipulator4execER11QTextStream
//static
/*void qm3932411176(QTextStream & s)*/ {
  QTextStream & s = *(QTextStream *)this_;
  (void) ((QTextStreamManipulator*)this_)->exec(s);
   auto xptr = (void (QTextStreamManipulator::*)(QTextStream&) ) &QTextStreamManipulator::exec;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QTextStreamManipulatorD2Ev(void *this_)*/ {
  delete (QTextStreamManipulator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextstreammanipulator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
