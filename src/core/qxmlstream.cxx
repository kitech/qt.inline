// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qxmlstream.h
// dst-file: /src/core/qxmlstream.cxx
//

// header block begin =>
#include <qxmlstream.h>

extern "C" {

int QXmlStreamStringRef_Class_Size()
{
  return sizeof(QXmlStreamStringRef);
}

// QXmlStreamStringRef(const class QStringRef &)
QXmlStreamStringRef* dector_ZN19QXmlStreamStringRefC1ERK10QStringRef(const QStringRef & aString)
{
  // static_assert(sizeof(QXmlStreamStringRef) == 32, "tyszerr");
  QXmlStreamStringRef* rthis = new QXmlStreamStringRef(aString);
  return rthis;
}

// QXmlStreamStringRef(const class QString &)
QXmlStreamStringRef* dector_ZN19QXmlStreamStringRefC1ERK7QString(const QString & aString)
{
  // static_assert(sizeof(QXmlStreamStringRef) == 32, "tyszerr");
  QXmlStreamStringRef* rthis = new QXmlStreamStringRef(aString);
  return rthis;
}

// ~QXmlStreamStringRef()
void dedtor_ZN19QXmlStreamStringRefD0Ev(QXmlStreamStringRef* that)
{
  QXmlStreamStringRef* rthis = (QXmlStreamStringRef*)that;
  delete rthis;
}

// QXmlStreamStringRef()
QXmlStreamStringRef* dector_ZN19QXmlStreamStringRefC1Ev()
{
  // static_assert(sizeof(QXmlStreamStringRef) == 32, "tyszerr");
  QXmlStreamStringRef* rthis = new QXmlStreamStringRef();
  return rthis;
}

  // proto:  int QXmlStreamStringRef::size();
int demth_ZNK19QXmlStreamStringRef4sizeEv(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->size();
}

  // proto:  void QXmlStreamStringRef::clear();
void demth_ZN19QXmlStreamStringRef5clearEv(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
   cthat->clear();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef(const QStringRef & aString);
void demth_ZN19QXmlStreamStringRefC1ERK10QStringRef(void *that, const QStringRef & aString)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef(aString);
}

  // proto:  const QString * QXmlStreamStringRef::string();
const QString * demth_ZNK19QXmlStreamStringRef6stringEv(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->string();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef(const QString & aString);
void demth_ZN19QXmlStreamStringRefC1ERK7QString(void *that, const QString & aString)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef(aString);
}

  // proto:  void QXmlStreamStringRef::~QXmlStreamStringRef();
void demth_ZN19QXmlStreamStringRefD0Ev(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
   cthat->~QXmlStreamStringRef();
}

  // proto:  void QXmlStreamStringRef::QXmlStreamStringRef();
void demth_ZN19QXmlStreamStringRefC1Ev(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  auto _o = new(that) QXmlStreamStringRef();
}

  // proto:  int QXmlStreamStringRef::position();
int demth_ZNK19QXmlStreamStringRef8positionEv(void *that)
{
  QXmlStreamStringRef *cthat = (QXmlStreamStringRef *)that;
  return cthat->position();
}

int QXmlStreamReader_Class_Size()
{
  return sizeof(QXmlStreamReader);
}

// QXmlStreamReader(const class QByteArray &)
QXmlStreamReader* dector_ZN16QXmlStreamReaderC1ERK10QByteArray(const QByteArray & data)
{
  // static_assert(sizeof(QXmlStreamReader) == 32, "tyszerr");
  QXmlStreamReader* rthis = new QXmlStreamReader(data);
  return rthis;
}

// QXmlStreamReader(class QIODevice *)
QXmlStreamReader* dector_ZN16QXmlStreamReaderC1EP9QIODevice(QIODevice * device)
{
  // static_assert(sizeof(QXmlStreamReader) == 32, "tyszerr");
  QXmlStreamReader* rthis = new QXmlStreamReader(device);
  return rthis;
}

// QXmlStreamReader()
QXmlStreamReader* dector_ZN16QXmlStreamReaderC1Ev()
{
  // static_assert(sizeof(QXmlStreamReader) == 32, "tyszerr");
  QXmlStreamReader* rthis = new QXmlStreamReader();
  return rthis;
}

// QXmlStreamReader(const class QString &)
QXmlStreamReader* dector_ZN16QXmlStreamReaderC1ERK7QString(const QString & data)
{
  // static_assert(sizeof(QXmlStreamReader) == 32, "tyszerr");
  QXmlStreamReader* rthis = new QXmlStreamReader(data);
  return rthis;
}

// ~QXmlStreamReader()
void dedtor_ZN16QXmlStreamReaderD0Ev(QXmlStreamReader* that)
{
  QXmlStreamReader* rthis = (QXmlStreamReader*)that;
  delete rthis;
}

// QXmlStreamReader(const char *)
QXmlStreamReader* dector_ZN16QXmlStreamReaderC1EPKc(const char * data)
{
  // static_assert(sizeof(QXmlStreamReader) == 32, "tyszerr");
  QXmlStreamReader* rthis = new QXmlStreamReader(data);
  return rthis;
}

  // proto:  bool QXmlStreamReader::isStartElement();
bool demth_ZNK16QXmlStreamReader14isStartElementEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isStartElement();
}

  // proto:  bool QXmlStreamReader::isDTD();
