//  header block begin
// /usr/include/qt/QtWidgets/qabstractscrollarea.h
#include <qabstractscrollarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAbstractScrollArea is pure virtual: false
// QAbstractScrollArea has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractScrollArea : public QAbstractScrollArea {
public:
  virtual ~MyQAbstractScrollArea() {}
// void QAbstractScrollArea(class QWidget *)
MyQAbstractScrollArea(QWidget * parent) : QAbstractScrollArea(parent) {}
// void setViewportMargins(int, int, int, int)
  virtual void setViewportMargins(int left, int top, int right, int bottom) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setViewportMargins", &handled, 4, (uint64_t)left, (uint64_t)top, (uint64_t)right, (uint64_t)bottom, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
  }
  }
// void setViewportMargins(const class QMargins &)
  virtual void setViewportMargins(const QMargins & margins) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setViewportMargins", &handled, 1, (uint64_t)&margins, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::setViewportMargins(margins);
  }
  }
// QMargins viewportMargins()
  virtual QMargins viewportMargins() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportMargins", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QMargins*)(irv);
      // RecordRecordQMargins
    } else {
    return QAbstractScrollArea::viewportMargins();
  }
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::eventFilter(arg0, arg1);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::event(arg0);
  }
  }
// bool viewportEvent(class QEvent *)
  virtual bool viewportEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractScrollArea::viewportEvent(arg0);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::resizeEvent(arg0);
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::paintEvent(arg0);
  }
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mousePressEvent(arg0);
  }
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseReleaseEvent(arg0);
  }
  }
// void mouseDoubleClickEvent(class QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseDoubleClickEvent(arg0);
  }
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::mouseMoveEvent(arg0);
  }
  }
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::wheelEvent(arg0);
  }
  }
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::contextMenuEvent(arg0);
  }
  }
// void dragEnterEvent(class QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragEnterEvent(arg0);
  }
  }
// void dragMoveEvent(class QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragMoveEvent(arg0);
  }
  }
// void dragLeaveEvent(class QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dragLeaveEvent(arg0);
  }
  }
// void dropEvent(class QDropEvent *)
  virtual void dropEvent(QDropEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::dropEvent(arg0);
  }
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::keyPressEvent(arg0);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractScrollArea::scrollContentsBy(dx, dy);
  }
  }
// QSize viewportSizeHint()
  virtual QSize viewportSizeHint() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QAbstractScrollArea::viewportSizeHint();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QAbstractScrollArea10metaObjectEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:64
// [-2] void QAbstractScrollArea(class QWidget *)
extern "C"
void* C_ZN19QAbstractScrollAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQAbstractScrollArea*)(0);
  return 0; // new MyQAbstractScrollArea(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:65
// [-2] void ~QAbstractScrollArea()
extern "C"
void C_ZN19QAbstractScrollAreaD2Ev(void *this_) {
  delete (QAbstractScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:74
// [4] Qt::ScrollBarPolicy verticalScrollBarPolicy()
extern "C"
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea23verticalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->verticalScrollBarPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:75
// [-2] void setVerticalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C"
void C_ZN19QAbstractScrollArea26setVerticalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBarPolicy(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:76
// [8] QScrollBar * verticalScrollBar()
extern "C"
void* C_ZNK19QAbstractScrollArea17verticalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->verticalScrollBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:77
// [-2] void setVerticalScrollBar(class QScrollBar *)
extern "C"
void C_ZN19QAbstractScrollArea20setVerticalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setVerticalScrollBar(scrollbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:79
// [4] Qt::ScrollBarPolicy horizontalScrollBarPolicy()
extern "C"
Qt::ScrollBarPolicy C_ZNK19QAbstractScrollArea25horizontalScrollBarPolicyEv(void *this_) {
  return (Qt::ScrollBarPolicy)((QAbstractScrollArea*)this_)->horizontalScrollBarPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:80
// [-2] void setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C"
void C_ZN19QAbstractScrollArea28setHorizontalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *this_, Qt::ScrollBarPolicy arg0) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBarPolicy(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:81
// [8] QScrollBar * horizontalScrollBar()
extern "C"
void* C_ZNK19QAbstractScrollArea19horizontalScrollBarEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->horizontalScrollBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:82
// [-2] void setHorizontalScrollBar(class QScrollBar *)
extern "C"
void C_ZN19QAbstractScrollArea22setHorizontalScrollBarEP10QScrollBar(void *this_, QScrollBar * scrollbar) {
  ((QAbstractScrollArea*)this_)->setHorizontalScrollBar(scrollbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:84
// [8] QWidget * cornerWidget()
extern "C"
void* C_ZNK19QAbstractScrollArea12cornerWidgetEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->cornerWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:85
// [-2] void setCornerWidget(class QWidget *)
extern "C"
void C_ZN19QAbstractScrollArea15setCornerWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setCornerWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:87
// [-2] void addScrollBarWidget(class QWidget *, Qt::Alignment)
extern "C"
void C_ZN19QAbstractScrollArea18addScrollBarWidgetEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QWidget * widget, QFlags<Qt::AlignmentFlag> alignment) {
  ((QAbstractScrollArea*)this_)->addScrollBarWidget(widget, alignment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:90
// [8] QWidget * viewport()
extern "C"
void* C_ZNK19QAbstractScrollArea8viewportEv(void *this_) {
  return (void*)((QAbstractScrollArea*)this_)->viewport();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:91
// [-2] void setViewport(class QWidget *)
extern "C"
void C_ZN19QAbstractScrollArea11setViewportEP7QWidget(void *this_, QWidget * widget) {
  ((QAbstractScrollArea*)this_)->setViewport(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:92
// [8] QSize maximumViewportSize()
extern "C"
void* C_ZNK19QAbstractScrollArea19maximumViewportSizeEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->maximumViewportSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:94
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK19QAbstractScrollArea15minimumSizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:96
// [8] QSize sizeHint()
extern "C"
void* C_ZNK19QAbstractScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QAbstractScrollArea*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:98
// [-2] void setupViewport(class QWidget *)
extern "C"
void C_ZN19QAbstractScrollArea13setupViewportEP7QWidget(void *this_, QWidget * viewport) {
  ((QAbstractScrollArea*)this_)->setupViewport(viewport);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:100
// [4] QAbstractScrollArea::SizeAdjustPolicy sizeAdjustPolicy()
extern "C"
QAbstractScrollArea::SizeAdjustPolicy C_ZNK19QAbstractScrollArea16sizeAdjustPolicyEv(void *this_) {
  return (QAbstractScrollArea::SizeAdjustPolicy)((QAbstractScrollArea*)this_)->sizeAdjustPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractscrollarea.h:101
// [-2] void setSizeAdjustPolicy(enum QAbstractScrollArea::SizeAdjustPolicy)
extern "C"
void C_ZN19QAbstractScrollArea19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *this_, QAbstractScrollArea::SizeAdjustPolicy policy) {
  ((QAbstractScrollArea*)this_)->setSizeAdjustPolicy(policy);
}
//  main block end
