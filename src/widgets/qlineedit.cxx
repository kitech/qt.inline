//  header block begin
// /usr/include/qt/QtWidgets/qlineedit.h
#include <qlineedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLineEdit is pure virtual: false
// QLineEdit has virtual projected: true
//  header block end

//  main block begin

class MyQLineEdit : public QLineEdit {
public:
  virtual ~MyQLineEdit() {}
// void QLineEdit(class QWidget *)
MyQLineEdit(QWidget * parent) : QLineEdit(parent) {}
// void QLineEdit(const class QString &, class QWidget *)
MyQLineEdit(const QString & arg0, QWidget * parent) : QLineEdit(arg0, parent) {}
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::mousePressEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::mouseMoveEvent(arg0);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::mouseReleaseEvent(arg0);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::mouseDoubleClickEvent(arg0);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::keyPressEvent(arg0);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::focusInEvent(arg0);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::focusOutEvent(arg0);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::paintEvent(arg0);
  }
  }
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::dragEnterEvent(arg0);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::dragMoveEvent(e);
  }
  }
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::dragLeaveEvent(e);
  }
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::dropEvent(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::changeEvent(arg0);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::contextMenuEvent(arg0);
  }
  }
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::inputMethodEvent(arg0);
  }
  }
// void initStyleOption(class QStyleOptionFrame *)
  virtual void initStyleOption(QStyleOptionFrame * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLineEdit::initStyleOption(option);
  }
  }
