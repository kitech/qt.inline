//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qplaintextedit.h
#ifndef protected
#define protected public
#endif
#include <qplaintextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPlainTextEdit is pure virtual: false
// QPlainTextEdit has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPlainTextEdit : public QPlainTextEdit {
public:
  virtual ~MyQPlainTextEdit() {}
// void QPlainTextEdit(QWidget *)
MyQPlainTextEdit(QWidget * parent) : QPlainTextEdit(parent) {}
// void QPlainTextEdit(const QString &, QWidget *)
MyQPlainTextEdit(const QString & text, QWidget * parent) : QPlainTextEdit(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
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

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::timerEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::keyPressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::keyReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::resizeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mousePressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::mouseDoubleClickEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(bool)
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

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::contextMenuEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragEnterEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragLeaveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dragMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::dropEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::focusInEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::focusOutEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::changeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::wheelEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// bool canInsertFromMimeData(const QMimeData *)
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

// Protected virtual Visibility=Default Availability=Available
// void insertFromMimeData(const QMimeData *)
  virtual void insertFromMimeData(const QMimeData * source) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"insertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::insertFromMimeData(source);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::inputMethodEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// void doSetTextCursor(const QTextCursor &)
  virtual void doSetTextCursor(const QTextCursor & cursor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doSetTextCursor", &handled, 1, (uint64_t)&cursor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::doSetTextCursor(cursor);
  }
  }

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
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

// Protected Visibility=Default Availability=Available
// QRectF blockBoundingRect(const QTextBlock &)
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

// Protected Visibility=Default Availability=Available
// QRectF blockBoundingGeometry(const QTextBlock &)
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

