//  header block begin
// /usr/include/qt/QtGui/qtextlist.h
#include <qtextlist.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qtextlist.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QTextList10metaObjectEv(void *this_) {
  /*return*/ ((QTextList*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qtextlist.h:56
// void QTextList(class QTextDocument *)
extern "C"
void* C_ZN9QTextListC1EP13QTextDocument(QTextDocument * doc) {
  return new QTextList(doc);
}
// virtual
// /usr/include/qt/QtGui/qtextlist.h:57
// void ~QTextList()
extern "C"
void C_ZN9QTextListD1Ev(void *this_) {
  delete (QTextList*)(this_);
}
// /usr/include/qt/QtGui/qtextlist.h:59
// int count()
extern "C"
void C_ZNK9QTextList5countEv(void *this_) {
  /*return*/ ((QTextList*)this_)->count();
}
// inline
// /usr/include/qt/QtGui/qtextlist.h:61
// bool isEmpty()
extern "C"
void C_ZNK9QTextList7isEmptyEv(void *this_) {
  /*return*/ ((QTextList*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qtextlist.h:64
// QTextBlock item(int)
extern "C"
void C_ZNK9QTextList4itemEi(void *this_, int i) {
  /*return*/ ((QTextList*)this_)->item(i);
}
// /usr/include/qt/QtGui/qtextlist.h:66
// int itemNumber(const class QTextBlock &)
extern "C"
void C_ZNK9QTextList10itemNumberERK10QTextBlock(void *this_, const QTextBlock & arg0) {
  /*return*/ ((QTextList*)this_)->itemNumber(arg0);
}
// /usr/include/qt/QtGui/qtextlist.h:67
// QString itemText(const class QTextBlock &)
extern "C"
void C_ZNK9QTextList8itemTextERK10QTextBlock(void *this_, const QTextBlock & arg0) {
  /*return*/ ((QTextList*)this_)->itemText(arg0);
}
// /usr/include/qt/QtGui/qtextlist.h:69
// void removeItem(int)
extern "C"
void C_ZN9QTextList10removeItemEi(void *this_, int i) {
  ((QTextList*)this_)->removeItem(i);
}
// /usr/include/qt/QtGui/qtextlist.h:70
// void remove(const class QTextBlock &)
extern "C"
void C_ZN9QTextList6removeERK10QTextBlock(void *this_, const QTextBlock & arg0) {
  ((QTextList*)this_)->remove(arg0);
}
// /usr/include/qt/QtGui/qtextlist.h:72
// void add(const class QTextBlock &)
extern "C"
void C_ZN9QTextList3addERK10QTextBlock(void *this_, const QTextBlock & block) {
  ((QTextList*)this_)->add(block);
}
// inline
// /usr/include/qt/QtGui/qtextlist.h:74
// void setFormat(const class QTextListFormat &)
extern "C"
void C_ZN9QTextList9setFormatERK15QTextListFormat(void *this_, const QTextListFormat & format) {
  ((QTextList*)this_)->setFormat(format);
}
// inline
// /usr/include/qt/QtGui/qtextlist.h:75
// QTextListFormat format()
extern "C"
void C_ZNK9QTextList6formatEv(void *this_) {
  /*return*/ ((QTextList*)this_)->format();
}
//  main block end