bool demth_ZNK16QXmlStreamReader5isDTDEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isDTD();
}

  // proto:  bool QXmlStreamReader::isStartDocument();
bool demth_ZNK16QXmlStreamReader15isStartDocumentEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isStartDocument();
}

  // proto:  bool QXmlStreamReader::isProcessingInstruction();
bool demth_ZNK16QXmlStreamReader23isProcessingInstructionEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isProcessingInstruction();
}

  // proto:  bool QXmlStreamReader::isCharacters();
bool demth_ZNK16QXmlStreamReader12isCharactersEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isCharacters();
}

  // proto:  bool QXmlStreamReader::hasError();
bool demth_ZNK16QXmlStreamReader8hasErrorEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->hasError();
}

  // proto:  bool QXmlStreamReader::isEndElement();
bool demth_ZNK16QXmlStreamReader12isEndElementEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEndElement();
}

  // proto:  bool QXmlStreamReader::isEndDocument();
bool demth_ZNK16QXmlStreamReader13isEndDocumentEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEndDocument();
}

  // proto:  bool QXmlStreamReader::isComment();
bool demth_ZNK16QXmlStreamReader9isCommentEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isComment();
}

  // proto:  bool QXmlStreamReader::isEntityReference();
bool demth_ZNK16QXmlStreamReader17isEntityReferenceEv(void *that)
{
  QXmlStreamReader *cthat = (QXmlStreamReader *)that;
  return cthat->isEntityReference();
}

int QXmlStreamEntityResolver_Class_Size()
{
  return sizeof(QXmlStreamEntityResolver);
}

// ~QXmlStreamEntityResolver()
void dedtor_ZN24QXmlStreamEntityResolverD0Ev(QXmlStreamEntityResolver* that)
{
  QXmlStreamEntityResolver* rthis = (QXmlStreamEntityResolver*)that;
  delete rthis;
}

int QXmlStreamNamespaceDeclaration_Class_Size()
{
  return sizeof(QXmlStreamNamespaceDeclaration);
}

// QXmlStreamNamespaceDeclaration(const class QXmlStreamNamespaceDeclaration &)
QXmlStreamNamespaceDeclaration* dector_ZN30QXmlStreamNamespaceDeclarationC1ERKS_(const QXmlStreamNamespaceDeclaration & arg1)
{
  // static_assert(sizeof(QXmlStreamNamespaceDeclaration) == 40, "tyszerr");
  QXmlStreamNamespaceDeclaration* rthis = new QXmlStreamNamespaceDeclaration(arg1);
  return rthis;
}

