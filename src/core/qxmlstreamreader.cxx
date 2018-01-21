//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qxmlstream.h:360
// void QXmlStreamReader()
extern "C"
void* C_ZN16QXmlStreamReaderC1Ev() {
  return new QXmlStreamReader();
}
// /usr/include/qt/QtCore/qxmlstream.h:361
// void QXmlStreamReader(class QIODevice *)
extern "C"
void* C_ZN16QXmlStreamReaderC1EP9QIODevice(QIODevice * device) {
  return new QXmlStreamReader(device);
}
// /usr/include/qt/QtCore/qxmlstream.h:362
// void QXmlStreamReader(const class QByteArray &)
extern "C"
void* C_ZN16QXmlStreamReaderC1ERK10QByteArray(const QByteArray & data) {
  return new QXmlStreamReader(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:363
// void QXmlStreamReader(const class QString &)
extern "C"
void* C_ZN16QXmlStreamReaderC1ERK7QString(const QString & data) {
  return new QXmlStreamReader(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:364
// void QXmlStreamReader(const char *)
extern "C"
void* C_ZN16QXmlStreamReaderC1EPKc(const char * data) {
  return new QXmlStreamReader(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:365
// void ~QXmlStreamReader()
extern "C"
void C_ZN16QXmlStreamReaderD1Ev(void *this_) {
  delete (QXmlStreamReader*)(this_);
}
// /usr/include/qt/QtCore/qxmlstream.h:367
// void setDevice(class QIODevice *)
extern "C"
void C_ZN16QXmlStreamReader9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QXmlStreamReader*)this_)->setDevice(device);
}
// /usr/include/qt/QtCore/qxmlstream.h:368
// QIODevice * device()
extern "C"
void C_ZNK16QXmlStreamReader6deviceEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->device();
}
// /usr/include/qt/QtCore/qxmlstream.h:369
// void addData(const class QByteArray &)
extern "C"
void C_ZN16QXmlStreamReader7addDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QXmlStreamReader*)this_)->addData(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:370
// void addData(const class QString &)
extern "C"
void C_ZN16QXmlStreamReader7addDataERK7QString(void *this_, const QString & data) {
  ((QXmlStreamReader*)this_)->addData(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:371
// void addData(const char *)
extern "C"
void C_ZN16QXmlStreamReader7addDataEPKc(void *this_, const char * data) {
  ((QXmlStreamReader*)this_)->addData(data);
}
// /usr/include/qt/QtCore/qxmlstream.h:372
// void clear()
extern "C"
void C_ZN16QXmlStreamReader5clearEv(void *this_) {
  ((QXmlStreamReader*)this_)->clear();
}
// /usr/include/qt/QtCore/qxmlstream.h:375
// bool atEnd()
extern "C"
void C_ZNK16QXmlStreamReader5atEndEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->atEnd();
}
// /usr/include/qt/QtCore/qxmlstream.h:376
// QXmlStreamReader::TokenType readNext()
extern "C"
void C_ZN16QXmlStreamReader8readNextEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->readNext();
}
// /usr/include/qt/QtCore/qxmlstream.h:378
// bool readNextStartElement()
extern "C"
void C_ZN16QXmlStreamReader20readNextStartElementEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->readNextStartElement();
}
// /usr/include/qt/QtCore/qxmlstream.h:379
// void skipCurrentElement()
extern "C"
void C_ZN16QXmlStreamReader18skipCurrentElementEv(void *this_) {
  ((QXmlStreamReader*)this_)->skipCurrentElement();
}
// /usr/include/qt/QtCore/qxmlstream.h:381
// QXmlStreamReader::TokenType tokenType()
extern "C"
void C_ZNK16QXmlStreamReader9tokenTypeEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->tokenType();
}
// /usr/include/qt/QtCore/qxmlstream.h:382
// QString tokenString()
extern "C"
void C_ZNK16QXmlStreamReader11tokenStringEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->tokenString();
}
// /usr/include/qt/QtCore/qxmlstream.h:384
// void setNamespaceProcessing(_Bool)
extern "C"
void C_ZN16QXmlStreamReader22setNamespaceProcessingEb(void *this_, bool arg0) {
  ((QXmlStreamReader*)this_)->setNamespaceProcessing(arg0);
}
// /usr/include/qt/QtCore/qxmlstream.h:385
// bool namespaceProcessing()
extern "C"
void C_ZNK16QXmlStreamReader19namespaceProcessingEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->namespaceProcessing();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:387
// bool isStartDocument()
extern "C"
void C_ZNK16QXmlStreamReader15isStartDocumentEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isStartDocument();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:388
// bool isEndDocument()
extern "C"
void C_ZNK16QXmlStreamReader13isEndDocumentEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isEndDocument();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:389
// bool isStartElement()
extern "C"
void C_ZNK16QXmlStreamReader14isStartElementEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isStartElement();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:390
// bool isEndElement()
extern "C"
void C_ZNK16QXmlStreamReader12isEndElementEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isEndElement();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:391
// bool isCharacters()
extern "C"
void C_ZNK16QXmlStreamReader12isCharactersEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isCharacters();
}
// /usr/include/qt/QtCore/qxmlstream.h:392
// bool isWhitespace()
extern "C"
void C_ZNK16QXmlStreamReader12isWhitespaceEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isWhitespace();
}
// /usr/include/qt/QtCore/qxmlstream.h:393
// bool isCDATA()
extern "C"
void C_ZNK16QXmlStreamReader7isCDATAEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isCDATA();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:394
// bool isComment()
extern "C"
void C_ZNK16QXmlStreamReader9isCommentEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isComment();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:395
// bool isDTD()
extern "C"
void C_ZNK16QXmlStreamReader5isDTDEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isDTD();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:396
// bool isEntityReference()
extern "C"
void C_ZNK16QXmlStreamReader17isEntityReferenceEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isEntityReference();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:397
// bool isProcessingInstruction()
extern "C"
void C_ZNK16QXmlStreamReader23isProcessingInstructionEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isProcessingInstruction();
}
// /usr/include/qt/QtCore/qxmlstream.h:399
// bool isStandaloneDocument()
extern "C"
void C_ZNK16QXmlStreamReader20isStandaloneDocumentEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->isStandaloneDocument();
}
// /usr/include/qt/QtCore/qxmlstream.h:400
// QStringRef documentVersion()
extern "C"
void C_ZNK16QXmlStreamReader15documentVersionEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->documentVersion();
}
// /usr/include/qt/QtCore/qxmlstream.h:401
// QStringRef documentEncoding()
extern "C"
void C_ZNK16QXmlStreamReader16documentEncodingEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->documentEncoding();
}
// /usr/include/qt/QtCore/qxmlstream.h:403
// qint64 lineNumber()
extern "C"
void C_ZNK16QXmlStreamReader10lineNumberEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->lineNumber();
}
// /usr/include/qt/QtCore/qxmlstream.h:404
// qint64 columnNumber()
extern "C"
void C_ZNK16QXmlStreamReader12columnNumberEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->columnNumber();
}
// /usr/include/qt/QtCore/qxmlstream.h:405
// qint64 characterOffset()
extern "C"
void C_ZNK16QXmlStreamReader15characterOffsetEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->characterOffset();
}
// /usr/include/qt/QtCore/qxmlstream.h:407
// QXmlStreamAttributes attributes()
extern "C"
void C_ZNK16QXmlStreamReader10attributesEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->attributes();
}
// /usr/include/qt/QtCore/qxmlstream.h:414
// QString readElementText(enum QXmlStreamReader::ReadElementTextBehaviour)
extern "C"
void C_ZN16QXmlStreamReader15readElementTextENS_24ReadElementTextBehaviourE(void *this_, QXmlStreamReader::ReadElementTextBehaviour behaviour) {
  /*return*/ ((QXmlStreamReader*)this_)->readElementText(behaviour);
}
// /usr/include/qt/QtCore/qxmlstream.h:416
// QStringRef name()
extern "C"
void C_ZNK16QXmlStreamReader4nameEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->name();
}
// /usr/include/qt/QtCore/qxmlstream.h:417
// QStringRef namespaceUri()
extern "C"
void C_ZNK16QXmlStreamReader12namespaceUriEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->namespaceUri();
}
// /usr/include/qt/QtCore/qxmlstream.h:418
// QStringRef qualifiedName()
extern "C"
void C_ZNK16QXmlStreamReader13qualifiedNameEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->qualifiedName();
}
// /usr/include/qt/QtCore/qxmlstream.h:419
// QStringRef prefix()
extern "C"
void C_ZNK16QXmlStreamReader6prefixEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->prefix();
}
// /usr/include/qt/QtCore/qxmlstream.h:421
// QStringRef processingInstructionTarget()
extern "C"
void C_ZNK16QXmlStreamReader27processingInstructionTargetEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->processingInstructionTarget();
}
// /usr/include/qt/QtCore/qxmlstream.h:422
// QStringRef processingInstructionData()
extern "C"
void C_ZNK16QXmlStreamReader25processingInstructionDataEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->processingInstructionData();
}
// /usr/include/qt/QtCore/qxmlstream.h:424
// QStringRef text()
extern "C"
void C_ZNK16QXmlStreamReader4textEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->text();
}
// /usr/include/qt/QtCore/qxmlstream.h:426
// QXmlStreamNamespaceDeclarations namespaceDeclarations()
extern "C"
void C_ZNK16QXmlStreamReader21namespaceDeclarationsEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->namespaceDeclarations();
}
// /usr/include/qt/QtCore/qxmlstream.h:427
// void addExtraNamespaceDeclaration(const class QXmlStreamNamespaceDeclaration &)
extern "C"
void C_ZN16QXmlStreamReader28addExtraNamespaceDeclarationERK30QXmlStreamNamespaceDeclaration(void *this_, const QXmlStreamNamespaceDeclaration & extraNamespaceDeclaraction) {
  ((QXmlStreamReader*)this_)->addExtraNamespaceDeclaration(extraNamespaceDeclaraction);
}
// /usr/include/qt/QtCore/qxmlstream.h:428
// void addExtraNamespaceDeclarations(const QXmlStreamNamespaceDeclarations &)
extern "C"
void C_ZN16QXmlStreamReader29addExtraNamespaceDeclarationsERK7QVectorI30QXmlStreamNamespaceDeclarationE(void *this_, const QXmlStreamNamespaceDeclarations & extraNamespaceDeclaractions) {
  ((QXmlStreamReader*)this_)->addExtraNamespaceDeclarations(extraNamespaceDeclaractions);
}
// /usr/include/qt/QtCore/qxmlstream.h:429
// QXmlStreamNotationDeclarations notationDeclarations()
extern "C"
void C_ZNK16QXmlStreamReader20notationDeclarationsEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->notationDeclarations();
}
// /usr/include/qt/QtCore/qxmlstream.h:430
// QXmlStreamEntityDeclarations entityDeclarations()
extern "C"
void C_ZNK16QXmlStreamReader18entityDeclarationsEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->entityDeclarations();
}
// /usr/include/qt/QtCore/qxmlstream.h:431
// QStringRef dtdName()
extern "C"
void C_ZNK16QXmlStreamReader7dtdNameEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->dtdName();
}
// /usr/include/qt/QtCore/qxmlstream.h:432
// QStringRef dtdPublicId()
extern "C"
void C_ZNK16QXmlStreamReader11dtdPublicIdEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->dtdPublicId();
}
// /usr/include/qt/QtCore/qxmlstream.h:433
// QStringRef dtdSystemId()
extern "C"
void C_ZNK16QXmlStreamReader11dtdSystemIdEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->dtdSystemId();
}
// /usr/include/qt/QtCore/qxmlstream.h:443
// void raiseError(const class QString &)
extern "C"
void C_ZN16QXmlStreamReader10raiseErrorERK7QString(void *this_, const QString & message) {
  ((QXmlStreamReader*)this_)->raiseError(message);
}
// /usr/include/qt/QtCore/qxmlstream.h:444
// QString errorString()
extern "C"
void C_ZNK16QXmlStreamReader11errorStringEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->errorString();
}
// /usr/include/qt/QtCore/qxmlstream.h:445
// QXmlStreamReader::Error error()
extern "C"
void C_ZNK16QXmlStreamReader5errorEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->error();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:447
// bool hasError()
extern "C"
void C_ZNK16QXmlStreamReader8hasErrorEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->hasError();
}
// /usr/include/qt/QtCore/qxmlstream.h:452
// void setEntityResolver(class QXmlStreamEntityResolver *)
extern "C"
void C_ZN16QXmlStreamReader17setEntityResolverEP24QXmlStreamEntityResolver(void *this_, QXmlStreamEntityResolver * resolver) {
  ((QXmlStreamReader*)this_)->setEntityResolver(resolver);
}
// /usr/include/qt/QtCore/qxmlstream.h:453
// QXmlStreamEntityResolver * entityResolver()
extern "C"
void C_ZNK16QXmlStreamReader14entityResolverEv(void *this_) {
  /*return*/ ((QXmlStreamReader*)this_)->entityResolver();
}
//  main block end
