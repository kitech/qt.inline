//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

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
extern "C"
void* C_ZN30QXmlStreamNamespaceDeclarationC2Ev() {
  return  new QXmlStreamNamespaceDeclaration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:216
// [-2] void QXmlStreamNamespaceDeclaration(const class QString &, const class QString &)
extern "C"
void* C_ZN30QXmlStreamNamespaceDeclarationC2ERK7QStringS2_(QString* prefix, QString* namespaceUri) {
  return  new QXmlStreamNamespaceDeclaration(*prefix, *namespaceUri);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:217
// [-2] void ~QXmlStreamNamespaceDeclaration()
extern "C"
void C_ZN30QXmlStreamNamespaceDeclarationD2Ev(void *this_) {
  delete (QXmlStreamNamespaceDeclaration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:221
// [16] QStringRef prefix()
extern "C"
void* C_ZNK30QXmlStreamNamespaceDeclaration6prefixEv(void *this_) {
  auto rv = ((QXmlStreamNamespaceDeclaration*)this_)->prefix();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:222
// [16] QStringRef namespaceUri()
extern "C"
void* C_ZNK30QXmlStreamNamespaceDeclaration12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamNamespaceDeclaration*)this_)->namespaceUri();
return new QStringRef(rv);
}
//  main block end
