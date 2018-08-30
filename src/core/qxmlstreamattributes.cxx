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

// QXmlStreamAttributes is pure virtual: false
// QXmlStreamAttributes has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQXmlStreamAttributes_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamAttributes_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamAttributes_t qt_meta_stringdata_MyQXmlStreamAttributes = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQXmlStreamAttributes"
  },
  "MyQXmlStreamAttributes"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamAttributes[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQXmlStreamAttributes : public QXmlStreamAttributes {
public:
  virtual ~MyQXmlStreamAttributes() {}
// void QXmlStreamAttributes()
MyQXmlStreamAttributes() : QXmlStreamAttributes() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:164
// [-2] void QXmlStreamAttributes()
extern "C" Q_DECL_EXPORT
void* C_ZN20QXmlStreamAttributesC2Ev() {
  return  new QXmlStreamAttributes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:165
// [16] QStringRef value(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QXmlStreamAttributes5valueERK7QStringS2_(void *this_, QString* namespaceUri, QString* name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*namespaceUri, *name);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:166
// [16] QStringRef value(const QString &, QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QXmlStreamAttributes5valueERK7QString13QLatin1String(void *this_, QString* namespaceUri, QLatin1String* name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*namespaceUri, *name);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:167
// [16] QStringRef value(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QXmlStreamAttributes5valueE13QLatin1StringS0_(void *this_, QLatin1String* namespaceUri, QLatin1String* name) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*namespaceUri, *name);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:168
// [16] QStringRef value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QXmlStreamAttributes5valueERK7QString(void *this_, QString* qualifiedName) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*qualifiedName);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:169
// [16] QStringRef value(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QXmlStreamAttributes5valueE13QLatin1String(void *this_, QLatin1String* qualifiedName) {
  auto rv = ((QXmlStreamAttributes*)this_)->value(*qualifiedName);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:170
// [-2] void append(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QXmlStreamAttributes6appendERK7QStringS2_S2_(void *this_, QString* namespaceUri, QString* name, QString* value) {
  ((QXmlStreamAttributes*)this_)->append(*namespaceUri, *name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:171
// [-2] void append(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QXmlStreamAttributes6appendERK7QStringS2_(void *this_, QString* qualifiedName, QString* value) {
  ((QXmlStreamAttributes*)this_)->append(*qualifiedName, *value);
}

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qxmlstream.h:173
// [1] bool hasAttribute(const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK20QXmlStreamAttributes12hasAttributeERK7QString(void *this_, QString* qualifiedName) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(*qualifiedName);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qxmlstream.h:178
// [1] bool hasAttribute(QLatin1String)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK20QXmlStreamAttributes12hasAttributeE13QLatin1String(void *this_, QLatin1String* qualifiedName) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(*qualifiedName);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qxmlstream.h:183
// [1] bool hasAttribute(const QString &, const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK20QXmlStreamAttributes12hasAttributeERK7QStringS2_(void *this_, QString* namespaceUri, QString* name) {
  return (bool)((QXmlStreamAttributes*)this_)->hasAttribute(*namespaceUri, *name);
}
#endif // QT_VERSION >= 0x040500


extern "C" Q_DECL_EXPORT
void C_ZN20QXmlStreamAttributesD2Ev(void *this_) {
  delete (QXmlStreamAttributes*)(this_);
}
//  main block end
