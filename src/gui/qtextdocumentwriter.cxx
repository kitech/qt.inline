//  header block begin

// /usr/include/qt/QtGui/qtextdocumentwriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentWriter is pure virtual: false false
// QTextDocumentWriter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextDocumentWriter_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextDocumentWriter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextDocumentWriter_t qt_meta_stringdata_MyQTextDocumentWriter = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQTextDocumentWriter"
  },
  "MyQTextDocumentWriter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextDocumentWriter[] = {
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
class Q_DECL_EXPORT MyQTextDocumentWriter : public QTextDocumentWriter {
public:
  virtual ~MyQTextDocumentWriter() {}
// void QTextDocumentWriter()
MyQTextDocumentWriter() : QTextDocumentWriter() {}
// void QTextDocumentWriter(QIODevice *, const QByteArray &)
MyQTextDocumentWriter(QIODevice * device, const QByteArray & format) : QTextDocumentWriter(device, format) {}
// void QTextDocumentWriter(const QString &, const QByteArray &)
MyQTextDocumentWriter(const QString & fileName, const QByteArray & format) : QTextDocumentWriter(fileName, format) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdocumentwriter(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN19QTextDocumentWriterD2Ev(void *this_)*/ {
  delete (QTextDocumentWriter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdocumentwriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
