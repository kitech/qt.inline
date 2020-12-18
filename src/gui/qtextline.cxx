//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLine is pure virtual: false false
// QTextLine has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextLine_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextLine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextLine_t qt_meta_stringdata_MyQTextLine = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTextLine"
  },
  "MyQTextLine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextLine[] = {
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
class Q_DECL_EXPORT MyQTextLine : public QTextLine {
public:
  virtual ~MyQTextLine() {}
// void QTextLine()
MyQTextLine() : QTextLine() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextline(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:225
// [-2] void QTextLine() 
// (12)qm1086167034 (17)_ZN9QTextLineC2Ev
/*void* qm1086167034()*/{
  ;
  this_ =  new QTextLine();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:226
// [1] bool isValid() const
// (12)qm1354655229 (24)_ZNK9QTextLine7isValidEv
//static
/*void qm1354655229()*/ {
  ;
  (void) ((QTextLine*)this_)->isValid();
   auto xptr = (bool (QTextLine::*)() const ) &QTextLine::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:255
// [8] qreal cursorToX(int, QTextLine::Edge) const
// (12)qm1562622942 (35)_ZNK9QTextLine9cursorToXEiNS_4EdgeE
//static
/*void qm1562622942(int cursorPos, QTextLine::Edge edge)*/ {
  int cursorPos = *(int*)this_; QTextLine::Edge edge = *(QTextLine::Edge*)this_;
  (void) ((QTextLine*)this_)->cursorToX(cursorPos, edge);
   auto xptr = (double (QTextLine::*)(int, QTextLine::Edge) const ) &QTextLine::cursorToX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:268
// [4] int lineNumber() const
// (12)qm3346137771 (28)_ZNK9QTextLine10lineNumberEv
//static
/*void qm3346137771()*/ {
  ;
  (void) ((QTextLine*)this_)->lineNumber();
   auto xptr = (int (QTextLine::*)() const ) &QTextLine::lineNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QTextLineD2Ev(void *this_)*/ {
  delete (QTextLine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextline
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
