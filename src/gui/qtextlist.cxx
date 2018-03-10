//  header block begin
// /usr/include/qt/QtGui/qtextlist.h
#ifndef protected
#define protected public
#endif
#include <qtextlist.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextList is pure virtual: false
// QTextList has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextList : public QTextList {
public:
  virtual ~MyQTextList() {}
// void QTextList(class QTextDocument *)
MyQTextList(QTextDocument * doc) : QTextList(doc) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList10metaObjectEv(void *this_) {
  return (void*)((QTextList*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:57
// [-2] void QTextList(class QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextListC2EP13QTextDocument(QTextDocument * doc) {
  return  new QTextList(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:58
// [-2] void ~QTextList()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextListD2Ev(void *this_) {
  delete (QTextList*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:60
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextList5countEv(void *this_) {
  return (int)((QTextList*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:62
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextList7isEmptyEv(void *this_) {
  return (bool)((QTextList*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:65
// [16] QTextBlock item(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList4itemEi(void *this_, int i) {
  auto rv = ((QTextList*)this_)->item(i);
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:67
// [4] int itemNumber(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextList10itemNumberERK10QTextBlock(void *this_, QTextBlock* arg0) {
  return (int)((QTextList*)this_)->itemNumber(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:68
// [8] QString itemText(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList8itemTextERK10QTextBlock(void *this_, QTextBlock* arg0) {
  auto rv = ((QTextList*)this_)->itemText(*arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:70
// [-2] void removeItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList10removeItemEi(void *this_, int i) {
  ((QTextList*)this_)->removeItem(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:71
// [-2] void remove(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList6removeERK10QTextBlock(void *this_, QTextBlock* arg0) {
  ((QTextList*)this_)->remove(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:73
// [-2] void add(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList3addERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextList*)this_)->add(*block);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:75
// [-2] void setFormat(const class QTextListFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList9setFormatERK15QTextListFormat(void *this_, QTextListFormat* format) {
  ((QTextList*)this_)->setFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:76
// [16] QTextListFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList6formatEv(void *this_) {
  auto rv = ((QTextList*)this_)->format();
return new QTextListFormat(rv);
}

//  main block end
