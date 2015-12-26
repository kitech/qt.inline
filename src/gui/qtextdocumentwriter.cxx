// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qtextdocumentwriter.h
// dst-file: /src/gui/qtextdocumentwriter.cxx
//

// header block begin =>
#include <qtextdocumentwriter.h>

extern "C" {

int QTextDocumentWriter_Class_Size()
{
  return sizeof(QTextDocumentWriter);
}

// QTextDocumentWriter(class QIODevice *, const class QByteArray &)
QTextDocumentWriter* dector_ZN19QTextDocumentWriterC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format)
{
  // static_assert(sizeof(QTextDocumentWriter) == 32, "tyszerr");
  QTextDocumentWriter* rthis = new QTextDocumentWriter(device, format);
  return rthis;
}

// QTextDocumentWriter(const class QString &, const class QByteArray &)
QTextDocumentWriter* dector_ZN19QTextDocumentWriterC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format)
{
  // static_assert(sizeof(QTextDocumentWriter) == 32, "tyszerr");
  QTextDocumentWriter* rthis = new QTextDocumentWriter(fileName, format);
  return rthis;
}

// QTextDocumentWriter()
QTextDocumentWriter* dector_ZN19QTextDocumentWriterC1Ev()
{
  // static_assert(sizeof(QTextDocumentWriter) == 32, "tyszerr");
  QTextDocumentWriter* rthis = new QTextDocumentWriter();
  return rthis;
}

// ~QTextDocumentWriter()
void dedtor_ZN19QTextDocumentWriterD0Ev(QTextDocumentWriter* that)
{
  QTextDocumentWriter* rthis = (QTextDocumentWriter*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