// QXmlStreamNamespaceDeclaration()
QXmlStreamNamespaceDeclaration* dector_ZN30QXmlStreamNamespaceDeclarationC1Ev()
{
  // static_assert(sizeof(QXmlStreamNamespaceDeclaration) == 40, "tyszerr");
  QXmlStreamNamespaceDeclaration* rthis = new QXmlStreamNamespaceDeclaration();
  return rthis;
}

// QXmlStreamNamespaceDeclaration(const class QString &, const class QString &)
QXmlStreamNamespaceDeclaration* dector_ZN30QXmlStreamNamespaceDeclarationC1ERK7QStringS2_(const QString & prefix, const QString & namespaceUri)
{
  // static_assert(sizeof(QXmlStreamNamespaceDeclaration) == 40, "tyszerr");
  QXmlStreamNamespaceDeclaration* rthis = new QXmlStreamNamespaceDeclaration(prefix, namespaceUri);
  return rthis;
}

// ~QXmlStreamNamespaceDeclaration()
void dedtor_ZN30QXmlStreamNamespaceDeclarationD0Ev(QXmlStreamNamespaceDeclaration* that)
{
  QXmlStreamNamespaceDeclaration* rthis = (QXmlStreamNamespaceDeclaration*)that;
  delete rthis;
}

  // proto:  QStringRef QXmlStreamNamespaceDeclaration::namespaceUri();
