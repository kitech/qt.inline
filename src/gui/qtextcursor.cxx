// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qtextcursor.h
// dst-file: /src/gui/qtextcursor.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextcursor.h>


#include <qtextdocumentfragment.h>
#include <qtextobject.h>
#include <qstring.h>
#include <qtextformat.h>
// <= header block end

// main block begin =>
void __keep_qtextcursor_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 81, column 10>
//   // proto:  void QTextCursor::swap(QTextCursor & other);
if (true) {
  auto f = [](QTextCursor flythis, QTextCursor & arg1) {
    ((QTextCursor*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QTextCursor4swapERS_ swap(class QTextCursor &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextCursor_Class_Size()
{
  return sizeof(QTextCursor);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 225, column 9>
//   // proto:  int QTextCursor::columnNumber();
// _ZNK11QTextCursor12columnNumberEv columnNumber()
extern "C"
int
C_ZNK11QTextCursor12columnNumberEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->columnNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 81, column 10>
//   // proto:  void QTextCursor::swap(QTextCursor & other);
// _ZN11QTextCursor4swapERS_ swap(class QTextCursor &)
extern "C"
void
C_ZN11QTextCursor4swapERS_(void *qthis,
QTextCursor* arg1) {
  ((QTextCursor*)qthis)->swap(*((QTextCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 167, column 10>
//   // proto:  void QTextCursor::mergeCharFormat(const QTextCharFormat & modifier);
// _ZN11QTextCursor15mergeCharFormatERK15QTextCharFormat mergeCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor15mergeCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextCursor*)qthis)->mergeCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 160, column 27>
//   // proto:  QTextDocumentFragment QTextCursor::selection();
// _ZNK11QTextCursor9selectionEv selection()
extern "C"
QTextDocumentFragment*
C_ZNK11QTextCursor9selectionEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->selection();
  return new QTextDocumentFragment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 153, column 10>
//   // proto:  bool QTextCursor::hasComplexSelection();
// _ZNK11QTextCursor19hasComplexSelectionEv hasComplexSelection()
extern "C"
bool
C_ZNK11QTextCursor19hasComplexSelectionEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->hasComplexSelection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 163, column 16>
//   // proto:  QTextBlock QTextCursor::block();
// _ZNK11QTextCursor5blockEv block()
extern "C"
QTextBlock*
C_ZNK11QTextCursor5blockEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->block();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 200, column 10>
//   // proto:  void QTextCursor::insertFragment(const QTextDocumentFragment & fragment);
// _ZN11QTextCursor14insertFragmentERK21QTextDocumentFragment insertFragment(const class QTextDocumentFragment &)
extern "C"
void
C_ZN11QTextCursor14insertFragmentERK21QTextDocumentFragment(void *qthis,
const QTextDocumentFragment* arg1) {
  ((QTextCursor*)qthis)->insertFragment(*((const QTextDocumentFragment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 186, column 16>
//   // proto:  QTextList * QTextCursor::insertList(const QTextListFormat & format);
// _ZN11QTextCursor10insertListERK15QTextListFormat insertList(const class QTextListFormat &)
extern "C"
void*
C_ZN11QTextCursor10insertListERK15QTextListFormat(void *qthis,
const QTextListFormat* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->insertList(*((const QTextListFormat*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 207, column 10>
//   // proto:  void QTextCursor::insertImage(const QTextImageFormat & format);
// _ZN11QTextCursor11insertImageERK16QTextImageFormat insertImage(const class QTextImageFormat &)
extern "C"
void
C_ZN11QTextCursor11insertImageERK16QTextImageFormat(void *qthis,
const QTextImageFormat* arg1) {
  ((QTextCursor*)qthis)->insertImage(*((const QTextImageFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 139, column 10>
//   // proto:  bool QTextCursor::keepPositionOnInsert();
// _ZNK11QTextCursor20keepPositionOnInsertEv keepPositionOnInsert()
extern "C"
bool
C_ZNK11QTextCursor20keepPositionOnInsertEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->keepPositionOnInsert();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 91, column 9>
//   // proto:  int QTextCursor::position();
// _ZNK11QTextCursor8positionEv position()
extern "C"
int
C_ZNK11QTextCursor8positionEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->position();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 83, column 10>
//   // proto:  bool QTextCursor::isNull();
// _ZNK11QTextCursor6isNullEv isNull()
extern "C"
bool
C_ZNK11QTextCursor6isNullEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 154, column 10>
//   // proto:  void QTextCursor::removeSelectedText();
// _ZN11QTextCursor18removeSelectedTextEv removeSelectedText()
extern "C"
void
C_ZN11QTextCursor18removeSelectedTextEv(void *qthis) {
  ((QTextCursor*)qthis)->removeSelectedText();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 203, column 10>
//   // proto:  void QTextCursor::insertHtml(const QString & html);
// _ZN11QTextCursor10insertHtmlERK7QString insertHtml(const class QString &)
extern "C"
void
C_ZN11QTextCursor10insertHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QTextCursor*)qthis)->insertHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 222, column 10>
//   // proto:  bool QTextCursor::isCopyOf(const QTextCursor & other);
// _ZNK11QTextCursor8isCopyOfERKS_ isCopyOf(const class QTextCursor &)
extern "C"
bool
C_ZNK11QTextCursor8isCopyOfERKS_(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->isCopyOf(*((const QTextCursor*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 197, column 17>
//   // proto:  QTextFrame * QTextCursor::insertFrame(const QTextFrameFormat & format);
// _ZN11QTextCursor11insertFrameERK16QTextFrameFormat insertFrame(const class QTextFrameFormat &)
extern "C"
void*
C_ZN11QTextCursor11insertFrameERK16QTextFrameFormat(void *qthis,
const QTextFrameFormat* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->insertFrame(*((const QTextFrameFormat*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 74, column 5>
//   // proto:  void QTextCursor::QTextCursor(const QTextCursor & cursor);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2ERKS_(const QTextCursor* arg1) {
  auto ret = new QTextCursor(*((const QTextCursor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 141, column 10>
//   // proto:  void QTextCursor::deleteChar();
// _ZN11QTextCursor10deleteCharEv deleteChar()
extern "C"
void
C_ZN11QTextCursor10deleteCharEv(void *qthis) {
  ((QTextCursor*)qthis)->deleteChar();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 70, column 5>
//   // proto:  void QTextCursor::QTextCursor(QTextDocumentPrivate * p, int pos);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2EP20QTextDocumentPrivatei(QTextDocumentPrivate * arg1,
int arg2) {
  auto ret = new QTextCursor(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 198, column 17>
//   // proto:  QTextFrame * QTextCursor::currentFrame();
// _ZNK11QTextCursor12currentFrameEv currentFrame()
extern "C"
void*
C_ZNK11QTextCursor12currentFrameEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->currentFrame();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 182, column 10>
//   // proto:  void QTextCursor::insertBlock();
// _ZN11QTextCursor11insertBlockEv insertBlock()
extern "C"
void
C_ZN11QTextCursor11insertBlockEv(void *qthis) {
  ((QTextCursor*)qthis)->insertBlock();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 73, column 14>
//   // proto:  void QTextCursor::QTextCursor(const QTextBlock & block);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2ERK10QTextBlock(const QTextBlock* arg1) {
  auto ret = new QTextCursor(*((const QTextBlock*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 194, column 17>
//   // proto:  QTextTable * QTextCursor::insertTable(int rows, int cols);
// _ZN11QTextCursor11insertTableEii insertTable(int, int)
extern "C"
void*
C_ZN11QTextCursor11insertTableEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTextCursor*)qthis)->insertTable(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 68, column 5>
//   // proto:  void QTextCursor::QTextCursor();
extern "C"
QTextCursor*
C_ZN11QTextCursorC2Ev() {
  auto ret = new QTextCursor();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 71, column 14>
//   // proto:  void QTextCursor::QTextCursor(QTextCursorPrivate * d);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2EP18QTextCursorPrivate(QTextCursorPrivate * arg1) {
  auto ret = new QTextCursor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 179, column 10>
//   // proto:  bool QTextCursor::atStart();
// _ZNK11QTextCursor7atStartEv atStart()
extern "C"
bool
C_ZNK11QTextCursor7atStartEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->atStart();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 156, column 9>
//   // proto:  int QTextCursor::selectionStart();
// _ZNK11QTextCursor14selectionStartEv selectionStart()
extern "C"
int
C_ZNK11QTextCursor14selectionStartEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->selectionStart();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 161, column 10>
//   // proto:  void QTextCursor::selectedTableCells(int * firstRow, int * numRows, int * firstColumn, int * numColumns);
// _ZNK11QTextCursor18selectedTableCellsEPiS0_S0_S0_ selectedTableCells(int *, int *, int *, int *)
extern "C"
void
C_ZNK11QTextCursor18selectedTableCellsEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QTextCursor*)qthis)->selectedTableCells(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 130, column 10>
//   // proto:  bool QTextCursor::movePosition(QTextCursor::MoveOperation op, QTextCursor::MoveMode , int n);
// _ZN11QTextCursor12movePositionENS_13MoveOperationENS_8MoveModeEi movePosition(enum QTextCursor::MoveOperation, enum QTextCursor::MoveMode, int)
extern "C"
bool
C_ZN11QTextCursor12movePositionENS_13MoveOperationENS_8MoveModeEi(void *qthis,
QTextCursor::MoveOperation arg1,
QTextCursor::MoveMode arg2,
int arg3) {
  auto ret =
  ((QTextCursor*)qthis)->movePosition(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 213, column 10>
//   // proto:  void QTextCursor::endEditBlock();
// _ZN11QTextCursor12endEditBlockEv endEditBlock()
extern "C"
void
C_ZN11QTextCursor12endEditBlockEv(void *qthis) {
  ((QTextCursor*)qthis)->endEditBlock();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 159, column 13>
//   // proto:  QString QTextCursor::selectedText();
// _ZNK11QTextCursor12selectedTextEv selectedText()
extern "C"
QString*
C_ZNK11QTextCursor12selectedTextEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->selectedText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 92, column 9>
//   // proto:  int QTextCursor::positionInBlock();
// _ZNK11QTextCursor15positionInBlockEv positionInBlock()
extern "C"
int
C_ZNK11QTextCursor15positionInBlockEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->positionInBlock();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 152, column 10>
//   // proto:  bool QTextCursor::hasSelection();
// _ZNK11QTextCursor12hasSelectionEv hasSelection()
extern "C"
bool
C_ZNK11QTextCursor12hasSelectionEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->hasSelection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 180, column 10>
//   // proto:  bool QTextCursor::atEnd();
// _ZNK11QTextCursor5atEndEv atEnd()
extern "C"
bool
C_ZNK11QTextCursor5atEndEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 208, column 10>
//   // proto:  void QTextCursor::insertImage(const QString & name);
// _ZN11QTextCursor11insertImageERK7QString insertImage(const class QString &)
extern "C"
void
C_ZN11QTextCursor11insertImageERK7QString(void *qthis,
const QString* arg1) {
  ((QTextCursor*)qthis)->insertImage(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 177, column 10>
//   // proto:  bool QTextCursor::atBlockStart();
// _ZNK11QTextCursor12atBlockStartEv atBlockStart()
extern "C"
bool
C_ZNK11QTextCursor12atBlockStartEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->atBlockStart();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 150, column 10>
//   // proto:  void QTextCursor::select(QTextCursor::SelectionType selection);
// _ZN11QTextCursor6selectENS_13SelectionTypeE select(enum QTextCursor::SelectionType)
extern "C"
void
C_ZN11QTextCursor6selectENS_13SelectionTypeE(void *qthis,
QTextCursor::SelectionType arg1) {
  ((QTextCursor*)qthis)->select(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 96, column 10>
//   // proto:  void QTextCursor::insertText(const QString & text);
// _ZN11QTextCursor10insertTextERK7QString insertText(const class QString &)
extern "C"
void
C_ZN11QTextCursor10insertTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextCursor*)qthis)->insertText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 132, column 10>
//   // proto:  bool QTextCursor::visualNavigation();
// _ZNK11QTextCursor16visualNavigationEv visualNavigation()
extern "C"
bool
C_ZNK11QTextCursor16visualNavigationEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->visualNavigation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 178, column 10>
//   // proto:  bool QTextCursor::atBlockEnd();
// _ZNK11QTextCursor10atBlockEndEv atBlockEnd()
extern "C"
bool
C_ZNK11QTextCursor10atBlockEndEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->atBlockEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 183, column 10>
//   // proto:  void QTextCursor::insertBlock(const QTextBlockFormat & format);
// _ZN11QTextCursor11insertBlockERK16QTextBlockFormat insertBlock(const class QTextBlockFormat &)
extern "C"
void
C_ZN11QTextCursor11insertBlockERK16QTextBlockFormat(void *qthis,
const QTextBlockFormat* arg1) {
  ((QTextCursor*)qthis)->insertBlock(*((const QTextBlockFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 191, column 16>
//   // proto:  QTextList * QTextCursor::currentList();
// _ZNK11QTextCursor11currentListEv currentList()
extern "C"
void*
C_ZNK11QTextCursor11currentListEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->currentList();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 184, column 10>
//   // proto:  void QTextCursor::insertBlock(const QTextBlockFormat & format, const QTextCharFormat & charFormat);
// _ZN11QTextCursor11insertBlockERK16QTextBlockFormatRK15QTextCharFormat insertBlock(const class QTextBlockFormat &, const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor11insertBlockERK16QTextBlockFormatRK15QTextCharFormat(void *qthis,
const QTextBlockFormat* arg1,
const QTextCharFormat* arg2) {
  ((QTextCursor*)qthis)->insertBlock(*((const QTextBlockFormat*)arg1),
*((const QTextCharFormat*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 175, column 10>
//   // proto:  void QTextCursor::mergeBlockCharFormat(const QTextCharFormat & modifier);
// _ZN11QTextCursor20mergeBlockCharFormatERK15QTextCharFormat mergeBlockCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor20mergeBlockCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextCursor*)qthis)->mergeBlockCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 166, column 10>
//   // proto:  void QTextCursor::setCharFormat(const QTextCharFormat & format);
// _ZN11QTextCursor13setCharFormatERK15QTextCharFormat setCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor13setCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextCursor*)qthis)->setCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 136, column 9>
//   // proto:  int QTextCursor::verticalMovementX();
// _ZNK11QTextCursor17verticalMovementXEv verticalMovementX()
extern "C"
int
C_ZNK11QTextCursor17verticalMovementXEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->verticalMovementX();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 224, column 9>
//   // proto:  int QTextCursor::blockNumber();
// _ZNK11QTextCursor11blockNumberEv blockNumber()
extern "C"
int
C_ZNK11QTextCursor11blockNumberEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->blockNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 212, column 10>
//   // proto:  void QTextCursor::joinPreviousEditBlock();
// _ZN11QTextCursor21joinPreviousEditBlockEv joinPreviousEditBlock()
extern "C"
void
C_ZN11QTextCursor21joinPreviousEditBlockEv(void *qthis) {
  ((QTextCursor*)qthis)->joinPreviousEditBlock();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 69, column 14>
//   // proto:  void QTextCursor::QTextCursor(QTextDocument * document);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2EP13QTextDocument(QTextDocument * arg1) {
  auto ret = new QTextCursor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 97, column 10>
//   // proto:  void QTextCursor::insertText(const QString & text, const QTextCharFormat & format);
// _ZN11QTextCursor10insertTextERK7QStringRK15QTextCharFormat insertText(const class QString &, const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor10insertTextERK7QStringRK15QTextCharFormat(void *qthis,
const QString* arg1,
const QTextCharFormat* arg2) {
  ((QTextCursor*)qthis)->insertText(*((const QString*)arg1),
*((const QTextCharFormat*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 187, column 16>
//   // proto:  QTextList * QTextCursor::insertList(QTextListFormat::Style style);
// _ZN11QTextCursor10insertListEN15QTextListFormat5StyleE insertList(class QTextListFormat::Style)
extern "C"
void*
C_ZN11QTextCursor10insertListEN15QTextListFormat5StyleE(void *qthis,
QTextListFormat::Style* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->insertList(*((QTextListFormat::Style*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 171, column 10>
//   // proto:  void QTextCursor::mergeBlockFormat(const QTextBlockFormat & modifier);
// _ZN11QTextCursor16mergeBlockFormatERK16QTextBlockFormat mergeBlockFormat(const class QTextBlockFormat &)
extern "C"
void
C_ZN11QTextCursor16mergeBlockFormatERK16QTextBlockFormat(void *qthis,
const QTextBlockFormat* arg1) {
  ((QTextCursor*)qthis)->mergeBlockFormat(*((const QTextBlockFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 169, column 22>
//   // proto:  QTextBlockFormat QTextCursor::blockFormat();
// _ZNK11QTextCursor11blockFormatEv blockFormat()
extern "C"
QTextBlockFormat*
C_ZNK11QTextCursor11blockFormatEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->blockFormat();
  return new QTextBlockFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 209, column 10>
//   // proto:  void QTextCursor::insertImage(const QImage & image, const QString & name);
// _ZN11QTextCursor11insertImageERK6QImageRK7QString insertImage(const class QImage &, const class QString &)
extern "C"
void
C_ZN11QTextCursor11insertImageERK6QImageRK7QString(void *qthis,
const QImage* arg1,
const QString* arg2) {
  ((QTextCursor*)qthis)->insertImage(*((const QImage*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 211, column 10>
//   // proto:  void QTextCursor::beginEditBlock();
// _ZN11QTextCursor14beginEditBlockEv beginEditBlock()
extern "C"
void
C_ZN11QTextCursor14beginEditBlockEv(void *qthis) {
  ((QTextCursor*)qthis)->beginEditBlock();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 94, column 9>
//   // proto:  int QTextCursor::anchor();
// _ZNK11QTextCursor6anchorEv anchor()
extern "C"
int
C_ZNK11QTextCursor6anchorEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->anchor();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 165, column 21>
//   // proto:  QTextCharFormat QTextCursor::charFormat();
// _ZNK11QTextCursor10charFormatEv charFormat()
extern "C"
QTextCharFormat*
C_ZNK11QTextCursor10charFormatEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->charFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 142, column 10>
//   // proto:  void QTextCursor::deletePreviousChar();
// _ZN11QTextCursor18deletePreviousCharEv deletePreviousChar()
extern "C"
void
C_ZN11QTextCursor18deletePreviousCharEv(void *qthis) {
  ((QTextCursor*)qthis)->deletePreviousChar();
}
//   // proto:  void QTextCursor::~QTextCursor();
extern "C"
void C_ZN11QTextCursorD2Ev(void *qthis) {
  delete (QTextCursor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 155, column 10>
//   // proto:  void QTextCursor::clearSelection();
// _ZN11QTextCursor14clearSelectionEv clearSelection()
extern "C"
void
C_ZN11QTextCursor14clearSelectionEv(void *qthis) {
  ((QTextCursor*)qthis)->clearSelection();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 133, column 10>
//   // proto:  void QTextCursor::setVisualNavigation(bool b);
// _ZN11QTextCursor19setVisualNavigationEb setVisualNavigation(_Bool)
extern "C"
void
C_ZN11QTextCursor19setVisualNavigationEb(void *qthis,
bool arg1) {
  ((QTextCursor*)qthis)->setVisualNavigation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 174, column 10>
//   // proto:  void QTextCursor::setBlockCharFormat(const QTextCharFormat & format);
// _ZN11QTextCursor18setBlockCharFormatERK15QTextCharFormat setBlockCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN11QTextCursor18setBlockCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextCursor*)qthis)->setBlockCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 195, column 17>
//   // proto:  QTextTable * QTextCursor::currentTable();
// _ZNK11QTextCursor12currentTableEv currentTable()
extern "C"
void*
C_ZNK11QTextCursor12currentTableEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->currentTable();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 138, column 10>
//   // proto:  void QTextCursor::setKeepPositionOnInsert(bool b);
// _ZN11QTextCursor23setKeepPositionOnInsertEb setKeepPositionOnInsert(_Bool)
extern "C"
void
C_ZN11QTextCursor23setKeepPositionOnInsertEb(void *qthis,
bool arg1) {
  ((QTextCursor*)qthis)->setKeepPositionOnInsert(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 90, column 10>
//   // proto:  void QTextCursor::setPosition(int pos, QTextCursor::MoveMode mode);
// _ZN11QTextCursor11setPositionEiNS_8MoveModeE setPosition(int, enum QTextCursor::MoveMode)
extern "C"
void
C_ZN11QTextCursor11setPositionEiNS_8MoveModeE(void *qthis,
int arg1,
QTextCursor::MoveMode arg2) {
  ((QTextCursor*)qthis)->setPosition(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 135, column 10>
//   // proto:  void QTextCursor::setVerticalMovementX(int x);
// _ZN11QTextCursor20setVerticalMovementXEi setVerticalMovementX(int)
extern "C"
void
C_ZN11QTextCursor20setVerticalMovementXEi(void *qthis,
int arg1) {
  ((QTextCursor*)qthis)->setVerticalMovementX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 227, column 20>
//   // proto:  QTextDocument * QTextCursor::document();
// _ZNK11QTextCursor8documentEv document()
extern "C"
void*
C_ZNK11QTextCursor8documentEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 193, column 17>
//   // proto:  QTextTable * QTextCursor::insertTable(int rows, int cols, const QTextTableFormat & format);
// _ZN11QTextCursor11insertTableEiiRK16QTextTableFormat insertTable(int, int, const class QTextTableFormat &)
extern "C"
void*
C_ZN11QTextCursor11insertTableEiiRK16QTextTableFormat(void *qthis,
int arg1,
int arg2,
const QTextTableFormat* arg3) {
  auto ret =
  ((QTextCursor*)qthis)->insertTable(arg1,
arg2,
*((const QTextTableFormat*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 72, column 14>
//   // proto:  void QTextCursor::QTextCursor(QTextFrame * frame);
extern "C"
QTextCursor*
C_ZN11QTextCursorC2EP10QTextFrame(QTextFrame * arg1) {
  auto ret = new QTextCursor(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 157, column 9>
//   // proto:  int QTextCursor::selectionEnd();
// _ZNK11QTextCursor12selectionEndEv selectionEnd()
extern "C"
int
C_ZNK11QTextCursor12selectionEndEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->selectionEnd();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 190, column 16>
//   // proto:  QTextList * QTextCursor::createList(QTextListFormat::Style style);
// _ZN11QTextCursor10createListEN15QTextListFormat5StyleE createList(class QTextListFormat::Style)
extern "C"
void*
C_ZN11QTextCursor10createListEN15QTextListFormat5StyleE(void *qthis,
QTextListFormat::Style* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->createList(*((QTextListFormat::Style*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 206, column 10>
//   // proto:  void QTextCursor::insertImage(const QTextImageFormat & format, QTextFrameFormat::Position alignment);
// _ZN11QTextCursor11insertImageERK16QTextImageFormatN16QTextFrameFormat8PositionE insertImage(const class QTextImageFormat &, class QTextFrameFormat::Position)
extern "C"
void
C_ZN11QTextCursor11insertImageERK16QTextImageFormatN16QTextFrameFormat8PositionE(void *qthis,
const QTextImageFormat* arg1,
QTextFrameFormat::Position* arg2) {
  ((QTextCursor*)qthis)->insertImage(*((const QTextImageFormat*)arg1),
*((QTextFrameFormat::Position*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 170, column 10>
//   // proto:  void QTextCursor::setBlockFormat(const QTextBlockFormat & format);
// _ZN11QTextCursor14setBlockFormatERK16QTextBlockFormat setBlockFormat(const class QTextBlockFormat &)
extern "C"
void
C_ZN11QTextCursor14setBlockFormatERK16QTextBlockFormat(void *qthis,
const QTextBlockFormat* arg1) {
  ((QTextCursor*)qthis)->setBlockFormat(*((const QTextBlockFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 189, column 16>
//   // proto:  QTextList * QTextCursor::createList(const QTextListFormat & format);
// _ZN11QTextCursor10createListERK15QTextListFormat createList(const class QTextListFormat &)
extern "C"
void*
C_ZN11QTextCursor10createListERK15QTextListFormat(void *qthis,
const QTextListFormat* arg1) {
  auto ret =
  ((QTextCursor*)qthis)->createList(*((const QTextListFormat*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextcursor.h', line 173, column 21>
//   // proto:  QTextCharFormat QTextCursor::blockCharFormat();
// _ZNK11QTextCursor15blockCharFormatEv blockCharFormat()
extern "C"
QTextCharFormat*
C_ZNK11QTextCursor15blockCharFormatEv(void *qthis) {
  auto ret =
  ((QTextCursor*)qthis)->blockCharFormat();
  return new QTextCharFormat(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

