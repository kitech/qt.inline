//  header block begin

// since 0x040300
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamWriter is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:472
// [-2] void QXmlStreamWriter()
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamWriterC2Ev() {
  return  new QXmlStreamWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:473
// [-2] void QXmlStreamWriter(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamWriterC2EP9QIODevice(QIODevice * device) {
  return  new QXmlStreamWriter(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:474
// [-2] void QXmlStreamWriter(QByteArray *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamWriterC2EP10QByteArray(QByteArray * array) {
  return  new QXmlStreamWriter(array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:475
// [-2] void QXmlStreamWriter(QString *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamWriterC2EP7QString(QString * string) {
  return  new QXmlStreamWriter(string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:476
// [-2] void ~QXmlStreamWriter()
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriterD2Ev(void *this_) {
  delete (QXmlStreamWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:478
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QXmlStreamWriter*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:479
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamWriter6deviceEv(void *this_) {
  return (void*)((QXmlStreamWriter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:482
// [-2] void setCodec(QTextCodec *)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QXmlStreamWriter*)this_)->setCodec(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:483
// [-2] void setCodec(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter8setCodecEPKc(void *this_, const char * codecName) {
  ((QXmlStreamWriter*)this_)->setCodec(codecName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:484
// [8] QTextCodec * codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamWriter5codecEv(void *this_) {
  return (void*)((QXmlStreamWriter*)this_)->codec();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:487
// [-2] void setAutoFormatting(bool)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17setAutoFormattingEb(void *this_, bool arg0) {
  ((QXmlStreamWriter*)this_)->setAutoFormatting(arg0);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:488
// [1] bool autoFormatting()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamWriter14autoFormattingEv(void *this_) {
  return (bool)((QXmlStreamWriter*)this_)->autoFormatting();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:490
// [-2] void setAutoFormattingIndent(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter23setAutoFormattingIndentEi(void *this_, int spacesOrTabs) {
  ((QXmlStreamWriter*)this_)->setAutoFormattingIndent(spacesOrTabs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:491
// [4] int autoFormattingIndent()
extern "C" Q_DECL_EXPORT
int C_ZNK16QXmlStreamWriter20autoFormattingIndentEv(void *this_) {
  return (int)((QXmlStreamWriter*)this_)->autoFormattingIndent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:493
// [-2] void writeAttribute(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter14writeAttributeERK7QStringS2_(void *this_, QString* qualifiedName, QString* value) {
  ((QXmlStreamWriter*)this_)->writeAttribute(*qualifiedName, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:494
// [-2] void writeAttribute(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter14writeAttributeERK7QStringS2_S2_(void *this_, QString* namespaceUri, QString* name, QString* value) {
  ((QXmlStreamWriter*)this_)->writeAttribute(*namespaceUri, *name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:495
// [-2] void writeAttribute(const QXmlStreamAttribute &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter14writeAttributeERK19QXmlStreamAttribute(void *this_, QXmlStreamAttribute* attribute) {
  ((QXmlStreamWriter*)this_)->writeAttribute(*attribute);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:496
// [-2] void writeAttributes(const QXmlStreamAttributes &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter15writeAttributesERK20QXmlStreamAttributes(void *this_, QXmlStreamAttributes* attributes) {
  ((QXmlStreamWriter*)this_)->writeAttributes(*attributes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:498
// [-2] void writeCDATA(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter10writeCDATAERK7QString(void *this_, QString* text) {
  ((QXmlStreamWriter*)this_)->writeCDATA(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:499
// [-2] void writeCharacters(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter15writeCharactersERK7QString(void *this_, QString* text) {
  ((QXmlStreamWriter*)this_)->writeCharacters(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:500
// [-2] void writeComment(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter12writeCommentERK7QString(void *this_, QString* text) {
  ((QXmlStreamWriter*)this_)->writeComment(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:502
// [-2] void writeDTD(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter8writeDTDERK7QString(void *this_, QString* dtd) {
  ((QXmlStreamWriter*)this_)->writeDTD(*dtd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:504
// [-2] void writeEmptyElement(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17writeEmptyElementERK7QString(void *this_, QString* qualifiedName) {
  ((QXmlStreamWriter*)this_)->writeEmptyElement(*qualifiedName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:505
// [-2] void writeEmptyElement(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17writeEmptyElementERK7QStringS2_(void *this_, QString* namespaceUri, QString* name) {
  ((QXmlStreamWriter*)this_)->writeEmptyElement(*namespaceUri, *name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:507
// [-2] void writeTextElement(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter16writeTextElementERK7QStringS2_(void *this_, QString* qualifiedName, QString* text) {
  ((QXmlStreamWriter*)this_)->writeTextElement(*qualifiedName, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:508
// [-2] void writeTextElement(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter16writeTextElementERK7QStringS2_S2_(void *this_, QString* namespaceUri, QString* name, QString* text) {
  ((QXmlStreamWriter*)this_)->writeTextElement(*namespaceUri, *name, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:510
// [-2] void writeEndDocument()
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter16writeEndDocumentEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeEndDocument();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:511
// [-2] void writeEndElement()
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter15writeEndElementEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeEndElement();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:513
// [-2] void writeEntityReference(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter20writeEntityReferenceERK7QString(void *this_, QString* name) {
  ((QXmlStreamWriter*)this_)->writeEntityReference(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:514
// [-2] void writeNamespace(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter14writeNamespaceERK7QStringS2_(void *this_, QString* namespaceUri, QString* prefix) {
  ((QXmlStreamWriter*)this_)->writeNamespace(*namespaceUri, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:515
// [-2] void writeDefaultNamespace(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter21writeDefaultNamespaceERK7QString(void *this_, QString* namespaceUri) {
  ((QXmlStreamWriter*)this_)->writeDefaultNamespace(*namespaceUri);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:516
// [-2] void writeProcessingInstruction(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter26writeProcessingInstructionERK7QStringS2_(void *this_, QString* target, QString* data) {
  ((QXmlStreamWriter*)this_)->writeProcessingInstruction(*target, *data);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qxmlstream.h:518
// [-2] void writeStartDocument()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter18writeStartDocumentEv(void *this_) {
  ((QXmlStreamWriter*)this_)->writeStartDocument();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:519
// [-2] void writeStartDocument(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter18writeStartDocumentERK7QString(void *this_, QString* version) {
  ((QXmlStreamWriter*)this_)->writeStartDocument(*version);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qxmlstream.h:520
// [-2] void writeStartDocument(const QString &, bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter18writeStartDocumentERK7QStringb(void *this_, QString* version, bool standalone) {
  ((QXmlStreamWriter*)this_)->writeStartDocument(*version, standalone);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:521
// [-2] void writeStartElement(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17writeStartElementERK7QString(void *this_, QString* qualifiedName) {
  ((QXmlStreamWriter*)this_)->writeStartElement(*qualifiedName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:522
// [-2] void writeStartElement(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17writeStartElementERK7QStringS2_(void *this_, QString* namespaceUri, QString* name) {
  ((QXmlStreamWriter*)this_)->writeStartElement(*namespaceUri, *name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:525
// [-2] void writeCurrentToken(const QXmlStreamReader &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamWriter17writeCurrentTokenERK16QXmlStreamReader(void *this_, QXmlStreamReader* reader) {
  ((QXmlStreamWriter*)this_)->writeCurrentToken(*reader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:528
// [1] bool hasError()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamWriter8hasErrorEv(void *this_) {
  return (bool)((QXmlStreamWriter*)this_)->hasError();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
