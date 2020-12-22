//  header block begin

// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonDocument is pure virtual: false false
// QJsonDocument has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonDocument_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonDocument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonDocument_t qt_meta_stringdata_MyQJsonDocument = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonDocument"
  },
  "MyQJsonDocument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonDocument[] = {
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
class Q_DECL_EXPORT MyQJsonDocument : public QJsonDocument {
public:
  virtual ~MyQJsonDocument() {}
// void QJsonDocument()
MyQJsonDocument() : QJsonDocument() {}
// void QJsonDocument(const QJsonObject &)
MyQJsonDocument(const QJsonObject & object) : QJsonDocument(object) {}
// void QJsonDocument(const QJsonArray &)
MyQJsonDocument(const QJsonArray & array) : QJsonDocument(array) {}
// void QJsonDocument(const QJsonDocument &)
MyQJsonDocument(const QJsonDocument & other) : QJsonDocument(other) {}
// void QJsonDocument(QJsonDocument &&)
MyQJsonDocument(QJsonDocument && other) : QJsonDocument(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsondocument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:91
// [-2] void QJsonDocument() 
// (12)qm1446522436 (22)_ZN13QJsonDocumentC2Ev
/*void* qm1446522436()*/{
  ;
  this_ =  new QJsonDocument();
  this_ =  new MyQJsonDocument();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:92
// [-2] void QJsonDocument(const QJsonObject &) 
// (11)qm776218782 (36)_ZN13QJsonDocumentC2ERK11QJsonObject
/*void* qm776218782(const QJsonObject & object)*/{
  const QJsonObject & object = *(const QJsonObject *)this_;
  this_ =  new QJsonDocument(object);
  this_ =  new MyQJsonDocument(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:93
// [-2] void QJsonDocument(const QJsonArray &) 
// (12)qm1523816359 (35)_ZN13QJsonDocumentC2ERK10QJsonArray
/*void* qm1523816359(const QJsonArray & array)*/{
  const QJsonArray & array = *(const QJsonArray *)this_;
  this_ =  new QJsonDocument(array);
  this_ =  new MyQJsonDocument(array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:96
// [-2] void QJsonDocument(const QJsonDocument &) 
// (12)qm2450150736 (25)_ZN13QJsonDocumentC2ERKS_
/*void* qm2450150736(const QJsonDocument & other)*/{
  const QJsonDocument & other = *(const QJsonDocument *)this_;
  this_ =  new QJsonDocument(other);
  this_ =  new MyQJsonDocument(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:99
// [-2] void QJsonDocument(QJsonDocument &&) 
// (12)qm1222795236 (24)_ZN13QJsonDocumentC2EOS_
/*void* qm1222795236(QJsonDocument && other)*/{
  QJsonDocument && other =  static_cast<QJsonDocument &&>(*(QJsonDocument *)this_);
  this_ =  new QJsonDocument(other);
  this_ =  new MyQJsonDocument(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:101
// [8] QJsonDocument & operator=(QJsonDocument &&) 
// (12)qm2798953764 (24)_ZN13QJsonDocumentaSEOS_
//static
/*void qm2798953764(QJsonDocument && other)*/ {
  QJsonDocument && other =  static_cast<QJsonDocument &&>(*(QJsonDocument *)this_);
  (void) ((QJsonDocument*)this_)->operator=(other);
  // auto xptr = (QJsonDocument & (QJsonDocument::*)(QJsonDocument&&) ) &QJsonDocument::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:161
// [1] bool operator!=(const QJsonDocument &) const
// (12)qm1541316591 (26)_ZNK13QJsonDocumentneERKS_
//static
/*void qm1541316591(const QJsonDocument & other)*/ {
  const QJsonDocument & other = *(const QJsonDocument *)this_;
  (void) ((QJsonDocument*)this_)->operator!=(other);
  // auto xptr = (bool (QJsonDocument::*)(QJsonDocument const&) const ) &QJsonDocument::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QJsonDocumentD2Ev(void *this_)*/ {
  delete (QJsonDocument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsondocument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
