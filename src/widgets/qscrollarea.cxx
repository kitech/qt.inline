//  header block begin
// /usr/include/qt/QtWidgets/qscrollarea.h
#ifndef protected
#define protected public
#endif
#include <qscrollarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollArea is pure virtual: false
// QScrollArea has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQScrollArea : public QScrollArea {
public:
  virtual ~MyQScrollArea() {}
// void QScrollArea(QWidget *)
MyQScrollArea(QWidget * parent) : QScrollArea(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QScrollArea::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QScrollArea::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QScrollArea::resizeEvent(arg0);
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
    QScrollArea::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QSize viewportSizeHint()
  virtual QSize viewportSizeHint() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QScrollArea::viewportSizeHint();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:81
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QScrollArea*)this_)->QScrollArea::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:82
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QScrollArea*)this_)->QScrollArea::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:83
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QScrollArea*)this_)->QScrollArea::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:84
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QScrollArea*)this_)->QScrollArea::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:86
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea16viewportSizeHintEv(void *this_) {
  auto rv = ((QScrollArea*)this_)->QScrollArea::viewportSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea10metaObjectEv(void *this_) {
  return (void*)((QScrollArea*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:59
// [-2] void QScrollArea(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQScrollArea*)(0);
  return  new MyQScrollArea(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:60
// [-2] void ~QScrollArea()
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollAreaD2Ev(void *this_) {
  delete (QScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:62
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea6widgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:63
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QScrollArea*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:64
// [8] QWidget * takeWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollArea10takeWidgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->takeWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:66
// [1] bool widgetResizable()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QScrollArea15widgetResizableEv(void *this_) {
  return (bool)((QScrollArea*)this_)->widgetResizable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:67
// [-2] void setWidgetResizable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea18setWidgetResizableEb(void *this_, bool resizable) {
  ((QScrollArea*)this_)->setWidgetResizable(resizable);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:69
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QScrollArea*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:71
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QScrollArea*)this_)->focusNextPrevChild(next);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:73
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QScrollArea9alignmentEv(void *this_) {
  return (Qt::Alignment)((QScrollArea*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:74
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> arg0) {
  ((QScrollArea*)this_)->setAlignment(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:76
// [-2] void ensureVisible(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea13ensureVisibleEiiii(void *this_, int x, int y, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureVisible(x, y, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qscrollarea.h:77
// [-2] void ensureWidgetVisible(QWidget *, int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii(void *this_, QWidget * childWidget, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}
#endif // QT_VERSION >= 0x040200

//  main block end
