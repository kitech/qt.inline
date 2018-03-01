//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamNotationDeclaration is pure virtual: false
// QXmlStreamNotationDeclaration has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQXmlStreamNotationDeclaration : public QXmlStreamNotationDeclaration {
public:
  virtual ~MyQXmlStreamNotationDeclaration() {}
// void QXmlStreamNotationDeclaration()
MyQXmlStreamNotationDeclaration() : QXmlStreamNotationDeclaration() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:241
// [-2] void QXmlStreamNotationDeclaration()
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationC2Ev() {
  return  new QXmlStreamNotationDeclaration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:243
// [-2] void ~QXmlStreamNotationDeclaration()
extern "C" Q_DECL_EXPORT
void C_ZN29QXmlStreamNotationDeclarationD2Ev(void *this_) {
  delete (QXmlStreamNotationDeclaration*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:253
// [56] QXmlStreamNotationDeclaration & operator=(const class QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationaSERKS_(void *this_, QXmlStreamNotationDeclaration* arg0) {
  auto& rv = ((QXmlStreamNotationDeclaration*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:254
// [56] QXmlStreamNotationDeclaration & operator=(class QXmlStreamNotationDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationaSEOS_(void *this_, QXmlStreamNotationDeclaration && other) {
  auto& rv = ((QXmlStreamNotationDeclaration*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:264
// [16] QStringRef name()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QXmlStreamNotationDeclaration4nameEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->name();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:265
// [16] QStringRef systemId()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QXmlStreamNotationDeclaration8systemIdEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->systemId();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:266
// [16] QStringRef publicId()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QXmlStreamNotationDeclaration8publicIdEv(void *this_) {
  auto rv = ((QXmlStreamNotationDeclaration*)this_)->publicId();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:267
// [1] bool operator==(const class QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QXmlStreamNotationDeclarationeqERKS_(void *this_, QXmlStreamNotationDeclaration* other) {
  return (bool)((QXmlStreamNotationDeclaration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:271
// [1] bool operator!=(const class QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QXmlStreamNotationDeclarationneERKS_(void *this_, QXmlStreamNotationDeclaration* other) {
  return (bool)((QXmlStreamNotationDeclaration*)this_)->operator!=(*other);
}

//  main block end
