//  header block begin
// /usr/include/qt/QtWidgets/qplaintextedit.h
#include <qplaintextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPlainTextEdit is pure virtual: false
// QPlainTextEdit has virtual projected: true
//  header block end

//  main block begin

class MyQPlainTextEdit : public QPlainTextEdit {
public:
  virtual ~MyQPlainTextEdit() {}
// void QPlainTextEdit(class QWidget *)
MyQPlainTextEdit(QWidget * parent) : QPlainTextEdit(parent) {}
// void QPlainTextEdit(const class QString &, class QWidget *)
MyQPlainTextEdit(const QString & text, QWidget * parent) : QPlainTextEdit(text, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPlainTextEdit::event(e);
  }
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::timerEvent(e);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::keyPressEvent(e);
  }
  }
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::keyReleaseEvent(e);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::resizeEvent(e);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::paintEvent(e);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mousePressEvent(e);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseMoveEvent(e);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseReleaseEvent(e);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseDoubleClickEvent(e);
  }
  }
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPlainTextEdit::focusNextPrevChild(next);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::contextMenuEvent(e);
  }
  }
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragEnterEvent(e);
  }
  }
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragLeaveEvent(e);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragMoveEvent(e);
  }
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dropEvent(e);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::focusInEvent(e);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::focusOutEvent(e);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::showEvent(arg0);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::changeEvent(e);
  }
  }
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::wheelEvent(e);
  }
  }
// QMimeData * createMimeDataFromSelection()
  virtual QMimeData * createMimeDataFromSelection() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createMimeDataFromSelection", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // PointerPointerQMimeData *
    } else {
    return QPlainTextEdit::createMimeDataFromSelection();
  }
  }
// bool canInsertFromMimeData(const class QMimeData *)
  virtual bool canInsertFromMimeData(const QMimeData * source) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"canInsertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPlainTextEdit::canInsertFromMimeData(source);
  }
  }
// void insertFromMimeData(const class QMimeData *)
  virtual void insertFromMimeData(const QMimeData * source) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"insertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::insertFromMimeData(source);
  }
  }
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::inputMethodEvent(arg0);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::scrollContentsBy(dx, dy);
  }
  }
// void doSetTextCursor(const class QTextCursor &)
  virtual void doSetTextCursor(const QTextCursor & cursor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doSetTextCursor", &handled, 1, (uint64_t)&cursor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::doSetTextCursor(cursor);
  }
  }
// QTextBlock firstVisibleBlock()
  virtual QTextBlock firstVisibleBlock() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"firstVisibleBlock", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextBlock*)(irv);
      // RecordRecordQTextBlock
    } else {
    return QPlainTextEdit::firstVisibleBlock();
  }
  }
// QPointF contentOffset()
  virtual QPointF contentOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contentOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QPointF*)(irv);
      // RecordRecordQPointF
    } else {
    return QPlainTextEdit::contentOffset();
  }
  }
// QRectF blockBoundingRect(const class QTextBlock &)
  virtual QRectF blockBoundingRect(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockBoundingRect", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRectF*)(irv);
      // RecordRecordQRectF
    } else {
    return QPlainTextEdit::blockBoundingRect(block);
  }
  }
// QRectF blockBoundingGeometry(const class QTextBlock &)
  virtual QRectF blockBoundingGeometry(const QTextBlock & block) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"blockBoundingGeometry", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRectF*)(irv);
      // RecordRecordQRectF
    } else {
    return QPlainTextEdit::blockBoundingGeometry(block);
  }
  }
// QAbstractTextDocumentLayout::PaintContext getPaintContext()
// void zoomInF(float)
  virtual void zoomInF(float range) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"zoomInF", &handled, 1, (uint64_t)&range, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::zoomInF(range);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:66
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QPlainTextEdit10metaObjectEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:94
// [-2] void QPlainTextEdit(class QWidget *)
extern "C"
void* C_ZN14QPlainTextEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQPlainTextEdit*)(0);
  return  new MyQPlainTextEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:95
