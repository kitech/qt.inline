//  header block begin

// /usr/include/qt/QtGui/qtextcursor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcursor.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextCursor is pure virtual: false false
// QTextCursor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextCursor_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextCursor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextCursor_t qt_meta_stringdata_MyQTextCursor = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextCursor"
  },
  "MyQTextCursor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextCursor[] = {
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
class Q_DECL_EXPORT MyQTextCursor : public QTextCursor {
public:
  virtual ~MyQTextCursor() {}
// void QTextCursor()
MyQTextCursor() : QTextCursor() {}
// void QTextCursor(QTextDocument *)
MyQTextCursor(QTextDocument * document) : QTextCursor(document) {}
// void QTextCursor(QTextDocumentPrivate *, int)
MyQTextCursor(QTextDocumentPrivate * p, int pos) : QTextCursor(p, pos) {}
// void QTextCursor(QTextCursorPrivate *)
MyQTextCursor(QTextCursorPrivate * d) : QTextCursor(d) {}
// void QTextCursor(QTextFrame *)
MyQTextCursor(QTextFrame * frame) : QTextCursor(frame) {}
// void QTextCursor(const QTextBlock &)
MyQTextCursor(const QTextBlock & block) : QTextCursor(block) {}
// void QTextCursor(const QTextCursor &)
MyQTextCursor(const QTextCursor & cursor) : QTextCursor(cursor) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextcursor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:76
// [8] QTextCursor & operator=(QTextCursor &&) 
// (12)qm3099728667 (22)_ZN11QTextCursoraSEOS_
//static
/*void qm3099728667(QTextCursor && other)*/ {
  QTextCursor && other =  static_cast<QTextCursor &&>(*(QTextCursor *)this_);
  (void) ((QTextCursor*)this_)->operator=(other);
  // auto xptr = (QTextCursor & (QTextCursor::*)(QTextCursor&&) ) &QTextCursor::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:80
// [-2] void swap(QTextCursor &) 
// (12)qm1278742892 (25)_ZN11QTextCursor4swapERS_
//static
/*void qm1278742892(QTextCursor & other)*/ {
  QTextCursor & other = *(QTextCursor *)this_;
  (void) ((QTextCursor*)this_)->swap(other);
   auto xptr = (void (QTextCursor::*)(QTextCursor&) ) &QTextCursor::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextCursorD2Ev(void *this_)*/ {
  delete (QTextCursor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextcursor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
