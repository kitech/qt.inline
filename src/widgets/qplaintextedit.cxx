//  header block begin
// /usr/include/qt/QtWidgets/qplaintextedit.h
#include <qplaintextedit.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:66
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QPlainTextEdit10metaObjectEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:91
// void QPlainTextEdit(class QWidget *)
extern "C"
void* C_ZN14QPlainTextEditC1EP7QWidget(QWidget * parent) {
  return new QPlainTextEdit(parent);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:92
// void QPlainTextEdit(const class QString &, class QWidget *)
extern "C"
void* C_ZN14QPlainTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QPlainTextEdit(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:93
// void ~QPlainTextEdit()
extern "C"
void C_ZN14QPlainTextEditD1Ev(void *this_) {
  delete (QPlainTextEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:95
// void setDocument(class QTextDocument *)
extern "C"
void C_ZN14QPlainTextEdit11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QPlainTextEdit*)this_)->setDocument(document);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:96
// QTextDocument * document()
extern "C"
void C_ZNK14QPlainTextEdit8documentEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->document();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:98
// void setPlaceholderText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit18setPlaceholderTextERK7QString(void *this_, const QString & placeholderText) {
  ((QPlainTextEdit*)this_)->setPlaceholderText(placeholderText);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:99
// QString placeholderText()
extern "C"
void C_ZNK14QPlainTextEdit15placeholderTextEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->placeholderText();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:101
// void setTextCursor(const class QTextCursor &)
extern "C"
void C_ZN14QPlainTextEdit13setTextCursorERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  ((QPlainTextEdit*)this_)->setTextCursor(cursor);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:102
// QTextCursor textCursor()
extern "C"
void C_ZNK14QPlainTextEdit10textCursorEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->textCursor();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:104
// bool isReadOnly()
extern "C"
void C_ZNK14QPlainTextEdit10isReadOnlyEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:105
// void setReadOnly(_Bool)
extern "C"
void C_ZN14QPlainTextEdit11setReadOnlyEb(void *this_, bool ro) {
  ((QPlainTextEdit*)this_)->setReadOnly(ro);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:107
// void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN14QPlainTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QPlainTextEdit*)this_)->setTextInteractionFlags(flags);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:108
// Qt::TextInteractionFlags textInteractionFlags()
extern "C"
void C_ZNK14QPlainTextEdit20textInteractionFlagsEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->textInteractionFlags();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:110
// void mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QPlainTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & modifier) {
  ((QPlainTextEdit*)this_)->mergeCurrentCharFormat(modifier);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:111
// void setCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QPlainTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QPlainTextEdit*)this_)->setCurrentCharFormat(format);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:112
// QTextCharFormat currentCharFormat()
extern "C"
void C_ZNK14QPlainTextEdit17currentCharFormatEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->currentCharFormat();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:114
// bool tabChangesFocus()
extern "C"
void C_ZNK14QPlainTextEdit15tabChangesFocusEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->tabChangesFocus();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:115
// void setTabChangesFocus(_Bool)
extern "C"
void C_ZN14QPlainTextEdit18setTabChangesFocusEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->setTabChangesFocus(b);
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:117
// void setDocumentTitle(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *this_, const QString & title) {
  ((QPlainTextEdit*)this_)->setDocumentTitle(title);
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:119
// QString documentTitle()
extern "C"
void C_ZNK14QPlainTextEdit13documentTitleEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->documentTitle();
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:122
// bool isUndoRedoEnabled()
extern "C"
void C_ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->isUndoRedoEnabled();
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:124
// void setUndoRedoEnabled(_Bool)
extern "C"
void C_ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QPlainTextEdit*)this_)->setUndoRedoEnabled(enable);
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:127
// void setMaximumBlockCount(int)
extern "C"
void C_ZN14QPlainTextEdit20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QPlainTextEdit*)this_)->setMaximumBlockCount(maximum);
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:129
// int maximumBlockCount()
extern "C"
void C_ZNK14QPlainTextEdit17maximumBlockCountEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->maximumBlockCount();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:133
// QPlainTextEdit::LineWrapMode lineWrapMode()
extern "C"
void C_ZNK14QPlainTextEdit12lineWrapModeEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->lineWrapMode();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:134
// void setLineWrapMode(enum QPlainTextEdit::LineWrapMode)
extern "C"
void C_ZN14QPlainTextEdit15setLineWrapModeENS_12LineWrapModeE(void *this_, QPlainTextEdit::LineWrapMode mode) {
  ((QPlainTextEdit*)this_)->setLineWrapMode(mode);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:136
// QTextOption::WrapMode wordWrapMode()
extern "C"
void C_ZNK14QPlainTextEdit12wordWrapModeEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->wordWrapMode();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:137
// void setWordWrapMode(class QTextOption::WrapMode)
extern "C"
void C_ZN14QPlainTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *this_, QTextOption::WrapMode policy) {
  ((QPlainTextEdit*)this_)->setWordWrapMode(policy);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:139
// void setBackgroundVisible(_Bool)
extern "C"
void C_ZN14QPlainTextEdit20setBackgroundVisibleEb(void *this_, bool visible) {
  ((QPlainTextEdit*)this_)->setBackgroundVisible(visible);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:140
// bool backgroundVisible()
extern "C"
void C_ZNK14QPlainTextEdit17backgroundVisibleEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->backgroundVisible();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:142
// void setCenterOnScroll(_Bool)
extern "C"
void C_ZN14QPlainTextEdit17setCenterOnScrollEb(void *this_, bool enabled) {
  ((QPlainTextEdit*)this_)->setCenterOnScroll(enabled);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:143
// bool centerOnScroll()
extern "C"
void C_ZNK14QPlainTextEdit14centerOnScrollEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->centerOnScroll();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:145
// bool find(const class QString &, class QTextDocument::FindFlags)
extern "C"
void C_ZN14QPlainTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *this_, const QString & exp, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QPlainTextEdit*)this_)->find(exp, options);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:147
// bool find(const class QRegExp &, class QTextDocument::FindFlags)
extern "C"
void C_ZN14QPlainTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *this_, const QRegExp & exp, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QPlainTextEdit*)this_)->find(exp, options);
}
// inline
// /usr/include/qt/QtWidgets/qplaintextedit.h:150
// QString toPlainText()
extern "C"
void C_ZNK14QPlainTextEdit11toPlainTextEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->toPlainText();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:153
// void ensureCursorVisible()
extern "C"
void C_ZN14QPlainTextEdit19ensureCursorVisibleEv(void *this_) {
  ((QPlainTextEdit*)this_)->ensureCursorVisible();
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:155
// QVariant loadResource(int, const class QUrl &)
extern "C"
void C_ZN14QPlainTextEdit12loadResourceEiRK4QUrl(void *this_, int type, const QUrl & name) {
  /*return*/ ((QPlainTextEdit*)this_)->loadResource(type, name);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:157
// QMenu * createStandardContextMenu()
extern "C"
void C_ZN14QPlainTextEdit25createStandardContextMenuEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->createStandardContextMenu();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:158
// QMenu * createStandardContextMenu(const class QPoint &)
extern "C"
void C_ZN14QPlainTextEdit25createStandardContextMenuERK6QPoint(void *this_, const QPoint & position) {
  /*return*/ ((QPlainTextEdit*)this_)->createStandardContextMenu(position);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:161
// QTextCursor cursorForPosition(const class QPoint &)
extern "C"
void C_ZNK14QPlainTextEdit17cursorForPositionERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QPlainTextEdit*)this_)->cursorForPosition(pos);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:162
// QRect cursorRect(const class QTextCursor &)
extern "C"
void C_ZNK14QPlainTextEdit10cursorRectERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  /*return*/ ((QPlainTextEdit*)this_)->cursorRect(cursor);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:163
// QRect cursorRect()
extern "C"
void C_ZNK14QPlainTextEdit10cursorRectEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->cursorRect();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:165
// QString anchorAt(const class QPoint &)
extern "C"
void C_ZNK14QPlainTextEdit8anchorAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QPlainTextEdit*)this_)->anchorAt(pos);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:167
// bool overwriteMode()
extern "C"
void C_ZNK14QPlainTextEdit13overwriteModeEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->overwriteMode();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:168
// void setOverwriteMode(_Bool)
extern "C"
void C_ZN14QPlainTextEdit16setOverwriteModeEb(void *this_, bool overwrite) {
  ((QPlainTextEdit*)this_)->setOverwriteMode(overwrite);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:170
// int tabStopWidth()
extern "C"
void C_ZNK14QPlainTextEdit12tabStopWidthEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->tabStopWidth();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:171
// void setTabStopWidth(int)
extern "C"
void C_ZN14QPlainTextEdit15setTabStopWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setTabStopWidth(width);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:173
// int cursorWidth()
extern "C"
void C_ZNK14QPlainTextEdit11cursorWidthEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->cursorWidth();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:174
// void setCursorWidth(int)
extern "C"
void C_ZN14QPlainTextEdit14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setCursorWidth(width);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:176
// void setExtraSelections(const QList<class QTextEdit::ExtraSelection> &)
extern "C"
void C_ZN14QPlainTextEdit18setExtraSelectionsERK5QListIN9QTextEdit14ExtraSelectionEE(void *this_, const QList<QTextEdit::ExtraSelection> & selections) {
  ((QPlainTextEdit*)this_)->setExtraSelections(selections);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:177
// QList<QTextEdit::ExtraSelection> extraSelections()
extern "C"
void C_ZNK14QPlainTextEdit15extraSelectionsEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->extraSelections();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:179
// void moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
extern "C"
void C_ZN14QPlainTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *this_, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  ((QPlainTextEdit*)this_)->moveCursor(operation, mode);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:181
// bool canPaste()
extern "C"
void C_ZNK14QPlainTextEdit8canPasteEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->canPaste();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:183
// void print(class QPagedPaintDevice *)
extern "C"
void C_ZNK14QPlainTextEdit5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QPlainTextEdit*)this_)->print(printer);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:185
// int blockCount()
extern "C"
void C_ZNK14QPlainTextEdit10blockCountEv(void *this_) {
  /*return*/ ((QPlainTextEdit*)this_)->blockCount();
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:186
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery property) {
  /*return*/ ((QPlainTextEdit*)this_)->inputMethodQuery(property);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:187
// QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
void C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery query, QVariant argument) {
  /*return*/ ((QPlainTextEdit*)this_)->inputMethodQuery(query, argument);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:191
// void setPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit12setPlainTextERK7QString(void *this_, const QString & text) {
  ((QPlainTextEdit*)this_)->setPlainText(text);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:194
// void cut()
extern "C"
void C_ZN14QPlainTextEdit3cutEv(void *this_) {
  ((QPlainTextEdit*)this_)->cut();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:195
// void copy()
extern "C"
void C_ZN14QPlainTextEdit4copyEv(void *this_) {
  ((QPlainTextEdit*)this_)->copy();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:196
// void paste()
extern "C"
void C_ZN14QPlainTextEdit5pasteEv(void *this_) {
  ((QPlainTextEdit*)this_)->paste();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:199
// void undo()
extern "C"
void C_ZN14QPlainTextEdit4undoEv(void *this_) {
  ((QPlainTextEdit*)this_)->undo();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:200
// void redo()
extern "C"
void C_ZN14QPlainTextEdit4redoEv(void *this_) {
  ((QPlainTextEdit*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:202
// void clear()
extern "C"
void C_ZN14QPlainTextEdit5clearEv(void *this_) {
  ((QPlainTextEdit*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:203
// void selectAll()
extern "C"
void C_ZN14QPlainTextEdit9selectAllEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectAll();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:205
// void insertPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit15insertPlainTextERK7QString(void *this_, const QString & text) {
  ((QPlainTextEdit*)this_)->insertPlainText(text);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:207
// void appendPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit15appendPlainTextERK7QString(void *this_, const QString & text) {
  ((QPlainTextEdit*)this_)->appendPlainText(text);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:208
// void appendHtml(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit10appendHtmlERK7QString(void *this_, const QString & html) {
  ((QPlainTextEdit*)this_)->appendHtml(html);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:210
// void centerCursor()
extern "C"
void C_ZN14QPlainTextEdit12centerCursorEv(void *this_) {
  ((QPlainTextEdit*)this_)->centerCursor();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:212
// void zoomIn(int)
extern "C"
void C_ZN14QPlainTextEdit6zoomInEi(void *this_, int range) {
  ((QPlainTextEdit*)this_)->zoomIn(range);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:213
// void zoomOut(int)
extern "C"
void C_ZN14QPlainTextEdit7zoomOutEi(void *this_, int range) {
  ((QPlainTextEdit*)this_)->zoomOut(range);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:216
// void textChanged()
extern "C"
void C_ZN14QPlainTextEdit11textChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->textChanged();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:217
// void undoAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13undoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->undoAvailable(b);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:218
// void redoAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13redoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->redoAvailable(b);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:219
// void copyAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13copyAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->copyAvailable(b);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:220
// void selectionChanged()
extern "C"
void C_ZN14QPlainTextEdit16selectionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectionChanged();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:221
// void cursorPositionChanged()
extern "C"
void C_ZN14QPlainTextEdit21cursorPositionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->cursorPositionChanged();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:223
// void updateRequest(const class QRect &, int)
extern "C"
void C_ZN14QPlainTextEdit13updateRequestERK5QRecti(void *this_, const QRect & rect, int dy) {
  ((QPlainTextEdit*)this_)->updateRequest(rect, dy);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:224
// void blockCountChanged(int)
extern "C"
void C_ZN14QPlainTextEdit17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QPlainTextEdit*)this_)->blockCountChanged(newBlockCount);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:225
// void modificationChanged(_Bool)
extern "C"
void C_ZN14QPlainTextEdit19modificationChangedEb(void *this_, bool arg0) {
  ((QPlainTextEdit*)this_)->modificationChanged(arg0);
}
//  main block end