// [-2] void QPlainTextEdit(const class QString &, class QWidget *)
extern "C"
void* C_ZN14QPlainTextEditC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQPlainTextEdit*)(0);
  return  new MyQPlainTextEdit(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:96
// [-2] void ~QPlainTextEdit()
extern "C"
void C_ZN14QPlainTextEditD2Ev(void *this_) {
  delete (QPlainTextEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:98
// [-2] void setDocument(class QTextDocument *)
extern "C"
void C_ZN14QPlainTextEdit11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QPlainTextEdit*)this_)->setDocument(document);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:99
// [8] QTextDocument * document()
extern "C"
void* C_ZNK14QPlainTextEdit8documentEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:101
// [-2] void setPlaceholderText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit18setPlaceholderTextERK7QString(void *this_, QString* placeholderText) {
  ((QPlainTextEdit*)this_)->setPlaceholderText(*placeholderText);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:102
// [8] QString placeholderText()
extern "C"
void* C_ZNK14QPlainTextEdit15placeholderTextEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->placeholderText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:104
// [-2] void setTextCursor(const class QTextCursor &)
extern "C"
void C_ZN14QPlainTextEdit13setTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QPlainTextEdit*)this_)->setTextCursor(*cursor);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:105
// [8] QTextCursor textCursor()
extern "C"
void* C_ZNK14QPlainTextEdit10textCursorEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->textCursor();
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:107
// [1] bool isReadOnly()
extern "C"
bool C_ZNK14QPlainTextEdit10isReadOnlyEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->isReadOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:108
// [-2] void setReadOnly(_Bool)
extern "C"
void C_ZN14QPlainTextEdit11setReadOnlyEb(void *this_, bool ro) {
  ((QPlainTextEdit*)this_)->setReadOnly(ro);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:110
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN14QPlainTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QPlainTextEdit*)this_)->setTextInteractionFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:111
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C"
Qt::TextInteractionFlags C_ZNK14QPlainTextEdit20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QPlainTextEdit*)this_)->textInteractionFlags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:113
// [-2] void mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QPlainTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* modifier) {
  ((QPlainTextEdit*)this_)->mergeCurrentCharFormat(*modifier);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:114
// [-2] void setCurrentCharFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QPlainTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QPlainTextEdit*)this_)->setCurrentCharFormat(*format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:115
// [16] QTextCharFormat currentCharFormat()
extern "C"
void* C_ZNK14QPlainTextEdit17currentCharFormatEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->currentCharFormat();
return new QTextCharFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:117
// [1] bool tabChangesFocus()
extern "C"
bool C_ZNK14QPlainTextEdit15tabChangesFocusEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->tabChangesFocus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:118
// [-2] void setTabChangesFocus(_Bool)
extern "C"
void C_ZN14QPlainTextEdit18setTabChangesFocusEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->setTabChangesFocus(b);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:120
// [-2] void setDocumentTitle(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *this_, QString* title) {
  ((QPlainTextEdit*)this_)->setDocumentTitle(*title);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:122
