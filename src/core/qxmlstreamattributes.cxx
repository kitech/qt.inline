//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qxmlstream.h:164
// void QXmlStreamAttributes()
extern "C"
void* C_ZN20QXmlStreamAttributesC1Ev() {
  return new QXmlStreamAttributes();
}
// /usr/include/qt/QtCore/qxmlstream.h:165
// QStringRef value(const class QString &, const class QString &)
extern "C"
void C_ZNK20QXmlStreamAttributes5valueERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  /*return*/ ((QXmlStreamAttributes*)this_)->value(namespaceUri, name);
}
// /usr/include/qt/QtCore/qxmlstream.h:166
// QStringRef value(const class QString &, class QLatin1String)
extern "C"
void C_ZNK20QXmlStreamAttributes5valueERK7QString13QLatin1String(void *this_, const QString & namespaceUri, QLatin1String name) {
  /*return*/ ((QXmlStreamAttributes*)this_)->value(namespaceUri, name);
}
// /usr/include/qt/QtCore/qxmlstream.h:167
// QStringRef value(class QLatin1String, class QLatin1String)
extern "C"
void C_ZNK20QXmlStreamAttributes5valueE13QLatin1StringS0_(void *this_, QLatin1String namespaceUri, QLatin1String name) {
  /*return*/ ((QXmlStreamAttributes*)this_)->value(namespaceUri, name);
}
// /usr/include/qt/QtCore/qxmlstream.h:168
// QStringRef value(const class QString &)
extern "C"
void C_ZNK20QXmlStreamAttributes5valueERK7QString(void *this_, const QString & qualifiedName) {
  /*return*/ ((QXmlStreamAttributes*)this_)->value(qualifiedName);
}
// /usr/include/qt/QtCore/qxmlstream.h:169
// QStringRef value(class QLatin1String)
extern "C"
void C_ZNK20QXmlStreamAttributes5valueE13QLatin1String(void *this_, QLatin1String qualifiedName) {
  /*return*/ ((QXmlStreamAttributes*)this_)->value(qualifiedName);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:173
// bool hasAttribute(const class QString &)
extern "C"
void C_ZNK20QXmlStreamAttributes12hasAttributeERK7QString(void *this_, const QString & qualifiedName) {
  /*return*/ ((QXmlStreamAttributes*)this_)->hasAttribute(qualifiedName);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:178
// bool hasAttribute(class QLatin1String)
extern "C"
void C_ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String(void *this_, QLatin1String qualifiedName) {
  /*return*/ ((QXmlStreamAttributes*)this_)->hasAttribute(qualifiedName);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:183
// bool hasAttribute(const class QString &, const class QString &)
extern "C"
void C_ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  /*return*/ ((QXmlStreamAttributes*)this_)->hasAttribute(namespaceUri, name);
}
//  main block end
