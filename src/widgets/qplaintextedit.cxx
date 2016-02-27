// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qplaintextedit.h
// dst-file: /src/widgets/qplaintextedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qplaintextedit.h>


#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>
#include <qtextcursor.h>
#include <qnamespace.h>
#include <qtextformat.h>
#include <qtextoption.h>
#include <qlist.h>
#include <qapplication.h>
// <= header block end

// main block begin =>
void __keep_qplaintextedit_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 144, column 20>
//   // proto:  QString QPlainTextEdit::toPlainText();
if (true) {
  auto f = [](QPlainTextEdit flythis) {
    ((QPlainTextEdit*)0)->toPlainText();
    flythis.toPlainText();
  };
  if (f == nullptr){}
}
// _ZNK14QPlainTextEdit11toPlainTextEv toPlainText()
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 123, column 16>
//   // proto:  int QPlainTextEdit::maximumBlockCount();
if (true) {
  auto f = [](QPlainTextEdit flythis) {
    ((QPlainTextEdit*)0)->maximumBlockCount();
    flythis.maximumBlockCount();
  };
  if (f == nullptr){}
}
// _ZNK14QPlainTextEdit17maximumBlockCountEv maximumBlockCount()
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 121, column 17>
//   // proto:  void QPlainTextEdit::setMaximumBlockCount(int maximum);
if (true) {
  auto f = [](QPlainTextEdit flythis, int arg1) {
    ((QPlainTextEdit*)0)->setMaximumBlockCount(arg1);
    flythis.setMaximumBlockCount(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QPlainTextEdit20setMaximumBlockCountEi setMaximumBlockCount(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 113, column 20>
//   // proto:  QString QPlainTextEdit::documentTitle();
if (true) {
  auto f = [](QPlainTextEdit flythis) {
    ((QPlainTextEdit*)0)->documentTitle();
    flythis.documentTitle();
  };
  if (f == nullptr){}
}
// _ZNK14QPlainTextEdit13documentTitleEv documentTitle()
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 118, column 17>
//   // proto:  void QPlainTextEdit::setUndoRedoEnabled(bool enable);
if (true) {
  auto f = [](QPlainTextEdit flythis, bool arg1) {
    ((QPlainTextEdit*)0)->setUndoRedoEnabled(arg1);
    flythis.setUndoRedoEnabled(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QPlainTextEdit18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 111, column 17>
//   // proto:  void QPlainTextEdit::setDocumentTitle(const QString & title);
if (true) {
  auto f = [](QPlainTextEdit flythis, const QString & arg1) {
    ((QPlainTextEdit*)0)->setDocumentTitle(arg1);
    flythis.setDocumentTitle(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QPlainTextEdit16setDocumentTitleERK7QString setDocumentTitle(const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 116, column 17>
//   // proto:  bool QPlainTextEdit::isUndoRedoEnabled();
if (true) {
  auto f = [](QPlainTextEdit flythis) {
    ((QPlainTextEdit*)0)->isUndoRedoEnabled();
    flythis.isUndoRedoEnabled();
  };
  if (f == nullptr){}
}
// _ZNK14QPlainTextEdit17isUndoRedoEnabledEv isUndoRedoEnabled()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPlainTextDocumentLayout_Class_Size()
{
  return sizeof(QPlainTextDocumentLayout);
}

extern "C"
int QPlainTextEdit_Class_Size()
{
  return sizeof(QPlainTextEdit);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 305, column 10>
//   // proto:  void QPlainTextDocumentLayout::requestUpdate();
// _ZN24QPlainTextDocumentLayout13requestUpdateEv requestUpdate()
extern "C"
void
C_ZN24QPlainTextDocumentLayout13requestUpdateEv(void *qthis) {
  ((QPlainTextDocumentLayout*)qthis)->requestUpdate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 302, column 10>
//   // proto:  void QPlainTextDocumentLayout::setCursorWidth(int width);
// _ZN24QPlainTextDocumentLayout14setCursorWidthEi setCursorWidth(int)
extern "C"
void
C_ZN24QPlainTextDocumentLayout14setCursorWidthEi(void *qthis,
int arg1) {
  ((QPlainTextDocumentLayout*)qthis)->setCursorWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 291, column 10>
//   // proto:  void QPlainTextDocumentLayout::draw(QPainter * , const QAbstractTextDocumentLayout::PaintContext & );
// _ZN24QPlainTextDocumentLayout4drawEP8QPainterRKN27QAbstractTextDocumentLayout12PaintContextE draw(class QPainter *, const struct QAbstractTextDocumentLayout::PaintContext &)
extern "C"
void
C_ZN24QPlainTextDocumentLayout4drawEP8QPainterRKN27QAbstractTextDocumentLayout12PaintContextE(void *qthis,
QPainter * arg1,
const QAbstractTextDocumentLayout::PaintContext* arg2) {
  ((QPlainTextDocumentLayout*)qthis)->draw(arg1,
*((const QAbstractTextDocumentLayout::PaintContext*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 292, column 9>
//   // proto:  int QPlainTextDocumentLayout::hitTest(const QPointF & , Qt::HitTestAccuracy );
// _ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C"
int
C_ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *qthis,
const QPointF* arg1,
Qt::HitTestAccuracy* arg2) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->hitTest(*((const QPointF*)arg1),
*((Qt::HitTestAccuracy*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 297, column 12>
//   // proto:  QRectF QPlainTextDocumentLayout::frameBoundingRect(QTextFrame * );
// _ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame frameBoundingRect(class QTextFrame *)
extern "C"
QRectF*
C_ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *qthis,
QTextFrame * arg1) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->frameBoundingRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 294, column 9>
//   // proto:  int QPlainTextDocumentLayout::pageCount();
// _ZNK24QPlainTextDocumentLayout9pageCountEv pageCount()
extern "C"
int
C_ZNK24QPlainTextDocumentLayout9pageCountEv(void *qthis) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->pageCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 283, column 5>
//   // proto:  const QMetaObject * QPlainTextDocumentLayout::metaObject();
// _ZNK24QPlainTextDocumentLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK24QPlainTextDocumentLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 300, column 10>
//   // proto:  void QPlainTextDocumentLayout::ensureBlockLayout(const QTextBlock & block);
// _ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock ensureBlockLayout(const class QTextBlock &)
extern "C"
void
C_ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  ((QPlainTextDocumentLayout*)qthis)->ensureBlockLayout(*((const QTextBlock*)arg1));
}
//   // proto:  void QPlainTextDocumentLayout::~QPlainTextDocumentLayout();
extern "C"
void C_ZN24QPlainTextDocumentLayoutD2Ev(void *qthis) {
  delete (QPlainTextDocumentLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 298, column 12>
//   // proto:  QRectF QPlainTextDocumentLayout::blockBoundingRect(const QTextBlock & block);
// _ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock blockBoundingRect(const class QTextBlock &)
extern "C"
QRectF*
C_ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->blockBoundingRect(*((const QTextBlock*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 303, column 9>
//   // proto:  int QPlainTextDocumentLayout::cursorWidth();
// _ZNK24QPlainTextDocumentLayout11cursorWidthEv cursorWidth()
extern "C"
int
C_ZNK24QPlainTextDocumentLayout11cursorWidthEv(void *qthis) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->cursorWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 288, column 5>
//   // proto:  void QPlainTextDocumentLayout::QPlainTextDocumentLayout(QTextDocument * document);
extern "C"
QPlainTextDocumentLayout*
C_ZN24QPlainTextDocumentLayoutC2EP13QTextDocument(QTextDocument * arg1) {
  auto ret = new QPlainTextDocumentLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 295, column 12>
//   // proto:  QSizeF QPlainTextDocumentLayout::documentSize();
// _ZNK24QPlainTextDocumentLayout12documentSizeEv documentSize()
extern "C"
QSizeF*
C_ZNK24QPlainTextDocumentLayout12documentSizeEv(void *qthis) {
  auto ret =
  ((QPlainTextDocumentLayout*)qthis)->documentSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 152, column 12>
//   // proto:  QMenu * QPlainTextEdit::createStandardContextMenu(const QPoint & position);
// _ZN14QPlainTextEdit25createStandardContextMenuERK6QPoint createStandardContextMenu(const class QPoint &)
extern "C"
void*
C_ZN14QPlainTextEdit25createStandardContextMenuERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QPlainTextEdit*)qthis)->createStandardContextMenu(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 147, column 10>
//   // proto:  void QPlainTextEdit::ensureCursorVisible();
// _ZN14QPlainTextEdit19ensureCursorVisibleEv ensureCursorVisible()
extern "C"
void
C_ZN14QPlainTextEdit19ensureCursorVisibleEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->ensureCursorVisible();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 90, column 20>
//   // proto:  QTextDocument * QPlainTextEdit::document();
// _ZNK14QPlainTextEdit8documentEv document()
extern "C"
void*
C_ZNK14QPlainTextEdit8documentEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 157, column 11>
//   // proto:  QRect QPlainTextEdit::cursorRect();
// _ZNK14QPlainTextEdit10cursorRectEv cursorRect()
extern "C"
QRect*
C_ZNK14QPlainTextEdit10cursorRectEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->cursorRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 109, column 10>
//   // proto:  void QPlainTextEdit::setTabChangesFocus(bool b);
// _ZN14QPlainTextEdit18setTabChangesFocusEb setTabChangesFocus(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit18setTabChangesFocusEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setTabChangesFocus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 144, column 20>
//   // proto:  QString QPlainTextEdit::toPlainText();
// _ZNK14QPlainTextEdit11toPlainTextEv toPlainText()
extern "C"
QString*
C_ZNK14QPlainTextEdit11toPlainTextEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->toPlainText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 131, column 10>
//   // proto:  void QPlainTextEdit::setWordWrapMode(QTextOption::WrapMode policy);
// _ZN14QPlainTextEdit15setWordWrapModeEN11QTextOption8WrapModeE setWordWrapMode(class QTextOption::WrapMode)
extern "C"
void
C_ZN14QPlainTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *qthis,
QTextOption::WrapMode* arg1) {
  ((QPlainTextEdit*)qthis)->setWordWrapMode(*((QTextOption::WrapMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 149, column 22>
//   // proto:  QVariant QPlainTextEdit::loadResource(int type, const QUrl & name);
// _ZN14QPlainTextEdit12loadResourceEiRK4QUrl loadResource(int, const class QUrl &)
extern "C"
QVariant*
C_ZN14QPlainTextEdit12loadResourceEiRK4QUrl(void *qthis,
int arg1,
const QUrl* arg2) {
  auto ret =
  ((QPlainTextEdit*)qthis)->loadResource(arg1,
*((const QUrl*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 101, column 10>
//   // proto:  void QPlainTextEdit::setTextInteractionFlags(Qt::TextInteractionFlags flags);
// _ZN14QPlainTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void
C_ZN14QPlainTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *qthis,
Qt::TextInteractionFlags* arg1) {
  ((QPlainTextEdit*)qthis)->setTextInteractionFlags(*((Qt::TextInteractionFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 164, column 9>
//   // proto:  int QPlainTextEdit::tabStopWidth();
// _ZNK14QPlainTextEdit12tabStopWidthEv tabStopWidth()
extern "C"
int
C_ZNK14QPlainTextEdit12tabStopWidthEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->tabStopWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 98, column 10>
//   // proto:  bool QPlainTextEdit::isReadOnly();
// _ZNK14QPlainTextEdit10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK14QPlainTextEdit10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 99, column 10>
//   // proto:  void QPlainTextEdit::setReadOnly(bool ro);
// _ZN14QPlainTextEdit11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 96, column 17>
//   // proto:  QTextCursor QPlainTextEdit::textCursor();
// _ZNK14QPlainTextEdit10textCursorEv textCursor()
extern "C"
QTextCursor*
C_ZNK14QPlainTextEdit10textCursorEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->textCursor();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 136, column 10>
//   // proto:  void QPlainTextEdit::setCenterOnScroll(bool enabled);
// _ZN14QPlainTextEdit17setCenterOnScrollEb setCenterOnScroll(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit17setCenterOnScrollEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setCenterOnScroll(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 93, column 13>
//   // proto:  QString QPlainTextEdit::placeholderText();
// _ZNK14QPlainTextEdit15placeholderTextEv placeholderText()
extern "C"
QString*
C_ZNK14QPlainTextEdit15placeholderTextEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->placeholderText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 179, column 9>
//   // proto:  int QPlainTextEdit::blockCount();
// _ZNK14QPlainTextEdit10blockCountEv blockCount()
extern "C"
int
C_ZNK14QPlainTextEdit10blockCountEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->blockCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 105, column 10>
//   // proto:  void QPlainTextEdit::setCurrentCharFormat(const QTextCharFormat & format);
// _ZN14QPlainTextEdit20setCurrentCharFormatERK15QTextCharFormat setCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN14QPlainTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QPlainTextEdit*)qthis)->setCurrentCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 212, column 10>
//   // proto:  void QPlainTextEdit::redoAvailable(bool b);
// _ZN14QPlainTextEdit13redoAvailableEb redoAvailable(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit13redoAvailableEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->redoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 89, column 10>
//   // proto:  void QPlainTextEdit::setDocument(QTextDocument * document);
// _ZN14QPlainTextEdit11setDocumentEP13QTextDocument setDocument(class QTextDocument *)
extern "C"
void
C_ZN14QPlainTextEdit11setDocumentEP13QTextDocument(void *qthis,
QTextDocument * arg1) {
  ((QPlainTextEdit*)qthis)->setDocument(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 177, column 10>
//   // proto:  void QPlainTextEdit::print(QPagedPaintDevice * printer);
// _ZNK14QPlainTextEdit5printEP17QPagedPaintDevice print(class QPagedPaintDevice *)
extern "C"
void
C_ZNK14QPlainTextEdit5printEP17QPagedPaintDevice(void *qthis,
QPagedPaintDevice * arg1) {
  ((QPlainTextEdit*)qthis)->print(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 165, column 10>
//   // proto:  void QPlainTextEdit::setTabStopWidth(int width);
// _ZN14QPlainTextEdit15setTabStopWidthEi setTabStopWidth(int)
extern "C"
void
C_ZN14QPlainTextEdit15setTabStopWidthEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->setTabStopWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 180, column 14>
//   // proto:  QVariant QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery property);
// _ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QPlainTextEdit*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 134, column 10>
//   // proto:  bool QPlainTextEdit::backgroundVisible();
// _ZNK14QPlainTextEdit17backgroundVisibleEv backgroundVisible()
extern "C"
bool
C_ZNK14QPlainTextEdit17backgroundVisibleEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->backgroundVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 194, column 10>
//   // proto:  void QPlainTextEdit::redo();
// _ZN14QPlainTextEdit4redoEv redo()
extern "C"
void
C_ZN14QPlainTextEdit4redoEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 139, column 10>
//   // proto:  bool QPlainTextEdit::find(const QString & exp, QTextDocument::FindFlags options);
// _ZN14QPlainTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE find(const class QString &, class QTextDocument::FindFlags)
extern "C"
bool
C_ZN14QPlainTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *qthis,
const QString* arg1,
QTextDocument::FindFlags* arg2) {
  auto ret =
  ((QPlainTextEdit*)qthis)->find(*((const QString*)arg1),
*((QTextDocument::FindFlags*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 86, column 14>
//   // proto:  void QPlainTextEdit::QPlainTextEdit(const QString & text, QWidget * parent);
extern "C"
QPlainTextEdit*
C_ZN14QPlainTextEditC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QPlainTextEdit(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 162, column 10>
//   // proto:  void QPlainTextEdit::setOverwriteMode(bool overwrite);
// _ZN14QPlainTextEdit16setOverwriteModeEb setOverwriteMode(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit16setOverwriteModeEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setOverwriteMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 211, column 10>
//   // proto:  void QPlainTextEdit::undoAvailable(bool b);
// _ZN14QPlainTextEdit13undoAvailableEb undoAvailable(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit13undoAvailableEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->undoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 108, column 10>
//   // proto:  bool QPlainTextEdit::tabChangesFocus();
// _ZNK14QPlainTextEdit15tabChangesFocusEv tabChangesFocus()
extern "C"
bool
C_ZNK14QPlainTextEdit15tabChangesFocusEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->tabChangesFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 189, column 10>
//   // proto:  void QPlainTextEdit::copy();
// _ZN14QPlainTextEdit4copyEv copy()
extern "C"
void
C_ZN14QPlainTextEdit4copyEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->copy();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 102, column 30>
//   // proto:  Qt::TextInteractionFlags QPlainTextEdit::textInteractionFlags();
// _ZNK14QPlainTextEdit20textInteractionFlagsEv textInteractionFlags()
extern "C"
QFlags<Qt::TextInteractionFlag>*
C_ZNK14QPlainTextEdit20textInteractionFlagsEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->textInteractionFlags();
  return new QFlags<Qt::TextInteractionFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 104, column 10>
//   // proto:  void QPlainTextEdit::mergeCurrentCharFormat(const QTextCharFormat & modifier);
// _ZN14QPlainTextEdit22mergeCurrentCharFormatERK15QTextCharFormat mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN14QPlainTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QPlainTextEdit*)qthis)->mergeCurrentCharFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 141, column 10>
//   // proto:  bool QPlainTextEdit::find(const QRegExp & exp, QTextDocument::FindFlags options);
// _ZN14QPlainTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE find(const class QRegExp &, class QTextDocument::FindFlags)
extern "C"
bool
C_ZN14QPlainTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *qthis,
const QRegExp* arg1,
QTextDocument::FindFlags* arg2) {
  auto ret =
  ((QPlainTextEdit*)qthis)->find(*((const QRegExp*)arg1),
*((QTextDocument::FindFlags*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 123, column 16>
//   // proto:  int QPlainTextEdit::maximumBlockCount();
// _ZNK14QPlainTextEdit17maximumBlockCountEv maximumBlockCount()
extern "C"
int
C_ZNK14QPlainTextEdit17maximumBlockCountEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->maximumBlockCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 199, column 10>
//   // proto:  void QPlainTextEdit::insertPlainText(const QString & text);
// _ZN14QPlainTextEdit15insertPlainTextERK7QString insertPlainText(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit15insertPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->insertPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 95, column 10>
//   // proto:  void QPlainTextEdit::setTextCursor(const QTextCursor & cursor);
// _ZN14QPlainTextEdit13setTextCursorERK11QTextCursor setTextCursor(const class QTextCursor &)
extern "C"
void
C_ZN14QPlainTextEdit13setTextCursorERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  ((QPlainTextEdit*)qthis)->setTextCursor(*((const QTextCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 190, column 10>
//   // proto:  void QPlainTextEdit::paste();
// _ZN14QPlainTextEdit5pasteEv paste()
extern "C"
void
C_ZN14QPlainTextEdit5pasteEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->paste();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 206, column 10>
//   // proto:  void QPlainTextEdit::zoomIn(int range);
// _ZN14QPlainTextEdit6zoomInEi zoomIn(int)
extern "C"
void
C_ZN14QPlainTextEdit6zoomInEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->zoomIn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 121, column 17>
//   // proto:  void QPlainTextEdit::setMaximumBlockCount(int maximum);
// _ZN14QPlainTextEdit20setMaximumBlockCountEi setMaximumBlockCount(int)
extern "C"
void
C_ZN14QPlainTextEdit20setMaximumBlockCountEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->setMaximumBlockCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 106, column 21>
//   // proto:  QTextCharFormat QPlainTextEdit::currentCharFormat();
// _ZNK14QPlainTextEdit17currentCharFormatEv currentCharFormat()
extern "C"
QTextCharFormat*
C_ZNK14QPlainTextEdit17currentCharFormatEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->currentCharFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 214, column 10>
//   // proto:  void QPlainTextEdit::selectionChanged();
// _ZN14QPlainTextEdit16selectionChangedEv selectionChanged()
extern "C"
void
C_ZN14QPlainTextEdit16selectionChangedEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->selectionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 168, column 10>
//   // proto:  void QPlainTextEdit::setCursorWidth(int width);
// _ZN14QPlainTextEdit14setCursorWidthEi setCursorWidth(int)
extern "C"
void
C_ZN14QPlainTextEdit14setCursorWidthEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->setCursorWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 113, column 20>
//   // proto:  QString QPlainTextEdit::documentTitle();
// _ZNK14QPlainTextEdit13documentTitleEv documentTitle()
extern "C"
QString*
C_ZNK14QPlainTextEdit13documentTitleEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->documentTitle();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 197, column 10>
//   // proto:  void QPlainTextEdit::selectAll();
// _ZN14QPlainTextEdit9selectAllEv selectAll()
extern "C"
void
C_ZN14QPlainTextEdit9selectAllEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 215, column 10>
//   // proto:  void QPlainTextEdit::cursorPositionChanged();
// _ZN14QPlainTextEdit21cursorPositionChangedEv cursorPositionChanged()
extern "C"
void
C_ZN14QPlainTextEdit21cursorPositionChangedEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->cursorPositionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 185, column 10>
//   // proto:  void QPlainTextEdit::setPlainText(const QString & text);
// _ZN14QPlainTextEdit12setPlainTextERK7QString setPlainText(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit12setPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->setPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 128, column 10>
//   // proto:  void QPlainTextEdit::setLineWrapMode(QPlainTextEdit::LineWrapMode mode);
// _ZN14QPlainTextEdit15setLineWrapModeENS_12LineWrapModeE setLineWrapMode(enum QPlainTextEdit::LineWrapMode)
extern "C"
void
C_ZN14QPlainTextEdit15setLineWrapModeENS_12LineWrapModeE(void *qthis,
QPlainTextEdit::LineWrapMode arg1) {
  ((QPlainTextEdit*)qthis)->setLineWrapMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 133, column 10>
//   // proto:  void QPlainTextEdit::setBackgroundVisible(bool visible);
// _ZN14QPlainTextEdit20setBackgroundVisibleEb setBackgroundVisible(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit20setBackgroundVisibleEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setBackgroundVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 130, column 27>
//   // proto:  QTextOption::WrapMode QPlainTextEdit::wordWrapMode();
// _ZNK14QPlainTextEdit12wordWrapModeEv wordWrapMode()
extern "C"
QTextOption::WrapMode
C_ZNK14QPlainTextEdit12wordWrapModeEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->wordWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 218, column 10>
//   // proto:  void QPlainTextEdit::blockCountChanged(int newBlockCount);
// _ZN14QPlainTextEdit17blockCountChangedEi blockCountChanged(int)
extern "C"
void
C_ZN14QPlainTextEdit17blockCountChangedEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->blockCountChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 118, column 17>
//   // proto:  void QPlainTextEdit::setUndoRedoEnabled(bool enable);
// _ZN14QPlainTextEdit18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->setUndoRedoEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 171, column 38>
//   // proto:  QList<QTextEdit::ExtraSelection> QPlainTextEdit::extraSelections();
// _ZNK14QPlainTextEdit15extraSelectionsEv extraSelections()
extern "C"
QList<QTextEdit::ExtraSelection>*
C_ZNK14QPlainTextEdit15extraSelectionsEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->extraSelections();
  return new QList<QTextEdit::ExtraSelection>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 161, column 10>
//   // proto:  bool QPlainTextEdit::overwriteMode();
// _ZNK14QPlainTextEdit13overwriteModeEv overwriteMode()
extern "C"
bool
C_ZNK14QPlainTextEdit13overwriteModeEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->overwriteMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 204, column 10>
//   // proto:  void QPlainTextEdit::centerCursor();
// _ZN14QPlainTextEdit12centerCursorEv centerCursor()
extern "C"
void
C_ZN14QPlainTextEdit12centerCursorEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->centerCursor();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 60, column 5>
//   // proto:  const QMetaObject * QPlainTextEdit::metaObject();
// _ZNK14QPlainTextEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QPlainTextEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 210, column 10>
//   // proto:  void QPlainTextEdit::textChanged();
// _ZN14QPlainTextEdit11textChangedEv textChanged()
extern "C"
void
C_ZN14QPlainTextEdit11textChangedEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->textChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 151, column 12>
//   // proto:  QMenu * QPlainTextEdit::createStandardContextMenu();
// _ZN14QPlainTextEdit25createStandardContextMenuEv createStandardContextMenu()
extern "C"
void*
C_ZN14QPlainTextEdit25createStandardContextMenuEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->createStandardContextMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 111, column 17>
//   // proto:  void QPlainTextEdit::setDocumentTitle(const QString & title);
// _ZN14QPlainTextEdit16setDocumentTitleERK7QString setDocumentTitle(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->setDocumentTitle(*((const QString*)arg1));
}
//   // proto:  void QPlainTextEdit::~QPlainTextEdit();
extern "C"
void C_ZN14QPlainTextEditD2Ev(void *qthis) {
  delete (QPlainTextEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 196, column 10>
//   // proto:  void QPlainTextEdit::clear();
// _ZN14QPlainTextEdit5clearEv clear()
extern "C"
void
C_ZN14QPlainTextEdit5clearEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 181, column 26>
//   // proto:  QVariant QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery query, QVariant argument);
// _ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
QVariant*
C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *qthis,
Qt::InputMethodQuery* arg1,
QVariant* arg2) {
  auto ret =
  ((QPlainTextEdit*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1),
*((QVariant*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 217, column 10>
//   // proto:  void QPlainTextEdit::updateRequest(const QRect & rect, int dy);
// _ZN14QPlainTextEdit13updateRequestERK5QRecti updateRequest(const class QRect &, int)
extern "C"
void
C_ZN14QPlainTextEdit13updateRequestERK5QRecti(void *qthis,
const QRect* arg1,
int arg2) {
  ((QPlainTextEdit*)qthis)->updateRequest(*((const QRect*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 159, column 13>
//   // proto:  QString QPlainTextEdit::anchorAt(const QPoint & pos);
// _ZNK14QPlainTextEdit8anchorAtERK6QPoint anchorAt(const class QPoint &)
extern "C"
QString*
C_ZNK14QPlainTextEdit8anchorAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QPlainTextEdit*)qthis)->anchorAt(*((const QPoint*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 175, column 10>
//   // proto:  bool QPlainTextEdit::canPaste();
// _ZNK14QPlainTextEdit8canPasteEv canPaste()
extern "C"
bool
C_ZNK14QPlainTextEdit8canPasteEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->canPaste();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 85, column 14>
//   // proto:  void QPlainTextEdit::QPlainTextEdit(QWidget * parent);
extern "C"
QPlainTextEdit*
C_ZN14QPlainTextEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QPlainTextEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 188, column 10>
//   // proto:  void QPlainTextEdit::cut();
// _ZN14QPlainTextEdit3cutEv cut()
extern "C"
void
C_ZN14QPlainTextEdit3cutEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->cut();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 127, column 18>
//   // proto:  QPlainTextEdit::LineWrapMode QPlainTextEdit::lineWrapMode();
// _ZNK14QPlainTextEdit12lineWrapModeEv lineWrapMode()
extern "C"
QPlainTextEdit::LineWrapMode
C_ZNK14QPlainTextEdit12lineWrapModeEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->lineWrapMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 202, column 10>
//   // proto:  void QPlainTextEdit::appendHtml(const QString & html);
// _ZN14QPlainTextEdit10appendHtmlERK7QString appendHtml(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit10appendHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->appendHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 116, column 17>
//   // proto:  bool QPlainTextEdit::isUndoRedoEnabled();
// _ZNK14QPlainTextEdit17isUndoRedoEnabledEv isUndoRedoEnabled()
extern "C"
bool
C_ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->isUndoRedoEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 207, column 10>
//   // proto:  void QPlainTextEdit::zoomOut(int range);
// _ZN14QPlainTextEdit7zoomOutEi zoomOut(int)
extern "C"
void
C_ZN14QPlainTextEdit7zoomOutEi(void *qthis,
int arg1) {
  ((QPlainTextEdit*)qthis)->zoomOut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 92, column 10>
//   // proto:  void QPlainTextEdit::setPlaceholderText(const QString & placeholderText);
// _ZN14QPlainTextEdit18setPlaceholderTextERK7QString setPlaceholderText(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit18setPlaceholderTextERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->setPlaceholderText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 193, column 10>
//   // proto:  void QPlainTextEdit::undo();
// _ZN14QPlainTextEdit4undoEv undo()
extern "C"
void
C_ZN14QPlainTextEdit4undoEv(void *qthis) {
  ((QPlainTextEdit*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 219, column 10>
//   // proto:  void QPlainTextEdit::modificationChanged(bool );
// _ZN14QPlainTextEdit19modificationChangedEb modificationChanged(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit19modificationChangedEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->modificationChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 155, column 17>
//   // proto:  QTextCursor QPlainTextEdit::cursorForPosition(const QPoint & pos);
// _ZNK14QPlainTextEdit17cursorForPositionERK6QPoint cursorForPosition(const class QPoint &)
extern "C"
QTextCursor*
C_ZNK14QPlainTextEdit17cursorForPositionERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QPlainTextEdit*)qthis)->cursorForPosition(*((const QPoint*)arg1));
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 137, column 10>
//   // proto:  bool QPlainTextEdit::centerOnScroll();
// _ZNK14QPlainTextEdit14centerOnScrollEv centerOnScroll()
extern "C"
bool
C_ZNK14QPlainTextEdit14centerOnScrollEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->centerOnScroll();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 201, column 10>
//   // proto:  void QPlainTextEdit::appendPlainText(const QString & text);
// _ZN14QPlainTextEdit15appendPlainTextERK7QString appendPlainText(const class QString &)
extern "C"
void
C_ZN14QPlainTextEdit15appendPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QPlainTextEdit*)qthis)->appendPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 173, column 10>
//   // proto:  void QPlainTextEdit::moveCursor(QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode);
// _ZN14QPlainTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
extern "C"
void
C_ZN14QPlainTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *qthis,
QTextCursor::MoveOperation* arg1,
QTextCursor::MoveMode* arg2) {
  ((QPlainTextEdit*)qthis)->moveCursor(*((QTextCursor::MoveOperation*)arg1),
*((QTextCursor::MoveMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 170, column 10>
//   // proto:  void QPlainTextEdit::setExtraSelections(const QList<QTextEdit::ExtraSelection> & selections);
// _ZN14QPlainTextEdit18setExtraSelectionsERK5QListIN9QTextEdit14ExtraSelectionEE setExtraSelections(const QList<class QTextEdit::ExtraSelection> &)
extern "C"
void
C_ZN14QPlainTextEdit18setExtraSelectionsERK5QListIN9QTextEdit14ExtraSelectionEE(void *qthis,
const QList<QTextEdit::ExtraSelection>* arg1) {
  ((QPlainTextEdit*)qthis)->setExtraSelections(*((const QList<QTextEdit::ExtraSelection>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 167, column 9>
//   // proto:  int QPlainTextEdit::cursorWidth();
// _ZNK14QPlainTextEdit11cursorWidthEv cursorWidth()
extern "C"
int
C_ZNK14QPlainTextEdit11cursorWidthEv(void *qthis) {
  auto ret =
  ((QPlainTextEdit*)qthis)->cursorWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 156, column 11>
//   // proto:  QRect QPlainTextEdit::cursorRect(const QTextCursor & cursor);
// _ZNK14QPlainTextEdit10cursorRectERK11QTextCursor cursorRect(const class QTextCursor &)
extern "C"
QRect*
C_ZNK14QPlainTextEdit10cursorRectERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QPlainTextEdit*)qthis)->cursorRect(*((const QTextCursor*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qplaintextedit.h', line 213, column 10>
//   // proto:  void QPlainTextEdit::copyAvailable(bool b);
// _ZN14QPlainTextEdit13copyAvailableEb copyAvailable(_Bool)
extern "C"
void
C_ZN14QPlainTextEdit13copyAvailableEb(void *qthis,
bool arg1) {
  ((QPlainTextEdit*)qthis)->copyAvailable(arg1);
}
// <= ext block end

// body block begin =>
// QPlainTextDocumentLayout_SlotProxy here
class QPlainTextDocumentLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPlainTextDocumentLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QPlainTextDocumentLayout_SlotProxy* QPlainTextDocumentLayout_SlotProxy_new()
  {
    return new QPlainTextDocumentLayout_SlotProxy();
  }
};

// QPlainTextEdit_SlotProxy here
class QPlainTextEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPlainTextEdit_SlotProxy():QObject(){}

public slots:
  // blockCountChanged(int)
  void slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit17blockCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // modificationChanged(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit19modificationChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // updateRequest(const class QRect &, int)
  void slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1);
public:
  void (*slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti)(void* rsfptr, const QRect & arg0, int arg1) = NULL;
public slots:
  // textChanged()
  void slot_proxy_func__ZN14QPlainTextEdit11textChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit11textChangedEv)(void* rsfptr) = NULL;
public slots:
  // cursorPositionChanged()
  void slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv)(void* rsfptr) = NULL;
public slots:
  // copyAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13copyAvailableEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qplaintextedit.moc"

extern "C" {
  QPlainTextEdit_SlotProxy* QPlainTextEdit_SlotProxy_new()
  {
    return new QPlainTextEdit_SlotProxy();
  }
};

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0) {
  if (this->slot_func__ZN14QPlainTextEdit17blockCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit17blockCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit17blockCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit17blockCountChangedEi = (decltype(that->slot_func__ZN14QPlainTextEdit17blockCountChangedEi))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(blockCountChanged(int)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit17blockCountChangedEi(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13undoAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13undoAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13undoAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit16selectionChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit16selectionChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit16selectionChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13redoAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13redoAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13redoAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit19modificationChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit19modificationChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit19modificationChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit19modificationChangedEb = (decltype(that->slot_func__ZN14QPlainTextEdit19modificationChangedEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(modificationChanged(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit19modificationChangedEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1) {
  if (this->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13updateRequestERK5QRecti(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti = (decltype(that->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(updateRequest(const class QRect &, int)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13updateRequestERK5QRecti(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit11textChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit11textChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit11textChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit11textChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit11textChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit11textChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(textChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit11textChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit11textChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit21cursorPositionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(cursorPositionChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit21cursorPositionChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13copyAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13copyAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13copyAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13copyAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13copyAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(copyAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13copyAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

