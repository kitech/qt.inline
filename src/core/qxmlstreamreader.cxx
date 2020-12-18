//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamReader is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamreader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:381
// [1] bool isStartDocument() const
// (12)qm3088123069 (41)_ZNK16QXmlStreamReader15isStartDocumentEv
//static
/*void qm3088123069()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isStartDocument();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isStartDocument;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:382
// [1] bool isEndDocument() const
// (11)qm503533631 (39)_ZNK16QXmlStreamReader13isEndDocumentEv
//static
/*void qm503533631()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isEndDocument();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isEndDocument;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:383
// [1] bool isStartElement() const
// (12)qm3196134282 (40)_ZNK16QXmlStreamReader14isStartElementEv
//static
/*void qm3196134282()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isStartElement();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isStartElement;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:384
// [1] bool isEndElement() const
// (11)qm786421380 (38)_ZNK16QXmlStreamReader12isEndElementEv
//static
/*void qm786421380()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isEndElement();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isEndElement;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:385
// [1] bool isCharacters() const
// (12)qm1185043042 (38)_ZNK16QXmlStreamReader12isCharactersEv
//static
/*void qm1185043042()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isCharacters();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isCharacters;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:388
// [1] bool isComment() const
// (11)qm639620090 (34)_ZNK16QXmlStreamReader9isCommentEv
//static
/*void qm639620090()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isComment();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isComment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:389
// [1] bool isDTD() const
// (12)qm2693333737 (30)_ZNK16QXmlStreamReader5isDTDEv
//static
/*void qm2693333737()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isDTD();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isDTD;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:390
// [1] bool isEntityReference() const
// (12)qm1325285273 (43)_ZNK16QXmlStreamReader17isEntityReferenceEv
//static
/*void qm1325285273()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isEntityReference();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isEntityReference;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:391
// [1] bool isProcessingInstruction() const
// (11)qm396032537 (49)_ZNK16QXmlStreamReader23isProcessingInstructionEv
//static
/*void qm396032537()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->isProcessingInstruction();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::isProcessingInstruction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:443
// [1] bool hasError() const
// (12)qm2563744015 (33)_ZNK16QXmlStreamReader8hasErrorEv
//static
/*void qm2563744015()*/ {
  ;
  (void) ((QXmlStreamReader*)this_)->hasError();
   auto xptr = (bool (QXmlStreamReader::*)() const ) &QXmlStreamReader::hasError;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QXmlStreamReaderD2Ev(void *this_)*/ {
  delete (QXmlStreamReader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamreader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
