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


struct qt_meta_stringdata_MyQTextStreamManipulator_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextStreamManipulator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextStreamManipulator_t qt_meta_stringdata_MyQTextStreamManipulator = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQTextStreamManipulator"
  },
  "MyQTextStreamManipulator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextStreamManipulator[] = {
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
class Q_DECL_EXPORT MyQTextStreamManipulator : public QTextStreamManipulator {
public:
  virtual ~MyQTextStreamManipulator() {}
// void QTextStreamManipulator(QTSMFI, int)
MyQTextStreamManipulator(QTSMFI m, int a) : QTextStreamManipulator(m, a) {}
// void QTextStreamManipulator(QTSMFC, QChar)
MyQTextStreamManipulator(QTSMFC m, QChar c) : QTextStreamManipulator(m, c) {}
};

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
  this_ =  new MyQTextStreamManipulator(m, a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:217
// [-2] void QTextStreamManipulator(QTSMFC, QChar) 
// (12)qm3354470984 (56)_ZN22QTextStreamManipulatorC2EM11QTextStreamFv5QCharES1_
/*void* qm3354470984(QTSMFC m, QChar c)*/{
  QTSMFC m = *(QTSMFC*)this_; QChar c = *(QChar*)this_;
  this_ =  new QTextStreamManipulator(m, c);
  this_ =  new MyQTextStreamManipulator(m, c);
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
