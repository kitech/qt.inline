// /usr/include/qt/QtGui/qtextdocument.h
#include <qtextdocument.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qtextdocument.h:98
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QTextDocument10metaObjectEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qtextdocument.h:118
// void QTextDocument(class QObject *)
extern "C"
void* C_ZN13QTextDocumentC1EP7QObject(QObject * parent) {
  return new QTextDocument(parent);
}
// /usr/include/qt/QtGui/qtextdocument.h:119
// void QTextDocument(const class QString &, class QObject *)
extern "C"
void* C_ZN13QTextDocumentC1ERK7QStringP7QObject(const QString & text, QObject * parent) {
  return new QTextDocument(text, parent);
}
// virtual
// /usr/include/qt/QtGui/qtextdocument.h:120
// void ~QTextDocument()
extern "C"
void C_ZN13QTextDocumentD1Ev(void *this_) {
  delete (QTextDocument*)(this_);
}
// /usr/include/qt/QtGui/qtextdocument.h:122
// QTextDocument * clone(class QObject *)
extern "C"
void C_ZNK13QTextDocument5cloneEP7QObject(void *this_, QObject * parent) {
  /*return*/ ((QTextDocument*)this_)->clone(parent);
}
// /usr/include/qt/QtGui/qtextdocument.h:124
// bool isEmpty()
extern "C"
void C_ZNK13QTextDocument7isEmptyEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->isEmpty();
}
// virtual
// /usr/include/qt/QtGui/qtextdocument.h:125
// void clear()
extern "C"
void C_ZN13QTextDocument5clearEv(void *this_) {
  ((QTextDocument*)this_)->clear();
}
// /usr/include/qt/QtGui/qtextdocument.h:127
// void setUndoRedoEnabled(_Bool)
extern "C"
void C_ZN13QTextDocument18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QTextDocument*)this_)->setUndoRedoEnabled(enable);
}
// /usr/include/qt/QtGui/qtextdocument.h:128
// bool isUndoRedoEnabled()
extern "C"
void C_ZNK13QTextDocument17isUndoRedoEnabledEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->isUndoRedoEnabled();
}
// /usr/include/qt/QtGui/qtextdocument.h:130
// bool isUndoAvailable()
extern "C"
void C_ZNK13QTextDocument15isUndoAvailableEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->isUndoAvailable();
}
// /usr/include/qt/QtGui/qtextdocument.h:131
// bool isRedoAvailable()
extern "C"
void C_ZNK13QTextDocument15isRedoAvailableEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->isRedoAvailable();
}
// /usr/include/qt/QtGui/qtextdocument.h:133
// int availableUndoSteps()
extern "C"
void C_ZNK13QTextDocument18availableUndoStepsEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->availableUndoSteps();
}
// /usr/include/qt/QtGui/qtextdocument.h:134
// int availableRedoSteps()
extern "C"
void C_ZNK13QTextDocument18availableRedoStepsEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->availableRedoSteps();
}
// /usr/include/qt/QtGui/qtextdocument.h:136
// int revision()
extern "C"
void C_ZNK13QTextDocument8revisionEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->revision();
}
// /usr/include/qt/QtGui/qtextdocument.h:138
// void setDocumentLayout(class QAbstractTextDocumentLayout *)
extern "C"
void C_ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout(void *this_, QAbstractTextDocumentLayout * layout) {
  ((QTextDocument*)this_)->setDocumentLayout(layout);
}
// /usr/include/qt/QtGui/qtextdocument.h:139
// QAbstractTextDocumentLayout * documentLayout()
extern "C"
void C_ZNK13QTextDocument14documentLayoutEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->documentLayout();
}
// /usr/include/qt/QtGui/qtextdocument.h:145
// void setMetaInformation(enum QTextDocument::MetaInformation, const class QString &)
extern "C"
void C_ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString(void *this_, QTextDocument::MetaInformation info, const QString & a1) {
  ((QTextDocument*)this_)->setMetaInformation(info, a1);
}
// /usr/include/qt/QtGui/qtextdocument.h:146
// QString metaInformation(enum QTextDocument::MetaInformation)
extern "C"
void C_ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void *this_, QTextDocument::MetaInformation info) {
  /*return*/ ((QTextDocument*)this_)->metaInformation(info);
}
// /usr/include/qt/QtGui/qtextdocument.h:149
// QString toHtml(const class QByteArray &)
extern "C"
void C_ZNK13QTextDocument6toHtmlERK10QByteArray(void *this_, const QByteArray & encoding) {
  /*return*/ ((QTextDocument*)this_)->toHtml(encoding);
}
// /usr/include/qt/QtGui/qtextdocument.h:150
// void setHtml(const class QString &)
extern "C"
void C_ZN13QTextDocument7setHtmlERK7QString(void *this_, const QString & html) {
  ((QTextDocument*)this_)->setHtml(html);
}
// /usr/include/qt/QtGui/qtextdocument.h:153
// QString toPlainText()
extern "C"
void C_ZNK13QTextDocument11toPlainTextEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->toPlainText();
}
// /usr/include/qt/QtGui/qtextdocument.h:154
// void setPlainText(const class QString &)
extern "C"
void C_ZN13QTextDocument12setPlainTextERK7QString(void *this_, const QString & text) {
  ((QTextDocument*)this_)->setPlainText(text);
}
// /usr/include/qt/QtGui/qtextdocument.h:156
// QChar characterAt(int)
extern "C"
void C_ZNK13QTextDocument11characterAtEi(void *this_, int pos) {
  /*return*/ ((QTextDocument*)this_)->characterAt(pos);
}
// /usr/include/qt/QtGui/qtextdocument.h:166
// QTextCursor find(const class QString &, int, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void *this_, const QString & subString, int from, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(subString, from, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:167
// QTextCursor find(const class QString &, const class QTextCursor &, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, const QString & subString, const QTextCursor & cursor, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(subString, cursor, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:170
// QTextCursor find(const class QRegExp &, int, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK7QRegExpi6QFlagsINS_8FindFlagEE(void *this_, const QRegExp & expr, int from, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(expr, from, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:171
// QTextCursor find(const class QRegExp &, const class QTextCursor &, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK7QRegExpRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, const QRegExp & expr, const QTextCursor & cursor, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(expr, cursor, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:175
// QTextCursor find(const class QRegularExpression &, int, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK18QRegularExpressioni6QFlagsINS_8FindFlagEE(void *this_, const QRegularExpression & expr, int from, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(expr, from, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:176
// QTextCursor find(const class QRegularExpression &, const class QTextCursor &, FindFlags)
extern "C"
void C_ZNK13QTextDocument4findERK18QRegularExpressionRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, const QRegularExpression & expr, const QTextCursor & cursor, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextDocument*)this_)->find(expr, cursor, options);
}
// /usr/include/qt/QtGui/qtextdocument.h:179
// QTextFrame * frameAt(int)
extern "C"
void C_ZNK13QTextDocument7frameAtEi(void *this_, int pos) {
  /*return*/ ((QTextDocument*)this_)->frameAt(pos);
}
// /usr/include/qt/QtGui/qtextdocument.h:180
// QTextFrame * rootFrame()
extern "C"
void C_ZNK13QTextDocument9rootFrameEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->rootFrame();
}
// /usr/include/qt/QtGui/qtextdocument.h:182
// QTextObject * object(int)
extern "C"
void C_ZNK13QTextDocument6objectEi(void *this_, int objectIndex) {
  /*return*/ ((QTextDocument*)this_)->object(objectIndex);
}
// /usr/include/qt/QtGui/qtextdocument.h:183
// QTextObject * objectForFormat(const class QTextFormat &)
extern "C"
void C_ZNK13QTextDocument15objectForFormatERK11QTextFormat(void *this_, const QTextFormat & a0) {
  /*return*/ ((QTextDocument*)this_)->objectForFormat(a0);
}
// /usr/include/qt/QtGui/qtextdocument.h:185
// QTextBlock findBlock(int)
extern "C"
void C_ZNK13QTextDocument9findBlockEi(void *this_, int pos) {
  /*return*/ ((QTextDocument*)this_)->findBlock(pos);
}
// /usr/include/qt/QtGui/qtextdocument.h:186
// QTextBlock findBlockByNumber(int)
extern "C"
void C_ZNK13QTextDocument17findBlockByNumberEi(void *this_, int blockNumber) {
  /*return*/ ((QTextDocument*)this_)->findBlockByNumber(blockNumber);
}
// /usr/include/qt/QtGui/qtextdocument.h:187
// QTextBlock findBlockByLineNumber(int)
extern "C"
void C_ZNK13QTextDocument21findBlockByLineNumberEi(void *this_, int blockNumber) {
  /*return*/ ((QTextDocument*)this_)->findBlockByLineNumber(blockNumber);
}
// /usr/include/qt/QtGui/qtextdocument.h:188
// QTextBlock begin()
extern "C"
void C_ZNK13QTextDocument5beginEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->begin();
}
// /usr/include/qt/QtGui/qtextdocument.h:189
// QTextBlock end()
extern "C"
void C_ZNK13QTextDocument3endEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->end();
}
// /usr/include/qt/QtGui/qtextdocument.h:191
// QTextBlock firstBlock()
extern "C"
void C_ZNK13QTextDocument10firstBlockEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->firstBlock();
}
// /usr/include/qt/QtGui/qtextdocument.h:192
// QTextBlock lastBlock()
extern "C"
void C_ZNK13QTextDocument9lastBlockEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->lastBlock();
}
// /usr/include/qt/QtGui/qtextdocument.h:194
// void setPageSize(const class QSizeF &)
extern "C"
void C_ZN13QTextDocument11setPageSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QTextDocument*)this_)->setPageSize(size);
}
// /usr/include/qt/QtGui/qtextdocument.h:195
// QSizeF pageSize()
extern "C"
void C_ZNK13QTextDocument8pageSizeEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->pageSize();
}
// /usr/include/qt/QtGui/qtextdocument.h:197
// void setDefaultFont(const class QFont &)
extern "C"
void C_ZN13QTextDocument14setDefaultFontERK5QFont(void *this_, const QFont & font) {
  ((QTextDocument*)this_)->setDefaultFont(font);
}
// /usr/include/qt/QtGui/qtextdocument.h:198
// QFont defaultFont()
extern "C"
void C_ZNK13QTextDocument11defaultFontEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->defaultFont();
}
// /usr/include/qt/QtGui/qtextdocument.h:200
// int pageCount()
extern "C"
void C_ZNK13QTextDocument9pageCountEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->pageCount();
}
// /usr/include/qt/QtGui/qtextdocument.h:202
// bool isModified()
extern "C"
void C_ZNK13QTextDocument10isModifiedEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->isModified();
}
// /usr/include/qt/QtGui/qtextdocument.h:204
// void print(class QPagedPaintDevice *)
extern "C"
void C_ZNK13QTextDocument5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QTextDocument*)this_)->print(printer);
}
// /usr/include/qt/QtGui/qtextdocument.h:214
// QVariant resource(int, const class QUrl &)
extern "C"
void C_ZNK13QTextDocument8resourceEiRK4QUrl(void *this_, int type, const QUrl & name) {
  /*return*/ ((QTextDocument*)this_)->resource(type, name);
}
// /usr/include/qt/QtGui/qtextdocument.h:215
// void addResource(int, const class QUrl &, const class QVariant &)
extern "C"
void C_ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void *this_, int type, const QUrl & name, const QVariant & resource) {
  ((QTextDocument*)this_)->addResource(type, name, resource);
}
// /usr/include/qt/QtGui/qtextdocument.h:217
// QVector<QTextFormat> allFormats()
extern "C"
void C_ZNK13QTextDocument10allFormatsEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->allFormats();
}
// /usr/include/qt/QtGui/qtextdocument.h:219
// void markContentsDirty(int, int)
extern "C"
void C_ZN13QTextDocument17markContentsDirtyEii(void *this_, int from, int length) {
  ((QTextDocument*)this_)->markContentsDirty(from, length);
}
// /usr/include/qt/QtGui/qtextdocument.h:221
// void setUseDesignMetrics(_Bool)
extern "C"
void C_ZN13QTextDocument19setUseDesignMetricsEb(void *this_, bool b) {
  ((QTextDocument*)this_)->setUseDesignMetrics(b);
}
// /usr/include/qt/QtGui/qtextdocument.h:222
// bool useDesignMetrics()
extern "C"
void C_ZNK13QTextDocument16useDesignMetricsEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->useDesignMetrics();
}
// /usr/include/qt/QtGui/qtextdocument.h:224
// void drawContents(class QPainter *, const class QRectF &)
extern "C"
void C_ZN13QTextDocument12drawContentsEP8QPainterRK6QRectF(void *this_, QPainter * painter, const QRectF & rect) {
  ((QTextDocument*)this_)->drawContents(painter, rect);
}
// /usr/include/qt/QtGui/qtextdocument.h:226
// void setTextWidth(qreal)
extern "C"
void C_ZN13QTextDocument12setTextWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setTextWidth(width);
}
// /usr/include/qt/QtGui/qtextdocument.h:227
// qreal textWidth()
extern "C"
void C_ZNK13QTextDocument9textWidthEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->textWidth();
}
// /usr/include/qt/QtGui/qtextdocument.h:229
// qreal idealWidth()
extern "C"
void C_ZNK13QTextDocument10idealWidthEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->idealWidth();
}
// /usr/include/qt/QtGui/qtextdocument.h:231
// qreal indentWidth()
extern "C"
void C_ZNK13QTextDocument11indentWidthEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->indentWidth();
}
// /usr/include/qt/QtGui/qtextdocument.h:232
// void setIndentWidth(qreal)
extern "C"
void C_ZN13QTextDocument14setIndentWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setIndentWidth(width);
}
// /usr/include/qt/QtGui/qtextdocument.h:234
// qreal documentMargin()
extern "C"
void C_ZNK13QTextDocument14documentMarginEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->documentMargin();
}
// /usr/include/qt/QtGui/qtextdocument.h:235
// void setDocumentMargin(qreal)
extern "C"
void C_ZN13QTextDocument17setDocumentMarginEd(void *this_, qreal margin) {
  ((QTextDocument*)this_)->setDocumentMargin(margin);
}
// /usr/include/qt/QtGui/qtextdocument.h:237
// void adjustSize()
extern "C"
void C_ZN13QTextDocument10adjustSizeEv(void *this_) {
  ((QTextDocument*)this_)->adjustSize();
}
// /usr/include/qt/QtGui/qtextdocument.h:238
// QSizeF size()
extern "C"
void C_ZNK13QTextDocument4sizeEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->size();
}
// /usr/include/qt/QtGui/qtextdocument.h:240
// int blockCount()
extern "C"
void C_ZNK13QTextDocument10blockCountEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->blockCount();
}
// /usr/include/qt/QtGui/qtextdocument.h:241
// int lineCount()
extern "C"
void C_ZNK13QTextDocument9lineCountEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->lineCount();
}
// /usr/include/qt/QtGui/qtextdocument.h:242
// int characterCount()
extern "C"
void C_ZNK13QTextDocument14characterCountEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->characterCount();
}
// /usr/include/qt/QtGui/qtextdocument.h:245
// void setDefaultStyleSheet(const class QString &)
extern "C"
void C_ZN13QTextDocument20setDefaultStyleSheetERK7QString(void *this_, const QString & sheet) {
  ((QTextDocument*)this_)->setDefaultStyleSheet(sheet);
}
// /usr/include/qt/QtGui/qtextdocument.h:246
// QString defaultStyleSheet()
extern "C"
void C_ZNK13QTextDocument17defaultStyleSheetEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->defaultStyleSheet();
}
// /usr/include/qt/QtGui/qtextdocument.h:249
// void undo(class QTextCursor *)
extern "C"
void C_ZN13QTextDocument4undoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->undo(cursor);
}
// /usr/include/qt/QtGui/qtextdocument.h:250
// void redo(class QTextCursor *)
extern "C"
void C_ZN13QTextDocument4redoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->redo(cursor);
}
// /usr/include/qt/QtGui/qtextdocument.h:257
// void clearUndoRedoStacks(enum QTextDocument::Stacks)
extern "C"
void C_ZN13QTextDocument19clearUndoRedoStacksENS_6StacksE(void *this_, QTextDocument::Stacks historyToClear) {
  ((QTextDocument*)this_)->clearUndoRedoStacks(historyToClear);
}
// /usr/include/qt/QtGui/qtextdocument.h:259
// int maximumBlockCount()
extern "C"
void C_ZNK13QTextDocument17maximumBlockCountEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->maximumBlockCount();
}
// /usr/include/qt/QtGui/qtextdocument.h:260
// void setMaximumBlockCount(int)
extern "C"
void C_ZN13QTextDocument20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QTextDocument*)this_)->setMaximumBlockCount(maximum);
}
// /usr/include/qt/QtGui/qtextdocument.h:262
// QTextOption defaultTextOption()
extern "C"
void C_ZNK13QTextDocument17defaultTextOptionEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->defaultTextOption();
}
// /usr/include/qt/QtGui/qtextdocument.h:263
// void setDefaultTextOption(const class QTextOption &)
extern "C"
void C_ZN13QTextDocument20setDefaultTextOptionERK11QTextOption(void *this_, const QTextOption & option) {
  ((QTextDocument*)this_)->setDefaultTextOption(option);
}
// /usr/include/qt/QtGui/qtextdocument.h:265
// QUrl baseUrl()
extern "C"
void C_ZNK13QTextDocument7baseUrlEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->baseUrl();
}
// /usr/include/qt/QtGui/qtextdocument.h:266
// void setBaseUrl(const class QUrl &)
extern "C"
void C_ZN13QTextDocument10setBaseUrlERK4QUrl(void *this_, const QUrl & url) {
  ((QTextDocument*)this_)->setBaseUrl(url);
}
// /usr/include/qt/QtGui/qtextdocument.h:268
// Qt::CursorMoveStyle defaultCursorMoveStyle()
extern "C"
void C_ZNK13QTextDocument22defaultCursorMoveStyleEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->defaultCursorMoveStyle();
}
// /usr/include/qt/QtGui/qtextdocument.h:269
// void setDefaultCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void C_ZN13QTextDocument25setDefaultCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QTextDocument*)this_)->setDefaultCursorMoveStyle(style);
}
// /usr/include/qt/QtGui/qtextdocument.h:272
// void contentsChange(int, int, int)
extern "C"
void C_ZN13QTextDocument14contentsChangeEiii(void *this_, int from, int charsRemoved, int charsAdded) {
  ((QTextDocument*)this_)->contentsChange(from, charsRemoved, charsAdded);
}
// /usr/include/qt/QtGui/qtextdocument.h:273
// void contentsChanged()
extern "C"
void C_ZN13QTextDocument15contentsChangedEv(void *this_) {
  ((QTextDocument*)this_)->contentsChanged();
}
// /usr/include/qt/QtGui/qtextdocument.h:274
// void undoAvailable(_Bool)
extern "C"
void C_ZN13QTextDocument13undoAvailableEb(void *this_, bool a0) {
  ((QTextDocument*)this_)->undoAvailable(a0);
}
// /usr/include/qt/QtGui/qtextdocument.h:275
// void redoAvailable(_Bool)
extern "C"
void C_ZN13QTextDocument13redoAvailableEb(void *this_, bool a0) {
  ((QTextDocument*)this_)->redoAvailable(a0);
}
// /usr/include/qt/QtGui/qtextdocument.h:276
// void undoCommandAdded()
extern "C"
void C_ZN13QTextDocument16undoCommandAddedEv(void *this_) {
  ((QTextDocument*)this_)->undoCommandAdded();
}
// /usr/include/qt/QtGui/qtextdocument.h:277
// void modificationChanged(_Bool)
extern "C"
void C_ZN13QTextDocument19modificationChangedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->modificationChanged(m);
}
// /usr/include/qt/QtGui/qtextdocument.h:278
// void cursorPositionChanged(const class QTextCursor &)
extern "C"
void C_ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  ((QTextDocument*)this_)->cursorPositionChanged(cursor);
}
// /usr/include/qt/QtGui/qtextdocument.h:279
// void blockCountChanged(int)
extern "C"
void C_ZN13QTextDocument17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QTextDocument*)this_)->blockCountChanged(newBlockCount);
}
// /usr/include/qt/QtGui/qtextdocument.h:280
// void baseUrlChanged(const class QUrl &)
extern "C"
void C_ZN13QTextDocument14baseUrlChangedERK4QUrl(void *this_, const QUrl & url) {
  ((QTextDocument*)this_)->baseUrlChanged(url);
}
// /usr/include/qt/QtGui/qtextdocument.h:281
// void documentLayoutChanged()
extern "C"
void C_ZN13QTextDocument21documentLayoutChangedEv(void *this_) {
  ((QTextDocument*)this_)->documentLayoutChanged();
}
// /usr/include/qt/QtGui/qtextdocument.h:284
// void undo()
extern "C"
void C_ZN13QTextDocument4undoEv(void *this_) {
  ((QTextDocument*)this_)->undo();
}
// /usr/include/qt/QtGui/qtextdocument.h:285
// void redo()
extern "C"
void C_ZN13QTextDocument4redoEv(void *this_) {
  ((QTextDocument*)this_)->redo();
}
// /usr/include/qt/QtGui/qtextdocument.h:286
// void appendUndoItem(class QAbstractUndoItem *)
extern "C"
void C_ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void *this_, QAbstractUndoItem * a0) {
  ((QTextDocument*)this_)->appendUndoItem(a0);
}
// /usr/include/qt/QtGui/qtextdocument.h:287
// void setModified(_Bool)
extern "C"
void C_ZN13QTextDocument11setModifiedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->setModified(m);
}
// /usr/include/qt/QtGui/qtextdocument.h:295
// QTextDocumentPrivate * docHandle()
extern "C"
void C_ZNK13QTextDocument9docHandleEv(void *this_) {
  /*return*/ ((QTextDocument*)this_)->docHandle();
}