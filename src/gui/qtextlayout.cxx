//  header block begin
// /usr/include/qt/QtGui/qtextlayout.h
#include <qtextlayout.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextlayout.h:107
// void QTextLayout()
extern "C"
void* C_ZN11QTextLayoutC1Ev() {
  return new QTextLayout();
}
// /usr/include/qt/QtGui/qtextlayout.h:108
// void QTextLayout(const class QString &)
extern "C"
void* C_ZN11QTextLayoutC1ERK7QString(const QString & text) {
  return new QTextLayout(text);
}
// /usr/include/qt/QtGui/qtextlayout.h:109
// void QTextLayout(const class QString &, const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN11QTextLayoutC1ERK7QStringRK5QFontP12QPaintDevice(const QString & text, const QFont & font, QPaintDevice * paintdevice) {
  return new QTextLayout(text, font, paintdevice);
}
// /usr/include/qt/QtGui/qtextlayout.h:110
// void QTextLayout(const class QTextBlock &)
extern "C"
void* C_ZN11QTextLayoutC1ERK10QTextBlock(const QTextBlock & b) {
  return new QTextLayout(b);
}
// /usr/include/qt/QtGui/qtextlayout.h:111
// void ~QTextLayout()
extern "C"
void C_ZN11QTextLayoutD1Ev(void *this_) {
  delete (QTextLayout*)(this_);
}
// /usr/include/qt/QtGui/qtextlayout.h:113
// void setFont(const class QFont &)
extern "C"
void C_ZN11QTextLayout7setFontERK5QFont(void *this_, const QFont & f) {
  ((QTextLayout*)this_)->setFont(f);
}
// /usr/include/qt/QtGui/qtextlayout.h:114
// QFont font()
extern "C"
void C_ZNK11QTextLayout4fontEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->font();
}
// /usr/include/qt/QtGui/qtextlayout.h:117
// void setRawFont(const class QRawFont &)
extern "C"
void C_ZN11QTextLayout10setRawFontERK8QRawFont(void *this_, const QRawFont & rawFont) {
  ((QTextLayout*)this_)->setRawFont(rawFont);
}
// /usr/include/qt/QtGui/qtextlayout.h:120
// void setText(const class QString &)
extern "C"
void C_ZN11QTextLayout7setTextERK7QString(void *this_, const QString & string) {
  ((QTextLayout*)this_)->setText(string);
}
// /usr/include/qt/QtGui/qtextlayout.h:121
// QString text()
extern "C"
void C_ZNK11QTextLayout4textEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->text();
}
// /usr/include/qt/QtGui/qtextlayout.h:123
// void setTextOption(const class QTextOption &)
extern "C"
void C_ZN11QTextLayout13setTextOptionERK11QTextOption(void *this_, const QTextOption & option) {
  ((QTextLayout*)this_)->setTextOption(option);
}
// /usr/include/qt/QtGui/qtextlayout.h:124
// const QTextOption & textOption()
extern "C"
void C_ZNK11QTextLayout10textOptionEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->textOption();
}
// /usr/include/qt/QtGui/qtextlayout.h:126
// void setPreeditArea(int, const class QString &)
extern "C"
void C_ZN11QTextLayout14setPreeditAreaEiRK7QString(void *this_, int position, const QString & text) {
  ((QTextLayout*)this_)->setPreeditArea(position, text);
}
// /usr/include/qt/QtGui/qtextlayout.h:127
// int preeditAreaPosition()
extern "C"
void C_ZNK11QTextLayout19preeditAreaPositionEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->preeditAreaPosition();
}
// /usr/include/qt/QtGui/qtextlayout.h:128
// QString preeditAreaText()
extern "C"
void C_ZNK11QTextLayout15preeditAreaTextEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->preeditAreaText();
}
// /usr/include/qt/QtGui/qtextlayout.h:141
// void setAdditionalFormats(const QList<struct QTextLayout::FormatRange> &)
extern "C"
void C_ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE(void *this_, const QList<QTextLayout::FormatRange> & overrides) {
  ((QTextLayout*)this_)->setAdditionalFormats(overrides);
}
// /usr/include/qt/QtGui/qtextlayout.h:142
// QList<QTextLayout::FormatRange> additionalFormats()
extern "C"
void C_ZNK11QTextLayout17additionalFormatsEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->additionalFormats();
}
// /usr/include/qt/QtGui/qtextlayout.h:143
// void clearAdditionalFormats()
extern "C"
void C_ZN11QTextLayout22clearAdditionalFormatsEv(void *this_) {
  ((QTextLayout*)this_)->clearAdditionalFormats();
}
// /usr/include/qt/QtGui/qtextlayout.h:145
// void setFormats(const QVector<struct QTextLayout::FormatRange> &)
extern "C"
void C_ZN11QTextLayout10setFormatsERK7QVectorINS_11FormatRangeEE(void *this_, const QVector<QTextLayout::FormatRange> & overrides) {
  ((QTextLayout*)this_)->setFormats(overrides);
}
// /usr/include/qt/QtGui/qtextlayout.h:146
// QVector<QTextLayout::FormatRange> formats()
extern "C"
void C_ZNK11QTextLayout7formatsEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->formats();
}
// /usr/include/qt/QtGui/qtextlayout.h:147
// void clearFormats()
extern "C"
void C_ZN11QTextLayout12clearFormatsEv(void *this_) {
  ((QTextLayout*)this_)->clearFormats();
}
// /usr/include/qt/QtGui/qtextlayout.h:149
// void setCacheEnabled(_Bool)
extern "C"
void C_ZN11QTextLayout15setCacheEnabledEb(void *this_, bool enable) {
  ((QTextLayout*)this_)->setCacheEnabled(enable);
}
// /usr/include/qt/QtGui/qtextlayout.h:150
// bool cacheEnabled()
extern "C"
void C_ZNK11QTextLayout12cacheEnabledEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->cacheEnabled();
}
// /usr/include/qt/QtGui/qtextlayout.h:152
// void setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void C_ZN11QTextLayout18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QTextLayout*)this_)->setCursorMoveStyle(style);
}
// /usr/include/qt/QtGui/qtextlayout.h:153
// Qt::CursorMoveStyle cursorMoveStyle()
extern "C"
void C_ZNK11QTextLayout15cursorMoveStyleEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->cursorMoveStyle();
}
// /usr/include/qt/QtGui/qtextlayout.h:155
// void beginLayout()
extern "C"
void C_ZN11QTextLayout11beginLayoutEv(void *this_) {
  ((QTextLayout*)this_)->beginLayout();
}
// /usr/include/qt/QtGui/qtextlayout.h:156
// void endLayout()
extern "C"
void C_ZN11QTextLayout9endLayoutEv(void *this_) {
  ((QTextLayout*)this_)->endLayout();
}
// /usr/include/qt/QtGui/qtextlayout.h:157
// void clearLayout()
extern "C"
void C_ZN11QTextLayout11clearLayoutEv(void *this_) {
  ((QTextLayout*)this_)->clearLayout();
}
// /usr/include/qt/QtGui/qtextlayout.h:159
// QTextLine createLine()
extern "C"
void C_ZN11QTextLayout10createLineEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->createLine();
}
// /usr/include/qt/QtGui/qtextlayout.h:161
// int lineCount()
extern "C"
void C_ZNK11QTextLayout9lineCountEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->lineCount();
}
// /usr/include/qt/QtGui/qtextlayout.h:162
// QTextLine lineAt(int)
extern "C"
void C_ZNK11QTextLayout6lineAtEi(void *this_, int i) {
  /*return*/ ((QTextLayout*)this_)->lineAt(i);
}
// /usr/include/qt/QtGui/qtextlayout.h:163
// QTextLine lineForTextPosition(int)
extern "C"
void C_ZNK11QTextLayout19lineForTextPositionEi(void *this_, int pos) {
  /*return*/ ((QTextLayout*)this_)->lineForTextPosition(pos);
}
// /usr/include/qt/QtGui/qtextlayout.h:169
// bool isValidCursorPosition(int)
extern "C"
void C_ZNK11QTextLayout21isValidCursorPositionEi(void *this_, int pos) {
  /*return*/ ((QTextLayout*)this_)->isValidCursorPosition(pos);
}
// /usr/include/qt/QtGui/qtextlayout.h:170
// int nextCursorPosition(int, enum QTextLayout::CursorMode)
extern "C"
void C_ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE(void *this_, int oldPos, QTextLayout::CursorMode mode) {
  /*return*/ ((QTextLayout*)this_)->nextCursorPosition(oldPos, mode);
}
// /usr/include/qt/QtGui/qtextlayout.h:171
// int previousCursorPosition(int, enum QTextLayout::CursorMode)
extern "C"
void C_ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE(void *this_, int oldPos, QTextLayout::CursorMode mode) {
  /*return*/ ((QTextLayout*)this_)->previousCursorPosition(oldPos, mode);
}
// /usr/include/qt/QtGui/qtextlayout.h:172
// int leftCursorPosition(int)
extern "C"
void C_ZNK11QTextLayout18leftCursorPositionEi(void *this_, int oldPos) {
  /*return*/ ((QTextLayout*)this_)->leftCursorPosition(oldPos);
}
// /usr/include/qt/QtGui/qtextlayout.h:173
// int rightCursorPosition(int)
extern "C"
void C_ZNK11QTextLayout19rightCursorPositionEi(void *this_, int oldPos) {
  /*return*/ ((QTextLayout*)this_)->rightCursorPosition(oldPos);
}
// /usr/include/qt/QtGui/qtextlayout.h:175
// void draw(class QPainter *, const class QPointF &, const QVector<struct QTextLayout::FormatRange> &, const class QRectF &)
extern "C"
void C_ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF(void *this_, QPainter * p, const QPointF & pos, const QVector<QTextLayout::FormatRange> & selections, const QRectF & clip) {
  ((QTextLayout*)this_)->draw(p, pos, selections, clip);
}
// /usr/include/qt/QtGui/qtextlayout.h:177
// void drawCursor(class QPainter *, const class QPointF &, int)
extern "C"
void C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi(void *this_, QPainter * p, const QPointF & pos, int cursorPosition) {
  ((QTextLayout*)this_)->drawCursor(p, pos, cursorPosition);
}
// /usr/include/qt/QtGui/qtextlayout.h:178
// void drawCursor(class QPainter *, const class QPointF &, int, int)
extern "C"
void C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFii(void *this_, QPainter * p, const QPointF & pos, int cursorPosition, int width) {
  ((QTextLayout*)this_)->drawCursor(p, pos, cursorPosition, width);
}
// /usr/include/qt/QtGui/qtextlayout.h:180
// QPointF position()
extern "C"
void C_ZNK11QTextLayout8positionEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->position();
}
// /usr/include/qt/QtGui/qtextlayout.h:181
// void setPosition(const class QPointF &)
extern "C"
void C_ZN11QTextLayout11setPositionERK7QPointF(void *this_, const QPointF & p) {
  ((QTextLayout*)this_)->setPosition(p);
}
// /usr/include/qt/QtGui/qtextlayout.h:183
// QRectF boundingRect()
extern "C"
void C_ZNK11QTextLayout12boundingRectEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qtextlayout.h:185
// qreal minimumWidth()
extern "C"
void C_ZNK11QTextLayout12minimumWidthEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->minimumWidth();
}
// /usr/include/qt/QtGui/qtextlayout.h:186
// qreal maximumWidth()
extern "C"
void C_ZNK11QTextLayout12maximumWidthEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->maximumWidth();
}
// /usr/include/qt/QtGui/qtextlayout.h:189
// QList<QGlyphRun> glyphRuns(int, int)
extern "C"
void C_ZNK11QTextLayout9glyphRunsEii(void *this_, int from, int length) {
  /*return*/ ((QTextLayout*)this_)->glyphRuns(from, length);
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:192
// QTextEngine * engine()
extern "C"
void C_ZNK11QTextLayout6engineEv(void *this_) {
  /*return*/ ((QTextLayout*)this_)->engine();
}
// /usr/include/qt/QtGui/qtextlayout.h:193
// void setFlags(int)
extern "C"
void C_ZN11QTextLayout8setFlagsEi(void *this_, int flags) {
  ((QTextLayout*)this_)->setFlags(flags);
}
//  main block end
