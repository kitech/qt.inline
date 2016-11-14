// /usr/include/qt/QtGui/qtextlayout.h
#include <qtextlayout.h>
#include <QtGui>

// inline
// /usr/include/qt/QtGui/qtextlayout.h:212
// void QTextLine()
extern "C"
void* C_ZN9QTextLineC1Ev() {
  return new QTextLine();
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:213
// bool isValid()
extern "C"
void C_ZNK9QTextLine7isValidEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtextlayout.h:215
// QRectF rect()
extern "C"
void C_ZNK9QTextLine4rectEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->rect();
}
// /usr/include/qt/QtGui/qtextlayout.h:216
// qreal x()
extern "C"
void C_ZNK9QTextLine1xEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->x();
}
// /usr/include/qt/QtGui/qtextlayout.h:217
// qreal y()
extern "C"
void C_ZNK9QTextLine1yEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->y();
}
// /usr/include/qt/QtGui/qtextlayout.h:218
// qreal width()
extern "C"
void C_ZNK9QTextLine5widthEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->width();
}
// /usr/include/qt/QtGui/qtextlayout.h:219
// qreal ascent()
extern "C"
void C_ZNK9QTextLine6ascentEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->ascent();
}
// /usr/include/qt/QtGui/qtextlayout.h:220
// qreal descent()
extern "C"
void C_ZNK9QTextLine7descentEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->descent();
}
// /usr/include/qt/QtGui/qtextlayout.h:221
// qreal height()
extern "C"
void C_ZNK9QTextLine6heightEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->height();
}
// /usr/include/qt/QtGui/qtextlayout.h:222
// qreal leading()
extern "C"
void C_ZNK9QTextLine7leadingEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->leading();
}
// /usr/include/qt/QtGui/qtextlayout.h:224
// void setLeadingIncluded(_Bool)
extern "C"
void C_ZN9QTextLine18setLeadingIncludedEb(void *this_, bool included) {
  ((QTextLine*)this_)->setLeadingIncluded(included);
}
// /usr/include/qt/QtGui/qtextlayout.h:225
// bool leadingIncluded()
extern "C"
void C_ZNK9QTextLine15leadingIncludedEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->leadingIncluded();
}
// /usr/include/qt/QtGui/qtextlayout.h:227
// qreal naturalTextWidth()
extern "C"
void C_ZNK9QTextLine16naturalTextWidthEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->naturalTextWidth();
}
// /usr/include/qt/QtGui/qtextlayout.h:228
// qreal horizontalAdvance()
extern "C"
void C_ZNK9QTextLine17horizontalAdvanceEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->horizontalAdvance();
}
// /usr/include/qt/QtGui/qtextlayout.h:229
// QRectF naturalTextRect()
extern "C"
void C_ZNK9QTextLine15naturalTextRectEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->naturalTextRect();
}
// /usr/include/qt/QtGui/qtextlayout.h:241
// qreal cursorToX(int *, enum QTextLine::Edge)
extern "C"
void C_ZNK9QTextLine9cursorToXEPiNS_4EdgeE(void *this_, int * cursorPos, QTextLine::Edge edge) {
  /*return*/ ((QTextLine*)this_)->cursorToX(cursorPos, edge);
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:242
// qreal cursorToX(int, enum QTextLine::Edge)
extern "C"
void C_ZNK9QTextLine9cursorToXEiNS_4EdgeE(void *this_, int cursorPos, QTextLine::Edge edge) {
  /*return*/ ((QTextLine*)this_)->cursorToX(cursorPos, edge);
}
// /usr/include/qt/QtGui/qtextlayout.h:243
// int xToCursor(qreal, enum QTextLine::CursorPosition)
extern "C"
void C_ZNK9QTextLine9xToCursorEdNS_14CursorPositionE(void *this_, qreal x, QTextLine::CursorPosition a1) {
  /*return*/ ((QTextLine*)this_)->xToCursor(x, a1);
}
// /usr/include/qt/QtGui/qtextlayout.h:245
// void setLineWidth(qreal)
extern "C"
void C_ZN9QTextLine12setLineWidthEd(void *this_, qreal width) {
  ((QTextLine*)this_)->setLineWidth(width);
}
// /usr/include/qt/QtGui/qtextlayout.h:246
// void setNumColumns(int)
extern "C"
void C_ZN9QTextLine13setNumColumnsEi(void *this_, int columns) {
  ((QTextLine*)this_)->setNumColumns(columns);
}
// /usr/include/qt/QtGui/qtextlayout.h:247
// void setNumColumns(int, qreal)
extern "C"
void C_ZN9QTextLine13setNumColumnsEid(void *this_, int columns, qreal alignmentWidth) {
  ((QTextLine*)this_)->setNumColumns(columns, alignmentWidth);
}
// /usr/include/qt/QtGui/qtextlayout.h:249
// void setPosition(const class QPointF &)
extern "C"
void C_ZN9QTextLine11setPositionERK7QPointF(void *this_, const QPointF & pos) {
  ((QTextLine*)this_)->setPosition(pos);
}
// /usr/include/qt/QtGui/qtextlayout.h:250
// QPointF position()
extern "C"
void C_ZNK9QTextLine8positionEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->position();
}
// /usr/include/qt/QtGui/qtextlayout.h:252
// int textStart()
extern "C"
void C_ZNK9QTextLine9textStartEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->textStart();
}
// /usr/include/qt/QtGui/qtextlayout.h:253
// int textLength()
extern "C"
void C_ZNK9QTextLine10textLengthEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->textLength();
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:255
// int lineNumber()
extern "C"
void C_ZNK9QTextLine10lineNumberEv(void *this_) {
  /*return*/ ((QTextLine*)this_)->lineNumber();
}
// /usr/include/qt/QtGui/qtextlayout.h:257
// void draw(class QPainter *, const class QPointF &, const class QTextLayout::FormatRange *)
extern "C"
void C_ZNK9QTextLine4drawEP8QPainterRK7QPointFPKN11QTextLayout11FormatRangeE(void *this_, QPainter * p, const QPointF & point, const QTextLayout::FormatRange * selection) {
  ((QTextLine*)this_)->draw(p, point, selection);
}
// /usr/include/qt/QtGui/qtextlayout.h:260
// QList<QGlyphRun> glyphRuns(int, int)
extern "C"
void C_ZNK9QTextLine9glyphRunsEii(void *this_, int from, int length) {
  /*return*/ ((QTextLine*)this_)->glyphRuns(from, length);
}