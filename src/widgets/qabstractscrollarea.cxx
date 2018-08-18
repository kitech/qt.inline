//  header block begin
// /usr/include/qt/QtWidgets/qabstractscrollarea.h
#ifndef protected
#define protected public
#endif
#include <qabstractscrollarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractScrollArea is pure virtual: false
// QAbstractScrollArea has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractScrollArea : public QAbstractScrollArea {
public:
  virtual ~MyQAbstractScrollArea() {}
// void QAbstractScrollArea(QWidget *)
MyQAbstractScrollArea(QWidget * parent) : QAbstractScrollArea(parent) {}
// Protected Visibility=Default Availability=Available
// void setViewportMargins(int, int, int, int)
  virtual void setViewportMargins(int left, int top, int right, int bottom) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setViewportMargins", &handled, 4, (uint64_t)left, (uint64_t)top, (uint64_t)right, (uint64_t)bottom, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
  }
  }

// Protected Visibility=Default Availability=Available
// void setViewportMargins(const QMargins &)
  virtual void setViewportMargins(const QMargins & margins) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setViewportMargins", &handled, 1, (uint64_t)&margins, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::setViewportMargins(margins);
  }
  }

// Protected Visibility=Default Availability=Available
// QMargins viewportMargins()
  virtual QMargins viewportMargins() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportMargins", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QMargins*)(irv);
      // RecordRecordQMargins
    } else {
    return QAbstractScrollArea::viewportMargins();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::viewportEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseDoubleClickEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::wheelEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragEnterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragLeaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dropEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QAbstractScrollArea::viewportSizeHint();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:105
// [-2] void setViewportMargins(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea18setViewportMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
}

// Protected Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:106
// [-2] void setViewportMargins(const QMargins &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea18setViewportMarginsERK8QMargins(void *this_, QMargins* margins) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::setViewportMargins(*margins);
}
#endif // QT_VERSION >= 0x040600

// Protected Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:107
// [16] QMargins viewportMargins()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea15viewportMarginsEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->QAbstractScrollArea::viewportMargins();
return new QMargins(rv);
}
#endif // QT_VERSION >= 0x050500

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:109
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:110
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:111
// [1] bool viewportEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QAbstractScrollArea13viewportEventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAbstractScrollArea*)this_)->QAbstractScrollArea::viewportEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:113
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:114
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:115
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:116
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:117
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea21mouseDoubleClickEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseDoubleClickEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:118
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:120
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::wheelEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:123
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:126
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragEnterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:127
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:128
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dragLeaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:129
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea9dropEventEP10QDropEvent(void *this_, QDropEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::dropEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:132
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:134
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QAbstractScrollArea*)this_)->QAbstractScrollArea::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:136
// [8] QSize viewportSizeHint()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea16viewportSizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->QAbstractScrollArea::viewportSizeHint();
return new QSize(rv);
}
#endif // QT_VERSION >= 0x050200

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea10metaObjectEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:64
// [-2] void QAbstractScrollArea(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractScrollAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractScrollArea*)(0);
  return 0; // new MyQAbstractScrollArea(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:65
// [-2] void ~QAbstractScrollArea()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollAreaD2Ev(void *this_) {
  delete (QAbstractScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:74
// [4] Qt::ScrollBarPolicy verticalScrollBarPolicy()
extern "C" Q_DECL_EXPORT
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea23verticalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->verticalScrollBarPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:75
// [-2] void setVerticalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea26setVerticalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBarPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:76
// [8] QScrollBar * verticalScrollBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea17verticalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->verticalScrollBar();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:77
// [-2] void setVerticalScrollBar(QScrollBar *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea20setVerticalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBar(scrollbar);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:79
// [4] Qt::ScrollBarPolicy horizontalScrollBarPolicy()
extern "C" Q_DECL_EXPORT
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea25horizontalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->horizontalScrollBarPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:80
// [-2] void setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea28setHorizontalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBarPolicy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:81
// [8] QScrollBar * horizontalScrollBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea19horizontalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->horizontalScrollBar();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:82
// [-2] void setHorizontalScrollBar(QScrollBar *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea22setHorizontalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBar(scrollbar);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:84
// [8] QWidget * cornerWidget()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea12cornerWidgetEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->cornerWidget();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:85
// [-2] void setCornerWidget(QWidget *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea15setCornerWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setCornerWidget(widget);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:87
// [-2] void addScrollBarWidget(QWidget *, Qt::Alignment)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea18addScrollBarWidgetEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * widget, QFlags<Qt::AlignmentFlag> alignment) {
  ((QAbstractScrollArea*)this_)->addScrollBarWidget(widget, alignment);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:88
// [-2] QWidgetList scrollBarWidgets(Qt::Alignment)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QWidgetList* C_ZN19QAbstractScrollArea16scrollBarWidgetsE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  auto rv = ((QAbstractScrollArea*)this_)->scrollBarWidgets(alignment);
return new QWidgetList(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:90
// [8] QWidget * viewport()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea8viewportEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->viewport();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:91
// [-2] void setViewport(QWidget *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea11setViewportEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setViewport(widget);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:92
// [8] QSize maximumViewportSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea19maximumViewportSizeEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->maximumViewportSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:94
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea15minimumSizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:96
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:98
// [-2] void setupViewport(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea13setupViewportEP7QWidget(void *this_, QWidget * viewport) {
  ((QAbstractScrollArea*)this_)->setupViewport(viewport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:100
// [4] QAbstractScrollArea::SizeAdjustPolicy sizeAdjustPolicy()
extern "C" Q_DECL_EXPORT
QAbstractScrollArea::SizeAdjustPolicy C_ZNK19QAbstractScrollArea16sizeAdjustPolicyEv(void *this_) {
  return (QAbstractScrollArea::SizeAdjustPolicy)((QAbstractScrollArea*)this_)->sizeAdjustPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:101
// [-2] void setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractScrollArea19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *this_, QAbstractScrollArea::SizeAdjustPolicy policy) {
  ((QAbstractScrollArea*)this_)->setSizeAdjustPolicy(policy);
}

//  main block end
