//  header block begin
// /usr/include/qt/QtGui/qtextdocument.h
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocument is pure virtual: false
// QTextDocument has virtual projected: true
//  header block end

//  main block begin

class MyQTextDocument : public QTextDocument {
public:
  virtual ~MyQTextDocument() {}
// void QTextDocument(class QObject *)
MyQTextDocument(QObject * parent) : QTextDocument(parent) {}
// void QTextDocument(const class QString &, class QObject *)
MyQTextDocument(const QString & text, QObject * parent) : QTextDocument(text, parent) {}
// QTextObject * createObject(const class QTextFormat &)
  virtual QTextObject * createObject(const QTextFormat & f) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createObject", &handled, 1, (uint64_t)&f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QTextObject *)(irv);
      // PointerPointerQTextObject *
    } else {
    return QTextDocument::createObject(f);
  }
  }

// QVariant loadResource(int, const class QUrl &)
  virtual QVariant loadResource(int type_, const QUrl & name) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"loadResource", &handled, 2, (uint64_t)type_, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QTextDocument::loadResource(type_, name);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QTextDocument10metaObjectEv(void *this_) {
  return (void*)((QTextDocument*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:119
// [-2] void QTextDocument(class QObject *)
extern "C"
void* C_ZN13QTextDocumentC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTextDocument*)(0);
  return  new MyQTextDocument(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:120
// [-2] void QTextDocument(const class QString &, class QObject *)
extern "C"
void* C_ZN13QTextDocumentC2ERK7QStringP7QObject(QString* text, QObject * parent) {
  auto _nilp = (MyQTextDocument*)(0);
  return  new MyQTextDocument(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:121
// [-2] void ~QTextDocument()
extern "C"
void C_ZN13QTextDocumentD2Ev(void *this_) {
  delete (QTextDocument*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:123
// [8] QTextDocument * clone(class QObject *)
extern "C"
void* C_ZNK13QTextDocument5cloneEP7QObject(void *this_, QObject * parent) {
  return (void*)((QTextDocument*)this_)->clone(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:125
// [1] bool isEmpty()
extern "C"
bool C_ZNK13QTextDocument7isEmptyEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isEmpty();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:126
// [-2] void clear()
extern "C"
void C_ZN13QTextDocument5clearEv(void *this_) {
  ((QTextDocument*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:128
// [-2] void setUndoRedoEnabled(_Bool)
extern "C"
void C_ZN13QTextDocument18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QTextDocument*)this_)->setUndoRedoEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:129
// [1] bool isUndoRedoEnabled()
extern "C"
bool C_ZNK13QTextDocument17isUndoRedoEnabledEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isUndoRedoEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:131
// [1] bool isUndoAvailable()
extern "C"
bool C_ZNK13QTextDocument15isUndoAvailableEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isUndoAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:132
// [1] bool isRedoAvailable()
extern "C"
bool C_ZNK13QTextDocument15isRedoAvailableEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isRedoAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:134
// [4] int availableUndoSteps()
extern "C"
int C_ZNK13QTextDocument18availableUndoStepsEv(void *this_) {
  return (int)((QTextDocument*)this_)->availableUndoSteps();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:135
// [4] int availableRedoSteps()
extern "C"
int C_ZNK13QTextDocument18availableRedoStepsEv(void *this_) {
  return (int)((QTextDocument*)this_)->availableRedoSteps();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:137
// [4] int revision()
extern "C"
int C_ZNK13QTextDocument8revisionEv(void *this_) {
  return (int)((QTextDocument*)this_)->revision();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:139
// [-2] void setDocumentLayout(class QAbstractTextDocumentLayout *)
extern "C"
void C_ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout(void *this_, QAbstractTextDocumentLayout * layout) {
  ((QTextDocument*)this_)->setDocumentLayout(layout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:140
// [8] QAbstractTextDocumentLayout * documentLayout()
extern "C"
void* C_ZNK13QTextDocument14documentLayoutEv(void *this_) {
  return (void*)((QTextDocument*)this_)->documentLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:146
// [-2] void setMetaInformation(enum QTextDocument::MetaInformation, const class QString &)
extern "C"
void C_ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString(void *this_, QTextDocument::MetaInformation info, QString* arg1) {
  ((QTextDocument*)this_)->setMetaInformation(info, *arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:147
// [8] QString metaInformation(enum QTextDocument::MetaInformation)
extern "C"
void* C_ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void *this_, QTextDocument::MetaInformation info) {
  auto rv = ((QTextDocument*)this_)->metaInformation(info);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:150
// [8] QString toHtml(const class QByteArray &)
extern "C"
void* C_ZNK13QTextDocument6toHtmlERK10QByteArray(void *this_, QByteArray* encoding) {
  auto rv = ((QTextDocument*)this_)->toHtml(*encoding);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:151
// [-2] void setHtml(const class QString &)
extern "C"
void C_ZN13QTextDocument7setHtmlERK7QString(void *this_, QString* html) {
  ((QTextDocument*)this_)->setHtml(*html);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:154
// [8] QString toRawText()
extern "C"
void* C_ZNK13QTextDocument9toRawTextEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->toRawText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:155
// [8] QString toPlainText()
extern "C"
void* C_ZNK13QTextDocument11toPlainTextEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->toPlainText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:156
// [-2] void setPlainText(const class QString &)
extern "C"
void C_ZN13QTextDocument12setPlainTextERK7QString(void *this_, QString* text) {
  ((QTextDocument*)this_)->setPlainText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:158
// [2] QChar characterAt(int)
extern "C"
void* C_ZNK13QTextDocument11characterAtEi(void *this_, int pos) {
  auto rv = ((QTextDocument*)this_)->characterAt(pos);
return new QChar(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:168
// [8] QTextCursor find(const class QString &, int, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void *this_, QString* subString, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*subString, from, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:169
// [8] QTextCursor find(const class QString &, const class QTextCursor &, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QString* subString, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*subString, *cursor, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:172
// [8] QTextCursor find(const class QRegExp &, int, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK7QRegExpi6QFlagsINS_8FindFlagEE(void *this_, QRegExp* expr, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, from, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:173
// [8] QTextCursor find(const class QRegExp &, const class QTextCursor &, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK7QRegExpRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QRegExp* expr, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, *cursor, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:177
// [8] QTextCursor find(const class QRegularExpression &, int, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK18QRegularExpressioni6QFlagsINS_8FindFlagEE(void *this_, QRegularExpression* expr, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, from, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:178
// [8] QTextCursor find(const class QRegularExpression &, const class QTextCursor &, QTextDocument::FindFlags)
extern "C"
void* C_ZNK13QTextDocument4findERK18QRegularExpressionRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QRegularExpression* expr, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, *cursor, options);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:181
// [8] QTextFrame * frameAt(int)
extern "C"
void* C_ZNK13QTextDocument7frameAtEi(void *this_, int pos) {
  return (void*)((QTextDocument*)this_)->frameAt(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:182
// [8] QTextFrame * rootFrame()
extern "C"
void* C_ZNK13QTextDocument9rootFrameEv(void *this_) {
  return (void*)((QTextDocument*)this_)->rootFrame();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:184
// [8] QTextObject * object(int)
extern "C"
void* C_ZNK13QTextDocument6objectEi(void *this_, int objectIndex) {
  return (void*)((QTextDocument*)this_)->object(objectIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:185
// [8] QTextObject * objectForFormat(const class QTextFormat &)
extern "C"
void* C_ZNK13QTextDocument15objectForFormatERK11QTextFormat(void *this_, QTextFormat* arg0) {
  return (void*)((QTextDocument*)this_)->objectForFormat(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:187
// [16] QTextBlock findBlock(int)
extern "C"
void* C_ZNK13QTextDocument9findBlockEi(void *this_, int pos) {
  auto rv = ((QTextDocument*)this_)->findBlock(pos);
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:188
// [16] QTextBlock findBlockByNumber(int)
extern "C"
void* C_ZNK13QTextDocument17findBlockByNumberEi(void *this_, int blockNumber) {
  auto rv = ((QTextDocument*)this_)->findBlockByNumber(blockNumber);
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:189
// [16] QTextBlock findBlockByLineNumber(int)
extern "C"
void* C_ZNK13QTextDocument21findBlockByLineNumberEi(void *this_, int blockNumber) {
  auto rv = ((QTextDocument*)this_)->findBlockByLineNumber(blockNumber);
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:190
// [16] QTextBlock begin()
extern "C"
void* C_ZNK13QTextDocument5beginEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->begin();
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:191
// [16] QTextBlock end()
extern "C"
void* C_ZNK13QTextDocument3endEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->end();
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:193
// [16] QTextBlock firstBlock()
extern "C"
void* C_ZNK13QTextDocument10firstBlockEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->firstBlock();
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:194
// [16] QTextBlock lastBlock()
extern "C"
void* C_ZNK13QTextDocument9lastBlockEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->lastBlock();
return new QTextBlock(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:196
// [-2] void setPageSize(const class QSizeF &)
extern "C"
void C_ZN13QTextDocument11setPageSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QTextDocument*)this_)->setPageSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:197
// [16] QSizeF pageSize()
extern "C"
void* C_ZNK13QTextDocument8pageSizeEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->pageSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:199
// [-2] void setDefaultFont(const class QFont &)
extern "C"
void C_ZN13QTextDocument14setDefaultFontERK5QFont(void *this_, QFont* font) {
  ((QTextDocument*)this_)->setDefaultFont(*font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:200
// [16] QFont defaultFont()
extern "C"
void* C_ZNK13QTextDocument11defaultFontEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultFont();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:202
// [4] int pageCount()
extern "C"
int C_ZNK13QTextDocument9pageCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->pageCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:204
// [1] bool isModified()
extern "C"
bool C_ZNK13QTextDocument10isModifiedEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isModified();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:206
// [-2] void print(class QPagedPaintDevice *)
extern "C"
void C_ZNK13QTextDocument5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QTextDocument*)this_)->print(printer);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:216
// [16] QVariant resource(int, const class QUrl &)
extern "C"
void* C_ZNK13QTextDocument8resourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextDocument*)this_)->resource(type_, *name);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:217
// [-2] void addResource(int, const class QUrl &, const class QVariant &)
extern "C"
void C_ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void *this_, int type_, QUrl* name, QVariant* resource) {
  ((QTextDocument*)this_)->addResource(type_, *name, *resource);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:221
// [-2] void markContentsDirty(int, int)
extern "C"
void C_ZN13QTextDocument17markContentsDirtyEii(void *this_, int from, int length) {
  ((QTextDocument*)this_)->markContentsDirty(from, length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:223
// [-2] void setUseDesignMetrics(_Bool)
extern "C"
void C_ZN13QTextDocument19setUseDesignMetricsEb(void *this_, bool b) {
  ((QTextDocument*)this_)->setUseDesignMetrics(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:224
// [1] bool useDesignMetrics()
extern "C"
bool C_ZNK13QTextDocument16useDesignMetricsEv(void *this_) {
  return (bool)((QTextDocument*)this_)->useDesignMetrics();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:226
// [-2] void drawContents(class QPainter *, const class QRectF &)
extern "C"
void C_ZN13QTextDocument12drawContentsEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QTextDocument*)this_)->drawContents(painter, *rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:228
// [-2] void setTextWidth(qreal)
extern "C"
void C_ZN13QTextDocument12setTextWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setTextWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:229
// [8] qreal textWidth()
extern "C"
qreal C_ZNK13QTextDocument9textWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->textWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:231
// [8] qreal idealWidth()
extern "C"
qreal C_ZNK13QTextDocument10idealWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->idealWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:233
// [8] qreal indentWidth()
extern "C"
qreal C_ZNK13QTextDocument11indentWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->indentWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:234
// [-2] void setIndentWidth(qreal)
extern "C"
void C_ZN13QTextDocument14setIndentWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setIndentWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:236
// [8] qreal documentMargin()
extern "C"
qreal C_ZNK13QTextDocument14documentMarginEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->documentMargin();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:237
// [-2] void setDocumentMargin(qreal)
extern "C"
void C_ZN13QTextDocument17setDocumentMarginEd(void *this_, qreal margin) {
  ((QTextDocument*)this_)->setDocumentMargin(margin);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:239
// [-2] void adjustSize()
extern "C"
void C_ZN13QTextDocument10adjustSizeEv(void *this_) {
  ((QTextDocument*)this_)->adjustSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:240
// [16] QSizeF size()
extern "C"
void* C_ZNK13QTextDocument4sizeEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->size();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:242
// [4] int blockCount()
extern "C"
int C_ZNK13QTextDocument10blockCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->blockCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:243
// [4] int lineCount()
extern "C"
int C_ZNK13QTextDocument9lineCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->lineCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:244
// [4] int characterCount()
extern "C"
int C_ZNK13QTextDocument14characterCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->characterCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:247
// [-2] void setDefaultStyleSheet(const class QString &)
extern "C"
void C_ZN13QTextDocument20setDefaultStyleSheetERK7QString(void *this_, QString* sheet) {
  ((QTextDocument*)this_)->setDefaultStyleSheet(*sheet);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:248
// [8] QString defaultStyleSheet()
extern "C"
void* C_ZNK13QTextDocument17defaultStyleSheetEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultStyleSheet();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:251
// [-2] void undo(class QTextCursor *)
extern "C"
void C_ZN13QTextDocument4undoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->undo(cursor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:252
// [-2] void redo(class QTextCursor *)
extern "C"
void C_ZN13QTextDocument4redoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->redo(cursor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:259
// [-2] void clearUndoRedoStacks(enum QTextDocument::Stacks)
extern "C"
void C_ZN13QTextDocument19clearUndoRedoStacksENS_6StacksE(void *this_, QTextDocument::Stacks historyToClear) {
  ((QTextDocument*)this_)->clearUndoRedoStacks(historyToClear);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:261
// [4] int maximumBlockCount()
extern "C"
int C_ZNK13QTextDocument17maximumBlockCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->maximumBlockCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:262
// [-2] void setMaximumBlockCount(int)
extern "C"
void C_ZN13QTextDocument20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QTextDocument*)this_)->setMaximumBlockCount(maximum);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:264
// [32] QTextOption defaultTextOption()
extern "C"
void* C_ZNK13QTextDocument17defaultTextOptionEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultTextOption();
return new QTextOption(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:265
// [-2] void setDefaultTextOption(const class QTextOption &)
extern "C"
void C_ZN13QTextDocument20setDefaultTextOptionERK11QTextOption(void *this_, QTextOption* option) {
  ((QTextDocument*)this_)->setDefaultTextOption(*option);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:267
// [8] QUrl baseUrl()
extern "C"
void* C_ZNK13QTextDocument7baseUrlEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->baseUrl();
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:268
// [-2] void setBaseUrl(const class QUrl &)
extern "C"
void C_ZN13QTextDocument10setBaseUrlERK4QUrl(void *this_, QUrl* url) {
  ((QTextDocument*)this_)->setBaseUrl(*url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:270
// [4] Qt::CursorMoveStyle defaultCursorMoveStyle()
extern "C"
Qt::CursorMoveStyle C_ZNK13QTextDocument22defaultCursorMoveStyleEv(void *this_) {
  return (Qt::CursorMoveStyle)((QTextDocument*)this_)->defaultCursorMoveStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:271
// [-2] void setDefaultCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void C_ZN13QTextDocument25setDefaultCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QTextDocument*)this_)->setDefaultCursorMoveStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:274
// [-2] void contentsChange(int, int, int)
extern "C"
void C_ZN13QTextDocument14contentsChangeEiii(void *this_, int from, int charsRemoved, int charsAdded) {
  ((QTextDocument*)this_)->contentsChange(from, charsRemoved, charsAdded);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:275
// [-2] void contentsChanged()
extern "C"
void C_ZN13QTextDocument15contentsChangedEv(void *this_) {
  ((QTextDocument*)this_)->contentsChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:276
// [-2] void undoAvailable(_Bool)
extern "C"
void C_ZN13QTextDocument13undoAvailableEb(void *this_, bool arg0) {
  ((QTextDocument*)this_)->undoAvailable(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:277
// [-2] void redoAvailable(_Bool)
extern "C"
void C_ZN13QTextDocument13redoAvailableEb(void *this_, bool arg0) {
  ((QTextDocument*)this_)->redoAvailable(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:278
// [-2] void undoCommandAdded()
extern "C"
void C_ZN13QTextDocument16undoCommandAddedEv(void *this_) {
  ((QTextDocument*)this_)->undoCommandAdded();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:279
// [-2] void modificationChanged(_Bool)
extern "C"
void C_ZN13QTextDocument19modificationChangedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->modificationChanged(m);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:280
// [-2] void cursorPositionChanged(const class QTextCursor &)
extern "C"
void C_ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextDocument*)this_)->cursorPositionChanged(*cursor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:281
// [-2] void blockCountChanged(int)
extern "C"
void C_ZN13QTextDocument17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QTextDocument*)this_)->blockCountChanged(newBlockCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:282
// [-2] void baseUrlChanged(const class QUrl &)
extern "C"
void C_ZN13QTextDocument14baseUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QTextDocument*)this_)->baseUrlChanged(*url);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:283
// [-2] void documentLayoutChanged()
extern "C"
void C_ZN13QTextDocument21documentLayoutChangedEv(void *this_) {
  ((QTextDocument*)this_)->documentLayoutChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:286
// [-2] void undo()
extern "C"
void C_ZN13QTextDocument4undoEv(void *this_) {
  ((QTextDocument*)this_)->undo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:287
// [-2] void redo()
extern "C"
void C_ZN13QTextDocument4redoEv(void *this_) {
  ((QTextDocument*)this_)->redo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:288
// [-2] void appendUndoItem(class QAbstractUndoItem *)
extern "C"
void C_ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void *this_, QAbstractUndoItem * arg0) {
  ((QTextDocument*)this_)->appendUndoItem(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:289
// [-2] void setModified(_Bool)
extern "C"
void C_ZN13QTextDocument11setModifiedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->setModified(m);
}
//  main block end
