//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qxmlstream.h:199
// void QXmlStreamNamespaceDeclaration()
extern "C"
void* C_ZN30QXmlStreamNamespaceDeclarationC1Ev() {
  return new QXmlStreamNamespaceDeclaration();
}
// /usr/include/qt/QtCore/qxmlstream.h:216
// void QXmlStreamNamespaceDeclaration(const class QString &, const class QString &)
extern "C"
void* C_ZN30QXmlStreamNamespaceDeclarationC1ERK7QStringS2_(const QString & prefix, const QString & namespaceUri) {
  return new QXmlStreamNamespaceDeclaration(prefix, namespaceUri);
}
// /usr/include/qt/QtCore/qxmlstream.h:217
// void ~QXmlStreamNamespaceDeclaration()
extern "C"
void C_ZN30QXmlStreamNamespaceDeclarationD1Ev(void *this_) {
  delete (QXmlStreamNamespaceDeclaration*)(this_);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:221
// QStringRef prefix()
extern "C"
void C_ZNK30QXmlStreamNamespaceDeclaration6prefixEv(void *this_) {
  /*return*/ ((QXmlStreamNamespaceDeclaration*)this_)->prefix();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:222
// QStringRef namespaceUri()
extern "C"
void C_ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv(void *this_) {
  /*return*/ ((QXmlStreamNamespaceDeclaration*)this_)->namespaceUri();
}
//  main block end
