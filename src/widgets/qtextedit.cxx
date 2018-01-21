//  header block begin
// /usr/include/qt/QtWidgets/qtextedit.h
#include <qtextedit.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qtextedit.h:64
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QTextEdit10metaObjectEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtextedit.h:103
// void QTextEdit(class QWidget *)
extern "C"
void* C_ZN9QTextEditC1EP7QWidget(QWidget * parent) {
  return new QTextEdit(parent);
}
// /usr/include/qt/QtWidgets/qtextedit.h:104
// void QTextEdit(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  return new QTextEdit(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtextedit.h:105
// void ~QTextEdit()
extern "C"
void C_ZN9QTextEditD1Ev(void *this_) {
  delete (QTextEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qtextedit.h:107
// void setDocument(class QTextDocument *)
extern "C"
void C_ZN9QTextEdit11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QTextEdit*)this_)->setDocument(document);
}
// /usr/include/qt/QtWidgets/qtextedit.h:108
// QTextDocument * document()
extern "C"
void C_ZNK9QTextEdit8documentEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->document();
}
// /usr/include/qt/QtWidgets/qtextedit.h:110
// void setPlaceholderText(const class QString &)
extern "C"
void C_ZN9QTextEdit18setPlaceholderTextERK7QString(void *this_, const QString & placeholderText) {
  ((QTextEdit*)this_)->setPlaceholderText(placeholderText);
}
// /usr/include/qt/QtWidgets/qtextedit.h:111
// QString placeholderText()
extern "C"
void C_ZNK9QTextEdit15placeholderTextEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->placeholderText();
}
// /usr/include/qt/QtWidgets/qtextedit.h:113
// void setTextCursor(const class QTextCursor &)
extern "C"
void C_ZN9QTextEdit13setTextCursorERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  ((QTextEdit*)this_)->setTextCursor(cursor);
}
// /usr/include/qt/QtWidgets/qtextedit.h:114
// QTextCursor textCursor()
extern "C"
void C_ZNK9QTextEdit10textCursorEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->textCursor();
}
// /usr/include/qt/QtWidgets/qtextedit.h:116
// bool isReadOnly()
extern "C"
void C_ZNK9QTextEdit10isReadOnlyEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qtextedit.h:117
// void setReadOnly(_Bool)
extern "C"
void C_ZN9QTextEdit11setReadOnlyEb(void *this_, bool ro) {
  ((QTextEdit*)this_)->setReadOnly(ro);
}
// /usr/include/qt/QtWidgets/qtextedit.h:119
// void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN9QTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QTextEdit*)this_)->setTextInteractionFlags(flags);
}
// /usr/include/qt/QtWidgets/qtextedit.h:120
// Qt::TextInteractionFlags textInteractionFlags()
extern "C"
void C_ZNK9QTextEdit20textInteractionFlagsEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->textInteractionFlags();
}
// /usr/include/qt/QtWidgets/qtextedit.h:122
// qreal fontPointSize()
extern "C"
void C_ZNK9QTextEdit13fontPointSizeEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->fontPointSize();
}
// /usr/include/qt/QtWidgets/qtextedit.h:123
// QString fontFamily()
extern "C"
void C_ZNK9QTextEdit10fontFamilyEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->fontFamily();
}
// /usr/include/qt/QtWidgets/qtextedit.h:124
// int fontWeight()
extern "C"
void C_ZNK9QTextEdit10fontWeightEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->fontWeight();
}
// /usr/include/qt/QtWidgets/qtextedit.h:125
// bool fontUnderline()
extern "C"
void C_ZNK9QTextEdit13fontUnderlineEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->fontUnderline();
}
// /usr/include/qt/QtWidgets/qtextedit.h:126
// bool fontItalic()
extern "C"
void C_ZNK9QTextEdit10fontItalicEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->fontItalic();
}
// /usr/include/qt/QtWidgets/qtextedit.h:127
// QColor textColor()
extern "C"
void C_ZNK9QTextEdit9textColorEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->textColor();
}
// /usr/include/qt/QtWidgets/qtextedit.h:128
// QColor textBackgroundColor()
extern "C"
void C_ZNK9QTextEdit19textBackgroundColorEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->textBackgroundColor();
}
// /usr/include/qt/QtWidgets/qtextedit.h:129
// QFont currentFont()
extern "C"
void C_ZNK9QTextEdit11currentFontEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->currentFont();
}
// /usr/include/qt/QtWidgets/qtextedit.h:130
// Qt::Alignment alignment()
extern "C"
void C_ZNK9QTextEdit9alignmentEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qtextedit.h:132
// void mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN9QTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & modifier) {
  ((QTextEdit*)this_)->mergeCurrentCharFormat(modifier);
}
// /usr/include/qt/QtWidgets/qtextedit.h:134
// void setCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN9QTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextEdit*)this_)->setCurrentCharFormat(format);
}
// /usr/include/qt/QtWidgets/qtextedit.h:135
// QTextCharFormat currentCharFormat()
extern "C"
void C_ZNK9QTextEdit17currentCharFormatEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->currentCharFormat();
}
// /usr/include/qt/QtWidgets/qtextedit.h:137
// AutoFormatting autoFormatting()
extern "C"
void C_ZNK9QTextEdit14autoFormattingEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->autoFormatting();
}
// /usr/include/qt/QtWidgets/qtextedit.h:138
// void setAutoFormatting(AutoFormatting)
extern "C"
void C_ZN9QTextEdit17setAutoFormattingE6QFlagsINS_18AutoFormattingFlagEE(void *this_, QFlags<QTextEdit::AutoFormattingFlag> features) {
  ((QTextEdit*)this_)->setAutoFormatting(features);
}
// /usr/include/qt/QtWidgets/qtextedit.h:140
// bool tabChangesFocus()
extern "C"
void C_ZNK9QTextEdit15tabChangesFocusEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->tabChangesFocus();
}
// /usr/include/qt/QtWidgets/qtextedit.h:141
// void setTabChangesFocus(_Bool)
extern "C"
void C_ZN9QTextEdit18setTabChangesFocusEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setTabChangesFocus(b);
}
// inline
// /usr/include/qt/QtWidgets/qtextedit.h:143
// void setDocumentTitle(const class QString &)
extern "C"
void C_ZN9QTextEdit16setDocumentTitleERK7QString(void *this_, const QString & title) {
  ((QTextEdit*)this_)->setDocumentTitle(title);
}
// inline
// /usr/include/qt/QtWidgets/qtextedit.h:145
// QString documentTitle()
extern "C"
void C_ZNK9QTextEdit13documentTitleEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->documentTitle();
}
// inline
// /usr/include/qt/QtWidgets/qtextedit.h:148
// bool isUndoRedoEnabled()
extern "C"
void C_ZNK9QTextEdit17isUndoRedoEnabledEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->isUndoRedoEnabled();
}
// inline
// /usr/include/qt/QtWidgets/qtextedit.h:150
// void setUndoRedoEnabled(_Bool)
extern "C"
void C_ZN9QTextEdit18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QTextEdit*)this_)->setUndoRedoEnabled(enable);
}
// /usr/include/qt/QtWidgets/qtextedit.h:153
// QTextEdit::LineWrapMode lineWrapMode()
extern "C"
void C_ZNK9QTextEdit12lineWrapModeEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->lineWrapMode();
}
// /usr/include/qt/QtWidgets/qtextedit.h:154
// void setLineWrapMode(enum QTextEdit::LineWrapMode)
extern "C"
void C_ZN9QTextEdit15setLineWrapModeENS_12LineWrapModeE(void *this_, QTextEdit::LineWrapMode mode) {
  ((QTextEdit*)this_)->setLineWrapMode(mode);
}
// /usr/include/qt/QtWidgets/qtextedit.h:156
// int lineWrapColumnOrWidth()
extern "C"
void C_ZNK9QTextEdit21lineWrapColumnOrWidthEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->lineWrapColumnOrWidth();
}
// /usr/include/qt/QtWidgets/qtextedit.h:157
// void setLineWrapColumnOrWidth(int)
extern "C"
void C_ZN9QTextEdit24setLineWrapColumnOrWidthEi(void *this_, int w) {
  ((QTextEdit*)this_)->setLineWrapColumnOrWidth(w);
}
// /usr/include/qt/QtWidgets/qtextedit.h:159
// QTextOption::WrapMode wordWrapMode()
extern "C"
void C_ZNK9QTextEdit12wordWrapModeEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->wordWrapMode();
}
// /usr/include/qt/QtWidgets/qtextedit.h:160
// void setWordWrapMode(class QTextOption::WrapMode)
extern "C"
void C_ZN9QTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *this_, QTextOption::WrapMode policy) {
  ((QTextEdit*)this_)->setWordWrapMode(policy);
}
// /usr/include/qt/QtWidgets/qtextedit.h:162
// bool find(const class QString &, class QTextDocument::FindFlags)
extern "C"
void C_ZN9QTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *this_, const QString & exp, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextEdit*)this_)->find(exp, options);
}
// /usr/include/qt/QtWidgets/qtextedit.h:164
// bool find(const class QRegExp &, class QTextDocument::FindFlags)
extern "C"
void C_ZN9QTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *this_, const QRegExp & exp, QFlags<QTextDocument::FindFlag> options) {
  /*return*/ ((QTextEdit*)this_)->find(exp, options);
}
// /usr/include/qt/QtWidgets/qtextedit.h:167
// QString toPlainText()
extern "C"
void C_ZNK9QTextEdit11toPlainTextEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->toPlainText();
}
// /usr/include/qt/QtWidgets/qtextedit.h:169
// QString toHtml()
extern "C"
void C_ZNK9QTextEdit6toHtmlEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->toHtml();
}
// /usr/include/qt/QtWidgets/qtextedit.h:172
// void ensureCursorVisible()
extern "C"
void C_ZN9QTextEdit19ensureCursorVisibleEv(void *this_) {
  ((QTextEdit*)this_)->ensureCursorVisible();
}
// virtual
// /usr/include/qt/QtWidgets/qtextedit.h:174
// QVariant loadResource(int, const class QUrl &)
extern "C"
void C_ZN9QTextEdit12loadResourceEiRK4QUrl(void *this_, int type, const QUrl & name) {
  /*return*/ ((QTextEdit*)this_)->loadResource(type, name);
}
// /usr/include/qt/QtWidgets/qtextedit.h:176
// QMenu * createStandardContextMenu()
extern "C"
void C_ZN9QTextEdit25createStandardContextMenuEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->createStandardContextMenu();
}
// /usr/include/qt/QtWidgets/qtextedit.h:177
// QMenu * createStandardContextMenu(const class QPoint &)
extern "C"
void C_ZN9QTextEdit25createStandardContextMenuERK6QPoint(void *this_, const QPoint & position) {
  /*return*/ ((QTextEdit*)this_)->createStandardContextMenu(position);
}
// /usr/include/qt/QtWidgets/qtextedit.h:180
// QTextCursor cursorForPosition(const class QPoint &)
extern "C"
void C_ZNK9QTextEdit17cursorForPositionERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QTextEdit*)this_)->cursorForPosition(pos);
}
// /usr/include/qt/QtWidgets/qtextedit.h:181
// QRect cursorRect(const class QTextCursor &)
extern "C"
void C_ZNK9QTextEdit10cursorRectERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  /*return*/ ((QTextEdit*)this_)->cursorRect(cursor);
}
// /usr/include/qt/QtWidgets/qtextedit.h:182
// QRect cursorRect()
extern "C"
void C_ZNK9QTextEdit10cursorRectEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->cursorRect();
}
// /usr/include/qt/QtWidgets/qtextedit.h:184
// QString anchorAt(const class QPoint &)
extern "C"
void C_ZNK9QTextEdit8anchorAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QTextEdit*)this_)->anchorAt(pos);
}
// /usr/include/qt/QtWidgets/qtextedit.h:186
// bool overwriteMode()
extern "C"
void C_ZNK9QTextEdit13overwriteModeEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->overwriteMode();
}
// /usr/include/qt/QtWidgets/qtextedit.h:187
// void setOverwriteMode(_Bool)
extern "C"
void C_ZN9QTextEdit16setOverwriteModeEb(void *this_, bool overwrite) {
  ((QTextEdit*)this_)->setOverwriteMode(overwrite);
}
// /usr/include/qt/QtWidgets/qtextedit.h:189
// int tabStopWidth()
extern "C"
void C_ZNK9QTextEdit12tabStopWidthEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->tabStopWidth();
}
// /usr/include/qt/QtWidgets/qtextedit.h:190
// void setTabStopWidth(int)
extern "C"
void C_ZN9QTextEdit15setTabStopWidthEi(void *this_, int width) {
  ((QTextEdit*)this_)->setTabStopWidth(width);
}
// /usr/include/qt/QtWidgets/qtextedit.h:192
// int cursorWidth()
extern "C"
void C_ZNK9QTextEdit11cursorWidthEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->cursorWidth();
}
// /usr/include/qt/QtWidgets/qtextedit.h:193
// void setCursorWidth(int)
extern "C"
void C_ZN9QTextEdit14setCursorWidthEi(void *this_, int width) {
  ((QTextEdit*)this_)->setCursorWidth(width);
}
// /usr/include/qt/QtWidgets/qtextedit.h:195
// bool acceptRichText()
extern "C"
void C_ZNK9QTextEdit14acceptRichTextEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->acceptRichText();
}
// /usr/include/qt/QtWidgets/qtextedit.h:196
// void setAcceptRichText(_Bool)
extern "C"
void C_ZN9QTextEdit17setAcceptRichTextEb(void *this_, bool accept) {
  ((QTextEdit*)this_)->setAcceptRichText(accept);
}
// /usr/include/qt/QtWidgets/qtextedit.h:203
// void setExtraSelections(const QList<struct QTextEdit::ExtraSelection> &)
extern "C"
void C_ZN9QTextEdit18setExtraSelectionsERK5QListINS_14ExtraSelectionEE(void *this_, const QList<QTextEdit::ExtraSelection> & selections) {
  ((QTextEdit*)this_)->setExtraSelections(selections);
}
// /usr/include/qt/QtWidgets/qtextedit.h:204
// QList<QTextEdit::ExtraSelection> extraSelections()
extern "C"
void C_ZNK9QTextEdit15extraSelectionsEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->extraSelections();
}
// /usr/include/qt/QtWidgets/qtextedit.h:206
// void moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
extern "C"
void C_ZN9QTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *this_, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  ((QTextEdit*)this_)->moveCursor(operation, mode);
}
// /usr/include/qt/QtWidgets/qtextedit.h:208
// bool canPaste()
extern "C"
void C_ZNK9QTextEdit8canPasteEv(void *this_) {
  /*return*/ ((QTextEdit*)this_)->canPaste();
}
// /usr/include/qt/QtWidgets/qtextedit.h:210
// void print(class QPagedPaintDevice *)
extern "C"
void C_ZNK9QTextEdit5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QTextEdit*)this_)->print(printer);
}
// virtual
// /usr/include/qt/QtWidgets/qtextedit.h:212
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery property) {
  /*return*/ ((QTextEdit*)this_)->inputMethodQuery(property);
}
// /usr/include/qt/QtWidgets/qtextedit.h:213
// QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
void C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery query, QVariant argument) {
  /*return*/ ((QTextEdit*)this_)->inputMethodQuery(query, argument);
}
// /usr/include/qt/QtWidgets/qtextedit.h:216
// void setFontPointSize(qreal)
extern "C"
void C_ZN9QTextEdit16setFontPointSizeEd(void *this_, qreal s) {
  ((QTextEdit*)this_)->setFontPointSize(s);
}
// /usr/include/qt/QtWidgets/qtextedit.h:217
// void setFontFamily(const class QString &)
extern "C"
void C_ZN9QTextEdit13setFontFamilyERK7QString(void *this_, const QString & fontFamily) {
  ((QTextEdit*)this_)->setFontFamily(fontFamily);
}
// /usr/include/qt/QtWidgets/qtextedit.h:218
// void setFontWeight(int)
extern "C"
void C_ZN9QTextEdit13setFontWeightEi(void *this_, int w) {
  ((QTextEdit*)this_)->setFontWeight(w);
}
// /usr/include/qt/QtWidgets/qtextedit.h:219
// void setFontUnderline(_Bool)
extern "C"
void C_ZN9QTextEdit16setFontUnderlineEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setFontUnderline(b);
}
// /usr/include/qt/QtWidgets/qtextedit.h:220
// void setFontItalic(_Bool)
extern "C"
void C_ZN9QTextEdit13setFontItalicEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setFontItalic(b);
}
// /usr/include/qt/QtWidgets/qtextedit.h:221
// void setTextColor(const class QColor &)
extern "C"
void C_ZN9QTextEdit12setTextColorERK6QColor(void *this_, const QColor & c) {
  ((QTextEdit*)this_)->setTextColor(c);
}
// /usr/include/qt/QtWidgets/qtextedit.h:222
// void setTextBackgroundColor(const class QColor &)
extern "C"
void C_ZN9QTextEdit22setTextBackgroundColorERK6QColor(void *this_, const QColor & c) {
  ((QTextEdit*)this_)->setTextBackgroundColor(c);
}
// /usr/include/qt/QtWidgets/qtextedit.h:223
// void setCurrentFont(const class QFont &)
extern "C"
void C_ZN9QTextEdit14setCurrentFontERK5QFont(void *this_, const QFont & f) {
  ((QTextEdit*)this_)->setCurrentFont(f);
}
// /usr/include/qt/QtWidgets/qtextedit.h:224
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN9QTextEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> a) {
  ((QTextEdit*)this_)->setAlignment(a);
}
// /usr/include/qt/QtWidgets/qtextedit.h:226
// void setPlainText(const class QString &)
extern "C"
void C_ZN9QTextEdit12setPlainTextERK7QString(void *this_, const QString & text) {
  ((QTextEdit*)this_)->setPlainText(text);
}
// /usr/include/qt/QtWidgets/qtextedit.h:228
// void setHtml(const class QString &)
extern "C"
void C_ZN9QTextEdit7setHtmlERK7QString(void *this_, const QString & text) {
  ((QTextEdit*)this_)->setHtml(text);
}
// /usr/include/qt/QtWidgets/qtextedit.h:230
// void setText(const class QString &)
extern "C"
void C_ZN9QTextEdit7setTextERK7QString(void *this_, const QString & text) {
  ((QTextEdit*)this_)->setText(text);
}
// /usr/include/qt/QtWidgets/qtextedit.h:233
// void cut()
extern "C"
void C_ZN9QTextEdit3cutEv(void *this_) {
  ((QTextEdit*)this_)->cut();
}
// /usr/include/qt/QtWidgets/qtextedit.h:234
// void copy()
extern "C"
void C_ZN9QTextEdit4copyEv(void *this_) {
  ((QTextEdit*)this_)->copy();
}
// /usr/include/qt/QtWidgets/qtextedit.h:235
// void paste()
extern "C"
void C_ZN9QTextEdit5pasteEv(void *this_) {
  ((QTextEdit*)this_)->paste();
}
// /usr/include/qt/QtWidgets/qtextedit.h:238
// void undo()
extern "C"
void C_ZN9QTextEdit4undoEv(void *this_) {
  ((QTextEdit*)this_)->undo();
}
// /usr/include/qt/QtWidgets/qtextedit.h:239
// void redo()
extern "C"
void C_ZN9QTextEdit4redoEv(void *this_) {
  ((QTextEdit*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qtextedit.h:241
// void clear()
extern "C"
void C_ZN9QTextEdit5clearEv(void *this_) {
  ((QTextEdit*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qtextedit.h:242
// void selectAll()
extern "C"
void C_ZN9QTextEdit9selectAllEv(void *this_) {
  ((QTextEdit*)this_)->selectAll();
}
// /usr/include/qt/QtWidgets/qtextedit.h:244
// void insertPlainText(const class QString &)
extern "C"
void C_ZN9QTextEdit15insertPlainTextERK7QString(void *this_, const QString & text) {
  ((QTextEdit*)this_)->insertPlainText(text);
}
// /usr/include/qt/QtWidgets/qtextedit.h:246
// void insertHtml(const class QString &)
extern "C"
void C_ZN9QTextEdit10insertHtmlERK7QString(void *this_, const QString & text) {
  ((QTextEdit*)this_)->insertHtml(text);
}
// /usr/include/qt/QtWidgets/qtextedit.h:251
// void scrollToAnchor(const class QString &)
extern "C"
void C_ZN9QTextEdit14scrollToAnchorERK7QString(void *this_, const QString & name) {
  ((QTextEdit*)this_)->scrollToAnchor(name);
}
// /usr/include/qt/QtWidgets/qtextedit.h:253
// void zoomIn(int)
extern "C"
void C_ZN9QTextEdit6zoomInEi(void *this_, int range) {
  ((QTextEdit*)this_)->zoomIn(range);
}
// /usr/include/qt/QtWidgets/qtextedit.h:254
// void zoomOut(int)
extern "C"
void C_ZN9QTextEdit7zoomOutEi(void *this_, int range) {
  ((QTextEdit*)this_)->zoomOut(range);
}
// /usr/include/qt/QtWidgets/qtextedit.h:257
// void textChanged()
extern "C"
void C_ZN9QTextEdit11textChangedEv(void *this_) {
  ((QTextEdit*)this_)->textChanged();
}
// /usr/include/qt/QtWidgets/qtextedit.h:258
// void undoAvailable(_Bool)
extern "C"
void C_ZN9QTextEdit13undoAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->undoAvailable(b);
}
// /usr/include/qt/QtWidgets/qtextedit.h:259
// void redoAvailable(_Bool)
extern "C"
void C_ZN9QTextEdit13redoAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->redoAvailable(b);
}
// /usr/include/qt/QtWidgets/qtextedit.h:260
// void currentCharFormatChanged(const class QTextCharFormat &)
extern "C"
void C_ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextEdit*)this_)->currentCharFormatChanged(format);
}
// /usr/include/qt/QtWidgets/qtextedit.h:261
// void copyAvailable(_Bool)
extern "C"
void C_ZN9QTextEdit13copyAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->copyAvailable(b);
}
// /usr/include/qt/QtWidgets/qtextedit.h:262
// void selectionChanged()
extern "C"
void C_ZN9QTextEdit16selectionChangedEv(void *this_) {
  ((QTextEdit*)this_)->selectionChanged();
}
// /usr/include/qt/QtWidgets/qtextedit.h:263
// void cursorPositionChanged()
extern "C"
void C_ZN9QTextEdit21cursorPositionChangedEv(void *this_) {
  ((QTextEdit*)this_)->cursorPositionChanged();
}
//  main block end
