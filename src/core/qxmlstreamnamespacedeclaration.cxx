//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamNamespaceDeclaration is pure virtual: false false
// QXmlStreamNamespaceDeclaration has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQXmlStreamNamespaceDeclaration"
  },
  "MyQXmlStreamNamespaceDeclaration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamNamespaceDeclaration[] = {
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
class Q_DECL_EXPORT MyQXmlStreamNamespaceDeclaration : public QXmlStreamNamespaceDeclaration {
public:
  virtual ~MyQXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration()
MyQXmlStreamNamespaceDeclaration() : QXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration(const QString &, const QString &)
MyQXmlStreamNamespaceDeclaration(const QString & prefix, const QString & namespaceUri) : QXmlStreamNamespaceDeclaration(prefix, namespaceUri) {}
// void QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)
MyQXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration & arg0) : QXmlStreamNamespaceDeclaration(arg0) {}
// void QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration &&)
MyQXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration && other) : QXmlStreamNamespaceDeclaration(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamnamespacedeclaration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:197
// [-2] void QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration &&) 
// (12)qm2117157445 (41)_ZN30QXmlStreamNamespaceDeclarationC2EOS_
/*void* qm2117157445(QXmlStreamNamespaceDeclaration && other)*/{
  QXmlStreamNamespaceDeclaration && other =  static_cast<QXmlStreamNamespaceDeclaration &&>(*(QXmlStreamNamespaceDeclaration *)this_);
  this_ =  new QXmlStreamNamespaceDeclaration(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:204
// [40] QXmlStreamNamespaceDeclaration & operator=(QXmlStreamNamespaceDeclaration &&) 
// (12)qm2416425093 (41)_ZN30QXmlStreamNamespaceDeclarationaSEOS_
//static
/*void qm2416425093(QXmlStreamNamespaceDeclaration && other)*/ {
  QXmlStreamNamespaceDeclaration && other =  static_cast<QXmlStreamNamespaceDeclaration &&>(*(QXmlStreamNamespaceDeclaration *)this_);
  (void) ((QXmlStreamNamespaceDeclaration*)this_)->operator=(other);
  // auto xptr = (QXmlStreamNamespaceDeclaration & (QXmlStreamNamespaceDeclaration::*)(QXmlStreamNamespaceDeclaration&&) ) &QXmlStreamNamespaceDeclaration::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:215
// [16] QStringRef prefix() const
// (11)qm782908349 (45)_ZNK30QXmlStreamNamespaceDeclaration6prefixEv
//static
/*void qm782908349()*/ {
  ;
  (void) ((QXmlStreamNamespaceDeclaration*)this_)->prefix();
   auto xptr = (QStringRef (QXmlStreamNamespaceDeclaration::*)() const ) &QXmlStreamNamespaceDeclaration::prefix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:216
// [16] QStringRef namespaceUri() const
// (12)qm3926893390 (52)_ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv
//static
/*void qm3926893390()*/ {
  ;
  (void) ((QXmlStreamNamespaceDeclaration*)this_)->namespaceUri();
   auto xptr = (QStringRef (QXmlStreamNamespaceDeclaration::*)() const ) &QXmlStreamNamespaceDeclaration::namespaceUri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:217
// [1] bool operator==(const QXmlStreamNamespaceDeclaration &) const
// (12)qm1166490392 (43)_ZNK30QXmlStreamNamespaceDeclarationeqERKS_
//static
/*void qm1166490392(const QXmlStreamNamespaceDeclaration & other)*/ {
  const QXmlStreamNamespaceDeclaration & other = *(const QXmlStreamNamespaceDeclaration *)this_;
  (void) ((QXmlStreamNamespaceDeclaration*)this_)->operator==(other);
  // auto xptr = (bool (QXmlStreamNamespaceDeclaration::*)(QXmlStreamNamespaceDeclaration const&) const ) &QXmlStreamNamespaceDeclaration::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:220
// [1] bool operator!=(const QXmlStreamNamespaceDeclaration &) const
// (12)qm3754372975 (43)_ZNK30QXmlStreamNamespaceDeclarationneERKS_
//static
/*void qm3754372975(const QXmlStreamNamespaceDeclaration & other)*/ {
  const QXmlStreamNamespaceDeclaration & other = *(const QXmlStreamNamespaceDeclaration *)this_;
  (void) ((QXmlStreamNamespaceDeclaration*)this_)->operator!=(other);
  // auto xptr = (bool (QXmlStreamNamespaceDeclaration::*)(QXmlStreamNamespaceDeclaration const&) const ) &QXmlStreamNamespaceDeclaration::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN30QXmlStreamNamespaceDeclarationD2Ev(void *this_)*/ {
  delete (QXmlStreamNamespaceDeclaration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamnamespacedeclaration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