// QRect cursorRect()
  virtual QRect cursorRect() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"cursorRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRect*)(irv);
      // RecordRecordQRect
    } else {
    return QLineEdit::cursorRect();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:65
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QLineEdit10metaObjectEv(void *this_) {
  return (void*)((QLineEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:93
// [-2] void QLineEdit(class QWidget *)
extern "C"
void* C_ZN9QLineEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLineEdit*)(0);
  return  new MyQLineEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:94
// [-2] void QLineEdit(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QLineEditC2ERK7QStringP7QWidget(QString* arg0, QWidget * parent) {
  auto _nilp = (MyQLineEdit*)(0);
  return  new MyQLineEdit(*arg0, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:95
// [-2] void ~QLineEdit()
extern "C"
void C_ZN9QLineEditD2Ev(void *this_) {
  delete (QLineEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:97
// [8] QString text()
extern "C"
void* C_ZNK9QLineEdit4textEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:99
// [8] QString displayText()
extern "C"
void* C_ZNK9QLineEdit11displayTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->displayText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:101
// [8] QString placeholderText()
extern "C"
void* C_ZNK9QLineEdit15placeholderTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->placeholderText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:102
// [-2] void setPlaceholderText(const class QString &)
extern "C"
void C_ZN9QLineEdit18setPlaceholderTextERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->setPlaceholderText(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:104
// [4] int maxLength()
extern "C"
int C_ZNK9QLineEdit9maxLengthEv(void *this_) {
  return (int)((QLineEdit*)this_)->maxLength();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:105
// [-2] void setMaxLength(int)
extern "C"
void C_ZN9QLineEdit12setMaxLengthEi(void *this_, int arg0) {
  ((QLineEdit*)this_)->setMaxLength(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:107
// [-2] void setFrame(_Bool)
extern "C"
void C_ZN9QLineEdit8setFrameEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setFrame(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:108
// [1] bool hasFrame()
extern "C"
bool C_ZNK9QLineEdit8hasFrameEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasFrame();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:110
// [-2] void setClearButtonEnabled(_Bool)
extern "C"
void C_ZN9QLineEdit21setClearButtonEnabledEb(void *this_, bool enable) {
  ((QLineEdit*)this_)->setClearButtonEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:111
// [1] bool isClearButtonEnabled()
extern "C"
bool C_ZNK9QLineEdit20isClearButtonEnabledEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isClearButtonEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:115
// [4] QLineEdit::EchoMode echoMode()
extern "C"
QLineEdit::EchoMode C_ZNK9QLineEdit8echoModeEv(void *this_) {
  return (QLineEdit::EchoMode)((QLineEdit*)this_)->echoMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:116
// [-2] void setEchoMode(enum QLineEdit::EchoMode)
extern "C"
void C_ZN9QLineEdit11setEchoModeENS_8EchoModeE(void *this_, QLineEdit::EchoMode arg0) {
  ((QLineEdit*)this_)->setEchoMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:118
// [1] bool isReadOnly()
extern "C"
bool C_ZNK9QLineEdit10isReadOnlyEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isReadOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:119
// [-2] void setReadOnly(_Bool)
extern "C"
void C_ZN9QLineEdit11setReadOnlyEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setReadOnly(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:122
// [-2] void setValidator(const class QValidator *)
extern "C"
void C_ZN9QLineEdit12setValidatorEPK10QValidator(void *this_, const QValidator * arg0) {
  ((QLineEdit*)this_)->setValidator(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:123
// [8] const QValidator * validator()
extern "C"
void* C_ZNK9QLineEdit9validatorEv(void *this_) {
  return (void*)((QLineEdit*)this_)->validator();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:127
// [-2] void setCompleter(class QCompleter *)
extern "C"
void C_ZN9QLineEdit12setCompleterEP10QCompleter(void *this_, QCompleter * completer) {
  ((QLineEdit*)this_)->setCompleter(completer);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:128
// [8] QCompleter * completer()
extern "C"
void* C_ZNK9QLineEdit9completerEv(void *this_) {
  return (void*)((QLineEdit*)this_)->completer();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:131
// [8] QSize sizeHint()
extern "C"
void* C_ZNK9QLineEdit8sizeHintEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:132
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK9QLineEdit15minimumSizeHintEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:134
// [4] int cursorPosition()
extern "C"
int C_ZNK9QLineEdit14cursorPositionEv(void *this_) {
  return (int)((QLineEdit*)this_)->cursorPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:135
// [-2] void setCursorPosition(int)
extern "C"
void C_ZN9QLineEdit17setCursorPositionEi(void *this_, int arg0) {
  ((QLineEdit*)this_)->setCursorPosition(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:136
// [4] int cursorPositionAt(const class QPoint &)
extern "C"
int C_ZN9QLineEdit16cursorPositionAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QLineEdit*)this_)->cursorPositionAt(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:138
// [-2] void setAlignment(Qt::Alignment)
extern "C"
void C_ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> flag) {
  ((QLineEdit*)this_)->setAlignment(flag);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:139
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK9QLineEdit9alignmentEv(void *this_) {
  return (Qt::Alignment)((QLineEdit*)this_)->alignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:141
// [-2] void cursorForward(_Bool, int)
extern "C"
void C_ZN9QLineEdit13cursorForwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorForward(mark, steps);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:142
// [-2] void cursorBackward(_Bool, int)
extern "C"
void C_ZN9QLineEdit14cursorBackwardEbi(void *this_, bool mark, int steps) {
  ((QLineEdit*)this_)->cursorBackward(mark, steps);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:143
// [-2] void cursorWordForward(_Bool)
extern "C"
void C_ZN9QLineEdit17cursorWordForwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordForward(mark);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:144
// [-2] void cursorWordBackward(_Bool)
extern "C"
void C_ZN9QLineEdit18cursorWordBackwardEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->cursorWordBackward(mark);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:145
// [-2] void backspace()
extern "C"
void C_ZN9QLineEdit9backspaceEv(void *this_) {
  ((QLineEdit*)this_)->backspace();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:146
// [-2] void del()
extern "C"
void C_ZN9QLineEdit3delEv(void *this_) {
  ((QLineEdit*)this_)->del();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:147
// [-2] void home(_Bool)
extern "C"
void C_ZN9QLineEdit4homeEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->home(mark);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:148
// [-2] void end(_Bool)
extern "C"
void C_ZN9QLineEdit3endEb(void *this_, bool mark) {
  ((QLineEdit*)this_)->end(mark);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:150
// [1] bool isModified()
extern "C"
bool C_ZNK9QLineEdit10isModifiedEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isModified();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:151
// [-2] void setModified(_Bool)
extern "C"
void C_ZN9QLineEdit11setModifiedEb(void *this_, bool arg0) {
  ((QLineEdit*)this_)->setModified(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:153
// [-2] void setSelection(int, int)
extern "C"
void C_ZN9QLineEdit12setSelectionEii(void *this_, int arg0, int arg1) {
  ((QLineEdit*)this_)->setSelection(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:154
// [1] bool hasSelectedText()
extern "C"
bool C_ZNK9QLineEdit15hasSelectedTextEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasSelectedText();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:155
// [8] QString selectedText()
extern "C"
void* C_ZNK9QLineEdit12selectedTextEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->selectedText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:156
// [4] int selectionStart()
extern "C"
int C_ZNK9QLineEdit14selectionStartEv(void *this_) {
  return (int)((QLineEdit*)this_)->selectionStart();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:157
// [4] int selectionEnd()
extern "C"
int C_ZNK9QLineEdit12selectionEndEv(void *this_) {
  return (int)((QLineEdit*)this_)->selectionEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:158
// [4] int selectionLength()
extern "C"
int C_ZNK9QLineEdit15selectionLengthEv(void *this_) {
  return (int)((QLineEdit*)this_)->selectionLength();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:160
// [1] bool isUndoAvailable()
extern "C"
bool C_ZNK9QLineEdit15isUndoAvailableEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isUndoAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:161
// [1] bool isRedoAvailable()
extern "C"
bool C_ZNK9QLineEdit15isRedoAvailableEv(void *this_) {
  return (bool)((QLineEdit*)this_)->isRedoAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:163
// [-2] void setDragEnabled(_Bool)
extern "C"
void C_ZN9QLineEdit14setDragEnabledEb(void *this_, bool b) {
  ((QLineEdit*)this_)->setDragEnabled(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:164
// [1] bool dragEnabled()
extern "C"
bool C_ZNK9QLineEdit11dragEnabledEv(void *this_) {
  return (bool)((QLineEdit*)this_)->dragEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:166
// [-2] void setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void C_ZN9QLineEdit18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QLineEdit*)this_)->setCursorMoveStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:167
// [4] Qt::CursorMoveStyle cursorMoveStyle()
extern "C"
Qt::CursorMoveStyle C_ZNK9QLineEdit15cursorMoveStyleEv(void *this_) {
  return (Qt::CursorMoveStyle)((QLineEdit*)this_)->cursorMoveStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:169
// [8] QString inputMask()
extern "C"
void* C_ZNK9QLineEdit9inputMaskEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->inputMask();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:170
// [-2] void setInputMask(const class QString &)
extern "C"
void C_ZN9QLineEdit12setInputMaskERK7QString(void *this_, QString* inputMask) {
  ((QLineEdit*)this_)->setInputMask(*inputMask);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:171
// [1] bool hasAcceptableInput()
extern "C"
bool C_ZNK9QLineEdit18hasAcceptableInputEv(void *this_) {
  return (bool)((QLineEdit*)this_)->hasAcceptableInput();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:173
// [-2] void setTextMargins(int, int, int, int)
extern "C"
void C_ZN9QLineEdit14setTextMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QLineEdit*)this_)->setTextMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:174
// [-2] void setTextMargins(const class QMargins &)
extern "C"
void C_ZN9QLineEdit14setTextMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QLineEdit*)this_)->setTextMargins(*margins);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:175
// [-2] void getTextMargins(int *, int *, int *, int *)
extern "C"
void C_ZNK9QLineEdit14getTextMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QLineEdit*)this_)->getTextMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:176
// [16] QMargins textMargins()
extern "C"
void* C_ZNK9QLineEdit11textMarginsEv(void *this_) {
  auto rv = ((QLineEdit*)this_)->textMargins();
return new QMargins(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:180
// [-2] void addAction(class QAction *, enum QLineEdit::ActionPosition)
extern "C"
void C_ZN9QLineEdit9addActionEP7QActionNS_14ActionPositionE(void *this_, QAction * action, QLineEdit::ActionPosition position) {
  ((QLineEdit*)this_)->addAction(action, position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:181
// [8] QAction * addAction(const class QIcon &, enum QLineEdit::ActionPosition)
extern "C"
void* C_ZN9QLineEdit9addActionERK5QIconNS_14ActionPositionE(void *this_, QIcon* icon, QLineEdit::ActionPosition position) {
  return (void*)((QLineEdit*)this_)->addAction(*icon, position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:185
// [-2] void setText(const class QString &)
extern "C"
void C_ZN9QLineEdit7setTextERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->setText(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:186
// [-2] void clear()
extern "C"
void C_ZN9QLineEdit5clearEv(void *this_) {
  ((QLineEdit*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:187
// [-2] void selectAll()
extern "C"
void C_ZN9QLineEdit9selectAllEv(void *this_) {
  ((QLineEdit*)this_)->selectAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:188
// [-2] void undo()
extern "C"
void C_ZN9QLineEdit4undoEv(void *this_) {
  ((QLineEdit*)this_)->undo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:189
// [-2] void redo()
extern "C"
void C_ZN9QLineEdit4redoEv(void *this_) {
  ((QLineEdit*)this_)->redo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:191
// [-2] void cut()
extern "C"
void C_ZN9QLineEdit3cutEv(void *this_) {
  ((QLineEdit*)this_)->cut();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:192
// [-2] void copy()
extern "C"
void C_ZNK9QLineEdit4copyEv(void *this_) {
  ((QLineEdit*)this_)->copy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:193
// [-2] void paste()
extern "C"
void C_ZN9QLineEdit5pasteEv(void *this_) {
  ((QLineEdit*)this_)->paste();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:197
// [-2] void deselect()
extern "C"
void C_ZN9QLineEdit8deselectEv(void *this_) {
  ((QLineEdit*)this_)->deselect();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:200
// [8] QMenu * createStandardContextMenu()
extern "C"
void* C_ZN9QLineEdit25createStandardContextMenuEv(void *this_) {
  return (void*)((QLineEdit*)this_)->createStandardContextMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:204
// [-2] void textChanged(const class QString &)
extern "C"
void C_ZN9QLineEdit11textChangedERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->textChanged(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:205
// [-2] void textEdited(const class QString &)
extern "C"
void C_ZN9QLineEdit10textEditedERK7QString(void *this_, QString* arg0) {
  ((QLineEdit*)this_)->textEdited(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:206
// [-2] void cursorPositionChanged(int, int)
extern "C"
void C_ZN9QLineEdit21cursorPositionChangedEii(void *this_, int arg0, int arg1) {
  ((QLineEdit*)this_)->cursorPositionChanged(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:207
// [-2] void returnPressed()
extern "C"
void C_ZN9QLineEdit13returnPressedEv(void *this_) {
  ((QLineEdit*)this_)->returnPressed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:208
// [-2] void editingFinished()
extern "C"
void C_ZN9QLineEdit15editingFinishedEv(void *this_) {
  ((QLineEdit*)this_)->editingFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:209
// [-2] void selectionChanged()
extern "C"
void C_ZN9QLineEdit16selectionChangedEv(void *this_) {
  ((QLineEdit*)this_)->selectionChanged();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:234
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void* C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  auto rv = ((QLineEdit*)this_)->inputMethodQuery(arg0);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:235
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
void* C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery property, QVariant* argument) {
  auto rv = ((QLineEdit*)this_)->inputMethodQuery(property, *argument);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlineedit.h:236
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN9QLineEdit5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QLineEdit*)this_)->event(arg0);
}
//  main block end
