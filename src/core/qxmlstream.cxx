// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qxmlstream.h
// dst-file: /src/core/qxmlstream.cxx
//

// header block begin =>
#include <qxmlstream.h>

extern "C" {

  // proto:  int QXmlStreamStringRef::size();
int _ZNK19QXmlStreamStringRef4sizeEv(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->size();
}

  // proto:  void QXmlStreamStringRef::clear();
void _ZN19QXmlStreamStringRef5clearEv(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
   cthat->clear();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef(const QStringRef & aString);
void _ZN19QXmlStreamStringRefC1ERK10QStringRef(void *that, const QStringRef & aString)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef(aString);
}

  // proto:  const QString * QXmlStreamStringRef::string();
const QString * _ZNK19QXmlStreamStringRef6stringEv(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->string();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef(const QString & aString);
void _ZN19QXmlStreamStringRefC1ERK7QString(void *that, const QString & aString)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef(aString);
}

  // proto:  void QXmlStreamStringRef::~QXmlStreamStringRef();
void _ZN19QXmlStreamStringRefD0Ev(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
   cthat->~QXmlStreamStringRef();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef();
void _ZN19QXmlStreamStringRefC1Ev(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef();
}

  // proto:  int QXmlStreamStringRef::position();
int _ZNK19QXmlStreamStringRef8positionEv(void *that)

{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->position();
}

  // proto:  bool QXmlStreamReader::isStartElement();
bool _ZNK16QXmlStreamReader14isStartElementEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isStartElement();
}

  // proto:  bool QXmlStreamReader::isDTD();
bool _ZNK16QXmlStreamReader5isDTDEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isDTD();
}

  // proto:  bool QXmlStreamReader::isStartDocument();
bool _ZNK16QXmlStreamReader15isStartDocumentEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isStartDocument();
}

  // proto:  bool QXmlStreamReader::isProcessingInstruction();
bool _ZNK16QXmlStreamReader23isProcessingInstructionEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isProcessingInstruction();
}

  // proto:  bool QXmlStreamReader::isCharacters();
bool _ZNK16QXmlStreamReader12isCharactersEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isCharacters();
}

  // proto:  bool QXmlStreamReader::hasError();
bool _ZNK16QXmlStreamReader8hasErrorEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->hasError();
}

  // proto:  bool QXmlStreamReader::isEndElement();
bool _ZNK16QXmlStreamReader12isEndElementEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEndElement();
}

  // proto:  bool QXmlStreamReader::isEndDocument();
bool _ZNK16QXmlStreamReader13isEndDocumentEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEndDocument();
}

  // proto:  bool QXmlStreamReader::isComment();
bool _ZNK16QXmlStreamReader9isCommentEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isComment();
}

  // proto:  bool QXmlStreamReader::isEntityReference();
bool _ZNK16QXmlStreamReader17isEntityReferenceEv(void *that)

{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEntityReference();
}

  // proto:  QStringRef QXmlStreamNamespaceDeclaration::namespaceUri();
QStringRef* _ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv(void *that)

{
  QXmlStreamNamespaceDeclaration *cthat = (QXmlStreamNamespaceDeclaration *)that;
  auto recret = cthat->namespaceUri();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNamespaceDeclaration::prefix();
QStringRef* _ZNK30QXmlStreamNamespaceDeclaration6prefixEv(void *that)

{
  QXmlStreamNamespaceDeclaration *cthat = (QXmlStreamNamespaceDeclaration *)that;
  auto recret = cthat->prefix();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::publicId();
QStringRef* _ZNK27QXmlStreamEntityDeclaration8publicIdEv(void *that)

{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->publicId();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::name();
QStringRef* _ZNK27QXmlStreamEntityDeclaration4nameEv(void *that)

{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->name();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::value();
QStringRef* _ZNK27QXmlStreamEntityDeclaration5valueEv(void *that)

{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->value();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::notationName();
QStringRef* _ZNK27QXmlStreamEntityDeclaration12notationNameEv(void *that)

{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->notationName();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::systemId();
QStringRef* _ZNK27QXmlStreamEntityDeclaration8systemIdEv(void *that)

{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->systemId();
  return new QStringRef(recret);
}

  // proto:  void QXmlStreamAttributes::QXmlStreamAttributes();
void _ZN20QXmlStreamAttributesC1Ev(void *that)

{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  auto _o = new(that) QXmlStreamAttributes();
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(const QString & qualifiedName);
bool _ZNK20QXmlStreamAttributes12hasAttributeERK7QString(void *that, const QString & qualifiedName)

{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(qualifiedName);
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(const QString & namespaceUri, const QString & name);
bool _ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_(void *that, const QString & namespaceUri, const QString & name)

{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(namespaceUri, name);
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(QLatin1String qualifiedName);
bool _ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String(void *that, QLatin1String qualifiedName)

{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(qualifiedName);
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::publicId();
QStringRef* _ZNK29QXmlStreamNotationDeclaration8publicIdEv(void *that)

{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->publicId();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::name();
QStringRef* _ZNK29QXmlStreamNotationDeclaration4nameEv(void *that)

{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->name();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::systemId();
QStringRef* _ZNK29QXmlStreamNotationDeclaration8systemIdEv(void *that)

{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->systemId();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::qualifiedName();
QStringRef* _ZNK19QXmlStreamAttribute13qualifiedNameEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->qualifiedName();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::value();
QStringRef* _ZNK19QXmlStreamAttribute5valueEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->value();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::namespaceUri();
QStringRef* _ZNK19QXmlStreamAttribute12namespaceUriEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->namespaceUri();
  return new QStringRef(recret);
}

  // proto:  bool QXmlStreamAttribute::isDefault();
bool _ZNK19QXmlStreamAttribute9isDefaultEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  return cthat->isDefault();
}

  // proto:  QStringRef QXmlStreamAttribute::prefix();
QStringRef* _ZNK19QXmlStreamAttribute6prefixEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->prefix();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::name();
QStringRef* _ZNK19QXmlStreamAttribute4nameEv(void *that)

{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->name();
  return new QStringRef(recret);
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