QStringRef* demth_ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv(void *that)
{
  QXmlStreamNamespaceDeclaration *cthat = (QXmlStreamNamespaceDeclaration *)that;
  auto recret = cthat->namespaceUri();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNamespaceDeclaration::prefix();
QStringRef* demth_ZNK30QXmlStreamNamespaceDeclaration6prefixEv(void *that)
{
  QXmlStreamNamespaceDeclaration *cthat = (QXmlStreamNamespaceDeclaration *)that;
  auto recret = cthat->prefix();
  return new QStringRef(recret);
}

int QXmlStreamEntityDeclaration_Class_Size()
{
  return sizeof(QXmlStreamEntityDeclaration);
}

// ~QXmlStreamEntityDeclaration()
void dedtor_ZN27QXmlStreamEntityDeclarationD0Ev(QXmlStreamEntityDeclaration* that)
{
  QXmlStreamEntityDeclaration* rthis = (QXmlStreamEntityDeclaration*)that;
  delete rthis;
}

// QXmlStreamEntityDeclaration()
QXmlStreamEntityDeclaration* dector_ZN27QXmlStreamEntityDeclarationC1Ev()
{
  // static_assert(sizeof(QXmlStreamEntityDeclaration) == 88, "tyszerr");
  QXmlStreamEntityDeclaration* rthis = new QXmlStreamEntityDeclaration();
  return rthis;
}

// QXmlStreamEntityDeclaration(const class QXmlStreamEntityDeclaration &)
QXmlStreamEntityDeclaration* dector_ZN27QXmlStreamEntityDeclarationC1ERKS_(const QXmlStreamEntityDeclaration & arg1)
{
  // static_assert(sizeof(QXmlStreamEntityDeclaration) == 88, "tyszerr");
  QXmlStreamEntityDeclaration* rthis = new QXmlStreamEntityDeclaration(arg1);
  return rthis;
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::publicId();
QStringRef* demth_ZNK27QXmlStreamEntityDeclaration8publicIdEv(void *that)
{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->publicId();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::name();
QStringRef* demth_ZNK27QXmlStreamEntityDeclaration4nameEv(void *that)
{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->name();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::value();
QStringRef* demth_ZNK27QXmlStreamEntityDeclaration5valueEv(void *that)
{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->value();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::notationName();
QStringRef* demth_ZNK27QXmlStreamEntityDeclaration12notationNameEv(void *that)
{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->notationName();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamEntityDeclaration::systemId();
QStringRef* demth_ZNK27QXmlStreamEntityDeclaration8systemIdEv(void *that)
{
  QXmlStreamEntityDeclaration *cthat = (QXmlStreamEntityDeclaration *)that;
  auto recret = cthat->systemId();
  return new QStringRef(recret);
}

int QXmlStreamAttributes_Class_Size()
{
  return sizeof(QXmlStreamAttributes);
}

// QXmlStreamAttributes()
QXmlStreamAttributes* dector_ZN20QXmlStreamAttributesC1Ev()
{
  // static_assert(sizeof(QXmlStreamAttributes) == 32, "tyszerr");
  QXmlStreamAttributes* rthis = new QXmlStreamAttributes();
  return rthis;
}

  // proto:  void QXmlStreamAttributes::QXmlStreamAttributes();
void demth_ZN20QXmlStreamAttributesC1Ev(void *that)
{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  auto _o = new(that) QXmlStreamAttributes();
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(const QString & qualifiedName);
bool demth_ZNK20QXmlStreamAttributes12hasAttributeERK7QString(void *that, const QString & qualifiedName)
{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(qualifiedName);
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(const QString & namespaceUri, const QString & name);
bool demth_ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_(void *that, const QString & namespaceUri, const QString & name)
{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(namespaceUri, name);
}

  // proto:  bool QXmlStreamAttributes::hasAttribute(QLatin1String qualifiedName);
bool demth_ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String(void *that, QLatin1String qualifiedName)
{
  QXmlStreamAttributes *cthat = (QXmlStreamAttributes *)that;
  return cthat->hasAttribute(qualifiedName);
}

int QXmlStreamWriter_Class_Size()
{
  return sizeof(QXmlStreamWriter);
}

// QXmlStreamWriter()
QXmlStreamWriter* dector_ZN16QXmlStreamWriterC1Ev()
{
  // static_assert(sizeof(QXmlStreamWriter) == 32, "tyszerr");
  QXmlStreamWriter* rthis = new QXmlStreamWriter();
  return rthis;
}

// QXmlStreamWriter(class QString *)
QXmlStreamWriter* dector_ZN16QXmlStreamWriterC1EP7QString(QString * string)
{
  // static_assert(sizeof(QXmlStreamWriter) == 32, "tyszerr");
  QXmlStreamWriter* rthis = new QXmlStreamWriter(string);
  return rthis;
}

// ~QXmlStreamWriter()
void dedtor_ZN16QXmlStreamWriterD0Ev(QXmlStreamWriter* that)
{
  QXmlStreamWriter* rthis = (QXmlStreamWriter*)that;
  delete rthis;
}

// QXmlStreamWriter(class QByteArray *)
QXmlStreamWriter* dector_ZN16QXmlStreamWriterC1EP10QByteArray(QByteArray * array)
{
  // static_assert(sizeof(QXmlStreamWriter) == 32, "tyszerr");
  QXmlStreamWriter* rthis = new QXmlStreamWriter(array);
  return rthis;
}

// QXmlStreamWriter(class QIODevice *)
QXmlStreamWriter* dector_ZN16QXmlStreamWriterC1EP9QIODevice(QIODevice * device)
{
  // static_assert(sizeof(QXmlStreamWriter) == 32, "tyszerr");
  QXmlStreamWriter* rthis = new QXmlStreamWriter(device);
  return rthis;
}

int QXmlStreamNotationDeclaration_Class_Size()
{
  return sizeof(QXmlStreamNotationDeclaration);
}

// QXmlStreamNotationDeclaration(const class QXmlStreamNotationDeclaration &)
QXmlStreamNotationDeclaration* dector_ZN29QXmlStreamNotationDeclarationC1ERKS_(const QXmlStreamNotationDeclaration & arg1)
{
  // static_assert(sizeof(QXmlStreamNotationDeclaration) == 56, "tyszerr");
  QXmlStreamNotationDeclaration* rthis = new QXmlStreamNotationDeclaration(arg1);
  return rthis;
}

// ~QXmlStreamNotationDeclaration()
void dedtor_ZN29QXmlStreamNotationDeclarationD0Ev(QXmlStreamNotationDeclaration* that)
{
  QXmlStreamNotationDeclaration* rthis = (QXmlStreamNotationDeclaration*)that;
  delete rthis;
}

// QXmlStreamNotationDeclaration()
QXmlStreamNotationDeclaration* dector_ZN29QXmlStreamNotationDeclarationC1Ev()
{
  // static_assert(sizeof(QXmlStreamNotationDeclaration) == 56, "tyszerr");
  QXmlStreamNotationDeclaration* rthis = new QXmlStreamNotationDeclaration();
  return rthis;
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::publicId();
QStringRef* demth_ZNK29QXmlStreamNotationDeclaration8publicIdEv(void *that)
{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->publicId();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::name();
QStringRef* demth_ZNK29QXmlStreamNotationDeclaration4nameEv(void *that)
{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->name();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamNotationDeclaration::systemId();
QStringRef* demth_ZNK29QXmlStreamNotationDeclaration8systemIdEv(void *that)
{
  QXmlStreamNotationDeclaration *cthat = (QXmlStreamNotationDeclaration *)that;
  auto recret = cthat->systemId();
  return new QStringRef(recret);
}

int QXmlStreamAttribute_Class_Size()
{
  return sizeof(QXmlStreamAttribute);
}

// QXmlStreamAttribute(const class QString &, const class QString &)
QXmlStreamAttribute* dector_ZN19QXmlStreamAttributeC1ERK7QStringS2_(const QString & qualifiedName, const QString & value)
{
  // static_assert(sizeof(QXmlStreamAttribute) == 80, "tyszerr");
  QXmlStreamAttribute* rthis = new QXmlStreamAttribute(qualifiedName, value);
  return rthis;
}

// ~QXmlStreamAttribute()
void dedtor_ZN19QXmlStreamAttributeD0Ev(QXmlStreamAttribute* that)
{
  QXmlStreamAttribute* rthis = (QXmlStreamAttribute*)that;
  delete rthis;
}

// QXmlStreamAttribute()
QXmlStreamAttribute* dector_ZN19QXmlStreamAttributeC1Ev()
{
  // static_assert(sizeof(QXmlStreamAttribute) == 80, "tyszerr");
  QXmlStreamAttribute* rthis = new QXmlStreamAttribute();
  return rthis;
}

// QXmlStreamAttribute(const class QXmlStreamAttribute &)
QXmlStreamAttribute* dector_ZN19QXmlStreamAttributeC1ERKS_(const QXmlStreamAttribute & arg1)
{
  // static_assert(sizeof(QXmlStreamAttribute) == 80, "tyszerr");
  QXmlStreamAttribute* rthis = new QXmlStreamAttribute(arg1);
  return rthis;
}

// QXmlStreamAttribute(const class QString &, const class QString &, const class QString &)
QXmlStreamAttribute* dector_ZN19QXmlStreamAttributeC1ERK7QStringS2_S2_(const QString & namespaceUri, const QString & name, const QString & value)
{
  // static_assert(sizeof(QXmlStreamAttribute) == 80, "tyszerr");
  QXmlStreamAttribute* rthis = new QXmlStreamAttribute(namespaceUri, name, value);
  return rthis;
}

  // proto:  QStringRef QXmlStreamAttribute::qualifiedName();
QStringRef* demth_ZNK19QXmlStreamAttribute13qualifiedNameEv(void *that)
{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->qualifiedName();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::value();
QStringRef* demth_ZNK19QXmlStreamAttribute5valueEv(void *that)
{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->value();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::namespaceUri();
QStringRef* demth_ZNK19QXmlStreamAttribute12namespaceUriEv(void *that)
{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->namespaceUri();
  return new QStringRef(recret);
}

  // proto:  bool QXmlStreamAttribute::isDefault();
bool demth_ZNK19QXmlStreamAttribute9isDefaultEv(void *that)
{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  return cthat->isDefault();
}

  // proto:  QStringRef QXmlStreamAttribute::prefix();
QStringRef* demth_ZNK19QXmlStreamAttribute6prefixEv(void *that)
{
  QXmlStreamAttribute *cthat = (QXmlStreamAttribute *)that;
  auto recret = cthat->prefix();
  return new QStringRef(recret);
}

  // proto:  QStringRef QXmlStreamAttribute::name();
QStringRef* demth_ZNK19QXmlStreamAttribute4nameEv(void *that)
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

