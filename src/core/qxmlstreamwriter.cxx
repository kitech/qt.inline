//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamWriter is pure virtual: false false
// QXmlStreamWriter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQXmlStreamWriter_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamWriter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamWriter_t qt_meta_stringdata_MyQXmlStreamWriter = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQXmlStreamWriter"
  },
  "MyQXmlStreamWriter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamWriter[] = {
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
class Q_DECL_EXPORT MyQXmlStreamWriter : public QXmlStreamWriter {
public:
  virtual ~MyQXmlStreamWriter() {}
// void QXmlStreamWriter()
MyQXmlStreamWriter() : QXmlStreamWriter() {}
// void QXmlStreamWriter(QIODevice *)
MyQXmlStreamWriter(QIODevice * device) : QXmlStreamWriter(device) {}
// void QXmlStreamWriter(QByteArray *)
MyQXmlStreamWriter(QByteArray * array) : QXmlStreamWriter(array) {}
// void QXmlStreamWriter(QString *)
MyQXmlStreamWriter(QString * string) : QXmlStreamWriter(string) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamwriter(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN16QXmlStreamWriterD2Ev(void *this_)*/ {
  delete (QXmlStreamWriter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamwriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
