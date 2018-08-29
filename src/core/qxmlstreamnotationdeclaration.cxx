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

// QXmlStreamNotationDeclaration is pure virtual: false
// QXmlStreamNotationDeclaration has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQXmlStreamNotationDeclaration_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQXmlStreamNotationDeclaration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQXmlStreamNotationDeclaration_t qt_meta_stringdata_MyQXmlStreamNotationDeclaration = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQXmlStreamNotationDeclaration"
  },
  "MyQXmlStreamNotationDeclaration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQXmlStreamNotationDeclaration[] = {
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
class Q_DECL_EXPORT MyQXmlStreamNotationDeclaration : public QXmlStreamNotationDeclaration {
public:
  virtual ~MyQXmlStreamNotationDeclaration() {}
// void QXmlStreamNotationDeclaration()
MyQXmlStreamNotationDeclaration() : QXmlStreamNotationDeclaration() {}
// void QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration &)
MyQXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration & arg0) : QXmlStreamNotationDeclaration(arg0) {}
// void QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration &&)
MyQXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration && other) : QXmlStreamNotationDeclaration(other) {}
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
// /usr/include/qt/QtCore/qxmlstream.h:244
// [-2] void QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationC2ERKS_(QXmlStreamNotationDeclaration* arg0) {
  return  new QXmlStreamNotationDeclaration(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:245
// [-2] void QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationC2EOS_(QXmlStreamNotationDeclaration && other) {
  return  new QXmlStreamNotationDeclaration(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:253
// [56] QXmlStreamNotationDeclaration & operator=(const QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN29QXmlStreamNotationDeclarationaSERKS_(void *this_, QXmlStreamNotationDeclaration* arg0) {
  auto& rv = ((QXmlStreamNotationDeclaration*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:254
// [56] QXmlStreamNotationDeclaration & operator=(QXmlStreamNotationDeclaration &&)
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
// [1] bool operator==(const QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QXmlStreamNotationDeclarationeqERKS_(void *this_, QXmlStreamNotationDeclaration* other) {
  return (bool)((QXmlStreamNotationDeclaration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:271
// [1] bool operator!=(const QXmlStreamNotationDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK29QXmlStreamNotationDeclarationneERKS_(void *this_, QXmlStreamNotationDeclaration* other) {
  return (bool)((QXmlStreamNotationDeclaration*)this_)->operator!=(*other);
}

//  main block end
