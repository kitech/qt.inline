//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamAttributes is pure virtual: false false
// QXmlStreamAttributes has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamattributes(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:158
// [-2] void QXmlStreamAttributes() 
// (12)qm2465102407 (29)_ZN20QXmlStreamAttributesC2Ev
/*void* qm2465102407()*/{
  ;
  this_ =  new QXmlStreamAttributes();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:167
// [1] bool hasAttribute(const QString &) const
// (12)qm1871793398 (51)_ZNK20QXmlStreamAttributes12hasAttributeERK7QString
//static
/*void qm1871793398(const QString & qualifiedName)*/ {
  const QString & qualifiedName = *(const QString *)this_;
  (void) ((QXmlStreamAttributes*)this_)->hasAttribute(qualifiedName);
   auto xptr = (bool (QXmlStreamAttributes::*)(QString const&) const ) &QXmlStreamAttributes::hasAttribute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:172
// [1] bool hasAttribute(QLatin1String) const
// (12)qm3290360922 (56)_ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String
//static
/*void qm3290360922(QLatin1String qualifiedName)*/ {
  QLatin1String qualifiedName = *(QLatin1String*)this_;
  (void) ((QXmlStreamAttributes*)this_)->hasAttribute(qualifiedName);
   auto xptr = (bool (QXmlStreamAttributes::*)(QLatin1String) const ) &QXmlStreamAttributes::hasAttribute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:177
// [1] bool hasAttribute(const QString &, const QString &) const
// (12)qm3985833273 (54)_ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_
//static
/*void qm3985833273(const QString & namespaceUri, const QString & name)*/ {
  const QString & namespaceUri = *(const QString *)this_; const QString & name = *(const QString *)this_;
  (void) ((QXmlStreamAttributes*)this_)->hasAttribute(namespaceUri, name);
   auto xptr = (bool (QXmlStreamAttributes::*)(QString const&, QString const&) const ) &QXmlStreamAttributes::hasAttribute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QXmlStreamAttributesD2Ev(void *this_)*/ {
  delete (QXmlStreamAttributes*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamattributes
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
