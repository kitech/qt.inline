//  header block begin
// /usr/include/qt/QtGui/qtextdocumentwriter.h
#include <qtextdocumentwriter.h>
#include <QtGui>

// QTextDocumentWriter is pure virtual: false
//  header block end

//  main block begin

class MyQTextDocumentWriter : public QTextDocumentWriter {
public:
MyQTextDocumentWriter() : QTextDocumentWriter() {}
MyQTextDocumentWriter(QIODevice * device, const QByteArray & format) : QTextDocumentWriter(device, format) {}
MyQTextDocumentWriter(const QString & fileName, const QByteArray & format) : QTextDocumentWriter(fileName, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:57
// [-2] void QTextDocumentWriter()
extern "C"
void* C_ZN19QTextDocumentWriterC1Ev() {
  (MyQTextDocumentWriter*)(0);
  return  new MyQTextDocumentWriter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:58
// [-2] void QTextDocumentWriter(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC1EP9QIODeviceRK10QByteArray(QIODevice * device, const QByteArray & format) {
  (MyQTextDocumentWriter*)(0);
  return  new MyQTextDocumentWriter(device, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:59
// [-2] void QTextDocumentWriter(const class QString &, const class QByteArray &)
extern "C"
void* C_ZN19QTextDocumentWriterC1ERK7QStringRK10QByteArray(const QString & fileName, const QByteArray & format) {
  (MyQTextDocumentWriter*)(0);
  return  new MyQTextDocumentWriter(fileName, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:60
// [-2] void ~QTextDocumentWriter()
extern "C"
void C_ZN19QTextDocumentWriterD1Ev(void *this_) {
  delete (QTextDocumentWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:62
// [-2] void setFormat(const class QByteArray &)
extern "C"
void C_ZN19QTextDocumentWriter9setFormatERK10QByteArray(void *this_, const QByteArray & format) {
  ((QTextDocumentWriter*)this_)->setFormat(format);
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
void C_ZN19QTextDocumentWriter11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QTextDocumentWriter*)this_)->setFileName(fileName);
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
bool C_ZN19QTextDocumentWriter5writeERK21QTextDocumentFragment(void *this_, const QTextDocumentFragment & fragment) {
  return (bool)((QTextDocumentWriter*)this_)->write(fragment);
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