// [8] QString documentTitle()
extern "C"
void* C_ZNK14QPlainTextEdit13documentTitleEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->documentTitle();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:125
// [1] bool isUndoRedoEnabled()
extern "C"
bool C_ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->isUndoRedoEnabled();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:127
// [-2] void setUndoRedoEnabled(_Bool)
extern "C"
void C_ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QPlainTextEdit*)this_)->setUndoRedoEnabled(enable);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:130
// [-2] void setMaximumBlockCount(int)
extern "C"
void C_ZN14QPlainTextEdit20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QPlainTextEdit*)this_)->setMaximumBlockCount(maximum);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:132
// [4] int maximumBlockCount()
extern "C"
int C_ZNK14QPlainTextEdit17maximumBlockCountEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->maximumBlockCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:136
// [4] QPlainTextEdit::LineWrapMode lineWrapMode()
extern "C"
QPlainTextEdit::LineWrapMode C_ZNK14QPlainTextEdit12lineWrapModeEv(void *this_) {
  return (QPlainTextEdit::LineWrapMode)((QPlainTextEdit*)this_)->lineWrapMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:137
// [-2] void setLineWrapMode(enum QPlainTextEdit::LineWrapMode)
extern "C"
void C_ZN14QPlainTextEdit15setLineWrapModeENS_12LineWrapModeE(void *this_, QPlainTextEdit::LineWrapMode mode) {
  ((QPlainTextEdit*)this_)->setLineWrapMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:139
// [4] QTextOption::WrapMode wordWrapMode()
extern "C"
QTextOption::WrapMode C_ZNK14QPlainTextEdit12wordWrapModeEv(void *this_) {
  return (QTextOption::WrapMode)((QPlainTextEdit*)this_)->wordWrapMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:140
// [-2] void setWordWrapMode(class QTextOption::WrapMode)
extern "C"
void C_ZN14QPlainTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *this_, QTextOption::WrapMode policy) {
  ((QPlainTextEdit*)this_)->setWordWrapMode(policy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:142
// [-2] void setBackgroundVisible(_Bool)
extern "C"
void C_ZN14QPlainTextEdit20setBackgroundVisibleEb(void *this_, bool visible) {
  ((QPlainTextEdit*)this_)->setBackgroundVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:143
// [1] bool backgroundVisible()
extern "C"
bool C_ZNK14QPlainTextEdit17backgroundVisibleEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->backgroundVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:145
// [-2] void setCenterOnScroll(_Bool)
extern "C"
void C_ZN14QPlainTextEdit17setCenterOnScrollEb(void *this_, bool enabled) {
  ((QPlainTextEdit*)this_)->setCenterOnScroll(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:146
// [1] bool centerOnScroll()
extern "C"
bool C_ZNK14QPlainTextEdit14centerOnScrollEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->centerOnScroll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:148
// [1] bool find(const class QString &, class QTextDocument::FindFlags)
extern "C"
bool C_ZN14QPlainTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QString* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QPlainTextEdit*)this_)->find(*exp, options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:150
// [1] bool find(const class QRegExp &, class QTextDocument::FindFlags)
extern "C"
bool C_ZN14QPlainTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QRegExp* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QPlainTextEdit*)this_)->find(*exp, options);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:153
// [8] QString toPlainText()
extern "C"
void* C_ZNK14QPlainTextEdit11toPlainTextEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->toPlainText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:156
// [-2] void ensureCursorVisible()
extern "C"
void C_ZN14QPlainTextEdit19ensureCursorVisibleEv(void *this_) {
  ((QPlainTextEdit*)this_)->ensureCursorVisible();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:158
// [16] QVariant loadResource(int, const class QUrl &)
extern "C"
void* C_ZN14QPlainTextEdit12loadResourceEiRK4QUrl(void *this_, int type, QUrl* name) {
  auto rv = ((QPlainTextEdit*)this_)->loadResource(type, *name);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:160
// [8] QMenu * createStandardContextMenu()
extern "C"
void* C_ZN14QPlainTextEdit25createStandardContextMenuEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->createStandardContextMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:161
// [8] QMenu * createStandardContextMenu(const class QPoint &)
extern "C"
void* C_ZN14QPlainTextEdit25createStandardContextMenuERK6QPoint(void *this_, QPoint* position) {
  return (void*)((QPlainTextEdit*)this_)->createStandardContextMenu(*position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:164
// [8] QTextCursor cursorForPosition(const class QPoint &)
extern "C"
void* C_ZNK14QPlainTextEdit17cursorForPositionERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QPlainTextEdit*)this_)->cursorForPosition(*pos);
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:165
// [16] QRect cursorRect(const class QTextCursor &)
extern "C"
void* C_ZNK14QPlainTextEdit10cursorRectERK11QTextCursor(void *this_, QTextCursor* cursor) {
  auto rv = ((QPlainTextEdit*)this_)->cursorRect(*cursor);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:166
// [16] QRect cursorRect()
extern "C"
void* C_ZNK14QPlainTextEdit10cursorRectEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->cursorRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:168
// [8] QString anchorAt(const class QPoint &)
extern "C"
void* C_ZNK14QPlainTextEdit8anchorAtERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QPlainTextEdit*)this_)->anchorAt(*pos);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:170
// [1] bool overwriteMode()
extern "C"
bool C_ZNK14QPlainTextEdit13overwriteModeEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->overwriteMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:171
// [-2] void setOverwriteMode(_Bool)
extern "C"
void C_ZN14QPlainTextEdit16setOverwriteModeEb(void *this_, bool overwrite) {
  ((QPlainTextEdit*)this_)->setOverwriteMode(overwrite);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:174
// [4] int tabStopWidth()
extern "C"
int C_ZNK14QPlainTextEdit12tabStopWidthEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->tabStopWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:175
// [-2] void setTabStopWidth(int)
extern "C"
void C_ZN14QPlainTextEdit15setTabStopWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setTabStopWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:178
// [8] qreal tabStopDistance()
extern "C"
qreal C_ZNK14QPlainTextEdit15tabStopDistanceEv(void *this_) {
  return (qreal)((QPlainTextEdit*)this_)->tabStopDistance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:179
// [-2] void setTabStopDistance(qreal)
extern "C"
void C_ZN14QPlainTextEdit18setTabStopDistanceEd(void *this_, qreal distance) {
  ((QPlainTextEdit*)this_)->setTabStopDistance(distance);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:181
// [4] int cursorWidth()
extern "C"
int C_ZNK14QPlainTextEdit11cursorWidthEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->cursorWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:182
// [-2] void setCursorWidth(int)
extern "C"
void C_ZN14QPlainTextEdit14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setCursorWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:187
// [-2] void moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
extern "C"
void C_ZN14QPlainTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *this_, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  ((QPlainTextEdit*)this_)->moveCursor(operation, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:189
// [1] bool canPaste()
extern "C"
bool C_ZNK14QPlainTextEdit8canPasteEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->canPaste();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:191
// [-2] void print(class QPagedPaintDevice *)
extern "C"
void C_ZNK14QPlainTextEdit5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QPlainTextEdit*)this_)->print(printer);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:193
// [4] int blockCount()
extern "C"
int C_ZNK14QPlainTextEdit10blockCountEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->blockCount();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:194
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void* C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery property) {
  auto rv = ((QPlainTextEdit*)this_)->inputMethodQuery(property);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:195
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C"
void* C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery query, QVariant* argument) {
  auto rv = ((QPlainTextEdit*)this_)->inputMethodQuery(query, *argument);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:199
// [-2] void setPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit12setPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->setPlainText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:202
// [-2] void cut()
extern "C"
void C_ZN14QPlainTextEdit3cutEv(void *this_) {
  ((QPlainTextEdit*)this_)->cut();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:203
// [-2] void copy()
extern "C"
void C_ZN14QPlainTextEdit4copyEv(void *this_) {
  ((QPlainTextEdit*)this_)->copy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:204
// [-2] void paste()
extern "C"
void C_ZN14QPlainTextEdit5pasteEv(void *this_) {
  ((QPlainTextEdit*)this_)->paste();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:207
// [-2] void undo()
extern "C"
void C_ZN14QPlainTextEdit4undoEv(void *this_) {
  ((QPlainTextEdit*)this_)->undo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:208
// [-2] void redo()
extern "C"
void C_ZN14QPlainTextEdit4redoEv(void *this_) {
  ((QPlainTextEdit*)this_)->redo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:210
// [-2] void clear()
extern "C"
void C_ZN14QPlainTextEdit5clearEv(void *this_) {
  ((QPlainTextEdit*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:211
// [-2] void selectAll()
extern "C"
void C_ZN14QPlainTextEdit9selectAllEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:213
// [-2] void insertPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit15insertPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->insertPlainText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:215
// [-2] void appendPlainText(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit15appendPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->appendPlainText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:216
// [-2] void appendHtml(const class QString &)
extern "C"
void C_ZN14QPlainTextEdit10appendHtmlERK7QString(void *this_, QString* html) {
  ((QPlainTextEdit*)this_)->appendHtml(*html);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:218
// [-2] void centerCursor()
extern "C"
void C_ZN14QPlainTextEdit12centerCursorEv(void *this_) {
  ((QPlainTextEdit*)this_)->centerCursor();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:220
// [-2] void zoomIn(int)
extern "C"
void C_ZN14QPlainTextEdit6zoomInEi(void *this_, int range) {
  ((QPlainTextEdit*)this_)->zoomIn(range);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:221
// [-2] void zoomOut(int)
extern "C"
void C_ZN14QPlainTextEdit7zoomOutEi(void *this_, int range) {
  ((QPlainTextEdit*)this_)->zoomOut(range);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:224
// [-2] void textChanged()
extern "C"
void C_ZN14QPlainTextEdit11textChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->textChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:225
// [-2] void undoAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13undoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->undoAvailable(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:226
// [-2] void redoAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13redoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->redoAvailable(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:227
// [-2] void copyAvailable(_Bool)
extern "C"
void C_ZN14QPlainTextEdit13copyAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->copyAvailable(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:228
// [-2] void selectionChanged()
extern "C"
void C_ZN14QPlainTextEdit16selectionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectionChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:229
// [-2] void cursorPositionChanged()
extern "C"
void C_ZN14QPlainTextEdit21cursorPositionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->cursorPositionChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:231
// [-2] void updateRequest(const class QRect &, int)
extern "C"
void C_ZN14QPlainTextEdit13updateRequestERK5QRecti(void *this_, QRect* rect, int dy) {
  ((QPlainTextEdit*)this_)->updateRequest(*rect, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:232
// [-2] void blockCountChanged(int)
extern "C"
void C_ZN14QPlainTextEdit17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QPlainTextEdit*)this_)->blockCountChanged(newBlockCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:233
// [-2] void modificationChanged(_Bool)
extern "C"
void C_ZN14QPlainTextEdit19modificationChangedEb(void *this_, bool arg0) {
  ((QPlainTextEdit*)this_)->modificationChanged(arg0);
}
//  main block end
