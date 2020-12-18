//  header block begin

// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStream is pure virtual: false false
// QTextStream has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextStream_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextStream_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextStream_t qt_meta_stringdata_MyQTextStream = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextStream"
  },
  "MyQTextStream"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextStream[] = {
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
class Q_DECL_EXPORT MyQTextStream : public QTextStream {
public:
  virtual ~MyQTextStream() {}
// void QTextStream()
MyQTextStream() : QTextStream() {}
// void QTextStream(QIODevice *)
MyQTextStream(QIODevice * device) : QTextStream(device) {}
// void QTextStream(FILE *, QIODevice::OpenMode)
MyQTextStream(FILE * fileHandle, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(fileHandle, openMode) {}
// void QTextStream(QString *, QIODevice::OpenMode)
MyQTextStream(QString * string, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(string, openMode) {}
// void QTextStream(QByteArray *, QIODevice::OpenMode)
MyQTextStream(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
// void QTextStream(const QByteArray &, QIODevice::OpenMode)
MyQTextStream(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextstream(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QTextStreamD2Ev(void *this_)*/ {
  delete (QTextStream*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextstream
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