// Protected Visibility=Default Availability=Available
// QAbstractTextDocumentLayout::PaintContext getPaintContext()
// Protected Visibility=Default Availability=Available
// void zoomInF(float)
  virtual void zoomInF(float range_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"zoomInF", &handled, 1, (uint64_t)&range_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextEdit::zoomInF(range_);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:236
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QPlainTextEdit5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QPlainTextEdit*)this_)->QPlainTextEdit::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:237
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::timerEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:238
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::keyPressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:239
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::keyReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:240
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::resizeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:241
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:242
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:243
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:244
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:245
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::mouseDoubleClickEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:246
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN14QPlainTextEdit18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QPlainTextEdit*)this_)->QPlainTextEdit::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:248
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::contextMenuEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:251
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::dragEnterEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:252
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:253
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:254
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit9dropEventEP10QDropEvent(void *this_, QDropEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::dropEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:256
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::focusInEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:257
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::focusOutEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:258
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:259
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::changeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:261
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:264
// [8] QMimeData * createMimeDataFromSelection()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit27createMimeDataFromSelectionEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->QPlainTextEdit::createMimeDataFromSelection();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:265
// [1] bool canInsertFromMimeData(const QMimeData *)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit21canInsertFromMimeDataEPK9QMimeData(void *this_, const QMimeData * source) {
  return (bool)((QPlainTextEdit*)this_)->QPlainTextEdit::canInsertFromMimeData(source);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:266
// [-2] void insertFromMimeData(const QMimeData *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit18insertFromMimeDataEPK9QMimeData(void *this_, const QMimeData * source) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::insertFromMimeData(source);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:268
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::inputMethodEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:272
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:273
// [-2] void doSetTextCursor(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15doSetTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::doSetTextCursor(*cursor);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:275
// [16] QTextBlock firstVisibleBlock()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit17firstVisibleBlockEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->QPlainTextEdit::firstVisibleBlock();
return new QTextBlock(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:276
// [16] QPointF contentOffset()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit13contentOffsetEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->QPlainTextEdit::contentOffset();
return new QPointF(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:277
// [32] QRectF blockBoundingRect(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QPlainTextEdit*)this_)->QPlainTextEdit::blockBoundingRect(*block);
return new QRectF(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:278
// [32] QRectF blockBoundingGeometry(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit21blockBoundingGeometryERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QPlainTextEdit*)this_)->QPlainTextEdit::blockBoundingGeometry(*block);
return new QRectF(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:281
// [-2] void zoomInF(float)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit7zoomInFEf(void *this_, float range_) {
  ((QPlainTextEdit*)this_)->QPlainTextEdit::zoomInF(range_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:66
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit10metaObjectEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:94
// [-2] void QPlainTextEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QPlainTextEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQPlainTextEdit*)(0);
  return  new MyQPlainTextEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:95
// [-2] void QPlainTextEdit(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QPlainTextEditC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQPlainTextEdit*)(0);
  return  new MyQPlainTextEdit(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:96
// [-2] void ~QPlainTextEdit()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEditD2Ev(void *this_) {
  delete (QPlainTextEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:98
// [-2] void setDocument(QTextDocument *)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QPlainTextEdit*)this_)->setDocument(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:99
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit8documentEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:101
// [-2] void setPlaceholderText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit18setPlaceholderTextERK7QString(void *this_, QString* placeholderText) {
  ((QPlainTextEdit*)this_)->setPlaceholderText(*placeholderText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:102
// [8] QString placeholderText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit15placeholderTextEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->placeholderText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:104
// [-2] void setTextCursor(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13setTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QPlainTextEdit*)this_)->setTextCursor(*cursor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:105
// [8] QTextCursor textCursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit10textCursorEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->textCursor();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:107
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit10isReadOnlyEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:108
// [-2] void setReadOnly(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit11setReadOnlyEb(void *this_, bool ro) {
  ((QPlainTextEdit*)this_)->setReadOnly(ro);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:110
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QPlainTextEdit*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:111
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK14QPlainTextEdit20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QPlainTextEdit*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:113
// [-2] void mergeCurrentCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* modifier) {
  ((QPlainTextEdit*)this_)->mergeCurrentCharFormat(*modifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:114
// [-2] void setCurrentCharFormat(const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QPlainTextEdit*)this_)->setCurrentCharFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:115
// [16] QTextCharFormat currentCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit17currentCharFormatEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->currentCharFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:117
// [1] bool tabChangesFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit15tabChangesFocusEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->tabChangesFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:118
// [-2] void setTabChangesFocus(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit18setTabChangesFocusEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->setTabChangesFocus(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:120
// [-2] void setDocumentTitle(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *this_, QString* title) {
  ((QPlainTextEdit*)this_)->setDocumentTitle(*title);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:122
// [8] QString documentTitle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit13documentTitleEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->documentTitle();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:125
// [1] bool isUndoRedoEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->isUndoRedoEnabled();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:127
// [-2] void setUndoRedoEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QPlainTextEdit*)this_)->setUndoRedoEnabled(enable);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:130
// [-2] void setMaximumBlockCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QPlainTextEdit*)this_)->setMaximumBlockCount(maximum);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:132
// [4] int maximumBlockCount()
extern "C" Q_DECL_EXPORT
int C_ZNK14QPlainTextEdit17maximumBlockCountEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->maximumBlockCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:136
// [4] QPlainTextEdit::LineWrapMode lineWrapMode()
extern "C" Q_DECL_EXPORT
QPlainTextEdit::LineWrapMode C_ZNK14QPlainTextEdit12lineWrapModeEv(void *this_) {
  return (QPlainTextEdit::LineWrapMode)((QPlainTextEdit*)this_)->lineWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:137
// [-2] void setLineWrapMode(QPlainTextEdit::LineWrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15setLineWrapModeENS_12LineWrapModeE(void *this_, QPlainTextEdit::LineWrapMode mode) {
  ((QPlainTextEdit*)this_)->setLineWrapMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:139
// [4] QTextOption::WrapMode wordWrapMode()
extern "C" Q_DECL_EXPORT
QTextOption::WrapMode C_ZNK14QPlainTextEdit12wordWrapModeEv(void *this_) {
  return (QTextOption::WrapMode)((QPlainTextEdit*)this_)->wordWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:140
// [-2] void setWordWrapMode(QTextOption::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *this_, QTextOption::WrapMode policy) {
  ((QPlainTextEdit*)this_)->setWordWrapMode(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:142
// [-2] void setBackgroundVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit20setBackgroundVisibleEb(void *this_, bool visible) {
  ((QPlainTextEdit*)this_)->setBackgroundVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:143
// [1] bool backgroundVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit17backgroundVisibleEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->backgroundVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:145
// [-2] void setCenterOnScroll(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit17setCenterOnScrollEb(void *this_, bool enabled) {
  ((QPlainTextEdit*)this_)->setCenterOnScroll(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:146
// [1] bool centerOnScroll()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit14centerOnScrollEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->centerOnScroll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:148
// [1] bool find(const QString &, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN14QPlainTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QString* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QPlainTextEdit*)this_)->find(*exp, options);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtWidgets/qplaintextedit.h:150
// [1] bool find(const QRegExp &, QTextDocument::FindFlags)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN14QPlainTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QRegExp* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QPlainTextEdit*)this_)->find(*exp, options);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:153
// [8] QString toPlainText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit11toPlainTextEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->toPlainText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:156
// [-2] void ensureCursorVisible()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit19ensureCursorVisibleEv(void *this_) {
  ((QPlainTextEdit*)this_)->ensureCursorVisible();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:158
// [16] QVariant loadResource(int, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QPlainTextEdit12loadResourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QPlainTextEdit*)this_)->loadResource(type_, *name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:160
// [8] QMenu * createStandardContextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZN14QPlainTextEdit25createStandardContextMenuEv(void *this_) {
  return (void*)((QPlainTextEdit*)this_)->createStandardContextMenu();
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWidgets/qplaintextedit.h:161
// [8] QMenu * createStandardContextMenu(const QPoint &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN14QPlainTextEdit25createStandardContextMenuERK6QPoint(void *this_, QPoint* position) {
  return (void*)((QPlainTextEdit*)this_)->createStandardContextMenu(*position);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:164
// [8] QTextCursor cursorForPosition(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit17cursorForPositionERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QPlainTextEdit*)this_)->cursorForPosition(*pos);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:165
// [16] QRect cursorRect(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit10cursorRectERK11QTextCursor(void *this_, QTextCursor* cursor) {
  auto rv = ((QPlainTextEdit*)this_)->cursorRect(*cursor);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:166
// [16] QRect cursorRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit10cursorRectEv(void *this_) {
  auto rv = ((QPlainTextEdit*)this_)->cursorRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qplaintextedit.h:168
// [8] QString anchorAt(const QPoint &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit8anchorAtERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QPlainTextEdit*)this_)->anchorAt(*pos);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:170
// [1] bool overwriteMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit13overwriteModeEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->overwriteMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:171
// [-2] void setOverwriteMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16setOverwriteModeEb(void *this_, bool overwrite) {
  ((QPlainTextEdit*)this_)->setOverwriteMode(overwrite);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:174
// [4] int tabStopWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK14QPlainTextEdit12tabStopWidthEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->tabStopWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:175
// [-2] void setTabStopWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15setTabStopWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setTabStopWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:178
// [8] qreal tabStopDistance()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QPlainTextEdit15tabStopDistanceEv(void *this_) {
  return (qreal)((QPlainTextEdit*)this_)->tabStopDistance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:179
// [-2] void setTabStopDistance(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit18setTabStopDistanceEd(void *this_, qreal distance) {
  ((QPlainTextEdit*)this_)->setTabStopDistance(distance);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:181
// [4] int cursorWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK14QPlainTextEdit11cursorWidthEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->cursorWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:182
// [-2] void setCursorWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextEdit*)this_)->setCursorWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:187
// [-2] void moveCursor(QTextCursor::MoveOperation, QTextCursor::MoveMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *this_, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  ((QPlainTextEdit*)this_)->moveCursor(operation, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:189
// [1] bool canPaste()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QPlainTextEdit8canPasteEv(void *this_) {
  return (bool)((QPlainTextEdit*)this_)->canPaste();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:191
// [-2] void print(QPagedPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QPlainTextEdit5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QPlainTextEdit*)this_)->print(printer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:193
// [4] int blockCount()
extern "C" Q_DECL_EXPORT
int C_ZNK14QPlainTextEdit10blockCountEv(void *this_) {
  return (int)((QPlainTextEdit*)this_)->blockCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:194
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery property) {
  auto rv = ((QPlainTextEdit*)this_)->inputMethodQuery(property);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:195
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, QVariant)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QPlainTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery query, QVariant* argument) {
  auto rv = ((QPlainTextEdit*)this_)->inputMethodQuery(query, *argument);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:199
// [-2] void setPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit12setPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->setPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:202
// [-2] void cut()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit3cutEv(void *this_) {
  ((QPlainTextEdit*)this_)->cut();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:203
// [-2] void copy()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit4copyEv(void *this_) {
  ((QPlainTextEdit*)this_)->copy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:204
// [-2] void paste()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit5pasteEv(void *this_) {
  ((QPlainTextEdit*)this_)->paste();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:207
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit4undoEv(void *this_) {
  ((QPlainTextEdit*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:208
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit4redoEv(void *this_) {
  ((QPlainTextEdit*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:210
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit5clearEv(void *this_) {
  ((QPlainTextEdit*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:211
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit9selectAllEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:213
// [-2] void insertPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15insertPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->insertPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:215
// [-2] void appendPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit15appendPlainTextERK7QString(void *this_, QString* text) {
  ((QPlainTextEdit*)this_)->appendPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:216
// [-2] void appendHtml(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit10appendHtmlERK7QString(void *this_, QString* html) {
  ((QPlainTextEdit*)this_)->appendHtml(*html);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:218
// [-2] void centerCursor()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit12centerCursorEv(void *this_) {
  ((QPlainTextEdit*)this_)->centerCursor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:220
// [-2] void zoomIn(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit6zoomInEi(void *this_, int range_) {
  ((QPlainTextEdit*)this_)->zoomIn(range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:221
// [-2] void zoomOut(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit7zoomOutEi(void *this_, int range_) {
  ((QPlainTextEdit*)this_)->zoomOut(range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:224
// [-2] void textChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit11textChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->textChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:225
// [-2] void undoAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13undoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->undoAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:226
// [-2] void redoAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13redoAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->redoAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:227
// [-2] void copyAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13copyAvailableEb(void *this_, bool b) {
  ((QPlainTextEdit*)this_)->copyAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:228
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit16selectionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:229
// [-2] void cursorPositionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit21cursorPositionChangedEv(void *this_) {
  ((QPlainTextEdit*)this_)->cursorPositionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:231
// [-2] void updateRequest(const QRect &, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit13updateRequestERK5QRecti(void *this_, QRect* rect, int dy) {
  ((QPlainTextEdit*)this_)->updateRequest(*rect, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:232
// [-2] void blockCountChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QPlainTextEdit*)this_)->blockCountChanged(newBlockCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:233
// [-2] void modificationChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QPlainTextEdit19modificationChangedEb(void *this_, bool arg0) {
  ((QPlainTextEdit*)this_)->modificationChanged(arg0);
}

//  main block end
