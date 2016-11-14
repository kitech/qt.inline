// /usr/include/qt/QtGui/qtextcursor.h
#include <qtextcursor.h>
#include <QtGui>

// /usr/include/qt/QtGui/qtextcursor.h:68
// void QTextCursor()
extern "C"
void* C_ZN11QTextCursorC1Ev() {
  return new QTextCursor();
}
// /usr/include/qt/QtGui/qtextcursor.h:69
// void QTextCursor(class QTextDocument *)
extern "C"
void* C_ZN11QTextCursorC1EP13QTextDocument(QTextDocument * document) {
  return new QTextCursor(document);
}
// /usr/include/qt/QtGui/qtextcursor.h:70
// void QTextCursor(class QTextDocumentPrivate *, int)
extern "C"
void* C_ZN11QTextCursorC1EP20QTextDocumentPrivatei(QTextDocumentPrivate * p, int pos) {
  return new QTextCursor(p, pos);
}
// /usr/include/qt/QtGui/qtextcursor.h:71
// void QTextCursor(class QTextCursorPrivate *)
extern "C"
void* C_ZN11QTextCursorC1EP18QTextCursorPrivate(QTextCursorPrivate * d) {
  return new QTextCursor(d);
}
// /usr/include/qt/QtGui/qtextcursor.h:72
// void QTextCursor(class QTextFrame *)
extern "C"
void* C_ZN11QTextCursorC1EP10QTextFrame(QTextFrame * frame) {
  return new QTextCursor(frame);
}
// /usr/include/qt/QtGui/qtextcursor.h:73
// void QTextCursor(const class QTextBlock &)
extern "C"
void* C_ZN11QTextCursorC1ERK10QTextBlock(const QTextBlock & block) {
  return new QTextCursor(block);
}
// /usr/include/qt/QtGui/qtextcursor.h:79
// void ~QTextCursor()
extern "C"
void C_ZN11QTextCursorD1Ev(void *this_) {
  delete (QTextCursor*)(this_);
}
// inline
// /usr/include/qt/QtGui/qtextcursor.h:81
// void swap(class QTextCursor &)
extern "C"
void C_ZN11QTextCursor4swapERS_(void *this_, QTextCursor & other) {
  ((QTextCursor*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qtextcursor.h:83
// bool isNull()
extern "C"
void C_ZNK11QTextCursor6isNullEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->isNull();
}
// /usr/include/qt/QtGui/qtextcursor.h:90
// void setPosition(int, enum QTextCursor::MoveMode)
extern "C"
void C_ZN11QTextCursor11setPositionEiNS_8MoveModeE(void *this_, int pos, QTextCursor::MoveMode mode) {
  ((QTextCursor*)this_)->setPosition(pos, mode);
}
// /usr/include/qt/QtGui/qtextcursor.h:91
// int position()
extern "C"
void C_ZNK11QTextCursor8positionEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->position();
}
// /usr/include/qt/QtGui/qtextcursor.h:92
// int positionInBlock()
extern "C"
void C_ZNK11QTextCursor15positionInBlockEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->positionInBlock();
}
// /usr/include/qt/QtGui/qtextcursor.h:94
// int anchor()
extern "C"
void C_ZNK11QTextCursor6anchorEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->anchor();
}
// /usr/include/qt/QtGui/qtextcursor.h:96
// void insertText(const class QString &)
extern "C"
void C_ZN11QTextCursor10insertTextERK7QString(void *this_, const QString & text) {
  ((QTextCursor*)this_)->insertText(text);
}
// /usr/include/qt/QtGui/qtextcursor.h:97
// void insertText(const class QString &, const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor10insertTextERK7QStringRK15QTextCharFormat(void *this_, const QString & text, const QTextCharFormat & format) {
  ((QTextCursor*)this_)->insertText(text, format);
}
// /usr/include/qt/QtGui/qtextcursor.h:130
// bool movePosition(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode, int)
extern "C"
void C_ZN11QTextCursor12movePositionENS_13MoveOperationENS_8MoveModeEi(void *this_, QTextCursor::MoveOperation op, QTextCursor::MoveMode a1, int n) {
  /*return*/ ((QTextCursor*)this_)->movePosition(op, a1, n);
}
// /usr/include/qt/QtGui/qtextcursor.h:132
// bool visualNavigation()
extern "C"
void C_ZNK11QTextCursor16visualNavigationEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->visualNavigation();
}
// /usr/include/qt/QtGui/qtextcursor.h:133
// void setVisualNavigation(_Bool)
extern "C"
void C_ZN11QTextCursor19setVisualNavigationEb(void *this_, bool b) {
  ((QTextCursor*)this_)->setVisualNavigation(b);
}
// /usr/include/qt/QtGui/qtextcursor.h:135
// void setVerticalMovementX(int)
extern "C"
void C_ZN11QTextCursor20setVerticalMovementXEi(void *this_, int x) {
  ((QTextCursor*)this_)->setVerticalMovementX(x);
}
// /usr/include/qt/QtGui/qtextcursor.h:136
// int verticalMovementX()
extern "C"
void C_ZNK11QTextCursor17verticalMovementXEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->verticalMovementX();
}
// /usr/include/qt/QtGui/qtextcursor.h:138
// void setKeepPositionOnInsert(_Bool)
extern "C"
void C_ZN11QTextCursor23setKeepPositionOnInsertEb(void *this_, bool b) {
  ((QTextCursor*)this_)->setKeepPositionOnInsert(b);
}
// /usr/include/qt/QtGui/qtextcursor.h:139
// bool keepPositionOnInsert()
extern "C"
void C_ZNK11QTextCursor20keepPositionOnInsertEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->keepPositionOnInsert();
}
// /usr/include/qt/QtGui/qtextcursor.h:141
// void deleteChar()
extern "C"
void C_ZN11QTextCursor10deleteCharEv(void *this_) {
  ((QTextCursor*)this_)->deleteChar();
}
// /usr/include/qt/QtGui/qtextcursor.h:142
// void deletePreviousChar()
extern "C"
void C_ZN11QTextCursor18deletePreviousCharEv(void *this_) {
  ((QTextCursor*)this_)->deletePreviousChar();
}
// /usr/include/qt/QtGui/qtextcursor.h:150
// void select(enum QTextCursor::SelectionType)
extern "C"
void C_ZN11QTextCursor6selectENS_13SelectionTypeE(void *this_, QTextCursor::SelectionType selection) {
  ((QTextCursor*)this_)->select(selection);
}
// /usr/include/qt/QtGui/qtextcursor.h:152
// bool hasSelection()
extern "C"
void C_ZNK11QTextCursor12hasSelectionEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->hasSelection();
}
// /usr/include/qt/QtGui/qtextcursor.h:153
// bool hasComplexSelection()
extern "C"
void C_ZNK11QTextCursor19hasComplexSelectionEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->hasComplexSelection();
}
// /usr/include/qt/QtGui/qtextcursor.h:154
// void removeSelectedText()
extern "C"
void C_ZN11QTextCursor18removeSelectedTextEv(void *this_) {
  ((QTextCursor*)this_)->removeSelectedText();
}
// /usr/include/qt/QtGui/qtextcursor.h:155
// void clearSelection()
extern "C"
void C_ZN11QTextCursor14clearSelectionEv(void *this_) {
  ((QTextCursor*)this_)->clearSelection();
}
// /usr/include/qt/QtGui/qtextcursor.h:156
// int selectionStart()
extern "C"
void C_ZNK11QTextCursor14selectionStartEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->selectionStart();
}
// /usr/include/qt/QtGui/qtextcursor.h:157
// int selectionEnd()
extern "C"
void C_ZNK11QTextCursor12selectionEndEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->selectionEnd();
}
// /usr/include/qt/QtGui/qtextcursor.h:159
// QString selectedText()
extern "C"
void C_ZNK11QTextCursor12selectedTextEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->selectedText();
}
// /usr/include/qt/QtGui/qtextcursor.h:160
// QTextDocumentFragment selection()
extern "C"
void C_ZNK11QTextCursor9selectionEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->selection();
}
// /usr/include/qt/QtGui/qtextcursor.h:161
// void selectedTableCells(int *, int *, int *, int *)
extern "C"
void C_ZNK11QTextCursor18selectedTableCellsEPiS0_S0_S0_(void *this_, int * firstRow, int * numRows, int * firstColumn, int * numColumns) {
  ((QTextCursor*)this_)->selectedTableCells(firstRow, numRows, firstColumn, numColumns);
}
// /usr/include/qt/QtGui/qtextcursor.h:163
// QTextBlock block()
extern "C"
void C_ZNK11QTextCursor5blockEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->block();
}
// /usr/include/qt/QtGui/qtextcursor.h:165
// QTextCharFormat charFormat()
extern "C"
void C_ZNK11QTextCursor10charFormatEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->charFormat();
}
// /usr/include/qt/QtGui/qtextcursor.h:166
// void setCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor13setCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextCursor*)this_)->setCharFormat(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:167
// void mergeCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor15mergeCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & modifier) {
  ((QTextCursor*)this_)->mergeCharFormat(modifier);
}
// /usr/include/qt/QtGui/qtextcursor.h:169
// QTextBlockFormat blockFormat()
extern "C"
void C_ZNK11QTextCursor11blockFormatEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->blockFormat();
}
// /usr/include/qt/QtGui/qtextcursor.h:170
// void setBlockFormat(const class QTextBlockFormat &)
extern "C"
void C_ZN11QTextCursor14setBlockFormatERK16QTextBlockFormat(void *this_, const QTextBlockFormat & format) {
  ((QTextCursor*)this_)->setBlockFormat(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:171
// void mergeBlockFormat(const class QTextBlockFormat &)
extern "C"
void C_ZN11QTextCursor16mergeBlockFormatERK16QTextBlockFormat(void *this_, const QTextBlockFormat & modifier) {
  ((QTextCursor*)this_)->mergeBlockFormat(modifier);
}
// /usr/include/qt/QtGui/qtextcursor.h:173
// QTextCharFormat blockCharFormat()
extern "C"
void C_ZNK11QTextCursor15blockCharFormatEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->blockCharFormat();
}
// /usr/include/qt/QtGui/qtextcursor.h:174
// void setBlockCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor18setBlockCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextCursor*)this_)->setBlockCharFormat(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:175
// void mergeBlockCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor20mergeBlockCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & modifier) {
  ((QTextCursor*)this_)->mergeBlockCharFormat(modifier);
}
// /usr/include/qt/QtGui/qtextcursor.h:177
// bool atBlockStart()
extern "C"
void C_ZNK11QTextCursor12atBlockStartEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->atBlockStart();
}
// /usr/include/qt/QtGui/qtextcursor.h:178
// bool atBlockEnd()
extern "C"
void C_ZNK11QTextCursor10atBlockEndEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->atBlockEnd();
}
// /usr/include/qt/QtGui/qtextcursor.h:179
// bool atStart()
extern "C"
void C_ZNK11QTextCursor7atStartEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->atStart();
}
// /usr/include/qt/QtGui/qtextcursor.h:180
// bool atEnd()
extern "C"
void C_ZNK11QTextCursor5atEndEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->atEnd();
}
// /usr/include/qt/QtGui/qtextcursor.h:182
// void insertBlock()
extern "C"
void C_ZN11QTextCursor11insertBlockEv(void *this_) {
  ((QTextCursor*)this_)->insertBlock();
}
// /usr/include/qt/QtGui/qtextcursor.h:183
// void insertBlock(const class QTextBlockFormat &)
extern "C"
void C_ZN11QTextCursor11insertBlockERK16QTextBlockFormat(void *this_, const QTextBlockFormat & format) {
  ((QTextCursor*)this_)->insertBlock(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:184
// void insertBlock(const class QTextBlockFormat &, const class QTextCharFormat &)
extern "C"
void C_ZN11QTextCursor11insertBlockERK16QTextBlockFormatRK15QTextCharFormat(void *this_, const QTextBlockFormat & format, const QTextCharFormat & charFormat) {
  ((QTextCursor*)this_)->insertBlock(format, charFormat);
}
// /usr/include/qt/QtGui/qtextcursor.h:186
// QTextList * insertList(const class QTextListFormat &)
extern "C"
void C_ZN11QTextCursor10insertListERK15QTextListFormat(void *this_, const QTextListFormat & format) {
  /*return*/ ((QTextCursor*)this_)->insertList(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:187
// QTextList * insertList(class QTextListFormat::Style)
extern "C"
void C_ZN11QTextCursor10insertListEN15QTextListFormat5StyleE(void *this_, QTextListFormat::Style style) {
  /*return*/ ((QTextCursor*)this_)->insertList(style);
}
// /usr/include/qt/QtGui/qtextcursor.h:189
// QTextList * createList(const class QTextListFormat &)
extern "C"
void C_ZN11QTextCursor10createListERK15QTextListFormat(void *this_, const QTextListFormat & format) {
  /*return*/ ((QTextCursor*)this_)->createList(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:190
// QTextList * createList(class QTextListFormat::Style)
extern "C"
void C_ZN11QTextCursor10createListEN15QTextListFormat5StyleE(void *this_, QTextListFormat::Style style) {
  /*return*/ ((QTextCursor*)this_)->createList(style);
}
// /usr/include/qt/QtGui/qtextcursor.h:191
// QTextList * currentList()
extern "C"
void C_ZNK11QTextCursor11currentListEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->currentList();
}
// /usr/include/qt/QtGui/qtextcursor.h:193
// QTextTable * insertTable(int, int, const class QTextTableFormat &)
extern "C"
void C_ZN11QTextCursor11insertTableEiiRK16QTextTableFormat(void *this_, int rows, int cols, const QTextTableFormat & format) {
  /*return*/ ((QTextCursor*)this_)->insertTable(rows, cols, format);
}
// /usr/include/qt/QtGui/qtextcursor.h:194
// QTextTable * insertTable(int, int)
extern "C"
void C_ZN11QTextCursor11insertTableEii(void *this_, int rows, int cols) {
  /*return*/ ((QTextCursor*)this_)->insertTable(rows, cols);
}
// /usr/include/qt/QtGui/qtextcursor.h:195
// QTextTable * currentTable()
extern "C"
void C_ZNK11QTextCursor12currentTableEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->currentTable();
}
// /usr/include/qt/QtGui/qtextcursor.h:197
// QTextFrame * insertFrame(const class QTextFrameFormat &)
extern "C"
void C_ZN11QTextCursor11insertFrameERK16QTextFrameFormat(void *this_, const QTextFrameFormat & format) {
  /*return*/ ((QTextCursor*)this_)->insertFrame(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:198
// QTextFrame * currentFrame()
extern "C"
void C_ZNK11QTextCursor12currentFrameEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->currentFrame();
}
// /usr/include/qt/QtGui/qtextcursor.h:200
// void insertFragment(const class QTextDocumentFragment &)
extern "C"
void C_ZN11QTextCursor14insertFragmentERK21QTextDocumentFragment(void *this_, const QTextDocumentFragment & fragment) {
  ((QTextCursor*)this_)->insertFragment(fragment);
}
// /usr/include/qt/QtGui/qtextcursor.h:203
// void insertHtml(const class QString &)
extern "C"
void C_ZN11QTextCursor10insertHtmlERK7QString(void *this_, const QString & html) {
  ((QTextCursor*)this_)->insertHtml(html);
}
// /usr/include/qt/QtGui/qtextcursor.h:206
// void insertImage(const class QTextImageFormat &, class QTextFrameFormat::Position)
extern "C"
void C_ZN11QTextCursor11insertImageERK16QTextImageFormatN16QTextFrameFormat8PositionE(void *this_, const QTextImageFormat & format, QTextFrameFormat::Position alignment) {
  ((QTextCursor*)this_)->insertImage(format, alignment);
}
// /usr/include/qt/QtGui/qtextcursor.h:207
// void insertImage(const class QTextImageFormat &)
extern "C"
void C_ZN11QTextCursor11insertImageERK16QTextImageFormat(void *this_, const QTextImageFormat & format) {
  ((QTextCursor*)this_)->insertImage(format);
}
// /usr/include/qt/QtGui/qtextcursor.h:208
// void insertImage(const class QString &)
extern "C"
void C_ZN11QTextCursor11insertImageERK7QString(void *this_, const QString & name) {
  ((QTextCursor*)this_)->insertImage(name);
}
// /usr/include/qt/QtGui/qtextcursor.h:209
// void insertImage(const class QImage &, const class QString &)
extern "C"
void C_ZN11QTextCursor11insertImageERK6QImageRK7QString(void *this_, const QImage & image, const QString & name) {
  ((QTextCursor*)this_)->insertImage(image, name);
}
// /usr/include/qt/QtGui/qtextcursor.h:211
// void beginEditBlock()
extern "C"
void C_ZN11QTextCursor14beginEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->beginEditBlock();
}
// /usr/include/qt/QtGui/qtextcursor.h:212
// void joinPreviousEditBlock()
extern "C"
void C_ZN11QTextCursor21joinPreviousEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->joinPreviousEditBlock();
}
// /usr/include/qt/QtGui/qtextcursor.h:213
// void endEditBlock()
extern "C"
void C_ZN11QTextCursor12endEditBlockEv(void *this_) {
  ((QTextCursor*)this_)->endEditBlock();
}
// /usr/include/qt/QtGui/qtextcursor.h:222
// bool isCopyOf(const class QTextCursor &)
extern "C"
void C_ZNK11QTextCursor8isCopyOfERKS_(void *this_, const QTextCursor & other) {
  /*return*/ ((QTextCursor*)this_)->isCopyOf(other);
}
// /usr/include/qt/QtGui/qtextcursor.h:224
// int blockNumber()
extern "C"
void C_ZNK11QTextCursor11blockNumberEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->blockNumber();
}
// /usr/include/qt/QtGui/qtextcursor.h:225
// int columnNumber()
extern "C"
void C_ZNK11QTextCursor12columnNumberEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->columnNumber();
}
// /usr/include/qt/QtGui/qtextcursor.h:227
// QTextDocument * document()
extern "C"
void C_ZNK11QTextCursor8documentEv(void *this_) {
  /*return*/ ((QTextCursor*)this_)->document();
}