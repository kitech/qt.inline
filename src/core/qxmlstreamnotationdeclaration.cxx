//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamNotationDeclaration is pure virtual: false false
// QXmlStreamNotationDeclaration has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamnotationdeclaration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:235
// [-2] void QXmlStreamNotationDeclaration() 
// (12)qm2301654862 (38)_ZN29QXmlStreamNotationDeclarationC2Ev
/*void* qm2301654862()*/{
  ;
  this_ =  new QXmlStreamNotationDeclaration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:238
// [-2] void QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration &) 
// (12)qm4198481526 (41)_ZN29QXmlStreamNotationDeclarationC2ERKS_
/*void* qm4198481526(const QXmlStreamNotationDeclaration & arg0)*/{
  const QXmlStreamNotationDeclaration & arg0 = *(const QXmlStreamNotationDeclaration *)this_;
  this_ =  new QXmlStreamNotationDeclaration(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:239
// [-2] void QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration &&) 
// (12)qm2696577334 (40)_ZN29QXmlStreamNotationDeclarationC2EOS_
/*void* qm2696577334(QXmlStreamNotationDeclaration && other)*/{
  QXmlStreamNotationDeclaration && other =  static_cast<QXmlStreamNotationDeclaration &&>(*(QXmlStreamNotationDeclaration *)this_);
  this_ =  new QXmlStreamNotationDeclaration(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:248
// [56] QXmlStreamNotationDeclaration & operator=(QXmlStreamNotationDeclaration &&) 
// (12)qm1317829622 (40)_ZN29QXmlStreamNotationDeclarationaSEOS_
//static
/*void qm1317829622(QXmlStreamNotationDeclaration && other)*/ {
  QXmlStreamNotationDeclaration && other =  static_cast<QXmlStreamNotationDeclaration &&>(*(QXmlStreamNotationDeclaration *)this_);
  (void) ((QXmlStreamNotationDeclaration*)this_)->operator=(other);
  // auto xptr = (QXmlStreamNotationDeclaration & (QXmlStreamNotationDeclaration::*)(QXmlStreamNotationDeclaration&&) ) &QXmlStreamNotationDeclaration::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:258
// [16] QStringRef name() const
// (11)qm545636559 (42)_ZNK29QXmlStreamNotationDeclaration4nameEv
//static
/*void qm545636559()*/ {
  ;
  (void) ((QXmlStreamNotationDeclaration*)this_)->name();
   auto xptr = (QStringRef (QXmlStreamNotationDeclaration::*)() const ) &QXmlStreamNotationDeclaration::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:259
// [16] QStringRef systemId() const
// (11)qm161714168 (46)_ZNK29QXmlStreamNotationDeclaration8systemIdEv
//static
/*void qm161714168()*/ {
  ;
  (void) ((QXmlStreamNotationDeclaration*)this_)->systemId();
   auto xptr = (QStringRef (QXmlStreamNotationDeclaration::*)() const ) &QXmlStreamNotationDeclaration::systemId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:260
// [16] QStringRef publicId() const
// (11)qm678583017 (46)_ZNK29QXmlStreamNotationDeclaration8publicIdEv
//static
/*void qm678583017()*/ {
  ;
  (void) ((QXmlStreamNotationDeclaration*)this_)->publicId();
   auto xptr = (QStringRef (QXmlStreamNotationDeclaration::*)() const ) &QXmlStreamNotationDeclaration::publicId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:261
// [1] bool operator==(const QXmlStreamNotationDeclaration &) const
// (12)qm2807543264 (42)_ZNK29QXmlStreamNotationDeclarationeqERKS_
//static
/*void qm2807543264(const QXmlStreamNotationDeclaration & other)*/ {
  const QXmlStreamNotationDeclaration & other = *(const QXmlStreamNotationDeclaration *)this_;
  (void) ((QXmlStreamNotationDeclaration*)this_)->operator==(other);
  // auto xptr = (bool (QXmlStreamNotationDeclaration::*)(QXmlStreamNotationDeclaration const&) const ) &QXmlStreamNotationDeclaration::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:265
// [1] bool operator!=(const QXmlStreamNotationDeclaration &) const
// (12)qm1024958871 (42)_ZNK29QXmlStreamNotationDeclarationneERKS_
//static
/*void qm1024958871(const QXmlStreamNotationDeclaration & other)*/ {
  const QXmlStreamNotationDeclaration & other = *(const QXmlStreamNotationDeclaration *)this_;
  (void) ((QXmlStreamNotationDeclaration*)this_)->operator!=(other);
  // auto xptr = (bool (QXmlStreamNotationDeclaration::*)(QXmlStreamNotationDeclaration const&) const ) &QXmlStreamNotationDeclaration::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN29QXmlStreamNotationDeclarationD2Ev(void *this_)*/ {
  delete (QXmlStreamNotationDeclaration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamnotationdeclaration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
