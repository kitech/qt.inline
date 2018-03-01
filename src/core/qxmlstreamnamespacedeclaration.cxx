//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamNamespaceDeclaration is pure virtual: false
// QXmlStreamNamespaceDeclaration has virtual projected: false
//  header block end

//  main block begin

class MyQXmlStreamNamespaceDeclaration : public QXmlStreamNamespaceDeclaration {
public:
  virtual ~MyQXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration()
MyQXmlStreamNamespaceDeclaration() : QXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration(const class QString &, const class QString &)
MyQXmlStreamNamespaceDeclaration(const QString & prefix, const QString & namespaceUri) : QXmlStreamNamespaceDeclaration(prefix, namespaceUri) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:199
// [-2] void QXmlStreamNamespaceDeclaration()
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2Ev() {
  return  new QXmlStreamNamespaceDeclaration();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:209
// [40] QXmlStreamNamespaceDeclaration & operator=(class QXmlStreamNamespaceDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationaSEOS_(void *this_, QXmlStreamNamespaceDeclaration && other) {
  auto& rv = ((QXmlStreamNamespaceDeclaration*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:216
// [-2] void QXmlStreamNamespaceDeclaration(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2ERK7QStringS2_(QString* prefix, QString* namespaceUri) {
  return  new QXmlStreamNamespaceDeclaration(*prefix, *namespaceUri);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:217
// [-2] void ~QXmlStreamNamespaceDeclaration()
extern "C" Q_DECL_EXPORT
void C_ZN30QXmlStreamNamespaceDeclarationD2Ev(void *this_) {
  delete (QXmlStreamNamespaceDeclaration*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:218
// [40] QXmlStreamNamespaceDeclaration & operator=(const class QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationaSERKS_(void *this_, QXmlStreamNamespaceDeclaration* arg0) {
  auto& rv = ((QXmlStreamNamespaceDeclaration*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:221
// [16] QStringRef prefix()
extern "C" Q_DECL_EXPORT
void* C_ZNK30QXmlStreamNamespaceDeclaration6prefixEv(void *this_) {
  auto rv = ((QXmlStreamNamespaceDeclaration*)this_)->prefix();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:222
// [16] QStringRef namespaceUri()
extern "C" Q_DECL_EXPORT
void* C_ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamNamespaceDeclaration*)this_)->namespaceUri();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:223
// [1] bool operator==(const class QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QXmlStreamNamespaceDeclarationeqERKS_(void *this_, QXmlStreamNamespaceDeclaration* other) {
  return (bool)((QXmlStreamNamespaceDeclaration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:226
// [1] bool operator!=(const class QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QXmlStreamNamespaceDeclarationneERKS_(void *this_, QXmlStreamNamespaceDeclaration* other) {
  return (bool)((QXmlStreamNamespaceDeclaration*)this_)->operator!=(*other);
}

//  main block end
