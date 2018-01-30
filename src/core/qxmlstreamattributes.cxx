//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

// QXmlStreamAttributes is pure virtual: false
// QXmlStreamAttributes has virtual projected: false
//  header block end

//  main block begin

class MyQXmlStreamAttributes : public QXmlStreamAttributes {
public:
  virtual ~MyQXmlStreamAttributes() {}
// void QXmlStreamAttributes()
MyQXmlStreamAttributes() : QXmlStreamAttributes() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:164
// [-2] void QXmlStreamAttributes()
extern "C"
void* C_ZN20QXmlStreamAttributesC2Ev() {
  return  new QXmlStreamAttributes();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:165
// [16] QStringRef value(const class QString &, const class QString &)
extern "C"
void* C_ZNK20QXmlStreamAttributes5valueERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(namespaceUri, name);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:166
// [16] QStringRef value(const class QString &, class QLatin1String)
extern "C"
void* C_ZNK20QXmlStreamAttributes5valueERK7QString13QLatin1String(void *this_, const QString & namespaceUri, QLatin1String* name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(namespaceUri, *name);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:167
// [16] QStringRef value(class QLatin1String, class QLatin1String)
extern "C"
void* C_ZNK20QXmlStreamAttributes5valueE13QLatin1StringS0_(void *this_, QLatin1String* namespaceUri, QLatin1String* name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*namespaceUri, *name);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:168
// [16] QStringRef value(const class QString &)
extern "C"
void* C_ZNK20QXmlStreamAttributes5valueERK7QString(void *this_, const QString & qualifiedName) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(qualifiedName);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:169
// [16] QStringRef value(class QLatin1String)
extern "C"
void* C_ZNK20QXmlStreamAttributes5valueE13QLatin1String(void *this_, QLatin1String* qualifiedName) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*qualifiedName);
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:173
// [1] bool hasAttribute(const class QString &)
extern "C"
bool C_ZNK20QXmlStreamAttributes12hasAttributeERK7QString(void *this_, const QString & qualifiedName) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(qualifiedName);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:178
// [1] bool hasAttribute(class QLatin1String)
extern "C"
bool C_ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String(void *this_, QLatin1String* qualifiedName) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(*qualifiedName);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:183
// [1] bool hasAttribute(const class QString &, const class QString &)
extern "C"
bool C_ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_(void *this_, const QString & namespaceUri, const QString & name) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(namespaceUri, name);
}
//  main block end
