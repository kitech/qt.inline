//  header block begin
// /usr/include/qt/QtGui/qtextcursor.h
#ifndef protected
#define protected public
#endif
#include <qtextcursor.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextCursor is pure virtual: false
// QTextCursor has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextCursor : public QTextCursor {
public:
  virtual ~MyQTextCursor() {}
// void QTextCursor()
MyQTextCursor() : QTextCursor() {}
// void QTextCursor(QTextDocument *)
MyQTextCursor(QTextDocument * document) : QTextCursor(document) {}
// void QTextCursor(QTextDocumentPrivate *, int)
MyQTextCursor(QTextDocumentPrivate * p, int pos) : QTextCursor(p, pos) {}
// void QTextCursor(QTextCursorPrivate *)
MyQTextCursor(QTextCursorPrivate * d) : QTextCursor(d) {}
// void QTextCursor(QTextFrame *)
MyQTextCursor(QTextFrame * frame) : QTextCursor(frame) {}
// void QTextCursor(const QTextBlock &)
MyQTextCursor(const QTextBlock & block) : QTextCursor(block) {}
// void QTextCursor(const QTextCursor &)
MyQTextCursor(const QTextCursor & cursor) : QTextCursor(cursor) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:69
// [-2] void QTextCursor()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2Ev() {
  return  new QTextCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:70
