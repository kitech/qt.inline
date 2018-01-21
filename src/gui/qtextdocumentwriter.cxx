//  header block begin
// /usr/include/qt/QtGui/qtextdocumentwriter.h
#include <qtextdocumentwriter.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextdocumentwriter.h:56
// void QTextDocumentWriter()
extern "C"
void* C_ZN19QTextDocumentWriterC1Ev() {
  return new QTextDocumentWriter();
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:57
// void QTextDocumentWriter(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format) {
  return new QTextDocumentWriter(device, format);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:58
// void QTextDocumentWriter(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format) {
  return new QTextDocumentWriter(fileName, format);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:59
// void ~QTextDocumentWriter()
extern "C"
void C_ZN19QTextDocumentWriterD1Ev(void *this_) {
  delete (QTextDocumentWriter*)(this_);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:61
// void setFormat(const class QByteArray &)
extern "C"
void C_ZN19QTextDocumentWriter9setFormatERK10QByteArray(void *this_, const QByteArray & format) {
  ((QTextDocumentWriter*)this_)->setFormat(format);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:62
// QByteArray format()
extern "C"
void C_ZNK19QTextDocumentWriter6formatEv(void *this_) {
  /*return*/ ((QTextDocumentWriter*)this_)->format();
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:64
// void setDevice(class QIODevice *)
extern "C"
void C_ZN19QTextDocumentWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextDocumentWriter*)this_)->setDevice(device);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:65
// QIODevice * device()
extern "C"
void C_ZNK19QTextDocumentWriter6deviceEv(void *this_) {
  /*return*/ ((QTextDocumentWriter*)this_)->device();
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:66
// void setFileName(const class QString &)
extern "C"
void C_ZN19QTextDocumentWriter11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QTextDocumentWriter*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:67
// QString fileName()
extern "C"
void C_ZNK19QTextDocumentWriter8fileNameEv(void *this_) {
  /*return*/ ((QTextDocumentWriter*)this_)->fileName();
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:69
// bool write(const class QTextDocument *)
extern "C"
void C_ZN19QTextDocumentWriter5writeEPK13QTextDocument(void *this_, const QTextDocument * document) {
  /*return*/ ((QTextDocumentWriter*)this_)->write(document);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:70
// bool write(const class QTextDocumentFragment &)
extern "C"
void C_ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment(void *this_, const QTextDocumentFragment & fragment) {
  /*return*/ ((QTextDocumentWriter*)this_)->write(fragment);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:73
// void setCodec(class QTextCodec *)
extern "C"
void C_ZN19QTextDocumentWriter8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextDocumentWriter*)this_)->setCodec(codec);
}
// /usr/include/qt/QtGui/qtextdocumentwriter.h:74
// QTextCodec * codec()
extern "C"
void C_ZNK19QTextDocumentWriter5codecEv(void *this_) {
  /*return*/ ((QTextDocumentWriter*)this_)->codec();
}
// static
// /usr/include/qt/QtGui/qtextdocumentwriter.h:77
// QList<QByteArray> supportedDocumentFormats()
extern "C"
void C_ZN19QTextDocumentWriter24supportedDocumentFormatsEv() {
  /*return*/ QTextDocumentWriter::supportedDocumentFormats();
}
//  main block end
