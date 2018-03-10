//  header block begin
// /usr/include/qt/QtWidgets/qtextedit.h
#ifndef protected
#define protected public
#endif
#include <qtextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTextEdit is pure virtual: false
// QTextEdit has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextEdit : public QTextEdit {
public:
  virtual ~MyQTextEdit() {}
// void QTextEdit(class QWidget *)
MyQTextEdit(QWidget * parent) : QTextEdit(parent) {}
// void QTextEdit(const class QString &, class QWidget *)
MyQTextEdit(const QString & text, QWidget * parent) : QTextEdit(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextEdit::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::timerEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::keyPressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(class QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::keyReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::resizeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::mousePressEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::mouseMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::mouseReleaseEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::mouseDoubleClickEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextEdit::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::contextMenuEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::dragEnterEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::dragLeaveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::dragMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::dropEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::focusInEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::focusOutEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::changeEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::wheelEvent(e);
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
    return QTextEdit::createMimeDataFromSelection();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool canInsertFromMimeData(const class QMimeData *)
  virtual bool canInsertFromMimeData(const QMimeData * source) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"canInsertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTextEdit::canInsertFromMimeData(source);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void insertFromMimeData(const class QMimeData *)
  virtual void insertFromMimeData(const QMimeData * source) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"insertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::insertFromMimeData(source);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(class QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::inputMethodEvent(arg0);
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
    QTextEdit::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void doSetTextCursor(const class QTextCursor &)
  virtual void doSetTextCursor(const QTextCursor & cursor) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"doSetTextCursor", &handled, 1, (uint64_t)&cursor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::doSetTextCursor(cursor);
  }
  }