// [-2] void QTextCursor(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2EP13QTextDocument(QTextDocument * document) {
  return  new QTextCursor(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:71
// [-2] void QTextCursor(QTextDocumentPrivate *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2EP20QTextDocumentPrivatei(QTextDocumentPrivate * p, int pos) {
  return  new QTextCursor(p, pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:72
// [-2] void QTextCursor(QTextCursorPrivate *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2EP18QTextCursorPrivate(QTextCursorPrivate * d) {
  return  new QTextCursor(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:73
// [-2] void QTextCursor(QTextFrame *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2EP10QTextFrame(QTextFrame * frame) {
  return  new QTextCursor(frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:74
// [-2] void QTextCursor(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2ERK10QTextBlock(QTextBlock* block) {
  return  new QTextCursor(*block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:75
// [-2] void QTextCursor(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursorC2ERKS_(QTextCursor* cursor) {
  return  new QTextCursor(*cursor);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:77
// [8] QTextCursor & operator=(QTextCursor &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursoraSEOS_(void *this_, QTextCursor && other) {
  auto& rv = ((QTextCursor*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:79
// [8] QTextCursor & operator=(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursoraSERKS_(void *this_, QTextCursor* other) {
  auto& rv = ((QTextCursor*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:80
// [-2] void ~QTextCursor()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursorD2Ev(void *this_) {
  delete (QTextCursor*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextcursor.h:82
// [-2] void swap(QTextCursor &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor4swapERS_(void *this_, QTextCursor* other) {
  ((QTextCursor*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:84
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor6isNullEv(void *this_) {
  return (bool)((QTextCursor*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:91
// [-2] void setPosition(int, QTextCursor::MoveMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11setPositionEiNS_8MoveModeE(void *this_, int pos, QTextCursor::MoveMode mode) {
  ((QTextCursor*)this_)->setPosition(pos, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:92
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor8positionEv(void *this_) {
  return (int)((QTextCursor*)this_)->position();
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextcursor.h:93
// [4] int positionInBlock()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor15positionInBlockEv(void *this_) {
  return (int)((QTextCursor*)this_)->positionInBlock();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:95
// [4] int anchor()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor6anchorEv(void *this_) {
  return (int)((QTextCursor*)this_)->anchor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:97
// [-2] void insertText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor10insertTextERK7QString(void *this_, QString* text) {
  ((QTextCursor*)this_)->insertText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:98
// [-2] void insertText(const QString &, const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor10insertTextERK7QStringRK15QTextCharFormat(void *this_, QString* text, QTextCharFormat* format) {
  ((QTextCursor*)this_)->insertText(*text, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:131
// [1] bool movePosition(QTextCursor::MoveOperation, QTextCursor::MoveMode, int)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTextCursor12movePositionENS_13MoveOperationENS_8MoveModeEi(void *this_, QTextCursor::MoveOperation op, QTextCursor::MoveMode arg1, int n) {
  return (bool)((QTextCursor*)this_)->movePosition(op, arg1, n);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextcursor.h:133
// [1] bool visualNavigation()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor16visualNavigationEv(void *this_) {
  return (bool)((QTextCursor*)this_)->visualNavigation();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextcursor.h:134
// [-2] void setVisualNavigation(bool)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor19setVisualNavigationEb(void *this_, bool b) {
  ((QTextCursor*)this_)->setVisualNavigation(b);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextcursor.h:136
// [-2] void setVerticalMovementX(int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor20setVerticalMovementXEi(void *this_, int x) {
  ((QTextCursor*)this_)->setVerticalMovementX(x);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextcursor.h:137
// [4] int verticalMovementX()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor17verticalMovementXEv(void *this_) {
  return (int)((QTextCursor*)this_)->verticalMovementX();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextcursor.h:139
// [-2] void setKeepPositionOnInsert(bool)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor23setKeepPositionOnInsertEb(void *this_, bool b) {
  ((QTextCursor*)this_)->setKeepPositionOnInsert(b);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextcursor.h:140
// [1] bool keepPositionOnInsert()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor20keepPositionOnInsertEv(void *this_) {
  return (bool)((QTextCursor*)this_)->keepPositionOnInsert();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:142
// [-2] void deleteChar()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor10deleteCharEv(void *this_) {
  ((QTextCursor*)this_)->deleteChar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:143
// [-2] void deletePreviousChar()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor18deletePreviousCharEv(void *this_) {
  ((QTextCursor*)this_)->deletePreviousChar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:151
// [-2] void select(QTextCursor::SelectionType)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor6selectENS_13SelectionTypeE(void *this_, QTextCursor::SelectionType selection) {
  ((QTextCursor*)this_)->select(selection);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:153
// [1] bool hasSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor12hasSelectionEv(void *this_) {
  return (bool)((QTextCursor*)this_)->hasSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:154
// [1] bool hasComplexSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor19hasComplexSelectionEv(void *this_) {
  return (bool)((QTextCursor*)this_)->hasComplexSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:155
// [-2] void removeSelectedText()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor18removeSelectedTextEv(void *this_) {
  ((QTextCursor*)this_)->removeSelectedText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:156
// [-2] void clearSelection()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor14clearSelectionEv(void *this_) {
  ((QTextCursor*)this_)->clearSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:157
// [4] int selectionStart()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor14selectionStartEv(void *this_) {
  return (int)((QTextCursor*)this_)->selectionStart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:158
// [4] int selectionEnd()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor12selectionEndEv(void *this_) {
  return (int)((QTextCursor*)this_)->selectionEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:160
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor12selectedTextEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:161
// [8] QTextDocumentFragment selection()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor9selectionEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->selection();
return new QTextDocumentFragment(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:162
// [-2] void selectedTableCells(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QTextCursor18selectedTableCellsEPiS0_S0_S0_(void *this_, int * firstRow, int * numRows, int * firstColumn, int * numColumns) {
  ((QTextCursor*)this_)->selectedTableCells(firstRow, numRows, firstColumn, numColumns);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:164
// [16] QTextBlock block()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor5blockEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->block();
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:166
// [16] QTextCharFormat charFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor10charFormatEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->charFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:167
// [-2] void setCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor13setCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QTextCursor*)this_)->setCharFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:168
// [-2] void mergeCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor15mergeCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* modifier) {
  ((QTextCursor*)this_)->mergeCharFormat(*modifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:170
// [16] QTextBlockFormat blockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor11blockFormatEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->blockFormat();
return new QTextBlockFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:171
// [-2] void setBlockFormat(const QTextBlockFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor14setBlockFormatERK16QTextBlockFormat(void *this_, QTextBlockFormat* format) {
  ((QTextCursor*)this_)->setBlockFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:172
// [-2] void mergeBlockFormat(const QTextBlockFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor16mergeBlockFormatERK16QTextBlockFormat(void *this_, QTextBlockFormat* modifier) {
  ((QTextCursor*)this_)->mergeBlockFormat(*modifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:174
// [16] QTextCharFormat blockCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor15blockCharFormatEv(void *this_) {
  auto rv = ((QTextCursor*)this_)->blockCharFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:175
// [-2] void setBlockCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor18setBlockCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QTextCursor*)this_)->setBlockCharFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:176
// [-2] void mergeBlockCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor20mergeBlockCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* modifier) {
  ((QTextCursor*)this_)->mergeBlockCharFormat(*modifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:178
// [1] bool atBlockStart()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor12atBlockStartEv(void *this_) {
  return (bool)((QTextCursor*)this_)->atBlockStart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:179
// [1] bool atBlockEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor10atBlockEndEv(void *this_) {
  return (bool)((QTextCursor*)this_)->atBlockEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:180
// [1] bool atStart()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor7atStartEv(void *this_) {
  return (bool)((QTextCursor*)this_)->atStart();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qtextcursor.h:181
// [1] bool atEnd()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor5atEndEv(void *this_) {
  return (bool)((QTextCursor*)this_)->atEnd();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:183
// [-2] void insertBlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertBlockEv(void *this_) {
  ((QTextCursor*)this_)->insertBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:184
// [-2] void insertBlock(const QTextBlockFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertBlockERK16QTextBlockFormat(void *this_, QTextBlockFormat* format) {
  ((QTextCursor*)this_)->insertBlock(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:185
// [-2] void insertBlock(const QTextBlockFormat &, const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertBlockERK16QTextBlockFormatRK15QTextCharFormat(void *this_, QTextBlockFormat* format, QTextCharFormat* charFormat) {
  ((QTextCursor*)this_)->insertBlock(*format, *charFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:187
// [8] QTextList * insertList(const QTextListFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor10insertListERK15QTextListFormat(void *this_, QTextListFormat* format) {
  return (void*)((QTextCursor*)this_)->insertList(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:188
// [8] QTextList * insertList(QTextListFormat::Style)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor10insertListEN15QTextListFormat5StyleE(void *this_, QTextListFormat::Style style) {
  return (void*)((QTextCursor*)this_)->insertList(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:190
// [8] QTextList * createList(const QTextListFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor10createListERK15QTextListFormat(void *this_, QTextListFormat* format) {
  return (void*)((QTextCursor*)this_)->createList(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:191
// [8] QTextList * createList(QTextListFormat::Style)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor10createListEN15QTextListFormat5StyleE(void *this_, QTextListFormat::Style style) {
  return (void*)((QTextCursor*)this_)->createList(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:192
// [8] QTextList * currentList()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor11currentListEv(void *this_) {
  return (void*)((QTextCursor*)this_)->currentList();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:194
// [8] QTextTable * insertTable(int, int, const QTextTableFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor11insertTableEiiRK16QTextTableFormat(void *this_, int rows, int cols, QTextTableFormat* format) {
  return (void*)((QTextCursor*)this_)->insertTable(rows, cols, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:195
// [8] QTextTable * insertTable(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor11insertTableEii(void *this_, int rows, int cols) {
  return (void*)((QTextCursor*)this_)->insertTable(rows, cols);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:196
// [8] QTextTable * currentTable()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor12currentTableEv(void *this_) {
  return (void*)((QTextCursor*)this_)->currentTable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:198
// [8] QTextFrame * insertFrame(const QTextFrameFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextCursor11insertFrameERK16QTextFrameFormat(void *this_, QTextFrameFormat* format) {
  return (void*)((QTextCursor*)this_)->insertFrame(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:199
// [8] QTextFrame * currentFrame()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor12currentFrameEv(void *this_) {
  return (void*)((QTextCursor*)this_)->currentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:201
// [-2] void insertFragment(const QTextDocumentFragment &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor14insertFragmentERK21QTextDocumentFragment(void *this_, QTextDocumentFragment* fragment) {
  ((QTextCursor*)this_)->insertFragment(*fragment);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextcursor.h:204
// [-2] void insertHtml(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor10insertHtmlERK7QString(void *this_, QString* html) {
  ((QTextCursor*)this_)->insertHtml(*html);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextcursor.h:207
// [-2] void insertImage(const QTextImageFormat &, QTextFrameFormat::Position)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertImageERK16QTextImageFormatN16QTextFrameFormat8PositionE(void *this_, QTextImageFormat* format, QTextFrameFormat::Position alignment) {
  ((QTextCursor*)this_)->insertImage(*format, alignment);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:208
// [-2] void insertImage(const QTextImageFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertImageERK16QTextImageFormat(void *this_, QTextImageFormat* format) {
  ((QTextCursor*)this_)->insertImage(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:209
// [-2] void insertImage(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertImageERK7QString(void *this_, QString* name) {
  ((QTextCursor*)this_)->insertImage(*name);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextcursor.h:210
// [-2] void insertImage(const QImage &, const QString &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor11insertImageERK6QImageRK7QString(void *this_, QImage* image, QString* name) {
  ((QTextCursor*)this_)->insertImage(*image, *name);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:212
// [-2] void beginEditBlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor14beginEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->beginEditBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:213
// [-2] void joinPreviousEditBlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor21joinPreviousEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->joinPreviousEditBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:214
// [-2] void endEditBlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextCursor12endEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->endEditBlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:216
// [1] bool operator!=(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursorneERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator!=(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:217
// [1] bool operator<(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursorltERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator<(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:218
// [1] bool operator<=(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursorleERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator<=(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:219
// [1] bool operator==(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursoreqERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator==(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:220
// [1] bool operator>=(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursorgeERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator>=(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:221
// [1] bool operator>(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursorgtERKS_(void *this_, QTextCursor* rhs) {
  return (bool)((QTextCursor*)this_)->operator>(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:223
// [1] bool isCopyOf(const QTextCursor &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextCursor8isCopyOfERKS_(void *this_, QTextCursor* other) {
  return (bool)((QTextCursor*)this_)->isCopyOf(*other);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextcursor.h:225
// [4] int blockNumber()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor11blockNumberEv(void *this_) {
  return (int)((QTextCursor*)this_)->blockNumber();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextcursor.h:226
// [4] int columnNumber()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextCursor12columnNumberEv(void *this_) {
  return (int)((QTextCursor*)this_)->columnNumber();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextcursor.h:228
// [8] QTextDocument * document()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextCursor8documentEv(void *this_) {
  return (void*)((QTextCursor*)this_)->document();
}
#endif // QT_VERSION >= 0x040500

//  main block end
