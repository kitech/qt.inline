// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qtextdocument.h
// dst-file: /src/gui/qtextdocument.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextdocument.h>


#include <qstring.h>
#include <qsize.h>
#include <qtextobject.h>
#include <qglobal.h>
#include <qvector.h>
#include <qtextcursor.h>
#include <qurl.h>
#include <qfont.h>
#include <qtextoption.h>
#include <qnamespace.h>
#include <qchar.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qtextdocument_inline_symbols() {
//   // proto:  void QAbstractUndoItem::~QAbstractUndoItem();
if (true) {
  delete ((QAbstractUndoItem*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextDocument_Class_Size()
{
  return sizeof(QTextDocument);
}

extern "C"
int QAbstractUndoItem_Class_Size()
{
  return sizeof(QAbstractUndoItem);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 146, column 13>
//   // proto:  QString QTextDocument::metaInformation(QTextDocument::MetaInformation info);
// _ZNK13QTextDocument15metaInformationENS_15MetaInformationE metaInformation(enum QTextDocument::MetaInformation)
extern "C"
QString*
C_ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void *qthis,
QTextDocument::MetaInformation arg1) {
  auto ret =
  ((QTextDocument*)qthis)->metaInformation(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 278, column 10>
//   // proto:  void QTextDocument::cursorPositionChanged(const QTextCursor & cursor);
// _ZN13QTextDocument21cursorPositionChangedERK11QTextCursor cursorPositionChanged(const class QTextCursor &)
extern "C"
void
C_ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  ((QTextDocument*)qthis)->cursorPositionChanged(*((const QTextCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 245, column 10>
//   // proto:  void QTextDocument::setDefaultStyleSheet(const QString & sheet);
// _ZN13QTextDocument20setDefaultStyleSheetERK7QString setDefaultStyleSheet(const class QString &)
extern "C"
void
C_ZN13QTextDocument20setDefaultStyleSheetERK7QString(void *qthis,
const QString* arg1) {
  ((QTextDocument*)qthis)->setDefaultStyleSheet(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 139, column 34>
//   // proto:  QAbstractTextDocumentLayout * QTextDocument::documentLayout();
// _ZNK13QTextDocument14documentLayoutEv documentLayout()
extern "C"
void*
C_ZNK13QTextDocument14documentLayoutEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->documentLayout();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 202, column 10>
//   // proto:  bool QTextDocument::isModified();
// _ZNK13QTextDocument10isModifiedEv isModified()
extern "C"
bool
C_ZNK13QTextDocument10isModifiedEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->isModified();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 136, column 9>
//   // proto:  int QTextDocument::revision();
// _ZNK13QTextDocument8revisionEv revision()
extern "C"
int
C_ZNK13QTextDocument8revisionEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->revision();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 195, column 12>
//   // proto:  QSizeF QTextDocument::pageSize();
// _ZNK13QTextDocument8pageSizeEv pageSize()
extern "C"
QSizeF*
C_ZNK13QTextDocument8pageSizeEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->pageSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 250, column 10>
//   // proto:  void QTextDocument::redo(QTextCursor * cursor);
// _ZN13QTextDocument4redoEP11QTextCursor redo(class QTextCursor *)
extern "C"
void
C_ZN13QTextDocument4redoEP11QTextCursor(void *qthis,
QTextCursor * arg1) {
  ((QTextDocument*)qthis)->redo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 241, column 9>
//   // proto:  int QTextDocument::lineCount();
// _ZNK13QTextDocument9lineCountEv lineCount()
extern "C"
int
C_ZNK13QTextDocument9lineCountEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->lineCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 204, column 10>
//   // proto:  void QTextDocument::print(QPagedPaintDevice * printer);
// _ZNK13QTextDocument5printEP17QPagedPaintDevice print(class QPagedPaintDevice *)
extern "C"
void
C_ZNK13QTextDocument5printEP17QPagedPaintDevice(void *qthis,
QPagedPaintDevice * arg1) {
  ((QTextDocument*)qthis)->print(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 295, column 27>
//   // proto:  QTextDocumentPrivate * QTextDocument::docHandle();
// _ZNK13QTextDocument9docHandleEv docHandle()
extern "C"
void*
C_ZNK13QTextDocument9docHandleEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->docHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 149, column 13>
//   // proto:  QString QTextDocument::toHtml(const QByteArray & encoding);
// _ZNK13QTextDocument6toHtmlERK10QByteArray toHtml(const class QByteArray &)
extern "C"
QString*
C_ZNK13QTextDocument6toHtmlERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QTextDocument*)qthis)->toHtml(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 133, column 9>
//   // proto:  int QTextDocument::availableUndoSteps();
// _ZNK13QTextDocument18availableUndoStepsEv availableUndoSteps()
extern "C"
int
C_ZNK13QTextDocument18availableUndoStepsEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->availableUndoSteps();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 274, column 10>
//   // proto:  void QTextDocument::undoAvailable(bool );
// _ZN13QTextDocument13undoAvailableEb undoAvailable(_Bool)
extern "C"
void
C_ZN13QTextDocument13undoAvailableEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->undoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 127, column 10>
//   // proto:  void QTextDocument::setUndoRedoEnabled(bool enable);
// _ZN13QTextDocument18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
extern "C"
void
C_ZN13QTextDocument18setUndoRedoEnabledEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->setUndoRedoEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 249, column 10>
//   // proto:  void QTextDocument::undo(QTextCursor * cursor);
// _ZN13QTextDocument4undoEP11QTextCursor undo(class QTextCursor *)
extern "C"
void
C_ZN13QTextDocument4undoEP11QTextCursor(void *qthis,
QTextCursor * arg1) {
  ((QTextDocument*)qthis)->undo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 153, column 13>
//   // proto:  QString QTextDocument::toPlainText();
// _ZNK13QTextDocument11toPlainTextEv toPlainText()
extern "C"
QString*
C_ZNK13QTextDocument11toPlainTextEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->toPlainText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 215, column 10>
//   // proto:  void QTextDocument::addResource(int type, const QUrl & name, const QVariant & resource);
// _ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant addResource(int, const class QUrl &, const class QVariant &)
extern "C"
void
C_ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void *qthis,
int arg1,
const QUrl* arg2,
const QVariant* arg3) {
  ((QTextDocument*)qthis)->addResource(arg1,
*((const QUrl*)arg2),
*((const QVariant*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 257, column 10>
//   // proto:  void QTextDocument::clearUndoRedoStacks(QTextDocument::Stacks historyToClear);
// _ZN13QTextDocument19clearUndoRedoStacksENS_6StacksE clearUndoRedoStacks(enum QTextDocument::Stacks)
extern "C"
void
C_ZN13QTextDocument19clearUndoRedoStacksENS_6StacksE(void *qthis,
QTextDocument::Stacks arg1) {
  ((QTextDocument*)qthis)->clearUndoRedoStacks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 238, column 12>
//   // proto:  QSizeF QTextDocument::size();
// _ZNK13QTextDocument4sizeEv size()
extern "C"
QSizeF*
C_ZNK13QTextDocument4sizeEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->size();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 182, column 18>
//   // proto:  QTextObject * QTextDocument::object(int objectIndex);
// _ZNK13QTextDocument6objectEi object(int)
extern "C"
void*
C_ZNK13QTextDocument6objectEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->object(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 122, column 20>
//   // proto:  QTextDocument * QTextDocument::clone(QObject * parent);
// _ZNK13QTextDocument5cloneEP7QObject clone(class QObject *)
extern "C"
void*
C_ZNK13QTextDocument5cloneEP7QObject(void *qthis,
QObject * arg1) {
  auto ret =
  ((QTextDocument*)qthis)->clone(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 219, column 10>
//   // proto:  void QTextDocument::markContentsDirty(int from, int length);
// _ZN13QTextDocument17markContentsDirtyEii markContentsDirty(int, int)
extern "C"
void
C_ZN13QTextDocument17markContentsDirtyEii(void *qthis,
int arg1,
int arg2) {
  ((QTextDocument*)qthis)->markContentsDirty(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 118, column 14>
//   // proto:  void QTextDocument::QTextDocument(QObject * parent);
extern "C"
QTextDocument*
C_ZN13QTextDocumentC2EP7QObject(QObject * arg1) {
  auto ret = new QTextDocument(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 277, column 10>
//   // proto:  void QTextDocument::modificationChanged(bool m);
// _ZN13QTextDocument19modificationChangedEb modificationChanged(_Bool)
extern "C"
void
C_ZN13QTextDocument19modificationChangedEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->modificationChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 242, column 9>
//   // proto:  int QTextDocument::characterCount();
// _ZNK13QTextDocument14characterCountEv characterCount()
extern "C"
int
C_ZNK13QTextDocument14characterCountEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->characterCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 180, column 17>
//   // proto:  QTextFrame * QTextDocument::rootFrame();
// _ZNK13QTextDocument9rootFrameEv rootFrame()
extern "C"
void*
C_ZNK13QTextDocument9rootFrameEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->rootFrame();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 191, column 16>
//   // proto:  QTextBlock QTextDocument::firstBlock();
// _ZNK13QTextDocument10firstBlockEv firstBlock()
extern "C"
QTextBlock*
C_ZNK13QTextDocument10firstBlockEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->firstBlock();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 240, column 9>
//   // proto:  int QTextDocument::blockCount();
// _ZNK13QTextDocument10blockCountEv blockCount()
extern "C"
int
C_ZNK13QTextDocument10blockCountEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->blockCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 229, column 11>
//   // proto:  qreal QTextDocument::idealWidth();
// _ZNK13QTextDocument10idealWidthEv idealWidth()
extern "C"
double
C_ZNK13QTextDocument10idealWidthEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->idealWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 237, column 10>
//   // proto:  void QTextDocument::adjustSize();
// _ZN13QTextDocument10adjustSizeEv adjustSize()
extern "C"
void
C_ZN13QTextDocument10adjustSizeEv(void *qthis) {
  ((QTextDocument*)qthis)->adjustSize();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 131, column 10>
//   // proto:  bool QTextDocument::isRedoAvailable();
// _ZNK13QTextDocument15isRedoAvailableEv isRedoAvailable()
extern "C"
bool
C_ZNK13QTextDocument15isRedoAvailableEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->isRedoAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 217, column 26>
//   // proto:  QVector<QTextFormat> QTextDocument::allFormats();
// _ZNK13QTextDocument10allFormatsEv allFormats()
extern "C"
QVector<QTextFormat>*
C_ZNK13QTextDocument10allFormatsEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->allFormats();
  return new QVector<QTextFormat>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 279, column 10>
//   // proto:  void QTextDocument::blockCountChanged(int newBlockCount);
// _ZN13QTextDocument17blockCountChangedEi blockCountChanged(int)
extern "C"
void
C_ZN13QTextDocument17blockCountChangedEi(void *qthis,
int arg1) {
  ((QTextDocument*)qthis)->blockCountChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 246, column 13>
//   // proto:  QString QTextDocument::defaultStyleSheet();
// _ZNK13QTextDocument17defaultStyleSheetEv defaultStyleSheet()
extern "C"
QString*
C_ZNK13QTextDocument17defaultStyleSheetEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->defaultStyleSheet();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 171, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QRegExp & expr, const QTextCursor & cursor, FindFlags options);
// _ZNK13QTextDocument4findERK7QRegExpRK11QTextCursor6QFlagsINS_8FindFlagEE find(const class QRegExp &, const class QTextCursor &, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK7QRegExpRK11QTextCursor6QFlagsINS_8FindFlagEE(void *qthis,
const QRegExp* arg1,
const QTextCursor* arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QRegExp*)arg1),
*((const QTextCursor*)arg2),
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 192, column 16>
//   // proto:  QTextBlock QTextDocument::lastBlock();
// _ZNK13QTextDocument9lastBlockEv lastBlock()
extern "C"
QTextBlock*
C_ZNK13QTextDocument9lastBlockEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->lastBlock();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 119, column 14>
//   // proto:  void QTextDocument::QTextDocument(const QString & text, QObject * parent);
extern "C"
QTextDocument*
C_ZN13QTextDocumentC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QTextDocument(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 175, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QRegularExpression & expr, int from, FindFlags options);
// _ZNK13QTextDocument4findERK18QRegularExpressioni6QFlagsINS_8FindFlagEE find(const class QRegularExpression &, int, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK18QRegularExpressioni6QFlagsINS_8FindFlagEE(void *qthis,
const QRegularExpression* arg1,
int arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QRegularExpression*)arg1),
arg2,
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 222, column 10>
//   // proto:  bool QTextDocument::useDesignMetrics();
// _ZNK13QTextDocument16useDesignMetricsEv useDesignMetrics()
extern "C"
bool
C_ZNK13QTextDocument16useDesignMetricsEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->useDesignMetrics();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 281, column 10>
//   // proto:  void QTextDocument::documentLayoutChanged();
// _ZN13QTextDocument21documentLayoutChangedEv documentLayoutChanged()
extern "C"
void
C_ZN13QTextDocument21documentLayoutChangedEv(void *qthis) {
  ((QTextDocument*)qthis)->documentLayoutChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 166, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QString & subString, int from, FindFlags options);
// _ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE find(const class QString &, int, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void *qthis,
const QString* arg1,
int arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QString*)arg1),
arg2,
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 200, column 9>
//   // proto:  int QTextDocument::pageCount();
// _ZNK13QTextDocument9pageCountEv pageCount()
extern "C"
int
C_ZNK13QTextDocument9pageCountEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->pageCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 280, column 10>
//   // proto:  void QTextDocument::baseUrlChanged(const QUrl & url);
// _ZN13QTextDocument14baseUrlChangedERK4QUrl baseUrlChanged(const class QUrl &)
extern "C"
void
C_ZN13QTextDocument14baseUrlChangedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextDocument*)qthis)->baseUrlChanged(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 226, column 10>
//   // proto:  void QTextDocument::setTextWidth(qreal width);
// _ZN13QTextDocument12setTextWidthEd setTextWidth(qreal)
extern "C"
void
C_ZN13QTextDocument12setTextWidthEd(void *qthis,
qreal arg1) {
  ((QTextDocument*)qthis)->setTextWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 235, column 10>
//   // proto:  void QTextDocument::setDocumentMargin(qreal margin);
// _ZN13QTextDocument17setDocumentMarginEd setDocumentMargin(qreal)
extern "C"
void
C_ZN13QTextDocument17setDocumentMarginEd(void *qthis,
qreal arg1) {
  ((QTextDocument*)qthis)->setDocumentMargin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 130, column 10>
//   // proto:  bool QTextDocument::isUndoAvailable();
// _ZNK13QTextDocument15isUndoAvailableEv isUndoAvailable()
extern "C"
bool
C_ZNK13QTextDocument15isUndoAvailableEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->isUndoAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 231, column 11>
//   // proto:  qreal QTextDocument::indentWidth();
// _ZNK13QTextDocument11indentWidthEv indentWidth()
extern "C"
double
C_ZNK13QTextDocument11indentWidthEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->indentWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 276, column 10>
//   // proto:  void QTextDocument::undoCommandAdded();
// _ZN13QTextDocument16undoCommandAddedEv undoCommandAdded()
extern "C"
void
C_ZN13QTextDocument16undoCommandAddedEv(void *qthis) {
  ((QTextDocument*)qthis)->undoCommandAdded();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 221, column 10>
//   // proto:  void QTextDocument::setUseDesignMetrics(bool b);
// _ZN13QTextDocument19setUseDesignMetricsEb setUseDesignMetrics(_Bool)
extern "C"
void
C_ZN13QTextDocument19setUseDesignMetricsEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->setUseDesignMetrics(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 138, column 10>
//   // proto:  void QTextDocument::setDocumentLayout(QAbstractTextDocumentLayout * layout);
// _ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout setDocumentLayout(class QAbstractTextDocumentLayout *)
extern "C"
void
C_ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout(void *qthis,
QAbstractTextDocumentLayout * arg1) {
  ((QTextDocument*)qthis)->setDocumentLayout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 232, column 10>
//   // proto:  void QTextDocument::setIndentWidth(qreal width);
// _ZN13QTextDocument14setIndentWidthEd setIndentWidth(qreal)
extern "C"
void
C_ZN13QTextDocument14setIndentWidthEd(void *qthis,
qreal arg1) {
  ((QTextDocument*)qthis)->setIndentWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 265, column 10>
//   // proto:  QUrl QTextDocument::baseUrl();
// _ZNK13QTextDocument7baseUrlEv baseUrl()
extern "C"
QUrl*
C_ZNK13QTextDocument7baseUrlEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->baseUrl();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 179, column 17>
//   // proto:  QTextFrame * QTextDocument::frameAt(int pos);
// _ZNK13QTextDocument7frameAtEi frameAt(int)
extern "C"
void*
C_ZNK13QTextDocument7frameAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->frameAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 145, column 10>
//   // proto:  void QTextDocument::setMetaInformation(QTextDocument::MetaInformation info, const QString & );
// _ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString setMetaInformation(enum QTextDocument::MetaInformation, const class QString &)
extern "C"
void
C_ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString(void *qthis,
QTextDocument::MetaInformation arg1,
const QString* arg2) {
  ((QTextDocument*)qthis)->setMetaInformation(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 263, column 10>
//   // proto:  void QTextDocument::setDefaultTextOption(const QTextOption & option);
// _ZN13QTextDocument20setDefaultTextOptionERK11QTextOption setDefaultTextOption(const class QTextOption &)
extern "C"
void
C_ZN13QTextDocument20setDefaultTextOptionERK11QTextOption(void *qthis,
const QTextOption* arg1) {
  ((QTextDocument*)qthis)->setDefaultTextOption(*((const QTextOption*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 198, column 11>
//   // proto:  QFont QTextDocument::defaultFont();
// _ZNK13QTextDocument11defaultFontEv defaultFont()
extern "C"
QFont*
C_ZNK13QTextDocument11defaultFontEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->defaultFont();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 186, column 16>
//   // proto:  QTextBlock QTextDocument::findBlockByNumber(int blockNumber);
// _ZNK13QTextDocument17findBlockByNumberEi findBlockByNumber(int)
extern "C"
QTextBlock*
C_ZNK13QTextDocument17findBlockByNumberEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->findBlockByNumber(arg1);
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 262, column 17>
//   // proto:  QTextOption QTextDocument::defaultTextOption();
// _ZNK13QTextDocument17defaultTextOptionEv defaultTextOption()
extern "C"
QTextOption*
C_ZNK13QTextDocument17defaultTextOptionEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->defaultTextOption();
  return new QTextOption(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 167, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QString & subString, const QTextCursor & cursor, FindFlags options);
// _ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE find(const class QString &, const class QTextCursor &, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE(void *qthis,
const QString* arg1,
const QTextCursor* arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QString*)arg1),
*((const QTextCursor*)arg2),
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 185, column 16>
//   // proto:  QTextBlock QTextDocument::findBlock(int pos);
// _ZNK13QTextDocument9findBlockEi findBlock(int)
extern "C"
QTextBlock*
C_ZNK13QTextDocument9findBlockEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->findBlock(arg1);
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 266, column 10>
//   // proto:  void QTextDocument::setBaseUrl(const QUrl & url);
// _ZN13QTextDocument10setBaseUrlERK4QUrl setBaseUrl(const class QUrl &)
extern "C"
void
C_ZN13QTextDocument10setBaseUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextDocument*)qthis)->setBaseUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 286, column 10>
//   // proto:  void QTextDocument::appendUndoItem(QAbstractUndoItem * );
// _ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem appendUndoItem(class QAbstractUndoItem *)
extern "C"
void
C_ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void *qthis,
QAbstractUndoItem * arg1) {
  ((QTextDocument*)qthis)->appendUndoItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 275, column 10>
//   // proto:  void QTextDocument::redoAvailable(bool );
// _ZN13QTextDocument13redoAvailableEb redoAvailable(_Bool)
extern "C"
void
C_ZN13QTextDocument13redoAvailableEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->redoAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 285, column 10>
//   // proto:  void QTextDocument::redo();
// _ZN13QTextDocument4redoEv redo()
extern "C"
void
C_ZN13QTextDocument4redoEv(void *qthis) {
  ((QTextDocument*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 268, column 25>
//   // proto:  Qt::CursorMoveStyle QTextDocument::defaultCursorMoveStyle();
// _ZNK13QTextDocument22defaultCursorMoveStyleEv defaultCursorMoveStyle()
extern "C"
Qt::CursorMoveStyle
C_ZNK13QTextDocument22defaultCursorMoveStyleEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->defaultCursorMoveStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 224, column 10>
//   // proto:  void QTextDocument::drawContents(QPainter * painter, const QRectF & rect);
// _ZN13QTextDocument12drawContentsEP8QPainterRK6QRectF drawContents(class QPainter *, const class QRectF &)
extern "C"
void
C_ZN13QTextDocument12drawContentsEP8QPainterRK6QRectF(void *qthis,
QPainter * arg1,
const QRectF* arg2) {
  ((QTextDocument*)qthis)->drawContents(arg1,
*((const QRectF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 269, column 10>
//   // proto:  void QTextDocument::setDefaultCursorMoveStyle(Qt::CursorMoveStyle style);
// _ZN13QTextDocument25setDefaultCursorMoveStyleEN2Qt15CursorMoveStyleE setDefaultCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void
C_ZN13QTextDocument25setDefaultCursorMoveStyleEN2Qt15CursorMoveStyleE(void *qthis,
Qt::CursorMoveStyle* arg1) {
  ((QTextDocument*)qthis)->setDefaultCursorMoveStyle(*((Qt::CursorMoveStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 187, column 16>
//   // proto:  QTextBlock QTextDocument::findBlockByLineNumber(int blockNumber);
// _ZNK13QTextDocument21findBlockByLineNumberEi findBlockByLineNumber(int)
extern "C"
QTextBlock*
C_ZNK13QTextDocument21findBlockByLineNumberEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->findBlockByLineNumber(arg1);
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 284, column 10>
//   // proto:  void QTextDocument::undo();
// _ZN13QTextDocument4undoEv undo()
extern "C"
void
C_ZN13QTextDocument4undoEv(void *qthis) {
  ((QTextDocument*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 227, column 11>
//   // proto:  qreal QTextDocument::textWidth();
// _ZNK13QTextDocument9textWidthEv textWidth()
extern "C"
double
C_ZNK13QTextDocument9textWidthEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->textWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 98, column 5>
//   // proto:  const QMetaObject * QTextDocument::metaObject();
// _ZNK13QTextDocument10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QTextDocument10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 134, column 9>
//   // proto:  int QTextDocument::availableRedoSteps();
// _ZNK13QTextDocument18availableRedoStepsEv availableRedoSteps()
extern "C"
int
C_ZNK13QTextDocument18availableRedoStepsEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->availableRedoSteps();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 156, column 11>
//   // proto:  QChar QTextDocument::characterAt(int pos);
// _ZNK13QTextDocument11characterAtEi characterAt(int)
extern "C"
QChar*
C_ZNK13QTextDocument11characterAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextDocument*)qthis)->characterAt(arg1);
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 197, column 10>
//   // proto:  void QTextDocument::setDefaultFont(const QFont & font);
// _ZN13QTextDocument14setDefaultFontERK5QFont setDefaultFont(const class QFont &)
extern "C"
void
C_ZN13QTextDocument14setDefaultFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QTextDocument*)qthis)->setDefaultFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 183, column 18>
//   // proto:  QTextObject * QTextDocument::objectForFormat(const QTextFormat & );
// _ZNK13QTextDocument15objectForFormatERK11QTextFormat objectForFormat(const class QTextFormat &)
extern "C"
void*
C_ZNK13QTextDocument15objectForFormatERK11QTextFormat(void *qthis,
const QTextFormat* arg1) {
  auto ret =
  ((QTextDocument*)qthis)->objectForFormat(*((const QTextFormat*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 124, column 10>
//   // proto:  bool QTextDocument::isEmpty();
// _ZNK13QTextDocument7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK13QTextDocument7isEmptyEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 128, column 10>
//   // proto:  bool QTextDocument::isUndoRedoEnabled();
// _ZNK13QTextDocument17isUndoRedoEnabledEv isUndoRedoEnabled()
extern "C"
bool
C_ZNK13QTextDocument17isUndoRedoEnabledEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->isUndoRedoEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 272, column 10>
//   // proto:  void QTextDocument::contentsChange(int from, int charsRemoved, int charsAdded);
// _ZN13QTextDocument14contentsChangeEiii contentsChange(int, int, int)
extern "C"
void
C_ZN13QTextDocument14contentsChangeEiii(void *qthis,
int arg1,
int arg2,
int arg3) {
  ((QTextDocument*)qthis)->contentsChange(arg1,
arg2,
arg3);
}
//   // proto:  void QTextDocument::~QTextDocument();
extern "C"
void C_ZN13QTextDocumentD2Ev(void *qthis) {
  delete (QTextDocument*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 273, column 10>
//   // proto:  void QTextDocument::contentsChanged();
// _ZN13QTextDocument15contentsChangedEv contentsChanged()
extern "C"
void
C_ZN13QTextDocument15contentsChangedEv(void *qthis) {
  ((QTextDocument*)qthis)->contentsChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 234, column 11>
//   // proto:  qreal QTextDocument::documentMargin();
// _ZNK13QTextDocument14documentMarginEv documentMargin()
extern "C"
double
C_ZNK13QTextDocument14documentMarginEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->documentMargin();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 194, column 10>
//   // proto:  void QTextDocument::setPageSize(const QSizeF & size);
// _ZN13QTextDocument11setPageSizeERK6QSizeF setPageSize(const class QSizeF &)
extern "C"
void
C_ZN13QTextDocument11setPageSizeERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QTextDocument*)qthis)->setPageSize(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 150, column 10>
//   // proto:  void QTextDocument::setHtml(const QString & html);
// _ZN13QTextDocument7setHtmlERK7QString setHtml(const class QString &)
extern "C"
void
C_ZN13QTextDocument7setHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QTextDocument*)qthis)->setHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 176, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QRegularExpression & expr, const QTextCursor & cursor, FindFlags options);
// _ZNK13QTextDocument4findERK18QRegularExpressionRK11QTextCursor6QFlagsINS_8FindFlagEE find(const class QRegularExpression &, const class QTextCursor &, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK18QRegularExpressionRK11QTextCursor6QFlagsINS_8FindFlagEE(void *qthis,
const QRegularExpression* arg1,
const QTextCursor* arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QRegularExpression*)arg1),
*((const QTextCursor*)arg2),
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 189, column 16>
//   // proto:  QTextBlock QTextDocument::end();
// _ZNK13QTextDocument3endEv end()
extern "C"
QTextBlock*
C_ZNK13QTextDocument3endEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->end();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 259, column 9>
//   // proto:  int QTextDocument::maximumBlockCount();
// _ZNK13QTextDocument17maximumBlockCountEv maximumBlockCount()
extern "C"
int
C_ZNK13QTextDocument17maximumBlockCountEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->maximumBlockCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 154, column 10>
//   // proto:  void QTextDocument::setPlainText(const QString & text);
// _ZN13QTextDocument12setPlainTextERK7QString setPlainText(const class QString &)
extern "C"
void
C_ZN13QTextDocument12setPlainTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextDocument*)qthis)->setPlainText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 125, column 18>
//   // proto:  void QTextDocument::clear();
// _ZN13QTextDocument5clearEv clear()
extern "C"
void
C_ZN13QTextDocument5clearEv(void *qthis) {
  ((QTextDocument*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 214, column 14>
//   // proto:  QVariant QTextDocument::resource(int type, const QUrl & name);
// _ZNK13QTextDocument8resourceEiRK4QUrl resource(int, const class QUrl &)
extern "C"
QVariant*
C_ZNK13QTextDocument8resourceEiRK4QUrl(void *qthis,
int arg1,
const QUrl* arg2) {
  auto ret =
  ((QTextDocument*)qthis)->resource(arg1,
*((const QUrl*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 188, column 16>
//   // proto:  QTextBlock QTextDocument::begin();
// _ZNK13QTextDocument5beginEv begin()
extern "C"
QTextBlock*
C_ZNK13QTextDocument5beginEv(void *qthis) {
  auto ret =
  ((QTextDocument*)qthis)->begin();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 260, column 10>
//   // proto:  void QTextDocument::setMaximumBlockCount(int maximum);
// _ZN13QTextDocument20setMaximumBlockCountEi setMaximumBlockCount(int)
extern "C"
void
C_ZN13QTextDocument20setMaximumBlockCountEi(void *qthis,
int arg1) {
  ((QTextDocument*)qthis)->setMaximumBlockCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 170, column 17>
//   // proto:  QTextCursor QTextDocument::find(const QRegExp & expr, int from, FindFlags options);
// _ZNK13QTextDocument4findERK7QRegExpi6QFlagsINS_8FindFlagEE find(const class QRegExp &, int, FindFlags)
extern "C"
QTextCursor*
C_ZNK13QTextDocument4findERK7QRegExpi6QFlagsINS_8FindFlagEE(void *qthis,
const QRegExp* arg1,
int arg2,
QTextDocument::FindFlags arg3) {
  auto ret =
  ((QTextDocument*)qthis)->find(*((const QRegExp*)arg1),
arg2,
arg3);
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 287, column 10>
//   // proto:  void QTextDocument::setModified(bool m);
// _ZN13QTextDocument11setModifiedEb setModified(_Bool)
extern "C"
void
C_ZN13QTextDocument11setModifiedEb(void *qthis,
bool arg1) {
  ((QTextDocument*)qthis)->setModified(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 86, column 18>
//   // proto:  void QAbstractUndoItem::undo();
// _ZN17QAbstractUndoItem4undoEv undo()
extern "C"
void
C_ZN17QAbstractUndoItem4undoEv(void *qthis) {
  ((QAbstractUndoItem*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocument.h', line 87, column 18>
//   // proto:  void QAbstractUndoItem::redo();
// _ZN17QAbstractUndoItem4redoEv redo()
extern "C"
void
C_ZN17QAbstractUndoItem4redoEv(void *qthis) {
  ((QAbstractUndoItem*)qthis)->redo();
}
//   // proto:  void QAbstractUndoItem::~QAbstractUndoItem();
extern "C"
void C_ZN17QAbstractUndoItemD2Ev(void *qthis) {
  delete (QAbstractUndoItem*)qthis;
}
// <= ext block end

// body block begin =>
// QTextDocument_SlotProxy here
class QTextDocument_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextDocument_SlotProxy():QObject(){}

public slots:
  // cursorPositionChanged(const class QTextCursor &)
  void slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0);
public:
  void (*slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor)(void* rsfptr, const QTextCursor & arg0) = NULL;
public slots:
  // modificationChanged(_Bool)
  void slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument19modificationChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // contentsChanged()
  void slot_proxy_func__ZN13QTextDocument15contentsChangedEv();
public:
  void (*slot_func__ZN13QTextDocument15contentsChangedEv)(void* rsfptr) = NULL;
public slots:
  // baseUrlChanged(const class QUrl &)
  void slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // blockCountChanged(int)
  void slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0);
public:
  void (*slot_func__ZN13QTextDocument17blockCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // documentLayoutChanged()
  void slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv();
public:
  void (*slot_func__ZN13QTextDocument21documentLayoutChangedEv)(void* rsfptr) = NULL;
public slots:
  // undoCommandAdded()
  void slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv();
public:
  void (*slot_func__ZN13QTextDocument16undoCommandAddedEv)(void* rsfptr) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // contentsChange(int, int, int)
  void slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN13QTextDocument14contentsChangeEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qtextdocument.moc"

extern "C" {
  QTextDocument_SlotProxy* QTextDocument_SlotProxy_new()
  {
    return new QTextDocument_SlotProxy();
  }
};

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0) {
  if (this->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor = (decltype(that->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(cursorPositionChanged(const class QTextCursor &)), that, SLOT(slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument19modificationChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument19modificationChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument19modificationChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument19modificationChangedEb = (decltype(that->slot_func__ZN13QTextDocument19modificationChangedEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(modificationChanged(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument19modificationChangedEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument13undoAvailableEb = (decltype(that->slot_func__ZN13QTextDocument13undoAvailableEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument13undoAvailableEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument15contentsChangedEv() {
  if (this->slot_func__ZN13QTextDocument15contentsChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument15contentsChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument15contentsChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument15contentsChangedEv = (decltype(that->slot_func__ZN13QTextDocument15contentsChangedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(contentsChanged()), that, SLOT(slot_proxy_func__ZN13QTextDocument15contentsChangedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument15contentsChangedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument14baseUrlChangedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl = (decltype(that->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(baseUrlChanged(const class QUrl &)), that, SLOT(slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument14baseUrlChangedERK4QUrl(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0) {
  if (this->slot_func__ZN13QTextDocument17blockCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument17blockCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument17blockCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument17blockCountChangedEi = (decltype(that->slot_func__ZN13QTextDocument17blockCountChangedEi))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(blockCountChanged(int)), that, SLOT(slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument17blockCountChangedEi(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv() {
  if (this->slot_func__ZN13QTextDocument21documentLayoutChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument21documentLayoutChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument21documentLayoutChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument21documentLayoutChangedEv = (decltype(that->slot_func__ZN13QTextDocument21documentLayoutChangedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(documentLayoutChanged()), that, SLOT(slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument21documentLayoutChangedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv() {
  if (this->slot_func__ZN13QTextDocument16undoCommandAddedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument16undoCommandAddedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument16undoCommandAddedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument16undoCommandAddedEv = (decltype(that->slot_func__ZN13QTextDocument16undoCommandAddedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(undoCommandAdded()), that, SLOT(slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument16undoCommandAddedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument13redoAvailableEb = (decltype(that->slot_func__ZN13QTextDocument13redoAvailableEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument13redoAvailableEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN13QTextDocument14contentsChangeEiii != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument14contentsChangeEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument14contentsChangeEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument14contentsChangeEiii = (decltype(that->slot_func__ZN13QTextDocument14contentsChangeEiii))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(contentsChange(int, int, int)), that, SLOT(slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument14contentsChangeEiii(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

