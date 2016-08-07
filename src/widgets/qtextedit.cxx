// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextedit.h>


#include <qstring.h>
#include <qvariant.h>
#include <qrect.h>
#include <qtextoption.h>
#include <qtextcursor.h>
#include <qlist.h>
#include <qapplication.h>
#include <qglobal.h>
#include <qtextformat.h>
#include <qfont.h>
#include <qnamespace.h>
#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qtextedit_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 143, column 17>
//   // proto:  void QTextEdit::setDocumentTitle(const QString & title);
if (true) {
  auto f = [](QTextEdit flythis, const QString & arg1) {
    ((QTextEdit*)0)->setDocumentTitle(arg1);
    flythis.setDocumentTitle(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QTextEdit16setDocumentTitleERK7QString setDocumentTitle(const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 145, column 20>
//   // proto:  QString QTextEdit::documentTitle();
if (true) {
  auto f = [](QTextEdit flythis) {
    ((QTextEdit*)0)->documentTitle();
    flythis.documentTitle();
  };
  if (f == nullptr){}
}
// _ZNK9QTextEdit13documentTitleEv documentTitle()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 148, column 17>
//   // proto:  bool QTextEdit::isUndoRedoEnabled();
if (true) {
  auto f = [](QTextEdit flythis) {
    ((QTextEdit*)0)->isUndoRedoEnabled();
    flythis.isUndoRedoEnabled();
  };
  if (f == nullptr){}
}
// _ZNK9QTextEdit17isUndoRedoEnabledEv isUndoRedoEnabled()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 150, column 17>
//   // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
if (true) {
  auto f = [](QTextEdit flythis, bool arg1) {
    ((QTextEdit*)0)->setUndoRedoEnabled(arg1);
    flythis.setUndoRedoEnabled(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QTextEdit18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextEdit_Class_Size()
{
  return sizeof(QTextEdit);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 156, column 9>
//   // proto:  int QTextEdit::lineWrapColumnOrWidth();
// _ZNK9QTextEdit21lineWrapColumnOrWidthEv lineWrapColumnOrWidth()
extern "C"
int
C_ZNK9QTextEdit21lineWrapColumnOrWidthEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->lineWrapColumnOrWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 217, column 10>
//   // proto:  void QTextEdit::setFontFamily(const QString & fontFamily);
// _ZN9QTextEdit13setFontFamilyERK7QString setFontFamily(const class QString &)
extern "C"
void
C_ZN9QTextEdit13setFontFamilyERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setFontFamily(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 203, column 10>
//   // proto:  void QTextEdit::setExtraSelections(const QList<QTextEdit::ExtraSelection> & selections);
// _ZN9QTextEdit18setExtraSelectionsERK5QListINS_14ExtraSelectionEE setExtraSelections(const QList<struct QTextEdit::ExtraSelection> &)
extern "C"
void
C_ZN9QTextEdit18setExtraSelectionsERK5QListINS_14ExtraSelectionEE(void *qthis,
const QList<QTextEdit::ExtraSelection>* arg1) {
  ((QTextEdit*)qthis)->setExtraSelections(*((const QList<QTextEdit::ExtraSelection>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 167, column 13>
//   // proto:  QString QTextEdit::toPlainText();
// _ZNK9QTextEdit11toPlainTextEv toPlainText()
extern "C"
QString*
C_ZNK9QTextEdit11toPlainTextEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->toPlainText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 193, column 10>
//   // proto:  void QTextEdit::setCursorWidth(int width);
// _ZN9QTextEdit14setCursorWidthEi setCursorWidth(int)
extern "C"
void
C_ZN9QTextEdit14setCursorWidthEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->setCursorWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 176, column 12>
//   // proto:  QMenu * QTextEdit::createStandardContextMenu();
// _ZN9QTextEdit25createStandardContextMenuEv createStandardContextMenu()
extern "C"
void*
C_ZN9QTextEdit25createStandardContextMenuEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->createStandardContextMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 108, column 20>
//   // proto:  QTextDocument * QTextEdit::document();
// _ZNK9QTextEdit8documentEv document()
extern "C"
void*
C_ZNK9QTextEdit8documentEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 213, column 26>
//   // proto:  QVariant QTextEdit::inputMethodQuery(Qt::InputMethodQuery query, QVariant argument);
// _ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
QVariant*
C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *qthis,
Qt::InputMethodQuery* arg1,
QVariant* arg2) {
  auto ret =
  ((QTextEdit*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1),
*((QVariant*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 182, column 11>
//   // proto:  QRect QTextEdit::cursorRect();
// _ZNK9QTextEdit10cursorRectEv cursorRect()
extern "C"
QRect*
C_ZNK9QTextEdit10cursorRectEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->cursorRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 221, column 10>
//   // proto:  void QTextEdit::setTextColor(const QColor & c);
// _ZN9QTextEdit12setTextColorERK6QColor setTextColor(const class QColor &)
extern "C"
void
C_ZN9QTextEdit12setTextColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QTextEdit*)qthis)->setTextColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 195, column 10>
//   // proto:  bool QTextEdit::acceptRichText();
// _ZNK9QTextEdit14acceptRichTextEv acceptRichText()
extern "C"
bool
C_ZNK9QTextEdit14acceptRichTextEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->acceptRichText();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 241, column 10>
//   // proto:  void QTextEdit::clear();
// _ZN9QTextEdit5clearEv clear()
extern "C"
void
C_ZN9QTextEdit5clearEv(void *qthis) {
  ((QTextEdit*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 246, column 10>
//   // proto:  void QTextEdit::insertHtml(const QString & text);
// _ZN9QTextEdit10insertHtmlERK7QString insertHtml(const class QString &)
extern "C"
void
C_ZN9QTextEdit10insertHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->insertHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 159, column 27>
//   // proto:  QTextOption::WrapMode QTextEdit::wordWrapMode();
// _ZNK9QTextEdit12wordWrapModeEv wordWrapMode()
extern "C"
QTextOption::WrapMode
C_ZNK9QTextEdit12wordWrapModeEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->wordWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 137, column 20>
//   // proto:  AutoFormatting QTextEdit::autoFormatting();
// _ZNK9QTextEdit14autoFormattingEv autoFormatting()
extern "C"
QFlags<QTextEdit::AutoFormattingFlag>*
C_ZNK9QTextEdit14autoFormattingEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->autoFormatting();
  return new QFlags<QTextEdit::AutoFormattingFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 123, column 13>
//   // proto:  QString QTextEdit::fontFamily();
// _ZNK9QTextEdit10fontFamilyEv fontFamily()
extern "C"
QString*
C_ZNK9QTextEdit10fontFamilyEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->fontFamily();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 219, column 10>
//   // proto:  void QTextEdit::setFontUnderline(bool b);
// _ZN9QTextEdit16setFontUnderlineEb setFontUnderline(_Bool)
extern "C"
void
C_ZN9QTextEdit16setFontUnderlineEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setFontUnderline(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 233, column 10>
//   // proto:  void QTextEdit::cut();
// _ZN9QTextEdit3cutEv cut()
extern "C"
void
C_ZN9QTextEdit3cutEv(void *qthis) {
  ((QTextEdit*)qthis)->cut();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 260, column 10>
//   // proto:  void QTextEdit::currentCharFormatChanged(const QTextCharFormat & format);
// _ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat currentCharFormatChanged(const class QTextCharFormat &)
extern "C"
void
C_ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextEdit*)qthis)->currentCharFormatChanged(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 184, column 13>
//   // proto:  QString QTextEdit::anchorAt(const QPoint & pos);
// _ZNK9QTextEdit8anchorAtERK6QPoint anchorAt(const class QPoint &)
extern "C"
QString*
C_ZNK9QTextEdit8anchorAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTextEdit*)qthis)->anchorAt(*((const QPoint*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 192, column 9>
//   // proto:  int QTextEdit::cursorWidth();
// _ZNK9QTextEdit11cursorWidthEv cursorWidth()
extern "C"
int
C_ZNK9QTextEdit11cursorWidthEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->cursorWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 222, column 10>
//   // proto:  void QTextEdit::setTextBackgroundColor(const QColor & c);
// _ZN9QTextEdit22setTextBackgroundColorERK6QColor setTextBackgroundColor(const class QColor &)
extern "C"
void
C_ZN9QTextEdit22setTextBackgroundColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QTextEdit*)qthis)->setTextBackgroundColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 189, column 9>
//   // proto:  int QTextEdit::tabStopWidth();
// _ZNK9QTextEdit12tabStopWidthEv tabStopWidth()
extern "C"
int
C_ZNK9QTextEdit12tabStopWidthEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->tabStopWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 218, column 10>
//   // proto:  void QTextEdit::setFontWeight(int w);
// _ZN9QTextEdit13setFontWeightEi setFontWeight(int)
extern "C"
void
C_ZN9QTextEdit13setFontWeightEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->setFontWeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 242, column 10>
//   // proto:  void QTextEdit::selectAll();
// _ZN9QTextEdit9selectAllEv selectAll()
extern "C"
void
C_ZN9QTextEdit9selectAllEv(void *qthis) {
  ((QTextEdit*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 224, column 10>
//   // proto:  void QTextEdit::setAlignment(Qt::Alignment a);
// _ZN9QTextEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN9QTextEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QTextEdit*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 254, column 10>
//   // proto:  void QTextEdit::zoomOut(int range);
// _ZN9QTextEdit7zoomOutEi zoomOut(int)
extern "C"
void
C_ZN9QTextEdit7zoomOutEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->zoomOut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 239, column 10>
//   // proto:  void QTextEdit::redo();
// _ZN9QTextEdit4redoEv redo()
extern "C"
void
C_ZN9QTextEdit4redoEv(void *qthis) {
  ((QTextEdit*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 216, column 10>
//   // proto:  void QTextEdit::setFontPointSize(qreal s);
// _ZN9QTextEdit16setFontPointSizeEd setFontPointSize(qreal)
extern "C"
void
C_ZN9QTextEdit16setFontPointSizeEd(void *qthis,
qreal arg1) {
  ((QTextEdit*)qthis)->setFontPointSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 160, column 10>
//   // proto:  void QTextEdit::setWordWrapMode(QTextOption::WrapMode policy);
// _ZN9QTextEdit15setWordWrapModeEN11QTextOption8WrapModeE setWordWrapMode(class QTextOption::WrapMode)
extern "C"
void
C_ZN9QTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *qthis,
QTextOption::WrapMode* arg1) {
  ((QTextEdit*)qthis)->setWordWrapMode(*((QTextOption::WrapMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 186, column 10>
//   // proto:  bool QTextEdit::overwriteMode();
// _ZNK9QTextEdit13overwriteModeEv overwriteMode()
extern "C"
bool
C_ZNK9QTextEdit13overwriteModeEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->overwriteMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 114, column 17>
//   // proto:  QTextCursor QTextEdit::textCursor();
// _ZNK9QTextEdit10textCursorEv textCursor()
extern "C"
QTextCursor*
C_ZNK9QTextEdit10textCursorEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->textCursor();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 132, column 10>
//   // proto:  void QTextEdit::mergeCurrentCharFormat(const QTextCharFormat & modifier);
// _ZN9QTextEdit22mergeCurrentCharFormatERK15QTextCharFormat mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN9QTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextEdit*)qthis)->mergeCurrentCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 204, column 27>
//   // proto:  QList<QTextEdit::ExtraSelection> QTextEdit::extraSelections();
// _ZNK9QTextEdit15extraSelectionsEv extraSelections()
extern "C"
QList<QTextEdit::ExtraSelection>*
C_ZNK9QTextEdit15extraSelectionsEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->extraSelections();
  return new QList<QTextEdit::ExtraSelection>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 226, column 10>
//   // proto:  void QTextEdit::setPlainText(const QString & text);
// _ZN9QTextEdit12setPlainTextERK7QString setPlainText(const class QString &)
extern "C"
void
C_ZN9QTextEdit12setPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 111, column 13>
//   // proto:  QString QTextEdit::placeholderText();
// _ZNK9QTextEdit15placeholderTextEv placeholderText()
extern "C"
QString*
C_ZNK9QTextEdit15placeholderTextEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->placeholderText();
  return new QString(ret); // 5
}
//   // proto:  void QTextEdit::~QTextEdit();
extern "C"
void C_ZN9QTextEditD2Ev(void *qthis) {
  delete (QTextEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 126, column 10>
//   // proto:  bool QTextEdit::fontItalic();
// _ZNK9QTextEdit10fontItalicEv fontItalic()
extern "C"
bool
C_ZNK9QTextEdit10fontItalicEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->fontItalic();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 234, column 10>
//   // proto:  void QTextEdit::copy();
// _ZN9QTextEdit4copyEv copy()
extern "C"
void
C_ZN9QTextEdit4copyEv(void *qthis) {
  ((QTextEdit*)qthis)->copy();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 257, column 10>
//   // proto:  void QTextEdit::textChanged();
// _ZN9QTextEdit11textChangedEv textChanged()
extern "C"
void
C_ZN9QTextEdit11textChangedEv(void *qthis) {
  ((QTextEdit*)qthis)->textChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 122, column 11>
//   // proto:  qreal QTextEdit::fontPointSize();
// _ZNK9QTextEdit13fontPointSizeEv fontPointSize()
extern "C"
double
C_ZNK9QTextEdit13fontPointSizeEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->fontPointSize();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 119, column 10>
//   // proto:  void QTextEdit::setTextInteractionFlags(Qt::TextInteractionFlags flags);
// _ZN9QTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void
C_ZN9QTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *qthis,
Qt::TextInteractionFlags* arg1) {
  ((QTextEdit*)qthis)->setTextInteractionFlags(*((Qt::TextInteractionFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 107, column 10>
//   // proto:  void QTextEdit::setDocument(QTextDocument * document);
// _ZN9QTextEdit11setDocumentEP13QTextDocument setDocument(class QTextDocument *)
extern "C"
void
C_ZN9QTextEdit11setDocumentEP13QTextDocument(void *qthis,
QTextDocument * arg1) {
  ((QTextEdit*)qthis)->setDocument(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 187, column 10>
//   // proto:  void QTextEdit::setOverwriteMode(bool overwrite);
// _ZN9QTextEdit16setOverwriteModeEb setOverwriteMode(_Bool)
extern "C"
void
C_ZN9QTextEdit16setOverwriteModeEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setOverwriteMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 164, column 10>
//   // proto:  bool QTextEdit::find(const QRegExp & exp, QTextDocument::FindFlags options);
// _ZN9QTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE find(const class QRegExp &, class QTextDocument::FindFlags)
extern "C"
bool
C_ZN9QTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *qthis,
const QRegExp* arg1,
QTextDocument::FindFlags* arg2) {
  auto ret =
  ((QTextEdit*)qthis)->find(*((const QRegExp*)arg1),
*((QTextDocument::FindFlags*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 238, column 10>
//   // proto:  void QTextEdit::undo();
// _ZN9QTextEdit4undoEv undo()
extern "C"
void
C_ZN9QTextEdit4undoEv(void *qthis) {
  ((QTextEdit*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 253, column 10>
//   // proto:  void QTextEdit::zoomIn(int range);
// _ZN9QTextEdit6zoomInEi zoomIn(int)
extern "C"
void
C_ZN9QTextEdit6zoomInEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->zoomIn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 143, column 17>
//   // proto:  void QTextEdit::setDocumentTitle(const QString & title);
// _ZN9QTextEdit16setDocumentTitleERK7QString setDocumentTitle(const class QString &)
extern "C"
void
C_ZN9QTextEdit16setDocumentTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setDocumentTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 208, column 10>
//   // proto:  bool QTextEdit::canPaste();
// _ZNK9QTextEdit8canPasteEv canPaste()
extern "C"
bool
C_ZNK9QTextEdit8canPasteEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->canPaste();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 153, column 18>
//   // proto:  QTextEdit::LineWrapMode QTextEdit::lineWrapMode();
// _ZNK9QTextEdit12lineWrapModeEv lineWrapMode()
extern "C"
QTextEdit::LineWrapMode
C_ZNK9QTextEdit12lineWrapModeEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->lineWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 169, column 13>
//   // proto:  QString QTextEdit::toHtml();
// _ZNK9QTextEdit6toHtmlEv toHtml()
extern "C"
QString*
C_ZNK9QTextEdit6toHtmlEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->toHtml();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 212, column 14>
//   // proto:  QVariant QTextEdit::inputMethodQuery(Qt::InputMethodQuery property);
// _ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QTextEdit*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 177, column 12>
//   // proto:  QMenu * QTextEdit::createStandardContextMenu(const QPoint & position);
// _ZN9QTextEdit25createStandardContextMenuERK6QPoint createStandardContextMenu(const class QPoint &)
extern "C"
void*
C_ZN9QTextEdit25createStandardContextMenuERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTextEdit*)qthis)->createStandardContextMenu(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 162, column 10>
//   // proto:  bool QTextEdit::find(const QString & exp, QTextDocument::FindFlags options);
// _ZN9QTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE find(const class QString &, class QTextDocument::FindFlags)
extern "C"
bool
C_ZN9QTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *qthis,
const QString* arg1,
QTextDocument::FindFlags* arg2) {
  auto ret =
  ((QTextEdit*)qthis)->find(*((const QString*)arg1),
*((QTextDocument::FindFlags*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 263, column 10>
//   // proto:  void QTextEdit::cursorPositionChanged();
// _ZN9QTextEdit21cursorPositionChangedEv cursorPositionChanged()
extern "C"
void
C_ZN9QTextEdit21cursorPositionChangedEv(void *qthis) {
  ((QTextEdit*)qthis)->cursorPositionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 190, column 10>
//   // proto:  void QTextEdit::setTabStopWidth(int width);
// _ZN9QTextEdit15setTabStopWidthEi setTabStopWidth(int)
extern "C"
void
C_ZN9QTextEdit15setTabStopWidthEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->setTabStopWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 258, column 10>
//   // proto:  void QTextEdit::undoAvailable(bool b);
// _ZN9QTextEdit13undoAvailableEb undoAvailable(_Bool)
extern "C"
void
C_ZN9QTextEdit13undoAvailableEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->undoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 145, column 20>
//   // proto:  QString QTextEdit::documentTitle();
// _ZNK9QTextEdit13documentTitleEv documentTitle()
extern "C"
QString*
C_ZNK9QTextEdit13documentTitleEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->documentTitle();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 148, column 17>
//   // proto:  bool QTextEdit::isUndoRedoEnabled();
// _ZNK9QTextEdit17isUndoRedoEnabledEv isUndoRedoEnabled()
extern "C"
bool
C_ZNK9QTextEdit17isUndoRedoEnabledEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->isUndoRedoEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 206, column 10>
//   // proto:  void QTextEdit::moveCursor(QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode);
// _ZN9QTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
extern "C"
void
C_ZN9QTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *qthis,
QTextCursor::MoveOperation* arg1,
QTextCursor::MoveMode* arg2) {
  ((QTextEdit*)qthis)->moveCursor(*((QTextCursor::MoveOperation*)arg1),
*((QTextCursor::MoveMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 230, column 10>
//   // proto:  void QTextEdit::setText(const QString & text);
// _ZN9QTextEdit7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN9QTextEdit7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 172, column 10>
//   // proto:  void QTextEdit::ensureCursorVisible();
// _ZN9QTextEdit19ensureCursorVisibleEv ensureCursorVisible()
extern "C"
void
C_ZN9QTextEdit19ensureCursorVisibleEv(void *qthis) {
  ((QTextEdit*)qthis)->ensureCursorVisible();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 196, column 10>
//   // proto:  void QTextEdit::setAcceptRichText(bool accept);
// _ZN9QTextEdit17setAcceptRichTextEb setAcceptRichText(_Bool)
extern "C"
void
C_ZN9QTextEdit17setAcceptRichTextEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setAcceptRichText(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 110, column 10>
//   // proto:  void QTextEdit::setPlaceholderText(const QString & placeholderText);
// _ZN9QTextEdit18setPlaceholderTextERK7QString setPlaceholderText(const class QString &)
extern "C"
void
C_ZN9QTextEdit18setPlaceholderTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setPlaceholderText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 116, column 10>
//   // proto:  bool QTextEdit::isReadOnly();
// _ZNK9QTextEdit10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK9QTextEdit10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 150, column 17>
//   // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
// _ZN9QTextEdit18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
extern "C"
void
C_ZN9QTextEdit18setUndoRedoEnabledEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setUndoRedoEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 138, column 10>
//   // proto:  void QTextEdit::setAutoFormatting(AutoFormatting features);
// _ZN9QTextEdit17setAutoFormattingE6QFlagsINS_18AutoFormattingFlagEE setAutoFormatting(AutoFormatting)
extern "C"
void
C_ZN9QTextEdit17setAutoFormattingE6QFlagsINS_18AutoFormattingFlagEE(void *qthis,
QTextEdit::AutoFormatting arg1) {
  ((QTextEdit*)qthis)->setAutoFormatting(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 135, column 21>
//   // proto:  QTextCharFormat QTextEdit::currentCharFormat();
// _ZNK9QTextEdit17currentCharFormatEv currentCharFormat()
extern "C"
QTextCharFormat*
C_ZNK9QTextEdit17currentCharFormatEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->currentCharFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 180, column 17>
//   // proto:  QTextCursor QTextEdit::cursorForPosition(const QPoint & pos);
// _ZNK9QTextEdit17cursorForPositionERK6QPoint cursorForPosition(const class QPoint &)
extern "C"
QTextCursor*
C_ZNK9QTextEdit17cursorForPositionERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTextEdit*)qthis)->cursorForPosition(*((const QPoint*)arg1));
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 251, column 10>
//   // proto:  void QTextEdit::scrollToAnchor(const QString & name);
// _ZN9QTextEdit14scrollToAnchorERK7QString scrollToAnchor(const class QString &)
extern "C"
void
C_ZN9QTextEdit14scrollToAnchorERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->scrollToAnchor(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 129, column 11>
//   // proto:  QFont QTextEdit::currentFont();
// _ZNK9QTextEdit11currentFontEv currentFont()
extern "C"
QFont*
C_ZNK9QTextEdit11currentFontEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->currentFont();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 235, column 10>
//   // proto:  void QTextEdit::paste();
// _ZN9QTextEdit5pasteEv paste()
extern "C"
void
C_ZN9QTextEdit5pasteEv(void *qthis) {
  ((QTextEdit*)qthis)->paste();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 113, column 10>
//   // proto:  void QTextEdit::setTextCursor(const QTextCursor & cursor);
// _ZN9QTextEdit13setTextCursorERK11QTextCursor setTextCursor(const class QTextCursor &)
extern "C"
void
C_ZN9QTextEdit13setTextCursorERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  ((QTextEdit*)qthis)->setTextCursor(*((const QTextCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 134, column 10>
//   // proto:  void QTextEdit::setCurrentCharFormat(const QTextCharFormat & format);
// _ZN9QTextEdit20setCurrentCharFormatERK15QTextCharFormat setCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN9QTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextEdit*)qthis)->setCurrentCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 174, column 34>
//   // proto:  QVariant QTextEdit::loadResource(int type, const QUrl & name);
// _ZN9QTextEdit12loadResourceEiRK4QUrl loadResource(int, const class QUrl &)
extern "C"
QVariant*
C_ZN9QTextEdit12loadResourceEiRK4QUrl(void *qthis,
int arg1,
const QUrl* arg2) {
  auto ret =
  ((QTextEdit*)qthis)->loadResource(arg1,
*((const QUrl*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 141, column 10>
//   // proto:  void QTextEdit::setTabChangesFocus(bool b);
// _ZN9QTextEdit18setTabChangesFocusEb setTabChangesFocus(_Bool)
extern "C"
void
C_ZN9QTextEdit18setTabChangesFocusEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setTabChangesFocus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 262, column 10>
//   // proto:  void QTextEdit::selectionChanged();
// _ZN9QTextEdit16selectionChangedEv selectionChanged()
extern "C"
void
C_ZN9QTextEdit16selectionChangedEv(void *qthis) {
  ((QTextEdit*)qthis)->selectionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 120, column 30>
//   // proto:  Qt::TextInteractionFlags QTextEdit::textInteractionFlags();
// _ZNK9QTextEdit20textInteractionFlagsEv textInteractionFlags()
extern "C"
QFlags<Qt::TextInteractionFlag>*
C_ZNK9QTextEdit20textInteractionFlagsEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->textInteractionFlags();
  return new QFlags<Qt::TextInteractionFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 228, column 10>
//   // proto:  void QTextEdit::setHtml(const QString & text);
// _ZN9QTextEdit7setHtmlERK7QString setHtml(const class QString &)
extern "C"
void
C_ZN9QTextEdit7setHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->setHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 181, column 11>
//   // proto:  QRect QTextEdit::cursorRect(const QTextCursor & cursor);
// _ZNK9QTextEdit10cursorRectERK11QTextCursor cursorRect(const class QTextCursor &)
extern "C"
QRect*
C_ZNK9QTextEdit10cursorRectERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QTextEdit*)qthis)->cursorRect(*((const QTextCursor*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 157, column 10>
//   // proto:  void QTextEdit::setLineWrapColumnOrWidth(int w);
// _ZN9QTextEdit24setLineWrapColumnOrWidthEi setLineWrapColumnOrWidth(int)
extern "C"
void
C_ZN9QTextEdit24setLineWrapColumnOrWidthEi(void *qthis,
int arg1) {
  ((QTextEdit*)qthis)->setLineWrapColumnOrWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 220, column 10>
//   // proto:  void QTextEdit::setFontItalic(bool b);
// _ZN9QTextEdit13setFontItalicEb setFontItalic(_Bool)
extern "C"
void
C_ZN9QTextEdit13setFontItalicEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setFontItalic(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 64, column 5>
//   // proto:  const QMetaObject * QTextEdit::metaObject();
// _ZNK9QTextEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QTextEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 223, column 10>
//   // proto:  void QTextEdit::setCurrentFont(const QFont & f);
// _ZN9QTextEdit14setCurrentFontERK5QFont setCurrentFont(const class QFont &)
extern "C"
void
C_ZN9QTextEdit14setCurrentFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QTextEdit*)qthis)->setCurrentFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 140, column 10>
//   // proto:  bool QTextEdit::tabChangesFocus();
// _ZNK9QTextEdit15tabChangesFocusEv tabChangesFocus()
extern "C"
bool
C_ZNK9QTextEdit15tabChangesFocusEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->tabChangesFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 130, column 19>
//   // proto:  Qt::Alignment QTextEdit::alignment();
// _ZNK9QTextEdit9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK9QTextEdit9alignmentEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 128, column 12>
//   // proto:  QColor QTextEdit::textBackgroundColor();
// _ZNK9QTextEdit19textBackgroundColorEv textBackgroundColor()
extern "C"
QColor*
C_ZNK9QTextEdit19textBackgroundColorEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->textBackgroundColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 104, column 14>
//   // proto:  void QTextEdit::QTextEdit(const QString & text, QWidget * parent);
extern "C"
QTextEdit*
C_ZN9QTextEditC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QTextEdit(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 210, column 10>
//   // proto:  void QTextEdit::print(QPagedPaintDevice * printer);
// _ZNK9QTextEdit5printEP17QPagedPaintDevice print(class QPagedPaintDevice *)
extern "C"
void
C_ZNK9QTextEdit5printEP17QPagedPaintDevice(void *qthis,
QPagedPaintDevice * arg1) {
  ((QTextEdit*)qthis)->print(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 125, column 10>
//   // proto:  bool QTextEdit::fontUnderline();
// _ZNK9QTextEdit13fontUnderlineEv fontUnderline()
extern "C"
bool
C_ZNK9QTextEdit13fontUnderlineEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->fontUnderline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 244, column 10>
//   // proto:  void QTextEdit::insertPlainText(const QString & text);
// _ZN9QTextEdit15insertPlainTextERK7QString insertPlainText(const class QString &)
extern "C"
void
C_ZN9QTextEdit15insertPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextEdit*)qthis)->insertPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 124, column 9>
//   // proto:  int QTextEdit::fontWeight();
// _ZNK9QTextEdit10fontWeightEv fontWeight()
extern "C"
int
C_ZNK9QTextEdit10fontWeightEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->fontWeight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 261, column 10>
//   // proto:  void QTextEdit::copyAvailable(bool b);
// _ZN9QTextEdit13copyAvailableEb copyAvailable(_Bool)
extern "C"
void
C_ZN9QTextEdit13copyAvailableEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->copyAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 127, column 12>
//   // proto:  QColor QTextEdit::textColor();
// _ZNK9QTextEdit9textColorEv textColor()
extern "C"
QColor*
C_ZNK9QTextEdit9textColorEv(void *qthis) {
  auto ret =
  ((QTextEdit*)qthis)->textColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 154, column 10>
//   // proto:  void QTextEdit::setLineWrapMode(QTextEdit::LineWrapMode mode);
// _ZN9QTextEdit15setLineWrapModeENS_12LineWrapModeE setLineWrapMode(enum QTextEdit::LineWrapMode)
extern "C"
void
C_ZN9QTextEdit15setLineWrapModeENS_12LineWrapModeE(void *qthis,
QTextEdit::LineWrapMode arg1) {
  ((QTextEdit*)qthis)->setLineWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 259, column 10>
//   // proto:  void QTextEdit::redoAvailable(bool b);
// _ZN9QTextEdit13redoAvailableEb redoAvailable(_Bool)
extern "C"
void
C_ZN9QTextEdit13redoAvailableEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->redoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 103, column 14>
//   // proto:  void QTextEdit::QTextEdit(QWidget * parent);
extern "C"
QTextEdit*
C_ZN9QTextEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTextEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 117, column 10>
//   // proto:  void QTextEdit::setReadOnly(bool ro);
// _ZN9QTextEdit11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN9QTextEdit11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QTextEdit*)qthis)->setReadOnly(arg1);
}
// <= ext block end

// body block begin =>
// QTextEdit_SlotProxy here
class QTextEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextEdit_SlotProxy():QObject(){}

public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // copyAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13copyAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // cursorPositionChanged()
  void slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv();
public:
  void (*slot_func__ZN9QTextEdit21cursorPositionChangedEv)(void* rsfptr) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN9QTextEdit16selectionChangedEv();
public:
  void (*slot_func__ZN9QTextEdit16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // currentCharFormatChanged(const class QTextCharFormat &)
  void slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0);
public:
  void (*slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat)(void* rsfptr, const QTextCharFormat & arg0) = NULL;
public slots:
  // textChanged()
  void slot_proxy_func__ZN9QTextEdit11textChangedEv();
public:
  void (*slot_func__ZN9QTextEdit11textChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtextedit.moc"

extern "C" {
  QTextEdit_SlotProxy* QTextEdit_SlotProxy_new()
  {
    return new QTextEdit_SlotProxy();
  }
};

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13undoAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13undoAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13undoAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13redoAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13redoAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13redoAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13copyAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13copyAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13copyAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13copyAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13copyAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(copyAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13copyAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv() {
  if (this->slot_func__ZN9QTextEdit21cursorPositionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit21cursorPositionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit21cursorPositionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit21cursorPositionChangedEv = (decltype(that->slot_func__ZN9QTextEdit21cursorPositionChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(cursorPositionChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit21cursorPositionChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit16selectionChangedEv() {
  if (this->slot_func__ZN9QTextEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit16selectionChangedEv = (decltype(that->slot_func__ZN9QTextEdit16selectionChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit16selectionChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0) {
  if (this->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat = (decltype(that->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(currentCharFormatChanged(const class QTextCharFormat &)), that, SLOT(slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit11textChangedEv() {
  if (this->slot_func__ZN9QTextEdit11textChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit11textChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit11textChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit11textChangedEv = (decltype(that->slot_func__ZN9QTextEdit11textChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(textChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit11textChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit11textChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