// Protected Visibility=Default Availability=Available
// void zoomInF(float)
  virtual void zoomInF(float range_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"zoomInF", &handled, 1, (uint64_t)&range_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTextEdit::zoomInF(range_);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:273
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QTextEdit5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QTextEdit*)this_)->QTextEdit::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:274
// [-2] void timerEvent(class QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::timerEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:275
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::keyPressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:276
// [-2] void keyReleaseEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::keyReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:277
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::resizeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:278
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:279
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::mousePressEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:280
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::mouseMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:281
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::mouseReleaseEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:282
// [-2] void mouseDoubleClickEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::mouseDoubleClickEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:283
// [1] bool focusNextPrevChild(_Bool)
extern "C" Q_DECL_EXPORT
bool C_ZN9QTextEdit18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QTextEdit*)this_)->QTextEdit::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:285
// [-2] void contextMenuEvent(class QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::contextMenuEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:288
// [-2] void dragEnterEvent(class QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::dragEnterEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:289
// [-2] void dragLeaveEvent(class QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:290
// [-2] void dragMoveEvent(class QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:291
// [-2] void dropEvent(class QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit9dropEventEP10QDropEvent(void *this_, QDropEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::dropEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:293
// [-2] void focusInEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::focusInEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:294
// [-2] void focusOutEvent(class QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::focusOutEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:295
// [-2] void showEvent(class QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QTextEdit*)this_)->QTextEdit::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:296
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit11changeEventEP6QEvent(void *this_, QEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::changeEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:298
// [-2] void wheelEvent(class QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * e) {
  ((QTextEdit*)this_)->QTextEdit::wheelEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:301
// [8] QMimeData * createMimeDataFromSelection()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit27createMimeDataFromSelectionEv(void *this_) {
  return (void*)((QTextEdit*)this_)->QTextEdit::createMimeDataFromSelection();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:302
// [1] bool canInsertFromMimeData(const class QMimeData *)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit21canInsertFromMimeDataEPK9QMimeData(void *this_, const QMimeData * source) {
  return (bool)((QTextEdit*)this_)->QTextEdit::canInsertFromMimeData(source);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:303
// [-2] void insertFromMimeData(const class QMimeData *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit18insertFromMimeDataEPK9QMimeData(void *this_, const QMimeData * source) {
  ((QTextEdit*)this_)->QTextEdit::insertFromMimeData(source);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:305
// [-2] void inputMethodEvent(class QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * arg0) {
  ((QTextEdit*)this_)->QTextEdit::inputMethodEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:309
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QTextEdit*)this_)->QTextEdit::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:310
// [-2] void doSetTextCursor(const class QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15doSetTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextEdit*)this_)->QTextEdit::doSetTextCursor(*cursor);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:312
// [-2] void zoomInF(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit7zoomInFEf(void *this_, float range_) {
  ((QTextEdit*)this_)->QTextEdit::zoomInF(range_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:63
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit10metaObjectEv(void *this_) {
  return (void*)((QTextEdit*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:105
// [-2] void QTextEdit(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTextEdit*)(0);
  return  new MyQTextEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:106
// [-2] void QTextEdit(const class QString &, class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextEditC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQTextEdit*)(0);
  return  new MyQTextEdit(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:107
// [-2] void ~QTextEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEditD2Ev(void *this_) {
  delete (QTextEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:109
// [-2] void setDocument(class QTextDocument *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QTextEdit*)this_)->setDocument(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:110
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit8documentEv(void *this_) {
  return (void*)((QTextEdit*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:112
// [-2] void setPlaceholderText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit18setPlaceholderTextERK7QString(void *this_, QString* placeholderText) {
  ((QTextEdit*)this_)->setPlaceholderText(*placeholderText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:113
// [8] QString placeholderText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit15placeholderTextEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->placeholderText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:115
// [-2] void setTextCursor(const class QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13setTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextEdit*)this_)->setTextCursor(*cursor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:116
// [8] QTextCursor textCursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit10textCursorEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->textCursor();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:118
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit10isReadOnlyEv(void *this_) {
  return (bool)((QTextEdit*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:119
// [-2] void setReadOnly(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit11setReadOnlyEb(void *this_, bool ro) {
  ((QTextEdit*)this_)->setReadOnly(ro);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:121
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QTextEdit*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:122
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK9QTextEdit20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QTextEdit*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:124
// [8] qreal fontPointSize()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTextEdit13fontPointSizeEv(void *this_) {
  return (qreal)((QTextEdit*)this_)->fontPointSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:125
// [8] QString fontFamily()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit10fontFamilyEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->fontFamily();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:126
// [4] int fontWeight()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextEdit10fontWeightEv(void *this_) {
  return (int)((QTextEdit*)this_)->fontWeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:127
// [1] bool fontUnderline()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit13fontUnderlineEv(void *this_) {
  return (bool)((QTextEdit*)this_)->fontUnderline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:128
// [1] bool fontItalic()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit10fontItalicEv(void *this_) {
  return (bool)((QTextEdit*)this_)->fontItalic();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:129
// [16] QColor textColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit9textColorEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->textColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextedit.h:130
// [16] QColor textBackgroundColor()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit19textBackgroundColorEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->textBackgroundColor();
return new QColor(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:131
// [16] QFont currentFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit11currentFontEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->currentFont();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:132
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK9QTextEdit9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextEdit*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:134
// [-2] void mergeCurrentCharFormat(const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* modifier) {
  ((QTextEdit*)this_)->mergeCurrentCharFormat(*modifier);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:136
// [-2] void setCurrentCharFormat(const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit20setCurrentCharFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QTextEdit*)this_)->setCurrentCharFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:137
// [16] QTextCharFormat currentCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit17currentCharFormatEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->currentCharFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:139
// [4] QTextEdit::AutoFormatting autoFormatting()
extern "C" Q_DECL_EXPORT
QTextEdit::AutoFormatting* C_ZNK9QTextEdit14autoFormattingEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->autoFormatting();
return new QTextEdit::AutoFormatting(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:140
// [-2] void setAutoFormatting(QTextEdit::AutoFormatting)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit17setAutoFormattingE6QFlagsINS_18AutoFormattingFlagEE(void *this_, QFlags<QTextEdit::AutoFormattingFlag> features) {
  ((QTextEdit*)this_)->setAutoFormatting(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:142
// [1] bool tabChangesFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit15tabChangesFocusEv(void *this_) {
  return (bool)((QTextEdit*)this_)->tabChangesFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:143
// [-2] void setTabChangesFocus(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit18setTabChangesFocusEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setTabChangesFocus(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:145
// [-2] void setDocumentTitle(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16setDocumentTitleERK7QString(void *this_, QString* title) {
  ((QTextEdit*)this_)->setDocumentTitle(*title);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:147
// [8] QString documentTitle()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit13documentTitleEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->documentTitle();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:150
// [1] bool isUndoRedoEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit17isUndoRedoEnabledEv(void *this_) {
  return (bool)((QTextEdit*)this_)->isUndoRedoEnabled();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:152
// [-2] void setUndoRedoEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QTextEdit*)this_)->setUndoRedoEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:155
// [4] QTextEdit::LineWrapMode lineWrapMode()
extern "C" Q_DECL_EXPORT
QTextEdit::LineWrapMode C_ZNK9QTextEdit12lineWrapModeEv(void *this_) {
  return (QTextEdit::LineWrapMode)((QTextEdit*)this_)->lineWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:156
// [-2] void setLineWrapMode(enum QTextEdit::LineWrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15setLineWrapModeENS_12LineWrapModeE(void *this_, QTextEdit::LineWrapMode mode) {
  ((QTextEdit*)this_)->setLineWrapMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:158
// [4] int lineWrapColumnOrWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextEdit21lineWrapColumnOrWidthEv(void *this_) {
  return (int)((QTextEdit*)this_)->lineWrapColumnOrWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:159
// [-2] void setLineWrapColumnOrWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit24setLineWrapColumnOrWidthEi(void *this_, int w) {
  ((QTextEdit*)this_)->setLineWrapColumnOrWidth(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:161
// [4] QTextOption::WrapMode wordWrapMode()
extern "C" Q_DECL_EXPORT
QTextOption::WrapMode C_ZNK9QTextEdit12wordWrapModeEv(void *this_) {
  return (QTextOption::WrapMode)((QTextEdit*)this_)->wordWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:162
// [-2] void setWordWrapMode(class QTextOption::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void *this_, QTextOption::WrapMode policy) {
  ((QTextEdit*)this_)->setWordWrapMode(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:164
// [1] bool find(const class QString &, class QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN9QTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QString* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QTextEdit*)this_)->find(*exp, options);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtWidgets/qtextedit.h:166
// [1] bool find(const class QRegExp &, class QTextDocument::FindFlags)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN9QTextEdit4findERK7QRegExp6QFlagsIN13QTextDocument8FindFlagEE(void *this_, QRegExp* exp, QFlags<QTextDocument::FindFlag> options) {
  return (bool)((QTextEdit*)this_)->find(*exp, options);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:169
// [8] QString toPlainText()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit11toPlainTextEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->toPlainText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:171
// [8] QString toHtml()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit6toHtmlEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->toHtml();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:174
// [-2] void ensureCursorVisible()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit19ensureCursorVisibleEv(void *this_) {
  ((QTextEdit*)this_)->ensureCursorVisible();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:176
// [16] QVariant loadResource(int, const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextEdit12loadResourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextEdit*)this_)->loadResource(type_, *name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:178
// [8] QMenu * createStandardContextMenu()
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextEdit25createStandardContextMenuEv(void *this_) {
  return (void*)((QTextEdit*)this_)->createStandardContextMenu();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextedit.h:179
// [8] QMenu * createStandardContextMenu(const class QPoint &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextEdit25createStandardContextMenuERK6QPoint(void *this_, QPoint* position) {
  return (void*)((QTextEdit*)this_)->createStandardContextMenu(*position);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:182
// [8] QTextCursor cursorForPosition(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit17cursorForPositionERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QTextEdit*)this_)->cursorForPosition(*pos);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:183
// [16] QRect cursorRect(const class QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit10cursorRectERK11QTextCursor(void *this_, QTextCursor* cursor) {
  auto rv = ((QTextEdit*)this_)->cursorRect(*cursor);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:184
// [16] QRect cursorRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit10cursorRectEv(void *this_) {
  auto rv = ((QTextEdit*)this_)->cursorRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:186
// [8] QString anchorAt(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit8anchorAtERK6QPoint(void *this_, QPoint* pos) {
  auto rv = ((QTextEdit*)this_)->anchorAt(*pos);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:188
// [1] bool overwriteMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit13overwriteModeEv(void *this_) {
  return (bool)((QTextEdit*)this_)->overwriteMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:189
// [-2] void setOverwriteMode(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16setOverwriteModeEb(void *this_, bool overwrite) {
  ((QTextEdit*)this_)->setOverwriteMode(overwrite);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:192
// [4] int tabStopWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextEdit12tabStopWidthEv(void *this_) {
  return (int)((QTextEdit*)this_)->tabStopWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:193
// [-2] void setTabStopWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15setTabStopWidthEi(void *this_, int width) {
  ((QTextEdit*)this_)->setTabStopWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:196
// [8] qreal tabStopDistance()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTextEdit15tabStopDistanceEv(void *this_) {
  return (qreal)((QTextEdit*)this_)->tabStopDistance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:197
// [-2] void setTabStopDistance(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit18setTabStopDistanceEd(void *this_, qreal distance) {
  ((QTextEdit*)this_)->setTabStopDistance(distance);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:199
// [4] int cursorWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextEdit11cursorWidthEv(void *this_) {
  return (int)((QTextEdit*)this_)->cursorWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:200
// [-2] void setCursorWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14setCursorWidthEi(void *this_, int width) {
  ((QTextEdit*)this_)->setCursorWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:202
// [1] bool acceptRichText()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit14acceptRichTextEv(void *this_) {
  return (bool)((QTextEdit*)this_)->acceptRichText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:203
// [-2] void setAcceptRichText(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit17setAcceptRichTextEb(void *this_, bool accept) {
  ((QTextEdit*)this_)->setAcceptRichText(accept);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextedit.h:213
// [-2] void moveCursor(class QTextCursor::MoveOperation, class QTextCursor::MoveMode)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit10moveCursorEN11QTextCursor13MoveOperationENS0_8MoveModeE(void *this_, QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode) {
  ((QTextEdit*)this_)->moveCursor(operation, mode);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextedit.h:215
// [1] bool canPaste()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextEdit8canPasteEv(void *this_) {
  return (bool)((QTextEdit*)this_)->canPaste();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtextedit.h:217
// [-2] void print(class QPagedPaintDevice *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZNK9QTextEdit5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QTextEdit*)this_)->print(printer);
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:219
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery property) {
  auto rv = ((QTextEdit*)this_)->inputMethodQuery(property);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:220
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery, class QVariant)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE8QVariant(void *this_, Qt::InputMethodQuery query, QVariant* argument) {
  auto rv = ((QTextEdit*)this_)->inputMethodQuery(query, *argument);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:223
// [-2] void setFontPointSize(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16setFontPointSizeEd(void *this_, qreal s) {
  ((QTextEdit*)this_)->setFontPointSize(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:224
// [-2] void setFontFamily(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13setFontFamilyERK7QString(void *this_, QString* fontFamily) {
  ((QTextEdit*)this_)->setFontFamily(*fontFamily);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:225
// [-2] void setFontWeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13setFontWeightEi(void *this_, int w) {
  ((QTextEdit*)this_)->setFontWeight(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:226
// [-2] void setFontUnderline(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16setFontUnderlineEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setFontUnderline(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:227
// [-2] void setFontItalic(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13setFontItalicEb(void *this_, bool b) {
  ((QTextEdit*)this_)->setFontItalic(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:228
// [-2] void setTextColor(const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit12setTextColorERK6QColor(void *this_, QColor* c) {
  ((QTextEdit*)this_)->setTextColor(*c);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtextedit.h:229
// [-2] void setTextBackgroundColor(const class QColor &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit22setTextBackgroundColorERK6QColor(void *this_, QColor* c) {
  ((QTextEdit*)this_)->setTextBackgroundColor(*c);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:230
// [-2] void setCurrentFont(const class QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14setCurrentFontERK5QFont(void *this_, QFont* f) {
  ((QTextEdit*)this_)->setCurrentFont(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:231
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> a) {
  ((QTextEdit*)this_)->setAlignment(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:233
// [-2] void setPlainText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit12setPlainTextERK7QString(void *this_, QString* text) {
  ((QTextEdit*)this_)->setPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:235
// [-2] void setHtml(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit7setHtmlERK7QString(void *this_, QString* text) {
  ((QTextEdit*)this_)->setHtml(*text);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextedit.h:237
// [-2] void setText(const class QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit7setTextERK7QString(void *this_, QString* text) {
  ((QTextEdit*)this_)->setText(*text);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:240
// [-2] void cut()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit3cutEv(void *this_) {
  ((QTextEdit*)this_)->cut();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:241
// [-2] void copy()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit4copyEv(void *this_) {
  ((QTextEdit*)this_)->copy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:242
// [-2] void paste()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit5pasteEv(void *this_) {
  ((QTextEdit*)this_)->paste();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextedit.h:245
// [-2] void undo()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit4undoEv(void *this_) {
  ((QTextEdit*)this_)->undo();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtextedit.h:246
// [-2] void redo()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit4redoEv(void *this_) {
  ((QTextEdit*)this_)->redo();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:248
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit5clearEv(void *this_) {
  ((QTextEdit*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:249
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit9selectAllEv(void *this_) {
  ((QTextEdit*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:251
// [-2] void insertPlainText(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit15insertPlainTextERK7QString(void *this_, QString* text) {
  ((QTextEdit*)this_)->insertPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:253
// [-2] void insertHtml(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit10insertHtmlERK7QString(void *this_, QString* text) {
  ((QTextEdit*)this_)->insertHtml(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:258
// [-2] void scrollToAnchor(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit14scrollToAnchorERK7QString(void *this_, QString* name) {
  ((QTextEdit*)this_)->scrollToAnchor(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:260
// [-2] void zoomIn(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit6zoomInEi(void *this_, int range_) {
  ((QTextEdit*)this_)->zoomIn(range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:261
// [-2] void zoomOut(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit7zoomOutEi(void *this_, int range_) {
  ((QTextEdit*)this_)->zoomOut(range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:264
// [-2] void textChanged()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit11textChangedEv(void *this_) {
  ((QTextEdit*)this_)->textChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:265
// [-2] void undoAvailable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13undoAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->undoAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:266
// [-2] void redoAvailable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13redoAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->redoAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:267
// [-2] void currentCharFormatChanged(const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QTextEdit*)this_)->currentCharFormatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:268
// [-2] void copyAvailable(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit13copyAvailableEb(void *this_, bool b) {
  ((QTextEdit*)this_)->copyAvailable(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:269
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit16selectionChangedEv(void *this_) {
  ((QTextEdit*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:270
// [-2] void cursorPositionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextEdit21cursorPositionChangedEv(void *this_) {
  ((QTextEdit*)this_)->cursorPositionChanged();
}

//  main block end
