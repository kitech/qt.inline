//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

// QXmlStreamEntityDeclaration is pure virtual: false
//  header block end

//  main block begin

class MyQXmlStreamEntityDeclaration : public QXmlStreamEntityDeclaration {
public:
MyQXmlStreamEntityDeclaration() : QXmlStreamEntityDeclaration() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:286
// [-2] void QXmlStreamEntityDeclaration()
extern "C"
void* C_ZN27QXmlStreamEntityDeclarationC1Ev() {
  (MyQXmlStreamEntityDeclaration*)(0);
  return  new MyQXmlStreamEntityDeclaration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:288
// [-2] void ~QXmlStreamEntityDeclaration()
extern "C"
void C_ZN27QXmlStreamEntityDeclarationD1Ev(void *this_) {
  delete (QXmlStreamEntityDeclaration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:313
// [16] QStringRef name()
extern "C"
void* C_ZNK27QXmlStreamEntityDeclaration4nameEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->name();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:314
// [16] QStringRef notationName()
extern "C"
void* C_ZNK27QXmlStreamEntityDeclaration12notationNameEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->notationName();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:315
// [16] QStringRef systemId()
extern "C"
void* C_ZNK27QXmlStreamEntityDeclaration8systemIdEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->systemId();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:316
// [16] QStringRef publicId()
extern "C"
void* C_ZNK27QXmlStreamEntityDeclaration8publicIdEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->publicId();
return new QStringRef(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:317
// [16] QStringRef value()
extern "C"
void* C_ZNK27QXmlStreamEntityDeclaration5valueEv(void *this_) {
  auto rv = ((QXmlStreamEntityDeclaration*)this_)->value();
return new QStringRef(rv);
}
//  main block end
