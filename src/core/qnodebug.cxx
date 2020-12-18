//  header block begin

// /usr/include/qt/QtCore/qdebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdebug.h>
#include <QtCore>
#include "callback_inherit.h"

// QNoDebug is pure virtual: false false
// QNoDebug has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNoDebug_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNoDebug_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNoDebug_t qt_meta_stringdata_MyQNoDebug = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQNoDebug"
  },
  "MyQNoDebug"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNoDebug[] = {
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
class Q_DECL_EXPORT MyQNoDebug : public QNoDebug {
public:
  virtual ~MyQNoDebug() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnodebug(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:194
// [1] QNoDebug & operator<<(QTextStreamFunction) 
// (12)qm3648916213 (35)_ZN8QNoDebuglsEPFR11QTextStreamS1_E
//static
/*void qm3648916213(QTextStreamFunction arg0)*/ {
  QTextStreamFunction arg0 = *(QTextStreamFunction*)this_;
  (void) ((QNoDebug*)this_)->operator<<(arg0);
  // auto xptr = (QNoDebug & (QNoDebug::*)(QTextStream& (*)(QTextStream&)) ) &QNoDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:195
// [1] QNoDebug & operator<<(QTextStreamManipulator) 
// (12)qm3073361236 (39)_ZN8QNoDebuglsE22QTextStreamManipulator
//static
/*void qm3073361236(QTextStreamManipulator arg0)*/ {
  QTextStreamManipulator arg0 = *(QTextStreamManipulator*)this_;
  (void) ((QNoDebug*)this_)->operator<<(arg0);
  // auto xptr = (QNoDebug & (QNoDebug::*)(QTextStreamManipulator) ) &QNoDebug::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:196
// [1] QNoDebug & space() 
// (12)qm1673280650 (20)_ZN8QNoDebug5spaceEv
//static
/*void qm1673280650()*/ {
  ;
  (void) ((QNoDebug*)this_)->space();
   auto xptr = (QNoDebug & (QNoDebug::*)() ) &QNoDebug::space;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:197
// [1] QNoDebug & nospace() 
// (12)qm2095706633 (22)_ZN8QNoDebug7nospaceEv
//static
/*void qm2095706633()*/ {
  ;
  (void) ((QNoDebug*)this_)->nospace();
   auto xptr = (QNoDebug & (QNoDebug::*)() ) &QNoDebug::nospace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:198
// [1] QNoDebug & maybeSpace() 
// (11)qm819510395 (26)_ZN8QNoDebug10maybeSpaceEv
//static
/*void qm819510395()*/ {
  ;
  (void) ((QNoDebug*)this_)->maybeSpace();
   auto xptr = (QNoDebug & (QNoDebug::*)() ) &QNoDebug::maybeSpace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:199
// [1] QNoDebug & quote() 
// (12)qm3591400791 (20)_ZN8QNoDebug5quoteEv
//static
/*void qm3591400791()*/ {
  ;
  (void) ((QNoDebug*)this_)->quote();
   auto xptr = (QNoDebug & (QNoDebug::*)() ) &QNoDebug::quote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:200
// [1] QNoDebug & noquote() 
// (12)qm3376784340 (22)_ZN8QNoDebug7noquoteEv
//static
/*void qm3376784340()*/ {
  ;
  (void) ((QNoDebug*)this_)->noquote();
   auto xptr = (QNoDebug & (QNoDebug::*)() ) &QNoDebug::noquote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:201
// [1] QNoDebug & maybeQuote(const char) 
// (12)qm3903392077 (26)_ZN8QNoDebug10maybeQuoteEc
//static
/*void qm3903392077(const char arg0)*/ {
  const char arg0 = *(const char*)this_;
  (void) ((QNoDebug*)this_)->maybeQuote(arg0);
   auto xptr = (QNoDebug & (QNoDebug::*)(char) ) &QNoDebug::maybeQuote;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:202
// [1] QNoDebug & verbosity(int) 
// (12)qm1826172065 (24)_ZN8QNoDebug9verbosityEi
//static
/*void qm1826172065(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QNoDebug*)this_)->verbosity(arg0);
   auto xptr = (QNoDebug & (QNoDebug::*)(int) ) &QNoDebug::verbosity;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QNoDebugD2Ev(void *this_)*/ {
  delete (QNoDebug*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnodebug
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
