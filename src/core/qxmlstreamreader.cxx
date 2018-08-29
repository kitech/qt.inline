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

// QXmlStreamReader is pure virtual: false
// QXmlStreamReader has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQXmlStreamReader_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamReader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamReader_t qt_meta_stringdata_MyQXmlStreamReader = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQXmlStreamReader"
  },
  "MyQXmlStreamReader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamReader[] = {
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
class Q_DECL_EXPORT MyQXmlStreamReader : public QXmlStreamReader {
public:
  virtual ~MyQXmlStreamReader() {}
// void QXmlStreamReader()
MyQXmlStreamReader() : QXmlStreamReader() {}
// void QXmlStreamReader(QIODevice *)
MyQXmlStreamReader(QIODevice * device) : QXmlStreamReader(device) {}
// void QXmlStreamReader(const QByteArray &)
MyQXmlStreamReader(const QByteArray & data) : QXmlStreamReader(data) {}
// void QXmlStreamReader(const QString &)
MyQXmlStreamReader(const QString & data) : QXmlStreamReader(data) {}
// void QXmlStreamReader(const char *)
MyQXmlStreamReader(const char * data) : QXmlStreamReader(data) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:360
// [-2] void QXmlStreamReader()
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReaderC2Ev() {
  return  new QXmlStreamReader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:361
// [-2] void QXmlStreamReader(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReaderC2EP9QIODevice(QIODevice * device) {
  return  new QXmlStreamReader(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:362
// [-2] void QXmlStreamReader(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReaderC2ERK10QByteArray(QByteArray* data) {
  return  new QXmlStreamReader(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:363
// [-2] void QXmlStreamReader(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReaderC2ERK7QString(QString* data) {
  return  new QXmlStreamReader(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:364
// [-2] void QXmlStreamReader(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReaderC2EPKc(const char * data) {
  return  new QXmlStreamReader(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:365
// [-2] void ~QXmlStreamReader()
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReaderD2Ev(void *this_) {
  delete (QXmlStreamReader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:367
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QXmlStreamReader*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:368
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader6deviceEv(void *this_) {
  return (void*)((QXmlStreamReader*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:369
// [-2] void addData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader7addDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QXmlStreamReader*)this_)->addData(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:370
// [-2] void addData(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader7addDataERK7QString(void *this_, QString* data) {
  ((QXmlStreamReader*)this_)->addData(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:371
// [-2] void addData(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader7addDataEPKc(void *this_, const char * data) {
  ((QXmlStreamReader*)this_)->addData(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:372
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader5clearEv(void *this_) {
  ((QXmlStreamReader*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:375
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader5atEndEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:376
// [4] QXmlStreamReader::TokenType readNext()
extern "C" Q_DECL_EXPORT
QXmlStreamReader::TokenType C_ZN16QXmlStreamReader8readNextEv(void *this_) {
  return (QXmlStreamReader::TokenType)((QXmlStreamReader*)this_)->readNext();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qxmlstream.h:378
// [1] bool readNextStartElement()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZN16QXmlStreamReader20readNextStartElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->readNextStartElement();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qxmlstream.h:379
// [-2] void skipCurrentElement()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader18skipCurrentElementEv(void *this_) {
  ((QXmlStreamReader*)this_)->skipCurrentElement();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:381
// [4] QXmlStreamReader::TokenType tokenType()
extern "C" Q_DECL_EXPORT
QXmlStreamReader::TokenType C_ZNK16QXmlStreamReader9tokenTypeEv(void *this_) {
  return (QXmlStreamReader::TokenType)((QXmlStreamReader*)this_)->tokenType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:382
// [8] QString tokenString()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader11tokenStringEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->tokenString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:384
// [-2] void setNamespaceProcessing(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader22setNamespaceProcessingEb(void *this_, bool arg0) {
  ((QXmlStreamReader*)this_)->setNamespaceProcessing(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:385
// [1] bool namespaceProcessing()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader19namespaceProcessingEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->namespaceProcessing();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:387
// [1] bool isStartDocument()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader15isStartDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStartDocument();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:388
// [1] bool isEndDocument()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader13isEndDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEndDocument();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:389
// [1] bool isStartElement()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader14isStartElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStartElement();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:390
// [1] bool isEndElement()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader12isEndElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEndElement();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:391
// [1] bool isCharacters()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader12isCharactersEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isCharacters();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:392
// [1] bool isWhitespace()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader12isWhitespaceEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isWhitespace();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:393
// [1] bool isCDATA()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader7isCDATAEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isCDATA();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:394
// [1] bool isComment()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader9isCommentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isComment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:395
// [1] bool isDTD()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader5isDTDEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isDTD();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:396
// [1] bool isEntityReference()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader17isEntityReferenceEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEntityReference();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:397
// [1] bool isProcessingInstruction()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader23isProcessingInstructionEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isProcessingInstruction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:399
// [1] bool isStandaloneDocument()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader20isStandaloneDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStandaloneDocument();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:400
// [16] QStringRef documentVersion()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader15documentVersionEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->documentVersion();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:401
// [16] QStringRef documentEncoding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader16documentEncodingEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->documentEncoding();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:403
// [8] qint64 lineNumber()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QXmlStreamReader10lineNumberEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->lineNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:404
// [8] qint64 columnNumber()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QXmlStreamReader12columnNumberEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->columnNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:405
// [8] qint64 characterOffset()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK16QXmlStreamReader15characterOffsetEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->characterOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:407
// [8] QXmlStreamAttributes attributes()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader10attributesEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->attributes();
return new QXmlStreamAttributes(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:414
// [8] QString readElementText(QXmlStreamReader::ReadElementTextBehaviour)
extern "C" Q_DECL_EXPORT
void* C_ZN16QXmlStreamReader15readElementTextENS_24ReadElementTextBehaviourE(void *this_, QXmlStreamReader::ReadElementTextBehaviour behaviour) {
  auto rv = ((QXmlStreamReader*)this_)->readElementText(behaviour);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:416
// [16] QStringRef name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader4nameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->name();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:417
// [16] QStringRef namespaceUri()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->namespaceUri();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:418
// [16] QStringRef qualifiedName()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader13qualifiedNameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->qualifiedName();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:419
// [16] QStringRef prefix()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader6prefixEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->prefix();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:421
// [16] QStringRef processingInstructionTarget()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader27processingInstructionTargetEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->processingInstructionTarget();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:422
// [16] QStringRef processingInstructionData()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader25processingInstructionDataEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->processingInstructionData();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:424
// [16] QStringRef text()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader4textEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->text();
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:426
// [-2] QXmlStreamNamespaceDeclarations namespaceDeclarations()
extern "C" Q_DECL_EXPORT
QXmlStreamNamespaceDeclarations* C_ZNK16QXmlStreamReader21namespaceDeclarationsEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->namespaceDeclarations();
return new QXmlStreamNamespaceDeclarations(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:427
// [-2] void addExtraNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader28addExtraNamespaceDeclarationERK30QXmlStreamNamespaceDeclaration(void *this_, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
  ((QXmlStreamReader*)this_)->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:428
// [-2] void addExtraNamespaceDeclarations(const QXmlStreamNamespaceDeclarations &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader29addExtraNamespaceDeclarationsERK7QVectorI30QXmlStreamNamespaceDeclarationE(void *this_, const QXmlStreamNamespaceDeclarations & extraNamespaceDeclaractions) {
  ((QXmlStreamReader*)this_)->addExtraNamespaceDeclarations(extraNamespaceDeclaractions);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:429
// [-2] QXmlStreamNotationDeclarations notationDeclarations()
extern "C" Q_DECL_EXPORT
QXmlStreamNotationDeclarations* C_ZNK16QXmlStreamReader20notationDeclarationsEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->notationDeclarations();
return new QXmlStreamNotationDeclarations(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:430
// [-2] QXmlStreamEntityDeclarations entityDeclarations()
extern "C" Q_DECL_EXPORT
QXmlStreamEntityDeclarations* C_ZNK16QXmlStreamReader18entityDeclarationsEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->entityDeclarations();
return new QXmlStreamEntityDeclarations(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:431
// [16] QStringRef dtdName()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader7dtdNameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdName();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:432
// [16] QStringRef dtdPublicId()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader11dtdPublicIdEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdPublicId();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:433
// [16] QStringRef dtdSystemId()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader11dtdSystemIdEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdSystemId();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:443
// [-2] void raiseError(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader10raiseErrorERK7QString(void *this_, QString* message) {
  ((QXmlStreamReader*)this_)->raiseError(*message);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:444
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader11errorStringEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:445
// [4] QXmlStreamReader::Error error()
extern "C" Q_DECL_EXPORT
QXmlStreamReader::Error C_ZNK16QXmlStreamReader5errorEv(void *this_) {
  return (QXmlStreamReader::Error)((QXmlStreamReader*)this_)->error();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:447
// [1] bool hasError()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QXmlStreamReader8hasErrorEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->hasError();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:452
// [-2] void setEntityResolver(QXmlStreamEntityResolver *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN16QXmlStreamReader17setEntityResolverEP24QXmlStreamEntityResolver(void *this_, QXmlStreamEntityResolver * resolver) {
  ((QXmlStreamReader*)this_)->setEntityResolver(resolver);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:453
// [8] QXmlStreamEntityResolver * entityResolver()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK16QXmlStreamReader14entityResolverEv(void *this_) {
  return (void*)((QXmlStreamReader*)this_)->entityResolver();
}
#endif // QT_VERSION >= 0x040400

//  main block end
