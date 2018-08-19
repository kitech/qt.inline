//  header block begin
// since 0x040300
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamAttribute is pure virtual: false
// QXmlStreamAttribute has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQXmlStreamAttribute : public QXmlStreamAttribute {
public:
  virtual ~MyQXmlStreamAttribute() {}
// void QXmlStreamAttribute()
MyQXmlStreamAttribute() : QXmlStreamAttribute() {}
// void QXmlStreamAttribute(const QString &, const QString &)
MyQXmlStreamAttribute(const QString & qualifiedName, const QString & value) : QXmlStreamAttribute(qualifiedName, value) {}
// void QXmlStreamAttribute(const QString &, const QString &, const QString &)
MyQXmlStreamAttribute(const QString & namespaceUri, const QString & name, const QString & value) : QXmlStreamAttribute(namespaceUri, name, value) {}
// void QXmlStreamAttribute(const QXmlStreamAttribute &)
MyQXmlStreamAttribute(const QXmlStreamAttribute & arg0) : QXmlStreamAttribute(arg0) {}
// void QXmlStreamAttribute(QXmlStreamAttribute &&)
MyQXmlStreamAttribute(QXmlStreamAttribute && other) : QXmlStreamAttribute(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:109
// [-2] void QXmlStreamAttribute()
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeC2Ev() {
  return  new QXmlStreamAttribute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:110
// [-2] void QXmlStreamAttribute(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeC2ERK7QStringS2_(QString* qualifiedName, QString* value) {
  return  new QXmlStreamAttribute(*qualifiedName, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:112
// [-2] void QXmlStreamAttribute(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeC2ERK7QStringS2_S2_(QString* namespaceUri, QString* name, QString* value) {
  return  new QXmlStreamAttribute(*namespaceUri, *name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:113
// [-2] void QXmlStreamAttribute(const QXmlStreamAttribute &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeC2ERKS_(QXmlStreamAttribute* arg0) {
  return  new QXmlStreamAttribute(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:115
// [-2] void QXmlStreamAttribute(QXmlStreamAttribute &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeC2EOS_(QXmlStreamAttribute && other) {
  return  new QXmlStreamAttribute(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:125
// [80] QXmlStreamAttribute & operator=(QXmlStreamAttribute &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeaSEOS_(void *this_, QXmlStreamAttribute && other) {
  auto& rv = ((QXmlStreamAttribute*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:136
// [80] QXmlStreamAttribute & operator=(const QXmlStreamAttribute &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QXmlStreamAttributeaSERKS_(void *this_, QXmlStreamAttribute* arg0) {
  auto& rv = ((QXmlStreamAttribute*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:137
// [-2] void ~QXmlStreamAttribute()
extern "C" Q_DECL_EXPORT
void C_ZN19QXmlStreamAttributeD2Ev(void *this_) {
  delete (QXmlStreamAttribute*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:140
// [16] QStringRef namespaceUri()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamAttribute12namespaceUriEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->namespaceUri();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:141
// [16] QStringRef name()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamAttribute4nameEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->name();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:142
// [16] QStringRef qualifiedName()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamAttribute13qualifiedNameEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->qualifiedName();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:143
// [16] QStringRef prefix()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamAttribute6prefixEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->prefix();
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:148
// [16] QStringRef value()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QXmlStreamAttribute5valueEv(void *this_) {
  auto rv = ((QXmlStreamAttribute*)this_)->value();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:149
// [1] bool isDefault()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QXmlStreamAttribute9isDefaultEv(void *this_) {
  return (bool)((QXmlStreamAttribute*)this_)->isDefault();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:150
// [1] bool operator==(const QXmlStreamAttribute &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QXmlStreamAttributeeqERKS_(void *this_, QXmlStreamAttribute* other) {
  return (bool)((QXmlStreamAttribute*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:155
// [1] bool operator!=(const QXmlStreamAttribute &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QXmlStreamAttributeneERKS_(void *this_, QXmlStreamAttribute* other) {
  return (bool)((QXmlStreamAttribute*)this_)->operator!=(*other);
}

//  main block end
