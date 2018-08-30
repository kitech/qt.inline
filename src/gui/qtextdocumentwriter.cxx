//  header block begin
// since 0x040500
// /usr/include/qt/QtGui/qtextdocumentwriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentWriter is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:57
// [-2] void QTextDocumentWriter()
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextDocumentWriterC2Ev() {
  return  new QTextDocumentWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:58
// [-2] void QTextDocumentWriter(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextDocumentWriterC2EP9QIODeviceRK10QByteArray(QIODevice * device, QByteArray* format) {
  return  new QTextDocumentWriter(device, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:59
// [-2] void QTextDocumentWriter(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextDocumentWriterC2ERK7QStringRK10QByteArray(QString* fileName, QByteArray* format) {
  return  new QTextDocumentWriter(*fileName, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:60
// [-2] void ~QTextDocumentWriter()
extern "C" Q_DECL_EXPORT
void C_ZN19QTextDocumentWriterD2Ev(void *this_) {
  delete (QTextDocumentWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:62
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN19QTextDocumentWriter9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QTextDocumentWriter*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:63
// [8] QByteArray format()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QTextDocumentWriter6formatEv(void *this_) {
  auto rv = ((QTextDocumentWriter*)this_)->format();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:65
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN19QTextDocumentWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextDocumentWriter*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:66
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QTextDocumentWriter6deviceEv(void *this_) {
  return (void*)((QTextDocumentWriter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:67
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QTextDocumentWriter11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QTextDocumentWriter*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:68
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QTextDocumentWriter8fileNameEv(void *this_) {
  auto rv = ((QTextDocumentWriter*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:70
// [1] bool write(const QTextDocument *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QTextDocumentWriter5writeEPK13QTextDocument(void *this_, const QTextDocument * document) {
  return (bool)((QTextDocumentWriter*)this_)->write(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:71
// [1] bool write(const QTextDocumentFragment &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment(void *this_, QTextDocumentFragment* fragment) {
  return (bool)((QTextDocumentWriter*)this_)->write(*fragment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:74
// [-2] void setCodec(QTextCodec *)
extern "C" Q_DECL_EXPORT
void C_ZN19QTextDocumentWriter8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextDocumentWriter*)this_)->setCodec(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:75
// [8] QTextCodec * codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QTextDocumentWriter5codecEv(void *this_) {
  return (void*)((QTextDocumentWriter*)this_)->codec();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:78
// [8] QList<QByteArray> supportedDocumentFormats()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN19QTextDocumentWriter24supportedDocumentFormatsEv() {
  auto rv = QTextDocumentWriter::supportedDocumentFormats();
return new QList<QByteArray>(rv);
}

//  main block end
