//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qxmlstream.h:472
// void QXmlStreamWriter()
extern "C"
void* C_ZN16QXmlStreamWriterC1Ev() {
  return new QXmlStreamWriter();
}
// /usr/include/qt/QtCore/qxmlstream.h:473
// void QXmlStreamWriter(class QIODevice *)
extern "C"
void* C_ZN16QXmlStreamWriterC1EP9QIODevice(QIODevice * device) {
  return new QXmlStreamWriter(device);
}
// /usr/include/qt/QtCore/qxmlstream.h:474
// void QXmlStreamWriter(class QByteArray *)
extern "C"
void* C_ZN16QXmlStreamWriterC1EP10QByteArray(QByteArray * array) {
  return new QXmlStreamWriter(array);
}
// /usr/include/qt/QtCore/qxmlstream.h:475
// void QXmlStreamWriter(class QString *)
extern "C"
void* C_ZN16QXmlStreamWriterC1EP7QString(QString * string) {
  return new QXmlStreamWriter(string);
}
// /usr/include/qt/QtCore/qxmlstream.h:476
// void ~QXmlStreamWriter()
extern "C"
void C_ZN16QXmlStreamWriterD1Ev(void *this_) {
  delete (QXmlStreamWriter*)(this_);
}
// /usr/include/qt/QtCore/qxmlstream.h:478
// void setDevice(class QIODevice *)
extern "C"
void C_ZN16QXmlStreamWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QXmlStreamWriter*)this_)->setDevice(device);
}
// /usr/include/qt/QtCore/qxmlstream.h:479
// QIODevice * device()
extern "C"
void C_ZNK16QXmlStreamWriter6deviceEv(void *this_) {
  /*return*/ ((QXmlStreamWriter*)this_)->device();
}
// /usr/include/qt/QtCore/qxmlstream.h:482
// void setCodec(class QTextCodec *)
extern "C"
void C_ZN16QXmlStreamWriter8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QXmlStreamWriter*)this_)->setCodec(codec);
}
// /usr/include/qt/QtCore/qxmlstream.h:483
// void setCodec(const char *)
extern "C"
void C_ZN16QXmlStreamWriter8setCodecEPKc(void *this_, const char * codecName) {
  ((QXmlStreamWriter*)this_)->setCodec(codecName);
}
// /usr/include/qt/QtCore/qxmlstream.h:484
// QTextCodec * codec()
extern "C"
void C_ZNK16QXmlStreamWriter5codecEv(void *this_) {
  /*return*/ ((QXmlStreamWriter*)this_)->codec();
}
// /usr/include/qt/QtCore/qxmlstream.h:487
// void setAutoFormatting(_Bool)
extern "C"
void C_ZN16QXmlStreamWriter17setAutoFormattingEb(void *this_, bool arg0) {
  ((QXmlStreamWriter*)this_)->setAutoFormatting(arg0);
}
// /usr/include/qt/QtCore/qxmlstream.h:488
// bool autoFormatting()
extern "C"
void C_ZNK16QXmlStreamWriter14autoFormattingEv(void *this_) {
  /*return*/ ((QXmlStreamWriter*)this_)->autoFormatting();
}
// /usr/include/qt/QtCore/qxmlstream.h:490
// void setAutoFormattingIndent(int)
extern "C"
void C_ZN16QXmlStreamWriter23setAutoFormattingIndentEi(void *this_, int spacesOrTabs) {
  ((QXmlStreamWriter*)this_)->setAutoFormattingIndent(spacesOrTabs);
}
// /usr/include/qt/QtCore/qxmlstream.h:491
// int autoFormattingIndent()
extern "C"
void C_ZNK16QXmlStreamWriter20autoFormattingIndentEv(void *this_) {
  /*return*/ ((QXmlStreamWriter*)this_)->autoFormattingIndent();
}
// /usr/include/qt/QtCore/qxmlstream.h:493
// void writeAttribute(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter14writeAttributeERK7QStringS2_(void *this_, const QString & qualifiedName, const QString & value) {
  ((QXmlStreamWriter*)this_)->writeAttribute(qualifiedName, value);
}
// /usr/include/qt/QtCore/qxmlstream.h:494
// void writeAttribute(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter14writeAttributeERK7QStringS2_S2_(void *this_, const QString & namespaceUri, const QString & name, const QString & value) {
  ((QXmlStreamWriter*)this_)->writeAttribute(namespaceUri, name, value);
}
// /usr/include/qt/QtCore/qxmlstream.h:495
// void writeAttribute(const class QXmlStreamAttribute &)
extern "C"
void C_ZN16QXmlStreamWriter14writeAttributeERK19QXmlStreamAttribute(void *this_, const QXmlStreamAttribute & attribute) {
  ((QXmlStreamWriter*)this_)->writeAttribute(attribute);
}
// /usr/include/qt/QtCore/qxmlstream.h:496
// void writeAttributes(const class QXmlStreamAttributes &)
extern "C"
void C_ZN16QXmlStreamWriter15writeAttributesERK20QXmlStreamAttributes(void *this_, const QXmlStreamAttributes & attributes) {
  ((QXmlStreamWriter*)this_)->writeAttributes(attributes);
}
// /usr/include/qt/QtCore/qxmlstream.h:498
// void writeCDATA(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter10writeCDATAERK7QString(void *this_, const QString & text) {
  ((QXmlStreamWriter*)this_)->writeCDATA(text);
}
// /usr/include/qt/QtCore/qxmlstream.h:499
// void writeCharacters(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter15writeCharactersERK7QString(void *this_, const QString & text) {
  ((QXmlStreamWriter*)this_)->writeCharacters(text);
}
// /usr/include/qt/QtCore/qxmlstream.h:500
// void writeComment(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter12writeCommentERK7QString(void *this_, const QString & text) {
  ((QXmlStreamWriter*)this_)->writeComment(text);
}
// /usr/include/qt/QtCore/qxmlstream.h:502
// void writeDTD(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter8writeDTDERK7QString(void *this_, const QString & dtd) {
  ((QXmlStreamWriter*)this_)->writeDTD(dtd);
}
// /usr/include/qt/QtCore/qxmlstream.h:504
// void writeEmptyElement(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter17writeEmptyElementERK7QString(void *this_, const QString & qualifiedName) {
  ((QXmlStreamWriter*)this_)->writeEmptyElement(qualifiedName);
}
// /usr/include/qt/QtCore/qxmlstream.h:505
// void writeEmptyElement(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter17writeEmptyElementERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  ((QXmlStreamWriter*)this_)->writeEmptyElement(namespaceUri, name);
}
// /usr/include/qt/QtCore/qxmlstream.h:507
// void writeTextElement(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter16writeTextElementERK7QStringS2_(void *this_, const QString & qualifiedName, const QString & text) {
  ((QXmlStreamWriter*)this_)->writeTextElement(qualifiedName, text);
}
// /usr/include/qt/QtCore/qxmlstream.h:508
// void writeTextElement(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter16writeTextElementERK7QStringS2_S2_(void *this_, const QString & namespaceUri, const QString & name, const QString & text) {
  ((QXmlStreamWriter*)this_)->writeTextElement(namespaceUri, name, text);
}
// /usr/include/qt/QtCore/qxmlstream.h:510
// void writeEndDocument()
extern "C"
void C_ZN16QXmlStreamWriter16writeEndDocumentEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeEndDocument();
}
// /usr/include/qt/QtCore/qxmlstream.h:511
// void writeEndElement()
extern "C"
void C_ZN16QXmlStreamWriter15writeEndElementEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeEndElement();
}
// /usr/include/qt/QtCore/qxmlstream.h:513
// void writeEntityReference(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter20writeEntityReferenceERK7QString(void *this_, const QString & name) {
  ((QXmlStreamWriter*)this_)->writeEntityReference(name);
}
// /usr/include/qt/QtCore/qxmlstream.h:514
// void writeNamespace(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter14writeNamespaceERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & prefix) {
  ((QXmlStreamWriter*)this_)->writeNamespace(namespaceUri, prefix);
}
// /usr/include/qt/QtCore/qxmlstream.h:515
// void writeDefaultNamespace(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter21writeDefaultNamespaceERK7QString(void *this_, const QString & namespaceUri) {
  ((QXmlStreamWriter*)this_)->writeDefaultNamespace(namespaceUri);
}
// /usr/include/qt/QtCore/qxmlstream.h:516
// void writeProcessingInstruction(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter26writeProcessingInstructionERK7QStringS2_(void *this_, const QString & target, const QString & data) {
  ((QXmlStreamWriter*)this_)->writeProcessingInstruction(target, data);
}
// /usr/include/qt/QtCore/qxmlstream.h:518
// void writeStartDocument()
extern "C"
void C_ZN16QXmlStreamWriter18writeStartDocumentEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeStartDocument();
}
// /usr/include/qt/QtCore/qxmlstream.h:519
// void writeStartDocument(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter18writeStartDocumentERK7QString(void *this_, const QString & version) {
  ((QXmlStreamWriter*)this_)->writeStartDocument(version);
}
// /usr/include/qt/QtCore/qxmlstream.h:520
// void writeStartDocument(const class QString &, _Bool)
extern "C"
void C_ZN16QXmlStreamWriter18writeStartDocumentERK7QStringb(void *this_, const QString & version, bool standalone) {
  ((QXmlStreamWriter*)this_)->writeStartDocument(version, standalone);
}
// /usr/include/qt/QtCore/qxmlstream.h:521
// void writeStartElement(const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter17writeStartElementERK7QString(void *this_, const QString & qualifiedName) {
  ((QXmlStreamWriter*)this_)->writeStartElement(qualifiedName);
}
// /usr/include/qt/QtCore/qxmlstream.h:522
// void writeStartElement(const class QString &, const class QString &)
extern "C"
void C_ZN16QXmlStreamWriter17writeStartElementERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  ((QXmlStreamWriter*)this_)->writeStartElement(namespaceUri, name);
}
// /usr/include/qt/QtCore/qxmlstream.h:525
// void writeCurrentToken(const class QXmlStreamReader &)
extern "C"
void C_ZN16QXmlStreamWriter17writeCurrentTokenERK16QXmlStreamReader(void *this_, const QXmlStreamReader & reader) {
  ((QXmlStreamWriter*)this_)->writeCurrentToken(reader);
}
// /usr/include/qt/QtCore/qxmlstream.h:528
// bool hasError()
extern "C"
void C_ZNK16QXmlStreamWriter8hasErrorEv(void *this_) {
  /*return*/ ((QXmlStreamWriter*)this_)->hasError();
}
//  main block end
