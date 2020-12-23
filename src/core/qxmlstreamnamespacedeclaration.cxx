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


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamnamespacedeclaration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:193
// [-2] void QXmlStreamNamespaceDeclaration() 
// (12)qm1635349409 (39)_ZN30QXmlStreamNamespaceDeclarationC2Ev
/*void* qm1635349409()*/{
  ;
  this_ =  new QXmlStreamNamespaceDeclaration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:194
// [-2] void QXmlStreamNamespaceDeclaration(const QString &, const QString &) 
// (11)qm349651721 (51)_ZN30QXmlStreamNamespaceDeclarationC2ERK7QStringS2_
/*void* qm349651721(const QString & prefix, const QString & namespaceUri)*/{
  const QString & prefix = *(const QString *)this_; const QString & namespaceUri = *(const QString *)this_;
  this_ =  new QXmlStreamNamespaceDeclaration(prefix, namespaceUri);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:196
// [-2] void QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &) 
// (11)qm871175475 (42)_ZN30QXmlStreamNamespaceDeclarationC2ERKS_
/*void* qm871175475(const QXmlStreamNamespaceDeclaration & arg0)*/{
  const QXmlStreamNamespaceDeclaration & arg0 = *(const QXmlStreamNamespaceDeclaration *)this_;
  this_ =  new QXmlStreamNamespaceDeclaration(arg0);
}

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
