//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLayout is pure virtual: false
// QTextLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextLayout_t qt_meta_stringdata_MyQTextLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextLayout"
  },
  "MyQTextLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextLayout[] = {
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
class Q_DECL_EXPORT MyQTextLayout : public QTextLayout {
public:
  virtual ~MyQTextLayout() {}
// void QTextLayout()
MyQTextLayout() : QTextLayout() {}
// void QTextLayout(const QString &)
MyQTextLayout(const QString & text) : QTextLayout(text) {}
// void QTextLayout(const QString &, const QFont &, QPaintDevice *)
MyQTextLayout(const QString & text, const QFont & font, QPaintDevice * paintdevice) : QTextLayout(text, font, paintdevice) {}
// void QTextLayout(const QTextBlock &)
MyQTextLayout(const QTextBlock & b) : QTextLayout(b) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:108
// [-2] void QTextLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLayoutC2Ev() {
  return  new QTextLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:109
// [-2] void QTextLayout(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLayoutC2ERK7QString(QString* text) {
  return  new QTextLayout(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:110
// [-2] void QTextLayout(const QString &, const QFont &, QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLayoutC2ERK7QStringRK5QFontP12QPaintDevice(QString* text, QFont* font, QPaintDevice * paintdevice) {
  return  new QTextLayout(*text, *font, paintdevice);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:111
// [-2] void QTextLayout(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLayoutC2ERK10QTextBlock(QTextBlock* b) {
  return  new QTextLayout(*b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:112
// [-2] void ~QTextLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayoutD2Ev(void *this_) {
  delete (QTextLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:114
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout7setFontERK5QFont(void *this_, QFont* f) {
  ((QTextLayout*)this_)->setFont(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:115
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout4fontEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:118
// [-2] void setRawFont(const QRawFont &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout10setRawFontERK8QRawFont(void *this_, QRawFont* rawFont) {
  ((QTextLayout*)this_)->setRawFont(*rawFont);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:121
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout7setTextERK7QString(void *this_, QString* string) {
  ((QTextLayout*)this_)->setText(*string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:122
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout4textEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:124
// [-2] void setTextOption(const QTextOption &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout13setTextOptionERK11QTextOption(void *this_, QTextOption* option) {
  ((QTextLayout*)this_)->setTextOption(*option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:125
// [32] const QTextOption & textOption()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout10textOptionEv(void *this_) {
  auto& rv = ((QTextLayout*)this_)->textOption();
return new QTextOption(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:127
// [-2] void setPreeditArea(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout14setPreeditAreaEiRK7QString(void *this_, int position, QString* text) {
  ((QTextLayout*)this_)->setPreeditArea(position, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:128
// [4] int preeditAreaPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout19preeditAreaPositionEv(void *this_) {
  return (int)((QTextLayout*)this_)->preeditAreaPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:129
// [8] QString preeditAreaText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout15preeditAreaTextEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->preeditAreaText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:142
// [-2] void setAdditionalFormats(const QList<QTextLayout::FormatRange> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE(void *this_, QList<QTextLayout::FormatRange>* overrides) {
  ((QTextLayout*)this_)->setAdditionalFormats(*overrides);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:143
// [-2] QList<QTextLayout::FormatRange> additionalFormats()
extern "C" Q_DECL_EXPORT
QList<QTextLayout::FormatRange>* C_ZNK11QTextLayout17additionalFormatsEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->additionalFormats();
return new QList<QTextLayout::FormatRange>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:144
// [-2] void clearAdditionalFormats()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout22clearAdditionalFormatsEv(void *this_) {
  ((QTextLayout*)this_)->clearAdditionalFormats();
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qtextlayout.h:146
// [-2] void setFormats(const QVector<QTextLayout::FormatRange> &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout10setFormatsERK7QVectorINS_11FormatRangeEE(void *this_, QVector<QTextLayout::FormatRange>* overrides) {
  ((QTextLayout*)this_)->setFormats(*overrides);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qtextlayout.h:147
// [8] QVector<QTextLayout::FormatRange> formats()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextLayout7formatsEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->formats();
/*return rv;*/
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qtextlayout.h:148
// [-2] void clearFormats()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout12clearFormatsEv(void *this_) {
  ((QTextLayout*)this_)->clearFormats();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:150
// [-2] void setCacheEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout15setCacheEnabledEb(void *this_, bool enable) {
  ((QTextLayout*)this_)->setCacheEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:151
// [1] bool cacheEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLayout12cacheEnabledEv(void *this_) {
  return (bool)((QTextLayout*)this_)->cacheEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:153
// [-2] void setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QTextLayout*)this_)->setCursorMoveStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:154
// [4] Qt::CursorMoveStyle cursorMoveStyle()
extern "C" Q_DECL_EXPORT
Qt::CursorMoveStyle C_ZNK11QTextLayout15cursorMoveStyleEv(void *this_) {
  return (Qt::CursorMoveStyle)((QTextLayout*)this_)->cursorMoveStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:156
// [-2] void beginLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout11beginLayoutEv(void *this_) {
  ((QTextLayout*)this_)->beginLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:157
// [-2] void endLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout9endLayoutEv(void *this_) {
  ((QTextLayout*)this_)->endLayout();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextlayout.h:158
// [-2] void clearLayout()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout11clearLayoutEv(void *this_) {
  ((QTextLayout*)this_)->clearLayout();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:160
// [16] QTextLine createLine()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLayout10createLineEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->createLine();
return new QTextLine(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:162
// [4] int lineCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout9lineCountEv(void *this_) {
  return (int)((QTextLayout*)this_)->lineCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:163
// [16] QTextLine lineAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout6lineAtEi(void *this_, int i) {
  auto rv = ((QTextLayout*)this_)->lineAt(i);
return new QTextLine(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:164
// [16] QTextLine lineForTextPosition(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout19lineForTextPositionEi(void *this_, int pos) {
  auto rv = ((QTextLayout*)this_)->lineForTextPosition(pos);
return new QTextLine(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:170
// [1] bool isValidCursorPosition(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLayout21isValidCursorPositionEi(void *this_, int pos) {
  return (bool)((QTextLayout*)this_)->isValidCursorPosition(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:171
// [4] int nextCursorPosition(int, QTextLayout::CursorMode)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE(void *this_, int oldPos, QTextLayout::CursorMode mode) {
  return (int)((QTextLayout*)this_)->nextCursorPosition(oldPos, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:172
// [4] int previousCursorPosition(int, QTextLayout::CursorMode)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE(void *this_, int oldPos, QTextLayout::CursorMode mode) {
  return (int)((QTextLayout*)this_)->previousCursorPosition(oldPos, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:173
// [4] int leftCursorPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout18leftCursorPositionEi(void *this_, int oldPos) {
  return (int)((QTextLayout*)this_)->leftCursorPosition(oldPos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:174
// [4] int rightCursorPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextLayout19rightCursorPositionEi(void *this_, int oldPos) {
  return (int)((QTextLayout*)this_)->rightCursorPosition(oldPos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:176
// [-2] void draw(QPainter *, const QPointF &, const QVector<QTextLayout::FormatRange> &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF(void *this_, QPainter * p, QPointF* pos, QVector<QTextLayout::FormatRange>* selections, QRectF* clip) {
  ((QTextLayout*)this_)->draw(p, *pos, *selections, *clip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:178
// [-2] void drawCursor(QPainter *, const QPointF &, int)
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi(void *this_, QPainter * p, QPointF* pos, int cursorPosition) {
  ((QTextLayout*)this_)->drawCursor(p, *pos, cursorPosition);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:179
// [-2] void drawCursor(QPainter *, const QPointF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFii(void *this_, QPainter * p, QPointF* pos, int cursorPosition, int width) {
  ((QTextLayout*)this_)->drawCursor(p, *pos, cursorPosition, width);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextlayout.h:181
// [16] QPointF position()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout8positionEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->position();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:182
// [-2] void setPosition(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout11setPositionERK7QPointF(void *this_, QPointF* p) {
  ((QTextLayout*)this_)->setPosition(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:184
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout12boundingRectEv(void *this_) {
  auto rv = ((QTextLayout*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:186
// [8] qreal minimumWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLayout12minimumWidthEv(void *this_) {
  return (qreal)((QTextLayout*)this_)->minimumWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:187
// [8] qreal maximumWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLayout12maximumWidthEv(void *this_) {
  return (qreal)((QTextLayout*)this_)->maximumWidth();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextlayout.h:190
// [-2] QList<QGlyphRun> glyphRuns(int, int)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QList<QGlyphRun>* C_ZNK11QTextLayout9glyphRunsEii(void *this_, int from, int length) {
  auto rv = ((QTextLayout*)this_)->glyphRuns(from, length);
return new QList<QGlyphRun>(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:193
// [8] QTextEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextLayout6engineEv(void *this_) {
  return (void*)((QTextLayout*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:194
// [-2] void setFlags(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextLayout8setFlagsEi(void *this_, int flags) {
  ((QTextLayout*)this_)->setFlags(flags);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
