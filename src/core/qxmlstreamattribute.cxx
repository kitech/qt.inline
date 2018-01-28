//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

// QXmlStreamAttribute is pure virtual: false
//  header block end

//  main block begin

class MyQXmlStreamAttribute : public QXmlStreamAttribute {
public:
MyQXmlStreamAttribute() : QXmlStreamAttribute() {}
MyQXmlStreamAttribute(const QString & qualifiedName, const QString & value) : QXmlStreamAttribute(qualifiedName, value) {}
MyQXmlStreamAttribute(const QString & namespaceUri, const QString & name, const QString & value) : QXmlStreamAttribute(namespaceUri, name, value) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:109
// [-2] void QXmlStreamAttribute()
extern "C"
void* C_ZN19QXmlStreamAttributeC1Ev() {
  (MyQXmlStreamAttribute*)(0);
  return  new MyQXmlStreamAttribute();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:110
// [-2] void QXmlStreamAttribute(const class QString &, const class QString &)
extern "C"
void* C_ZN19QXmlStreamAttributeC1ERK7QStringS2_(const QString & qualifiedName, const QString & value) {
  (MyQXmlStreamAttribute*)(0);
  return  new MyQXmlStreamAttribute(qualifiedName, value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:112
// [-2] void QXmlStreamAttribute(const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN19QXmlStreamAttributeC1ERK7QStringS2_S2_(const QString & namespaceUri, const QString & name, const QString & value) {
  (MyQXmlStreamAttribute*)(0);
  return  new MyQXmlStreamAttribute(namespaceUri, name, value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:137
// [-2] void ~QXmlStreamAttribute()
extern "C"
void C_ZN19QXmlStreamAttributeD1Ev(void *this_) {
  delete (QXmlStreamAttribute*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:140
// [16] QStringRef namespaceUri()
extern "C"
void* C_ZNK19QXmlStreamAttribute12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->namespaceUri();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:141
// [16] QStringRef name()
extern "C"
void* C_ZNK19QXmlStreamAttribute4nameEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->name();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:142
// [16] QStringRef qualifiedName()
extern "C"
void* C_ZNK19QXmlStreamAttribute13qualifiedNameEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->qualifiedName();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:143
// [16] QStringRef prefix()
extern "C"
void* C_ZNK19QXmlStreamAttribute6prefixEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->prefix();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:148
// [16] QStringRef value()
extern "C"
void* C_ZNK19QXmlStreamAttribute5valueEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->value();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:149
// [1] bool isDefault()
extern "C"
bool C_ZNK19QXmlStreamAttribute9isDefaultEv(void *this_) {
  return (bool)((QXmlStreamAttribute*)this_)->isDefault();
}
//  main block end
