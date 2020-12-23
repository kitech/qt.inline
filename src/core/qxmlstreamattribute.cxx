//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamAttribute is pure virtual: false false
// QXmlStreamAttribute has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamattribute(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:105
// [-2] void QXmlStreamAttribute() 
// (11)qm804075447 (28)_ZN19QXmlStreamAttributeC2Ev
/*void* qm804075447()*/{
  ;
  this_ =  new QXmlStreamAttribute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:106
// [-2] void QXmlStreamAttribute(const QString &, const QString &) 
// (12)qm1332973950 (40)_ZN19QXmlStreamAttributeC2ERK7QStringS2_
/*void* qm1332973950(const QString & qualifiedName, const QString & value)*/{
  const QString & qualifiedName = *(const QString *)this_; const QString & value = *(const QString *)this_;
  this_ =  new QXmlStreamAttribute(qualifiedName, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:107
// [-2] void QXmlStreamAttribute(const QString &, const QString &, const QString &) 
// (12)qm2015792935 (43)_ZN19QXmlStreamAttributeC2ERK7QStringS2_S2_
/*void* qm2015792935(const QString & namespaceUri, const QString & name, const QString & value)*/{
  const QString & namespaceUri = *(const QString *)this_; const QString & name = *(const QString *)this_; const QString & value = *(const QString *)this_;
  this_ =  new QXmlStreamAttribute(namespaceUri, name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:109
// [-2] void QXmlStreamAttribute(const QXmlStreamAttribute &) 
// (12)qm1211176931 (31)_ZN19QXmlStreamAttributeC2ERKS_
/*void* qm1211176931(const QXmlStreamAttribute & arg0)*/{
  const QXmlStreamAttribute & arg0 = *(const QXmlStreamAttribute *)this_;
  this_ =  new QXmlStreamAttribute(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:110
// [-2] void QXmlStreamAttribute(QXmlStreamAttribute &&) 
// (11)qm320355471 (30)_ZN19QXmlStreamAttributeC2EOS_
/*void* qm320355471(QXmlStreamAttribute && other)*/{
  QXmlStreamAttribute && other =  static_cast<QXmlStreamAttribute &&>(*(QXmlStreamAttribute *)this_);
  this_ =  new QXmlStreamAttribute(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:120
// [80] QXmlStreamAttribute & operator=(QXmlStreamAttribute &&) 
// (12)qm4247701071 (30)_ZN19QXmlStreamAttributeaSEOS_
//static
/*void qm4247701071(QXmlStreamAttribute && other)*/ {
  QXmlStreamAttribute && other =  static_cast<QXmlStreamAttribute &&>(*(QXmlStreamAttribute *)this_);
  (void) ((QXmlStreamAttribute*)this_)->operator=(other);
  // auto xptr = (QXmlStreamAttribute & (QXmlStreamAttribute::*)(QXmlStreamAttribute&&) ) &QXmlStreamAttribute::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:134
// [16] QStringRef namespaceUri() const
// (12)qm4275090305 (41)_ZNK19QXmlStreamAttribute12namespaceUriEv
//static
/*void qm4275090305()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->namespaceUri();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::namespaceUri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:135
// [16] QStringRef name() const
// (11)qm696409211 (32)_ZNK19QXmlStreamAttribute4nameEv
//static
/*void qm696409211()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->name();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:136
// [16] QStringRef qualifiedName() const
// (12)qm2274804633 (42)_ZNK19QXmlStreamAttribute13qualifiedNameEv
//static
/*void qm2274804633()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->qualifiedName();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::qualifiedName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:137
// [16] QStringRef prefix() const
// (12)qm2178916651 (34)_ZNK19QXmlStreamAttribute6prefixEv
//static
/*void qm2178916651()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->prefix();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::prefix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:142
// [16] QStringRef value() const
// (12)qm2506006180 (33)_ZNK19QXmlStreamAttribute5valueEv
//static
/*void qm2506006180()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->value();
   auto xptr = (QStringRef (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:143
// [1] bool isDefault() const
// (11)qm306523775 (37)_ZNK19QXmlStreamAttribute9isDefaultEv
//static
/*void qm306523775()*/ {
  ;
  (void) ((QXmlStreamAttribute*)this_)->isDefault();
   auto xptr = (bool (QXmlStreamAttribute::*)() const ) &QXmlStreamAttribute::isDefault;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:144
// [1] bool operator==(const QXmlStreamAttribute &) const
// (12)qm2924489044 (32)_ZNK19QXmlStreamAttributeeqERKS_
//static
/*void qm2924489044(const QXmlStreamAttribute & other)*/ {
  const QXmlStreamAttribute & other = *(const QXmlStreamAttribute *)this_;
  (void) ((QXmlStreamAttribute*)this_)->operator==(other);
  // auto xptr = (bool (QXmlStreamAttribute::*)(QXmlStreamAttribute const&) const ) &QXmlStreamAttribute::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:149
// [1] bool operator!=(const QXmlStreamAttribute &) const
// (11)qm873479459 (32)_ZNK19QXmlStreamAttributeneERKS_
//static
/*void qm873479459(const QXmlStreamAttribute & other)*/ {
  const QXmlStreamAttribute & other = *(const QXmlStreamAttribute *)this_;
  (void) ((QXmlStreamAttribute*)this_)->operator!=(other);
  // auto xptr = (bool (QXmlStreamAttribute::*)(QXmlStreamAttribute const&) const ) &QXmlStreamAttribute::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QXmlStreamAttributeD2Ev(void *this_)*/ {
  delete (QXmlStreamAttribute*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamattribute
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
