//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qtextobject.h:204
// void QTextBlock(class QTextDocumentPrivate *, int)
extern "C"
void* C_ZN10QTextBlockC1EP20QTextDocumentPrivatei(QTextDocumentPrivate * priv, int b) {
  return new QTextBlock(priv, b);
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:205
// void QTextBlock()
extern "C"
void* C_ZN10QTextBlockC1Ev() {
  return new QTextBlock();
}
// /usr/include/qt/QtGui/qtextobject.h:209
// bool isValid()
extern "C"
void C_ZNK10QTextBlock7isValidEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtextobject.h:215
// int position()
extern "C"
void C_ZNK10QTextBlock8positionEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->position();
}
// /usr/include/qt/QtGui/qtextobject.h:216
// int length()
extern "C"
void C_ZNK10QTextBlock6lengthEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->length();
}
// /usr/include/qt/QtGui/qtextobject.h:217
// bool contains(int)
extern "C"
void C_ZNK10QTextBlock8containsEi(void *this_, int position) {
  /*return*/ ((QTextBlock*)this_)->contains(position);
}
// /usr/include/qt/QtGui/qtextobject.h:219
// QTextLayout * layout()
extern "C"
void C_ZNK10QTextBlock6layoutEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->layout();
}
// /usr/include/qt/QtGui/qtextobject.h:220
// void clearLayout()
extern "C"
void C_ZN10QTextBlock11clearLayoutEv(void *this_) {
  ((QTextBlock*)this_)->clearLayout();
}
// /usr/include/qt/QtGui/qtextobject.h:221
// QTextBlockFormat blockFormat()
extern "C"
void C_ZNK10QTextBlock11blockFormatEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->blockFormat();
}
// /usr/include/qt/QtGui/qtextobject.h:222
// int blockFormatIndex()
extern "C"
void C_ZNK10QTextBlock16blockFormatIndexEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->blockFormatIndex();
}
// /usr/include/qt/QtGui/qtextobject.h:223
// QTextCharFormat charFormat()
extern "C"
void C_ZNK10QTextBlock10charFormatEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->charFormat();
}
// /usr/include/qt/QtGui/qtextobject.h:224
// int charFormatIndex()
extern "C"
void C_ZNK10QTextBlock15charFormatIndexEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->charFormatIndex();
}
// /usr/include/qt/QtGui/qtextobject.h:226
// Qt::LayoutDirection textDirection()
extern "C"
void C_ZNK10QTextBlock13textDirectionEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->textDirection();
}
// /usr/include/qt/QtGui/qtextobject.h:228
// QString text()
extern "C"
void C_ZNK10QTextBlock4textEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->text();
}
// /usr/include/qt/QtGui/qtextobject.h:230
// QVector<QTextLayout::FormatRange> textFormats()
extern "C"
void C_ZNK10QTextBlock11textFormatsEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->textFormats();
}
// /usr/include/qt/QtGui/qtextobject.h:232
// const QTextDocument * document()
extern "C"
void C_ZNK10QTextBlock8documentEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->document();
}
// /usr/include/qt/QtGui/qtextobject.h:234
// QTextList * textList()
extern "C"
void C_ZNK10QTextBlock8textListEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->textList();
}
// /usr/include/qt/QtGui/qtextobject.h:236
// QTextBlockUserData * userData()
extern "C"
void C_ZNK10QTextBlock8userDataEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->userData();
}
// /usr/include/qt/QtGui/qtextobject.h:237
// void setUserData(class QTextBlockUserData *)
extern "C"
void C_ZN10QTextBlock11setUserDataEP18QTextBlockUserData(void *this_, QTextBlockUserData * data) {
  ((QTextBlock*)this_)->setUserData(data);
}
// /usr/include/qt/QtGui/qtextobject.h:239
// int userState()
extern "C"
void C_ZNK10QTextBlock9userStateEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->userState();
}
// /usr/include/qt/QtGui/qtextobject.h:240
// void setUserState(int)
extern "C"
void C_ZN10QTextBlock12setUserStateEi(void *this_, int state) {
  ((QTextBlock*)this_)->setUserState(state);
}
// /usr/include/qt/QtGui/qtextobject.h:242
// int revision()
extern "C"
void C_ZNK10QTextBlock8revisionEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->revision();
}
// /usr/include/qt/QtGui/qtextobject.h:243
// void setRevision(int)
extern "C"
void C_ZN10QTextBlock11setRevisionEi(void *this_, int rev) {
  ((QTextBlock*)this_)->setRevision(rev);
}
// /usr/include/qt/QtGui/qtextobject.h:245
// bool isVisible()
extern "C"
void C_ZNK10QTextBlock9isVisibleEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->isVisible();
}
// /usr/include/qt/QtGui/qtextobject.h:246
// void setVisible(_Bool)
extern "C"
void C_ZN10QTextBlock10setVisibleEb(void *this_, bool visible) {
  ((QTextBlock*)this_)->setVisible(visible);
}
// /usr/include/qt/QtGui/qtextobject.h:248
// int blockNumber()
extern "C"
void C_ZNK10QTextBlock11blockNumberEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->blockNumber();
}
// /usr/include/qt/QtGui/qtextobject.h:249
// int firstLineNumber()
extern "C"
void C_ZNK10QTextBlock15firstLineNumberEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->firstLineNumber();
}
// /usr/include/qt/QtGui/qtextobject.h:251
// void setLineCount(int)
extern "C"
void C_ZN10QTextBlock12setLineCountEi(void *this_, int count) {
  ((QTextBlock*)this_)->setLineCount(count);
}
// /usr/include/qt/QtGui/qtextobject.h:252
// int lineCount()
extern "C"
void C_ZNK10QTextBlock9lineCountEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->lineCount();
}
// /usr/include/qt/QtGui/qtextobject.h:282
// QTextBlock::iterator begin()
extern "C"
void C_ZNK10QTextBlock5beginEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->begin();
}
// /usr/include/qt/QtGui/qtextobject.h:283
// QTextBlock::iterator end()
extern "C"
void C_ZNK10QTextBlock3endEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->end();
}
// /usr/include/qt/QtGui/qtextobject.h:285
// QTextBlock next()
extern "C"
void C_ZNK10QTextBlock4nextEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->next();
}
// /usr/include/qt/QtGui/qtextobject.h:286
// QTextBlock previous()
extern "C"
void C_ZNK10QTextBlock8previousEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->previous();
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:288
// QTextDocumentPrivate * docHandle()
extern "C"
void C_ZNK10QTextBlock9docHandleEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->docHandle();
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:289
// int fragmentIndex()
extern "C"
void C_ZNK10QTextBlock13fragmentIndexEv(void *this_) {
  /*return*/ ((QTextBlock*)this_)->fragmentIndex();
}
//  main block end
