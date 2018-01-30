//  header block begin
// /usr/include/qt/QtGui/qtextlayout.h
#include <qtextlayout.h>
#include <QtGui>

// QTextLine is pure virtual: false
// QTextLine has virtual projected: false
//  header block end

//  main block begin

class MyQTextLine : public QTextLine {
public:
  virtual ~MyQTextLine() {}
// void QTextLine()
MyQTextLine() : QTextLine() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:213
// [-2] void QTextLine()
extern "C"
void* C_ZN9QTextLineC2Ev() {
  return  new QTextLine();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:214
// [1] bool isValid()
extern "C"
bool C_ZNK9QTextLine7isValidEv(void *this_) {
  return (bool)((QTextLine*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:216
// [32] QRectF rect()
extern "C"
void* C_ZNK9QTextLine4rectEv(void *this_) {
  auto rv = ((QTextLine*)this_)->rect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:217
// [8] qreal x()
extern "C"
qreal C_ZNK9QTextLine1xEv(void *this_) {
  return (qreal)((QTextLine*)this_)->x();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:218
// [8] qreal y()
extern "C"
qreal C_ZNK9QTextLine1yEv(void *this_) {
  return (qreal)((QTextLine*)this_)->y();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:219
// [8] qreal width()
extern "C"
qreal C_ZNK9QTextLine5widthEv(void *this_) {
  return (qreal)((QTextLine*)this_)->width();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:220
// [8] qreal ascent()
extern "C"
qreal C_ZNK9QTextLine6ascentEv(void *this_) {
  return (qreal)((QTextLine*)this_)->ascent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:221
// [8] qreal descent()
extern "C"
qreal C_ZNK9QTextLine7descentEv(void *this_) {
  return (qreal)((QTextLine*)this_)->descent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:222
// [8] qreal height()
extern "C"
qreal C_ZNK9QTextLine6heightEv(void *this_) {
  return (qreal)((QTextLine*)this_)->height();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:223
// [8] qreal leading()
extern "C"
qreal C_ZNK9QTextLine7leadingEv(void *this_) {
  return (qreal)((QTextLine*)this_)->leading();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:225
// [-2] void setLeadingIncluded(_Bool)
extern "C"
void C_ZN9QTextLine18setLeadingIncludedEb(void *this_, bool included) {
  ((QTextLine*)this_)->setLeadingIncluded(included);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:226
// [1] bool leadingIncluded()
extern "C"
bool C_ZNK9QTextLine15leadingIncludedEv(void *this_) {
  return (bool)((QTextLine*)this_)->leadingIncluded();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:228
// [8] qreal naturalTextWidth()
extern "C"
qreal C_ZNK9QTextLine16naturalTextWidthEv(void *this_) {
  return (qreal)((QTextLine*)this_)->naturalTextWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:229
// [8] qreal horizontalAdvance()
extern "C"
qreal C_ZNK9QTextLine17horizontalAdvanceEv(void *this_) {
  return (qreal)((QTextLine*)this_)->horizontalAdvance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:230
// [32] QRectF naturalTextRect()
extern "C"
void* C_ZNK9QTextLine15naturalTextRectEv(void *this_) {
  auto rv = ((QTextLine*)this_)->naturalTextRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:242
// [8] qreal cursorToX(int *, enum QTextLine::Edge)
extern "C"
qreal C_ZNK9QTextLine9cursorToXEPiNS_4EdgeE(void *this_, int * cursorPos, QTextLine::Edge edge) {
  return (qreal)((QTextLine*)this_)->cursorToX(cursorPos, edge);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:243
// [8] qreal cursorToX(int, enum QTextLine::Edge)
extern "C"
qreal C_ZNK9QTextLine9cursorToXEiNS_4EdgeE(void *this_, int cursorPos, QTextLine::Edge edge) {
  return (qreal)((QTextLine*)this_)->cursorToX(cursorPos, edge);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:244
// [4] int xToCursor(qreal, enum QTextLine::CursorPosition)
extern "C"
int C_ZNK9QTextLine9xToCursorEdNS_14CursorPositionE(void *this_, qreal x, QTextLine::CursorPosition arg1) {
  return (int)((QTextLine*)this_)->xToCursor(x, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:246
// [-2] void setLineWidth(qreal)
extern "C"
void C_ZN9QTextLine12setLineWidthEd(void *this_, qreal width) {
  ((QTextLine*)this_)->setLineWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:247
// [-2] void setNumColumns(int)
extern "C"
void C_ZN9QTextLine13setNumColumnsEi(void *this_, int columns) {
  ((QTextLine*)this_)->setNumColumns(columns);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:248
// [-2] void setNumColumns(int, qreal)
extern "C"
void C_ZN9QTextLine13setNumColumnsEid(void *this_, int columns, qreal alignmentWidth) {
  ((QTextLine*)this_)->setNumColumns(columns, alignmentWidth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:250
// [-2] void setPosition(const class QPointF &)
extern "C"
void C_ZN9QTextLine11setPositionERK7QPointF(void *this_, const QPointF & pos) {
  ((QTextLine*)this_)->setPosition(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:251
// [16] QPointF position()
extern "C"
void* C_ZNK9QTextLine8positionEv(void *this_) {
  auto rv = ((QTextLine*)this_)->position();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:253
// [4] int textStart()
extern "C"
int C_ZNK9QTextLine9textStartEv(void *this_) {
  return (int)((QTextLine*)this_)->textStart();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:254
// [4] int textLength()
extern "C"
int C_ZNK9QTextLine10textLengthEv(void *this_) {
  return (int)((QTextLine*)this_)->textLength();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:256
// [4] int lineNumber()
extern "C"
int C_ZNK9QTextLine10lineNumberEv(void *this_) {
  return (int)((QTextLine*)this_)->lineNumber();
}
//  main block end
