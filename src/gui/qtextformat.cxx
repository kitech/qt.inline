//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextformat.h:287
// void QTextFormat()
extern "C"
void* C_ZN11QTextFormatC1Ev() {
  return new QTextFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:289
// void QTextFormat(int)
extern "C"
void* C_ZN11QTextFormatC1Ei(int type) {
  return new QTextFormat(type);
}
// /usr/include/qt/QtGui/qtextformat.h:293
// void ~QTextFormat()
extern "C"
void C_ZN11QTextFormatD1Ev(void *this_) {
  delete (QTextFormat*)(this_);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:295
// void swap(class QTextFormat &)
extern "C"
void C_ZN11QTextFormat4swapERS_(void *this_, QTextFormat & other) {
  ((QTextFormat*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qtextformat.h:298
// void merge(const class QTextFormat &)
extern "C"
void C_ZN11QTextFormat5mergeERKS_(void *this_, const QTextFormat & other) {
  ((QTextFormat*)this_)->merge(other);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:300
// bool isValid()
extern "C"
void C_ZNK11QTextFormat7isValidEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isValid();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:301
// bool isEmpty()
extern "C"
void C_ZNK11QTextFormat7isEmptyEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qtextformat.h:303
// int type()
extern "C"
void C_ZNK11QTextFormat4typeEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->type();
}
// /usr/include/qt/QtGui/qtextformat.h:305
// int objectIndex()
extern "C"
void C_ZNK11QTextFormat11objectIndexEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->objectIndex();
}
// /usr/include/qt/QtGui/qtextformat.h:306
// void setObjectIndex(int)
extern "C"
void C_ZN11QTextFormat14setObjectIndexEi(void *this_, int object) {
  ((QTextFormat*)this_)->setObjectIndex(object);
}
// /usr/include/qt/QtGui/qtextformat.h:308
// QVariant property(int)
extern "C"
void C_ZNK11QTextFormat8propertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->property(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:309
// void setProperty(int, const class QVariant &)
extern "C"
void C_ZN11QTextFormat11setPropertyEiRK8QVariant(void *this_, int propertyId, const QVariant & value) {
  ((QTextFormat*)this_)->setProperty(propertyId, value);
}
// /usr/include/qt/QtGui/qtextformat.h:310
// void clearProperty(int)
extern "C"
void C_ZN11QTextFormat13clearPropertyEi(void *this_, int propertyId) {
  ((QTextFormat*)this_)->clearProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:311
// bool hasProperty(int)
extern "C"
void C_ZNK11QTextFormat11hasPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->hasProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:313
// bool boolProperty(int)
extern "C"
void C_ZNK11QTextFormat12boolPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->boolProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:314
// int intProperty(int)
extern "C"
void C_ZNK11QTextFormat11intPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->intProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:315
// qreal doubleProperty(int)
extern "C"
void C_ZNK11QTextFormat14doublePropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->doubleProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:316
// QString stringProperty(int)
extern "C"
void C_ZNK11QTextFormat14stringPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->stringProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:317
// QColor colorProperty(int)
extern "C"
void C_ZNK11QTextFormat13colorPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->colorProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:318
// QPen penProperty(int)
extern "C"
void C_ZNK11QTextFormat11penPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->penProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:319
// QBrush brushProperty(int)
extern "C"
void C_ZNK11QTextFormat13brushPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->brushProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:320
// QTextLength lengthProperty(int)
extern "C"
void C_ZNK11QTextFormat14lengthPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->lengthProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:321
// QVector<QTextLength> lengthVectorProperty(int)
extern "C"
void C_ZNK11QTextFormat20lengthVectorPropertyEi(void *this_, int propertyId) {
  /*return*/ ((QTextFormat*)this_)->lengthVectorProperty(propertyId);
}
// /usr/include/qt/QtGui/qtextformat.h:323
// void setProperty(int, const QVector<class QTextLength> &)
extern "C"
void C_ZN11QTextFormat11setPropertyEiRK7QVectorI11QTextLengthE(void *this_, int propertyId, const QVector<QTextLength> & lengths) {
  ((QTextFormat*)this_)->setProperty(propertyId, lengths);
}
// /usr/include/qt/QtGui/qtextformat.h:325
// QMap<int, QVariant> properties()
extern "C"
void C_ZNK11QTextFormat10propertiesEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->properties();
}
// /usr/include/qt/QtGui/qtextformat.h:326
// int propertyCount()
extern "C"
void C_ZNK11QTextFormat13propertyCountEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->propertyCount();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:328
// void setObjectType(int)
extern "C"
void C_ZN11QTextFormat13setObjectTypeEi(void *this_, int type) {
  ((QTextFormat*)this_)->setObjectType(type);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:329
// int objectType()
extern "C"
void C_ZNK11QTextFormat10objectTypeEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->objectType();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:332
// bool isCharFormat()
extern "C"
void C_ZNK11QTextFormat12isCharFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isCharFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:333
// bool isBlockFormat()
extern "C"
void C_ZNK11QTextFormat13isBlockFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isBlockFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:334
// bool isListFormat()
extern "C"
void C_ZNK11QTextFormat12isListFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isListFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:335
// bool isFrameFormat()
extern "C"
void C_ZNK11QTextFormat13isFrameFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isFrameFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:336
// bool isImageFormat()
extern "C"
void C_ZNK11QTextFormat13isImageFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isImageFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:337
// bool isTableFormat()
extern "C"
void C_ZNK11QTextFormat13isTableFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isTableFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:338
// bool isTableCellFormat()
extern "C"
void C_ZNK11QTextFormat17isTableCellFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->isTableCellFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:340
// QTextBlockFormat toBlockFormat()
extern "C"
void C_ZNK11QTextFormat13toBlockFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toBlockFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:341
// QTextCharFormat toCharFormat()
extern "C"
void C_ZNK11QTextFormat12toCharFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toCharFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:342
// QTextListFormat toListFormat()
extern "C"
void C_ZNK11QTextFormat12toListFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toListFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:343
// QTextTableFormat toTableFormat()
extern "C"
void C_ZNK11QTextFormat13toTableFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toTableFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:344
// QTextFrameFormat toFrameFormat()
extern "C"
void C_ZNK11QTextFormat13toFrameFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toFrameFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:345
// QTextImageFormat toImageFormat()
extern "C"
void C_ZNK11QTextFormat13toImageFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toImageFormat();
}
// /usr/include/qt/QtGui/qtextformat.h:346
// QTextTableCellFormat toTableCellFormat()
extern "C"
void C_ZNK11QTextFormat17toTableCellFormatEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->toTableCellFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:352
// void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QTextFormat*)this_)->setLayoutDirection(direction);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:354
// Qt::LayoutDirection layoutDirection()
extern "C"
void C_ZNK11QTextFormat15layoutDirectionEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->layoutDirection();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:357
// void setBackground(const class QBrush &)
extern "C"
void C_ZN11QTextFormat13setBackgroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QTextFormat*)this_)->setBackground(brush);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:359
// QBrush background()
extern "C"
void C_ZNK11QTextFormat10backgroundEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->background();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:361
// void clearBackground()
extern "C"
void C_ZN11QTextFormat15clearBackgroundEv(void *this_) {
  ((QTextFormat*)this_)->clearBackground();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:364
// void setForeground(const class QBrush &)
extern "C"
void C_ZN11QTextFormat13setForegroundERK6QBrush(void *this_, const QBrush & brush) {
  ((QTextFormat*)this_)->setForeground(brush);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:366
// QBrush foreground()
extern "C"
void C_ZNK11QTextFormat10foregroundEv(void *this_) {
  /*return*/ ((QTextFormat*)this_)->foreground();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:368
// void clearForeground()
extern "C"
void C_ZN11QTextFormat15clearForegroundEv(void *this_) {
  ((QTextFormat*)this_)->clearForeground();
}
//  main block end
