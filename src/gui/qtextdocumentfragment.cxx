//  header block begin

// /usr/include/qt/QtGui/qtextdocumentfragment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentfragment.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentFragment is pure virtual: false false
// QTextDocumentFragment has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextDocumentFragment_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextDocumentFragment_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextDocumentFragment_t qt_meta_stringdata_MyQTextDocumentFragment = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQTextDocumentFragment"
  },
  "MyQTextDocumentFragment"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextDocumentFragment[] = {
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
class Q_DECL_EXPORT MyQTextDocumentFragment : public QTextDocumentFragment {
public:
  virtual ~MyQTextDocumentFragment() {}
// void QTextDocumentFragment()
MyQTextDocumentFragment() : QTextDocumentFragment() {}
// void QTextDocumentFragment(const QTextDocument *)
MyQTextDocumentFragment(const QTextDocument * document) : QTextDocumentFragment(document) {}
// void QTextDocumentFragment(const QTextCursor &)
MyQTextDocumentFragment(const QTextCursor & range_) : QTextDocumentFragment(range_) {}
// void QTextDocumentFragment(const QTextDocumentFragment &)
MyQTextDocumentFragment(const QTextDocumentFragment & rhs) : QTextDocumentFragment(rhs) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdocumentfragment(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN21QTextDocumentFragmentD2Ev(void *this_)*/ {
  delete (QTextDocumentFragment*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdocumentfragment
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
