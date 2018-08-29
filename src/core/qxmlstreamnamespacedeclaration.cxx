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

// QXmlStreamNamespaceDeclaration is pure virtual: false
// QXmlStreamNamespaceDeclaration has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration_t qt_meta_stringdata_MyQXmlStreamNamespaceDeclaration = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQXmlStreamNamespaceDeclaration"
  },
  "MyQXmlStreamNamespaceDeclaration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamNamespaceDeclaration[] = {
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
class Q_DECL_EXPORT MyQXmlStreamNamespaceDeclaration : public QXmlStreamNamespaceDeclaration {
public:
  virtual ~MyQXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration()
MyQXmlStreamNamespaceDeclaration() : QXmlStreamNamespaceDeclaration() {}
// void QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)
MyQXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration & arg0) : QXmlStreamNamespaceDeclaration(arg0) {}
// void QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration &&)
MyQXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration && other) : QXmlStreamNamespaceDeclaration(other) {}
// void QXmlStreamNamespaceDeclaration(const QString &, const QString &)
MyQXmlStreamNamespaceDeclaration(const QString & prefix, const QString & namespaceUri) : QXmlStreamNamespaceDeclaration(prefix, namespaceUri) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:199
// [-2] void QXmlStreamNamespaceDeclaration()
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2Ev() {
  return  new QXmlStreamNamespaceDeclaration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:201
// [-2] void QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2ERKS_(QXmlStreamNamespaceDeclaration* arg0) {
  return  new QXmlStreamNamespaceDeclaration(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:202
// [-2] void QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2EOS_(QXmlStreamNamespaceDeclaration && other) {
  return  new QXmlStreamNamespaceDeclaration(other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:209
// [40] QXmlStreamNamespaceDeclaration & operator=(QXmlStreamNamespaceDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationaSEOS_(void *this_, QXmlStreamNamespaceDeclaration && other) {
  auto& rv = ((QXmlStreamNamespaceDeclaration*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qxmlstream.h:216
// [-2] void QXmlStreamNamespaceDeclaration(const QString &, const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN30QXmlStreamNamespaceDeclarationC2ERK7QStringS2_(QString* prefix, QString* namespaceUri) {
  return  new QXmlStreamNamespaceDeclaration(*prefix, *namespaceUri);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:217
// [-2] void ~QXmlStreamNamespaceDeclaration()
extern "C" Q_DECL_EXPORT
void C_ZN30QXmlStreamNamespaceDeclarationD2Ev(void *this_) {
  delete (QXmlStreamNamespaceDeclaration*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:218
// [40] QXmlStreamNamespaceDeclaration & operator=(const QXmlStreamNamespaceDeclaration &)
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
// [1] bool operator==(const QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QXmlStreamNamespaceDeclarationeqERKS_(void *this_, QXmlStreamNamespaceDeclaration* other) {
  return (bool)((QXmlStreamNamespaceDeclaration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:226
// [1] bool operator!=(const QXmlStreamNamespaceDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK30QXmlStreamNamespaceDeclarationneERKS_(void *this_, QXmlStreamNamespaceDeclaration* other) {
  return (bool)((QXmlStreamNamespaceDeclaration*)this_)->operator!=(*other);
}

//  main block end
