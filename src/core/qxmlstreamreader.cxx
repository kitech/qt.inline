//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamReader is pure virtual: false
// QXmlStreamReader has virtual projected: false
//  header block end

//  main block begin

class MyQXmlStreamReader : public QXmlStreamReader {
public:
  virtual ~MyQXmlStreamReader() {}
// void QXmlStreamReader()
MyQXmlStreamReader() : QXmlStreamReader() {}
// void QXmlStreamReader(class QIODevice *)
MyQXmlStreamReader(QIODevice * device) : QXmlStreamReader(device) {}
// void QXmlStreamReader(const class QByteArray &)
MyQXmlStreamReader(const QByteArray & data) : QXmlStreamReader(data) {}
// void QXmlStreamReader(const class QString &)
MyQXmlStreamReader(const QString & data) : QXmlStreamReader(data) {}
// void QXmlStreamReader(const char *)
MyQXmlStreamReader(const char * data) : QXmlStreamReader(data) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:360
// [-2] void QXmlStreamReader()
extern "C"
void* C_ZN16QXmlStreamReaderC2Ev() {
  return  new QXmlStreamReader();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:361
// [-2] void QXmlStreamReader(class QIODevice *)
extern "C"
void* C_ZN16QXmlStreamReaderC2EP9QIODevice(QIODevice * device) {
  return  new QXmlStreamReader(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:362
// [-2] void QXmlStreamReader(const class QByteArray &)
extern "C"
void* C_ZN16QXmlStreamReaderC2ERK10QByteArray(QByteArray* data) {
  return  new QXmlStreamReader(*data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:363
// [-2] void QXmlStreamReader(const class QString &)
extern "C"
void* C_ZN16QXmlStreamReaderC2ERK7QString(QString* data) {
  return  new QXmlStreamReader(*data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:364
// [-2] void QXmlStreamReader(const char *)
extern "C"
void* C_ZN16QXmlStreamReaderC2EPKc(const char * data) {
  return  new QXmlStreamReader(data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:365
// [-2] void ~QXmlStreamReader()
extern "C"
void C_ZN16QXmlStreamReaderD2Ev(void *this_) {
  delete (QXmlStreamReader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:367
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN16QXmlStreamReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QXmlStreamReader*)this_)->setDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:368
// [8] QIODevice * device()
extern "C"
void* C_ZNK16QXmlStreamReader6deviceEv(void *this_) {
  return (void*)((QXmlStreamReader*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:369
// [-2] void addData(const class QByteArray &)
extern "C"
void C_ZN16QXmlStreamReader7addDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QXmlStreamReader*)this_)->addData(*data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:370
// [-2] void addData(const class QString &)
extern "C"
void C_ZN16QXmlStreamReader7addDataERK7QString(void *this_, QString* data) {
  ((QXmlStreamReader*)this_)->addData(*data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:371
// [-2] void addData(const char *)
extern "C"
void C_ZN16QXmlStreamReader7addDataEPKc(void *this_, const char * data) {
  ((QXmlStreamReader*)this_)->addData(data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:372
// [-2] void clear()
extern "C"
void C_ZN16QXmlStreamReader5clearEv(void *this_) {
  ((QXmlStreamReader*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:375
// [1] bool atEnd()
extern "C"
bool C_ZNK16QXmlStreamReader5atEndEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->atEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:376
// [4] QXmlStreamReader::TokenType readNext()
extern "C"
QXmlStreamReader::TokenType C_ZN16QXmlStreamReader8readNextEv(void *this_) {
  return (QXmlStreamReader::TokenType)((QXmlStreamReader*)this_)->readNext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:378
// [1] bool readNextStartElement()
extern "C"
bool C_ZN16QXmlStreamReader20readNextStartElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->readNextStartElement();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:379
// [-2] void skipCurrentElement()
extern "C"
void C_ZN16QXmlStreamReader18skipCurrentElementEv(void *this_) {
  ((QXmlStreamReader*)this_)->skipCurrentElement();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:381
// [4] QXmlStreamReader::TokenType tokenType()
extern "C"
QXmlStreamReader::TokenType C_ZNK16QXmlStreamReader9tokenTypeEv(void *this_) {
  return (QXmlStreamReader::TokenType)((QXmlStreamReader*)this_)->tokenType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:382
// [8] QString tokenString()
extern "C"
void* C_ZNK16QXmlStreamReader11tokenStringEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->tokenString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:384
// [-2] void setNamespaceProcessing(_Bool)
extern "C"
void C_ZN16QXmlStreamReader22setNamespaceProcessingEb(void *this_, bool arg0) {
  ((QXmlStreamReader*)this_)->setNamespaceProcessing(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:385
// [1] bool namespaceProcessing()
extern "C"
bool C_ZNK16QXmlStreamReader19namespaceProcessingEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->namespaceProcessing();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:387
// [1] bool isStartDocument()
extern "C"
bool C_ZNK16QXmlStreamReader15isStartDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStartDocument();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:388
// [1] bool isEndDocument()
extern "C"
bool C_ZNK16QXmlStreamReader13isEndDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEndDocument();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:389
// [1] bool isStartElement()
extern "C"
bool C_ZNK16QXmlStreamReader14isStartElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStartElement();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:390
// [1] bool isEndElement()
extern "C"
bool C_ZNK16QXmlStreamReader12isEndElementEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEndElement();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:391
// [1] bool isCharacters()
extern "C"
bool C_ZNK16QXmlStreamReader12isCharactersEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isCharacters();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:392
// [1] bool isWhitespace()
extern "C"
bool C_ZNK16QXmlStreamReader12isWhitespaceEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isWhitespace();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:393
// [1] bool isCDATA()
extern "C"
bool C_ZNK16QXmlStreamReader7isCDATAEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isCDATA();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:394
// [1] bool isComment()
extern "C"
bool C_ZNK16QXmlStreamReader9isCommentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isComment();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:395
// [1] bool isDTD()
extern "C"
bool C_ZNK16QXmlStreamReader5isDTDEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isDTD();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:396
// [1] bool isEntityReference()
extern "C"
bool C_ZNK16QXmlStreamReader17isEntityReferenceEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isEntityReference();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:397
// [1] bool isProcessingInstruction()
extern "C"
bool C_ZNK16QXmlStreamReader23isProcessingInstructionEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isProcessingInstruction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:399
// [1] bool isStandaloneDocument()
extern "C"
bool C_ZNK16QXmlStreamReader20isStandaloneDocumentEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->isStandaloneDocument();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:400
// [16] QStringRef documentVersion()
extern "C"
void* C_ZNK16QXmlStreamReader15documentVersionEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->documentVersion();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:401
// [16] QStringRef documentEncoding()
extern "C"
void* C_ZNK16QXmlStreamReader16documentEncodingEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->documentEncoding();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:403
// [8] qint64 lineNumber()
extern "C"
qint64 C_ZNK16QXmlStreamReader10lineNumberEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->lineNumber();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:404
// [8] qint64 columnNumber()
extern "C"
qint64 C_ZNK16QXmlStreamReader12columnNumberEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->columnNumber();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:405
// [8] qint64 characterOffset()
extern "C"
qint64 C_ZNK16QXmlStreamReader15characterOffsetEv(void *this_) {
  return (qint64)((QXmlStreamReader*)this_)->characterOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:407
// [8] QXmlStreamAttributes attributes()
extern "C"
void* C_ZNK16QXmlStreamReader10attributesEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->attributes();
return new QXmlStreamAttributes(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:414
// [8] QString readElementText(enum QXmlStreamReader::ReadElementTextBehaviour)
extern "C"
void* C_ZN16QXmlStreamReader15readElementTextENS_24ReadElementTextBehaviourE(void *this_, QXmlStreamReader::ReadElementTextBehaviour behaviour) {
  auto rv = ((QXmlStreamReader*)this_)->readElementText(behaviour);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:416
// [16] QStringRef name()
extern "C"
void* C_ZNK16QXmlStreamReader4nameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->name();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:417
// [16] QStringRef namespaceUri()
extern "C"
void* C_ZNK16QXmlStreamReader12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->namespaceUri();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:418
// [16] QStringRef qualifiedName()
extern "C"
void* C_ZNK16QXmlStreamReader13qualifiedNameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->qualifiedName();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:419
// [16] QStringRef prefix()
extern "C"
void* C_ZNK16QXmlStreamReader6prefixEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->prefix();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:421
// [16] QStringRef processingInstructionTarget()
extern "C"
void* C_ZNK16QXmlStreamReader27processingInstructionTargetEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->processingInstructionTarget();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:422
// [16] QStringRef processingInstructionData()
extern "C"
void* C_ZNK16QXmlStreamReader25processingInstructionDataEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->processingInstructionData();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:424
// [16] QStringRef text()
extern "C"
void* C_ZNK16QXmlStreamReader4textEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->text();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:427
// [-2] void addExtraNamespaceDeclaration(const class QXmlStreamNamespaceDeclaration &)
extern "C"
void C_ZN16QXmlStreamReader28addExtraNamespaceDeclarationERK30QXmlStreamNamespaceDeclaration(void *this_, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
  ((QXmlStreamReader*)this_)->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:431
// [16] QStringRef dtdName()
extern "C"
void* C_ZNK16QXmlStreamReader7dtdNameEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdName();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:432
// [16] QStringRef dtdPublicId()
extern "C"
void* C_ZNK16QXmlStreamReader11dtdPublicIdEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdPublicId();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:433
// [16] QStringRef dtdSystemId()
extern "C"
void* C_ZNK16QXmlStreamReader11dtdSystemIdEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->dtdSystemId();
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:443
// [-2] void raiseError(const class QString &)
extern "C"
void C_ZN16QXmlStreamReader10raiseErrorERK7QString(void *this_, QString* message) {
  ((QXmlStreamReader*)this_)->raiseError(*message);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:444
// [8] QString errorString()
extern "C"
void* C_ZNK16QXmlStreamReader11errorStringEv(void *this_) {
  auto rv = ((QXmlStreamReader*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:445
// [4] QXmlStreamReader::Error error()
extern "C"
QXmlStreamReader::Error C_ZNK16QXmlStreamReader5errorEv(void *this_) {
  return (QXmlStreamReader::Error)((QXmlStreamReader*)this_)->error();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:447
// [1] bool hasError()
extern "C"
bool C_ZNK16QXmlStreamReader8hasErrorEv(void *this_) {
  return (bool)((QXmlStreamReader*)this_)->hasError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:452
// [-2] void setEntityResolver(class QXmlStreamEntityResolver *)
extern "C"
void C_ZN16QXmlStreamReader17setEntityResolverEP24QXmlStreamEntityResolver(void *this_, QXmlStreamEntityResolver * resolver) {
  ((QXmlStreamReader*)this_)->setEntityResolver(resolver);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:453
// [8] QXmlStreamEntityResolver * entityResolver()
extern "C"
void* C_ZNK16QXmlStreamReader14entityResolverEv(void *this_) {
  return (void*)((QXmlStreamReader*)this_)->entityResolver();
}
//  main block end
