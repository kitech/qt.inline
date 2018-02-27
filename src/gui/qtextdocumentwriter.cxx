//  header block begin
// /usr/include/qt/QtGui/qtextdocumentwriter.h
#ifndef protected
#define protected public
#endif
#include <qtextdocumentwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentWriter is pure virtual: false
// QTextDocumentWriter has virtual projected: false
//  header block end

//  main block begin

class MyQTextDocumentWriter : public QTextDocumentWriter {
public:
  virtual ~MyQTextDocumentWriter() {}
// void QTextDocumentWriter()
MyQTextDocumentWriter() : QTextDocumentWriter() {}
// void QTextDocumentWriter(class QIODevice *, const class QByteArray &)
MyQTextDocumentWriter(QIODevice * device, const QByteArray & format) : QTextDocumentWriter(device, format) {}
// void QTextDocumentWriter(const class QString &, const class QByteArray &)
MyQTextDocumentWriter(const QString & fileName, const QByteArray & format) : QTextDocumentWriter(fileName, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:57
// [-2] void QTextDocumentWriter()
extern "C"
void* C_ZN19QTextDocumentWriterC2Ev() {
  return  new QTextDocumentWriter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:58
// [-2] void QTextDocumentWriter(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC2EP9QIODeviceRK10QByteArray(QIODevice * device, QByteArray* format) {
  return  new QTextDocumentWriter(device, *format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:59
// [-2] void QTextDocumentWriter(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC2ERK7QStringRK10QByteArray(QString* fileName, QByteArray* format) {
  return  new QTextDocumentWriter(*fileName, *format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:60
// [-2] void ~QTextDocumentWriter()
extern "C"
void C_ZN19QTextDocumentWriterD2Ev(void *this_) {
  delete (QTextDocumentWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:62
// [-2] void setFormat(const class QByteArray &)
extern "C"
void C_ZN19QTextDocumentWriter9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QTextDocumentWriter*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:63
// [8] QByteArray format()
extern "C"
void* C_ZNK19QTextDocumentWriter6formatEv(void *this_) {
  auto rv = ((QTextDocumentWriter*)this_)->format();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:65
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN19QTextDocumentWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextDocumentWriter*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:66
// [8] QIODevice * device()
extern "C"
void* C_ZNK19QTextDocumentWriter6deviceEv(void *this_) {
  return (void*)((QTextDocumentWriter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:67
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN19QTextDocumentWriter11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QTextDocumentWriter*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:68
// [8] QString fileName()
extern "C"
void* C_ZNK19QTextDocumentWriter8fileNameEv(void *this_) {
  auto rv = ((QTextDocumentWriter*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:70
// [1] bool write(const class QTextDocument *)
extern "C"
bool C_ZN19QTextDocumentWriter5writeEPK13QTextDocument(void *this_, const QTextDocument * document) {
  return (bool)((QTextDocumentWriter*)this_)->write(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:71
// [1] bool write(const class QTextDocumentFragment &)
extern "C"
bool C_ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment(void *this_, QTextDocumentFragment* fragment) {
  return (bool)((QTextDocumentWriter*)this_)->write(*fragment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:74
// [-2] void setCodec(class QTextCodec *)
extern "C"
void C_ZN19QTextDocumentWriter8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextDocumentWriter*)this_)->setCodec(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:75
// [8] QTextCodec * codec()
extern "C"
void* C_ZNK19QTextDocumentWriter5codecEv(void *this_) {
  return (void*)((QTextDocumentWriter*)this_)->codec();
}

//  main block end
