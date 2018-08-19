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

// QXmlStreamEntityDeclaration is pure virtual: false
// QXmlStreamEntityDeclaration has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQXmlStreamEntityDeclaration : public QXmlStreamEntityDeclaration {
public:
  virtual ~MyQXmlStreamEntityDeclaration() {}
// void QXmlStreamEntityDeclaration()
MyQXmlStreamEntityDeclaration() : QXmlStreamEntityDeclaration() {}
// void QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration &)
MyQXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration & arg0) : QXmlStreamEntityDeclaration(arg0) {}
// void QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration &&)
MyQXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration && other) : QXmlStreamEntityDeclaration(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:286
// [-2] void QXmlStreamEntityDeclaration()
extern "C" Q_DECL_EXPORT
void* C_ZN27QXmlStreamEntityDeclarationC2Ev() {
  return  new QXmlStreamEntityDeclaration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:288
// [-2] void ~QXmlStreamEntityDeclaration()
extern "C" Q_DECL_EXPORT
void C_ZN27QXmlStreamEntityDeclarationD2Ev(void *this_) {
  delete (QXmlStreamEntityDeclaration*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:289
// [-2] void QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QXmlStreamEntityDeclarationC2ERKS_(QXmlStreamEntityDeclaration* arg0) {
  return  new QXmlStreamEntityDeclaration(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:290
// [-2] void QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QXmlStreamEntityDeclarationC2EOS_(QXmlStreamEntityDeclaration && other) {
  return  new QXmlStreamEntityDeclaration(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:300
// [88] QXmlStreamEntityDeclaration & operator=(const QXmlStreamEntityDeclaration &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QXmlStreamEntityDeclarationaSERKS_(void *this_, QXmlStreamEntityDeclaration* arg0) {
  auto& rv = ((QXmlStreamEntityDeclaration*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:301
// [88] QXmlStreamEntityDeclaration & operator=(QXmlStreamEntityDeclaration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QXmlStreamEntityDeclarationaSEOS_(void *this_, QXmlStreamEntityDeclaration && other) {
  auto& rv = ((QXmlStreamEntityDeclaration*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:313
// [16] QStringRef name()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QXmlStreamEntityDeclaration4nameEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->name();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:314
// [16] QStringRef notationName()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QXmlStreamEntityDeclaration12notationNameEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->notationName();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:315
// [16] QStringRef systemId()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QXmlStreamEntityDeclaration8systemIdEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->systemId();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:316
// [16] QStringRef publicId()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QXmlStreamEntityDeclaration8publicIdEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->publicId();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:317
// [16] QStringRef value()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QXmlStreamEntityDeclaration5valueEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->value();
return new QStringRef(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:318
// [1] bool operator==(const QXmlStreamEntityDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK27QXmlStreamEntityDeclarationeqERKS_(void *this_, QXmlStreamEntityDeclaration* other) {
  return (bool)((QXmlStreamEntityDeclaration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:325
// [1] bool operator!=(const QXmlStreamEntityDeclaration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK27QXmlStreamEntityDeclarationneERKS_(void *this_, QXmlStreamEntityDeclaration* other) {
  return (bool)((QXmlStreamEntityDeclaration*)this_)->operator!=(*other);
}

//  main block end
