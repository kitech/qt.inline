// /usr/include/qt/QtWidgets/qlineedit.h
#include <qlineedit.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:65
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QLineEdit10metaObjectEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qlineedit.h:93
// void QLineEdit(class QWidget *)
extern "C"
void* C_ZN9QLineEditC1EP7QWidget(QWidget * parent) {
  return new QLineEdit(parent);
}
// /usr/include/qt/QtWidgets/qlineedit.h:94
// void QLineEdit(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QLineEditC1ERK7QStringP7QWidget(const QString & a0, QWidget * parent) {
  return new QLineEdit(a0, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:95
// void ~QLineEdit()
extern "C"
void C_ZN9QLineEditD1Ev(void *this_) {
  delete (QLineEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qlineedit.h:97
// QString text()
extern "C"
void C_ZNK9QLineEdit4textEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->text();
}
// /usr/include/qt/QtWidgets/qlineedit.h:99
// QString displayText()
extern "C"
void C_ZNK9QLineEdit11displayTextEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->displayText();
}
// /usr/include/qt/QtWidgets/qlineedit.h:101
// QString placeholderText()
extern "C"
void C_ZNK9QLineEdit15placeholderTextEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->placeholderText();
}
// /usr/include/qt/QtWidgets/qlineedit.h:102
// void setPlaceholderText(const class QString &)
extern "C"
void C_ZN9QLineEdit18setPlaceholderTextERK7QString(void *this_, const QString & a0) {
  ((QLineEdit*)this_)->setPlaceholderText(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:104
// int maxLength()
extern "C"
void C_ZNK9QLineEdit9maxLengthEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->maxLength();
}
// /usr/include/qt/QtWidgets/qlineedit.h:105
// void setMaxLength(int)
extern "C"
void C_ZN9QLineEdit12setMaxLengthEi(void *this_, int a0) {
  ((QLineEdit*)this_)->setMaxLength(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:107
// void setFrame(_Bool)
extern "C"
void C_ZN9QLineEdit8setFrameEb(void *this_, bool a0) {
  ((QLineEdit*)this_)->setFrame(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:108
// bool hasFrame()
extern "C"
void C_ZNK9QLineEdit8hasFrameEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->hasFrame();
}
// /usr/include/qt/QtWidgets/qlineedit.h:110
// void setClearButtonEnabled(_Bool)
extern "C"
void C_ZN9QLineEdit21setClearButtonEnabledEb(void *this_, bool enable) {
  ((QLineEdit*)this_)->setClearButtonEnabled(enable);
}
// /usr/include/qt/QtWidgets/qlineedit.h:111
// bool isClearButtonEnabled()
extern "C"
void C_ZNK9QLineEdit20isClearButtonEnabledEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->isClearButtonEnabled();
}
// /usr/include/qt/QtWidgets/qlineedit.h:115
// QLineEdit::EchoMode echoMode()
extern "C"
void C_ZNK9QLineEdit8echoModeEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->echoMode();
}
// /usr/include/qt/QtWidgets/qlineedit.h:116
// void setEchoMode(enum QLineEdit::EchoMode)
extern "C"
void C_ZN9QLineEdit11setEchoModeENS_8EchoModeE(void *this_, QLineEdit::EchoMode a0) {
  ((QLineEdit*)this_)->setEchoMode(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:118
// bool isReadOnly()
extern "C"
void C_ZNK9QLineEdit10isReadOnlyEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qlineedit.h:119
// void setReadOnly(_Bool)
extern "C"
void C_ZN9QLineEdit11setReadOnlyEb(void *this_, bool a0) {
  ((QLineEdit*)this_)->setReadOnly(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:122
// void setValidator(const class QValidator *)
extern "C"
void C_ZN9QLineEdit12setValidatorEPK10QValidator(void *this_, const QValidator * a0) {
  ((QLineEdit*)this_)->setValidator(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:123
// const QValidator * validator()
extern "C"
void C_ZNK9QLineEdit9validatorEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->validator();
}
// /usr/include/qt/QtWidgets/qlineedit.h:127
// void setCompleter(class QCompleter *)
extern "C"
void C_ZN9QLineEdit12setCompleterEP10QCompleter(void *this_, QCompleter * completer) {
  ((QLineEdit*)this_)->setCompleter(completer);
}
// /usr/include/qt/QtWidgets/qlineedit.h:128
// QCompleter * completer()
extern "C"
void C_ZNK9QLineEdit9completerEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->completer();
}
// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:131
// QSize sizeHint()
extern "C"
void C_ZNK9QLineEdit8sizeHintEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:132
// QSize minimumSizeHint()
extern "C"
void C_ZNK9QLineEdit15minimumSizeHintEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qlineedit.h:134
// int cursorPosition()
extern "C"
void C_ZNK9QLineEdit14cursorPositionEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->cursorPosition();
}
// /usr/include/qt/QtWidgets/qlineedit.h:135
// void setCursorPosition(int)
extern "C"
void C_ZN9QLineEdit17setCursorPositionEi(void *this_, int a0) {
  ((QLineEdit*)this_)->setCursorPosition(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:136
// int cursorPositionAt(const class QPoint &)
extern "C"
void C_ZN9QLineEdit16cursorPositionAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QLineEdit*)this_)->cursorPositionAt(pos);
}
// /usr/include/qt/QtWidgets/qlineedit.h:138
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> flag) {
  ((QLineEdit*)this_)->setAlignment(flag);
}
// /usr/include/qt/QtWidgets/qlineedit.h:139
// Qt::Alignment alignment()
extern "C"
void C_ZNK9QLineEdit9alignmentEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qlineedit.h:141
// void cursorForward(_Bool, int)
extern "C"
void C_ZN9QLineEdit13cursorForwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorForward(mark, steps);
}
// /usr/include/qt/QtWidgets/qlineedit.h:142
// void cursorBackward(_Bool, int)
extern "C"
void C_ZN9QLineEdit14cursorBackwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorBackward(mark, steps);
}
// /usr/include/qt/QtWidgets/qlineedit.h:143
// void cursorWordForward(_Bool)
extern "C"
void C_ZN9QLineEdit17cursorWordForwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordForward(mark);
}
// /usr/include/qt/QtWidgets/qlineedit.h:144
// void cursorWordBackward(_Bool)
extern "C"
void C_ZN9QLineEdit18cursorWordBackwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordBackward(mark);
}
// /usr/include/qt/QtWidgets/qlineedit.h:145
// void backspace()
extern "C"
void C_ZN9QLineEdit9backspaceEv(void *this_) {
  ((QLineEdit*)this_)->backspace();
}
// /usr/include/qt/QtWidgets/qlineedit.h:146
// void del()
extern "C"
void C_ZN9QLineEdit3delEv(void *this_) {
  ((QLineEdit*)this_)->del();
}
// /usr/include/qt/QtWidgets/qlineedit.h:147
// void home(_Bool)
extern "C"
void C_ZN9QLineEdit4homeEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->home(mark);
}
// /usr/include/qt/QtWidgets/qlineedit.h:148
// void end(_Bool)
extern "C"
void C_ZN9QLineEdit3endEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->end(mark);
}
// /usr/include/qt/QtWidgets/qlineedit.h:150
// bool isModified()
extern "C"
void C_ZNK9QLineEdit10isModifiedEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->isModified();
}
// /usr/include/qt/QtWidgets/qlineedit.h:151
// void setModified(_Bool)
extern "C"
void C_ZN9QLineEdit11setModifiedEb(void *this_, bool a0) {
  ((QLineEdit*)this_)->setModified(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:153
// void setSelection(int, int)
extern "C"
void C_ZN9QLineEdit12setSelectionEii(void *this_, int a0, int a1) {
  ((QLineEdit*)this_)->setSelection(a0, a1);
}
// /usr/include/qt/QtWidgets/qlineedit.h:154
// bool hasSelectedText()
extern "C"
void C_ZNK9QLineEdit15hasSelectedTextEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->hasSelectedText();
}
// /usr/include/qt/QtWidgets/qlineedit.h:155
// QString selectedText()
extern "C"
void C_ZNK9QLineEdit12selectedTextEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->selectedText();
}
// /usr/include/qt/QtWidgets/qlineedit.h:156
// int selectionStart()
extern "C"
void C_ZNK9QLineEdit14selectionStartEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->selectionStart();
}
// /usr/include/qt/QtWidgets/qlineedit.h:158
// bool isUndoAvailable()
extern "C"
void C_ZNK9QLineEdit15isUndoAvailableEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->isUndoAvailable();
}
// /usr/include/qt/QtWidgets/qlineedit.h:159
// bool isRedoAvailable()
extern "C"
void C_ZNK9QLineEdit15isRedoAvailableEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->isRedoAvailable();
}
// /usr/include/qt/QtWidgets/qlineedit.h:161
// void setDragEnabled(_Bool)
extern "C"
void C_ZN9QLineEdit14setDragEnabledEb(void *this_, bool b) {
  ((QLineEdit*)this_)->setDragEnabled(b);
}
// /usr/include/qt/QtWidgets/qlineedit.h:162
// bool dragEnabled()
extern "C"
void C_ZNK9QLineEdit11dragEnabledEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->dragEnabled();
}
// /usr/include/qt/QtWidgets/qlineedit.h:164
// void setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void C_ZN9QLineEdit18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QLineEdit*)this_)->setCursorMoveStyle(style);
}
// /usr/include/qt/QtWidgets/qlineedit.h:165
// Qt::CursorMoveStyle cursorMoveStyle()
extern "C"
void C_ZNK9QLineEdit15cursorMoveStyleEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->cursorMoveStyle();
}
// /usr/include/qt/QtWidgets/qlineedit.h:167
// QString inputMask()
extern "C"
void C_ZNK9QLineEdit9inputMaskEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->inputMask();
}
// /usr/include/qt/QtWidgets/qlineedit.h:168
// void setInputMask(const class QString &)
extern "C"
void C_ZN9QLineEdit12setInputMaskERK7QString(void *this_, const QString & inputMask) {
  ((QLineEdit*)this_)->setInputMask(inputMask);
}
// /usr/include/qt/QtWidgets/qlineedit.h:169
// bool hasAcceptableInput()
extern "C"
void C_ZNK9QLineEdit18hasAcceptableInputEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->hasAcceptableInput();
}
// /usr/include/qt/QtWidgets/qlineedit.h:171
// void setTextMargins(int, int, int, int)
extern "C"
void C_ZN9QLineEdit14setTextMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QLineEdit*)this_)->setTextMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qlineedit.h:172
// void setTextMargins(const class QMargins &)
extern "C"
void C_ZN9QLineEdit14setTextMarginsERK8QMargins(void *this_, const QMargins & margins) {
  ((QLineEdit*)this_)->setTextMargins(margins);
}
// /usr/include/qt/QtWidgets/qlineedit.h:173
// void getTextMargins(int *, int *, int *, int *)
extern "C"
void C_ZNK9QLineEdit14getTextMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QLineEdit*)this_)->getTextMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qlineedit.h:174
// QMargins textMargins()
extern "C"
void C_ZNK9QLineEdit11textMarginsEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->textMargins();
}
// /usr/include/qt/QtWidgets/qlineedit.h:177
// void addAction(class QAction *, enum QLineEdit::ActionPosition)
extern "C"
void C_ZN9QLineEdit9addActionEP7QActionNS_14ActionPositionE(void *this_, QAction * action, QLineEdit::ActionPosition position) {
  ((QLineEdit*)this_)->addAction(action, position);
}
// /usr/include/qt/QtWidgets/qlineedit.h:178
// QAction * addAction(const class QIcon &, enum QLineEdit::ActionPosition)
extern "C"
void C_ZN9QLineEdit9addActionERK5QIconNS_14ActionPositionE(void *this_, const QIcon & icon, QLineEdit::ActionPosition position) {
  /*return*/ ((QLineEdit*)this_)->addAction(icon, position);
}
// /usr/include/qt/QtWidgets/qlineedit.h:181
// void setText(const class QString &)
extern "C"
void C_ZN9QLineEdit7setTextERK7QString(void *this_, const QString & a0) {
  ((QLineEdit*)this_)->setText(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:182
// void clear()
extern "C"
void C_ZN9QLineEdit5clearEv(void *this_) {
  ((QLineEdit*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qlineedit.h:183
// void selectAll()
extern "C"
void C_ZN9QLineEdit9selectAllEv(void *this_) {
  ((QLineEdit*)this_)->selectAll();
}
// /usr/include/qt/QtWidgets/qlineedit.h:184
// void undo()
extern "C"
void C_ZN9QLineEdit4undoEv(void *this_) {
  ((QLineEdit*)this_)->undo();
}
// /usr/include/qt/QtWidgets/qlineedit.h:185
// void redo()
extern "C"
void C_ZN9QLineEdit4redoEv(void *this_) {
  ((QLineEdit*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qlineedit.h:187
// void cut()
extern "C"
void C_ZN9QLineEdit3cutEv(void *this_) {
  ((QLineEdit*)this_)->cut();
}
// /usr/include/qt/QtWidgets/qlineedit.h:188
// void copy()
extern "C"
void C_ZNK9QLineEdit4copyEv(void *this_) {
  ((QLineEdit*)this_)->copy();
}
// /usr/include/qt/QtWidgets/qlineedit.h:189
// void paste()
extern "C"
void C_ZN9QLineEdit5pasteEv(void *this_) {
  ((QLineEdit*)this_)->paste();
}
// /usr/include/qt/QtWidgets/qlineedit.h:193
// void deselect()
extern "C"
void C_ZN9QLineEdit8deselectEv(void *this_) {
  ((QLineEdit*)this_)->deselect();
}
// /usr/include/qt/QtWidgets/qlineedit.h:196
// QMenu * createStandardContextMenu()
extern "C"
void C_ZN9QLineEdit25createStandardContextMenuEv(void *this_) {
  /*return*/ ((QLineEdit*)this_)->createStandardContextMenu();
}
// /usr/include/qt/QtWidgets/qlineedit.h:200
// void textChanged(const class QString &)
extern "C"
void C_ZN9QLineEdit11textChangedERK7QString(void *this_, const QString & a0) {
  ((QLineEdit*)this_)->textChanged(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:201
// void textEdited(const class QString &)
extern "C"
void C_ZN9QLineEdit10textEditedERK7QString(void *this_, const QString & a0) {
  ((QLineEdit*)this_)->textEdited(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:202
// void cursorPositionChanged(int, int)
extern "C"
void C_ZN9QLineEdit21cursorPositionChangedEii(void *this_, int a0, int a1) {
  ((QLineEdit*)this_)->cursorPositionChanged(a0, a1);
}
// /usr/include/qt/QtWidgets/qlineedit.h:203
// void returnPressed()
extern "C"
void C_ZN9QLineEdit13returnPressedEv(void *this_) {
  ((QLineEdit*)this_)->returnPressed();
}
// /usr/include/qt/QtWidgets/qlineedit.h:204
// void editingFinished()
extern "C"
void C_ZN9QLineEdit15editingFinishedEv(void *this_) {
  ((QLineEdit*)this_)->editingFinished();
}
// /usr/include/qt/QtWidgets/qlineedit.h:205
// void selectionChanged()
extern "C"
void C_ZN9QLineEdit16selectionChangedEv(void *this_) {
  ((QLineEdit*)this_)->selectionChanged();
}
// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:230
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery a0) {
  /*return*/ ((QLineEdit*)this_)->inputMethodQuery(a0);
}
// /usr/include/qt/QtWidgets/qlineedit.h:231
// QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
void C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery property, QVariant argument) {
  /*return*/ ((QLineEdit*)this_)->inputMethodQuery(property, argument);
}
// virtual
// /usr/include/qt/QtWidgets/qlineedit.h:232
// bool event(class QEvent *)
extern "C"
void C_ZN9QLineEdit5eventEP6QEvent(void *this_, QEvent * a0) {
  /*return*/ ((QLineEdit*)this_)->event(a0);
}