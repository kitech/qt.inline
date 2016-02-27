// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qtextdocumentwriter.h
// dst-file: /src/gui/qtextdocumentwriter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextdocumentwriter.h>


#include <qbytearray.h>
#include <qstring.h>
#include <qlist.h>
// <= header block end

// main block begin =>
void __keep_qtextdocumentwriter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextDocumentWriter_Class_Size()
{
  return sizeof(QTextDocumentWriter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 67, column 10>
//   // proto:  void QTextDocumentWriter::setCodec(QTextCodec * codec);
// _ZN19QTextDocumentWriter8setCodecEP10QTextCodec setCodec(class QTextCodec *)
extern "C"
void
C_ZN19QTextDocumentWriter8setCodecEP10QTextCodec(void *qthis,
QTextCodec * arg1) {
  ((QTextDocumentWriter*)qthis)->setCodec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 51, column 5>
//   // proto:  void QTextDocumentWriter::QTextDocumentWriter(QIODevice * device, const QByteArray & format);
extern "C"
QTextDocumentWriter*
C_ZN19QTextDocumentWriterC2EP9QIODeviceRK10QByteArray(QIODevice * arg1,
const QByteArray* arg2) {
  auto ret = new QTextDocumentWriter(arg1, *((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 60, column 10>
//   // proto:  void QTextDocumentWriter::setFileName(const QString & fileName);
// _ZN19QTextDocumentWriter11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN19QTextDocumentWriter11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QTextDocumentWriter*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 56, column 16>
//   // proto:  QByteArray QTextDocumentWriter::format();
// _ZNK19QTextDocumentWriter6formatEv format()
extern "C"
QByteArray*
C_ZNK19QTextDocumentWriter6formatEv(void *qthis) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->format();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 58, column 10>
//   // proto:  void QTextDocumentWriter::setDevice(QIODevice * device);
// _ZN19QTextDocumentWriter9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN19QTextDocumentWriter9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QTextDocumentWriter*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 52, column 14>
//   // proto:  void QTextDocumentWriter::QTextDocumentWriter(const QString & fileName, const QByteArray & format);
extern "C"
QTextDocumentWriter*
C_ZN19QTextDocumentWriterC2ERK7QStringRK10QByteArray(const QString* arg1,
const QByteArray* arg2) {
  auto ret = new QTextDocumentWriter(*((const QString*)arg1), *((const QByteArray*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 55, column 10>
//   // proto:  void QTextDocumentWriter::setFormat(const QByteArray & format);
// _ZN19QTextDocumentWriter9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZN19QTextDocumentWriter9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QTextDocumentWriter*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 63, column 10>
//   // proto:  bool QTextDocumentWriter::write(const QTextDocument * document);
// _ZN19QTextDocumentWriter5writeEPK13QTextDocument write(const class QTextDocument *)
extern "C"
bool
C_ZN19QTextDocumentWriter5writeEPK13QTextDocument(void *qthis,
const QTextDocument * arg1) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->write(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 64, column 10>
//   // proto:  bool QTextDocumentWriter::write(const QTextDocumentFragment & fragment);
// _ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment write(const class QTextDocumentFragment &)
extern "C"
bool
C_ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment(void *qthis,
const QTextDocumentFragment* arg1) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->write(*((const QTextDocumentFragment*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 50, column 5>
//   // proto:  void QTextDocumentWriter::QTextDocumentWriter();
extern "C"
QTextDocumentWriter*
C_ZN19QTextDocumentWriterC2Ev() {
  auto ret = new QTextDocumentWriter();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 68, column 17>
//   // proto:  QTextCodec * QTextDocumentWriter::codec();
// _ZNK19QTextDocumentWriter5codecEv codec()
extern "C"
void*
C_ZNK19QTextDocumentWriter5codecEv(void *qthis) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->codec();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 61, column 13>
//   // proto:  QString QTextDocumentWriter::fileName();
// _ZNK19QTextDocumentWriter8fileNameEv fileName()
extern "C"
QString*
C_ZNK19QTextDocumentWriter8fileNameEv(void *qthis) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 71, column 30>
//   // proto: static QList<QByteArray> QTextDocumentWriter::supportedDocumentFormats();
// _ZN19QTextDocumentWriter24supportedDocumentFormatsEv supportedDocumentFormats()
extern "C"
QList<QByteArray>*
C_ZN19QTextDocumentWriter24supportedDocumentFormatsEv() {
  auto ret =
  QTextDocumentWriter::supportedDocumentFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentwriter.h', line 59, column 16>
//   // proto:  QIODevice * QTextDocumentWriter::device();
// _ZNK19QTextDocumentWriter6deviceEv device()
extern "C"
void*
C_ZNK19QTextDocumentWriter6deviceEv(void *qthis) {
  auto ret =
  ((QTextDocumentWriter*)qthis)->device();
  return (void*)ret;
}
//   // proto:  void QTextDocumentWriter::~QTextDocumentWriter();
extern "C"
void C_ZN19QTextDocumentWriterD2Ev(void *qthis) {
  delete (QTextDocumentWriter*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

