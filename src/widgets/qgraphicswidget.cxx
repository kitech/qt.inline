//  header block begin
// /usr/include/qt/QtWidgets/qgraphicswidget.h
#include <qgraphicswidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsWidget is pure virtual: false
// QGraphicsWidget has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsWidget : public QGraphicsWidget {
public:
  virtual ~MyQGraphicsWidget() {}
// void QGraphicsWidget(class QGraphicsItem *, Qt::WindowFlags)
MyQGraphicsWidget(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) : QGraphicsWidget(parent, wFlags) {}
// void initStyleOption(class QStyleOption *)
  virtual void initStyleOption(QStyleOption * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::initStyleOption(option);
  }
  }
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSizeF*)(irv);
      // RecordRecordQSizeF
    } else {
    return QGraphicsWidget::sizeHint(which, constraint);
  }
  }
// void updateGeometry()
  virtual void updateGeometry() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometry", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::updateGeometry();
  }
  }
// QVariant itemChange(enum QGraphicsItem::GraphicsItemChange, const class QVariant &)
  virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"itemChange", &handled, 2, (uint64_t)change, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsWidget::itemChange(change, value);
  }
  }
// QVariant propertyChange(const class QString &, const class QVariant &)
  virtual QVariant propertyChange(const QString & propertyName, const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"propertyChange", &handled, 2, (uint64_t)&propertyName, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsWidget::propertyChange(propertyName, value);
  }
  }
// bool sceneEvent(class QEvent *)
  virtual bool sceneEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsWidget::sceneEvent(event);
  }
  }
// bool windowFrameEvent(class QEvent *)
  virtual bool windowFrameEvent(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"windowFrameEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsWidget::windowFrameEvent(e);
  }
  }
// Qt::WindowFrameSection windowFrameSectionAt(const class QPointF &)
  virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF & pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"windowFrameSectionAt", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::WindowFrameSection)(int)(irv);
      // ElaboratedEnumQt::WindowFrameSection
    } else {
    return QGraphicsWidget::windowFrameSectionAt(pos);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsWidget::event(event);
  }
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::changeEvent(event);
  }
  }
// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::closeEvent(event);
  }
  }
// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::focusInEvent(event);
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
    return QGraphicsWidget::focusNextPrevChild(next);
  }
  }
// void focusOutEvent(class QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::focusOutEvent(event);
  }
  }
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::hideEvent(event);
  }
  }
// void moveEvent(class QGraphicsSceneMoveEvent *)
  virtual void moveEvent(QGraphicsSceneMoveEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::moveEvent(event);
  }
  }
// void polishEvent()
  virtual void polishEvent() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"polishEvent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::polishEvent();
  }
  }
// void resizeEvent(class QGraphicsSceneResizeEvent *)
  virtual void resizeEvent(QGraphicsSceneResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::resizeEvent(event);
  }
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::showEvent(event);
  }
  }
// void hoverMoveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::hoverMoveEvent(event);
  }
  }
// void hoverLeaveEvent(class QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::hoverLeaveEvent(event);
  }
  }
// void grabMouseEvent(class QEvent *)
  virtual void grabMouseEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"grabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::grabMouseEvent(event);
  }
  }
// void ungrabMouseEvent(class QEvent *)
  virtual void ungrabMouseEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"ungrabMouseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::ungrabMouseEvent(event);
  }
  }
// void grabKeyboardEvent(class QEvent *)
  virtual void grabKeyboardEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"grabKeyboardEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::grabKeyboardEvent(event);
  }
  }
// void ungrabKeyboardEvent(class QEvent *)
  virtual void ungrabKeyboardEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"ungrabKeyboardEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsWidget::ungrabKeyboardEvent(event);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QGraphicsWidget10metaObjectEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:83
// [-2] void QGraphicsWidget(class QGraphicsItem *, Qt::WindowFlags)
extern "C"
void* C_ZN15QGraphicsWidgetC2EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  auto _nilp = (MyQGraphicsWidget*)(0);
  return  new MyQGraphicsWidget(parent, wFlags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:84
// [-2] void ~QGraphicsWidget()
extern "C"
void C_ZN15QGraphicsWidgetD2Ev(void *this_) {
  delete (QGraphicsWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:85
// [8] QGraphicsLayout * layout()
extern "C"
void* C_ZNK15QGraphicsWidget6layoutEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->layout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:86
// [-2] void setLayout(class QGraphicsLayout *)
extern "C"
void C_ZN15QGraphicsWidget9setLayoutEP15QGraphicsLayout(void *this_, QGraphicsLayout * layout) {
  ((QGraphicsWidget*)this_)->setLayout(layout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:87
// [-2] void adjustSize()
extern "C"
void C_ZN15QGraphicsWidget10adjustSizeEv(void *this_) {
  ((QGraphicsWidget*)this_)->adjustSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:89
// [4] Qt::LayoutDirection layoutDirection()
extern "C"
Qt::LayoutDirection C_ZNK15QGraphicsWidget15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QGraphicsWidget*)this_)->layoutDirection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:90
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN15QGraphicsWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGraphicsWidget*)this_)->setLayoutDirection(direction);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:91
// [-2] void unsetLayoutDirection()
extern "C"
void C_ZN15QGraphicsWidget20unsetLayoutDirectionEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetLayoutDirection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:93
// [8] QStyle * style()
extern "C"
void* C_ZNK15QGraphicsWidget5styleEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->style();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:94
// [-2] void setStyle(class QStyle *)
extern "C"
void C_ZN15QGraphicsWidget8setStyleEP6QStyle(void *this_, QStyle * style) {
  ((QGraphicsWidget*)this_)->setStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:96
// [16] QFont font()
extern "C"
void* C_ZNK15QGraphicsWidget4fontEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->font();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:97
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN15QGraphicsWidget7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsWidget*)this_)->setFont(*font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:99
// [16] QPalette palette()
extern "C"
void* C_ZNK15QGraphicsWidget7paletteEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->palette();
return new QPalette(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:100
// [-2] void setPalette(const class QPalette &)
extern "C"
void C_ZN15QGraphicsWidget10setPaletteERK8QPalette(void *this_, QPalette* palette) {
  ((QGraphicsWidget*)this_)->setPalette(*palette);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:102
// [1] bool autoFillBackground()
extern "C"
bool C_ZNK15QGraphicsWidget18autoFillBackgroundEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->autoFillBackground();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:103
// [-2] void setAutoFillBackground(_Bool)
extern "C"
void C_ZN15QGraphicsWidget21setAutoFillBackgroundEb(void *this_, bool enabled) {
  ((QGraphicsWidget*)this_)->setAutoFillBackground(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:105
// [-2] void resize(const class QSizeF &)
extern "C"
void C_ZN15QGraphicsWidget6resizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsWidget*)this_)->resize(*size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:106
// [-2] void resize(qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget6resizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->resize(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:107
// [16] QSizeF size()
extern "C"
void* C_ZNK15QGraphicsWidget4sizeEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->size();
return new QSizeF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:109
// [-2] void setGeometry(const class QRectF &)
extern "C"
void C_ZN15QGraphicsWidget11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsWidget*)this_)->setGeometry(*rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:110
// [-2] void setGeometry(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget11setGeometryEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->setGeometry(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:111
// [32] QRectF rect()
extern "C"
void* C_ZNK15QGraphicsWidget4rectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->rect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:113
// [-2] void setContentsMargins(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget18setContentsMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setContentsMargins(left, top, right, bottom);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:114
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK15QGraphicsWidget18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getContentsMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:116
// [-2] void setWindowFrameMargins(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget21setWindowFrameMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setWindowFrameMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:117
// [-2] void getWindowFrameMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK15QGraphicsWidget21getWindowFrameMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getWindowFrameMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:118
// [-2] void unsetWindowFrameMargins()
extern "C"
void C_ZN15QGraphicsWidget23unsetWindowFrameMarginsEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetWindowFrameMargins();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:119
// [32] QRectF windowFrameGeometry()
extern "C"
void* C_ZNK15QGraphicsWidget19windowFrameGeometryEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowFrameGeometry();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:120
// [32] QRectF windowFrameRect()
extern "C"
void* C_ZNK15QGraphicsWidget15windowFrameRectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowFrameRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:123
// [4] Qt::WindowFlags windowFlags()
extern "C"
Qt::WindowFlags C_ZNK15QGraphicsWidget11windowFlagsEv(void *this_) {
  return (Qt::WindowFlags)((QGraphicsWidget*)this_)->windowFlags();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:124
// [4] Qt::WindowType windowType()
extern "C"
Qt::WindowType C_ZNK15QGraphicsWidget10windowTypeEv(void *this_) {
  return (Qt::WindowType)((QGraphicsWidget*)this_)->windowType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:125
// [-2] void setWindowFlags(Qt::WindowFlags)
extern "C"
void C_ZN15QGraphicsWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> wFlags) {
  ((QGraphicsWidget*)this_)->setWindowFlags(wFlags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:126
// [1] bool isActiveWindow()
extern "C"
bool C_ZNK15QGraphicsWidget14isActiveWindowEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->isActiveWindow();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:127
// [-2] void setWindowTitle(const class QString &)
extern "C"
void C_ZN15QGraphicsWidget14setWindowTitleERK7QString(void *this_, QString* title) {
  ((QGraphicsWidget*)this_)->setWindowTitle(*title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:128
// [8] QString windowTitle()
extern "C"
void* C_ZNK15QGraphicsWidget11windowTitleEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->windowTitle();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:131
// [4] Qt::FocusPolicy focusPolicy()
extern "C"
Qt::FocusPolicy C_ZNK15QGraphicsWidget11focusPolicyEv(void *this_) {
  return (Qt::FocusPolicy)((QGraphicsWidget*)this_)->focusPolicy();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:132
// [-2] void setFocusPolicy(Qt::FocusPolicy)
extern "C"
void C_ZN15QGraphicsWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *this_, Qt::FocusPolicy policy) {
  ((QGraphicsWidget*)this_)->setFocusPolicy(policy);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:133
// [-2] void setTabOrder(class QGraphicsWidget *, class QGraphicsWidget *)
extern "C"
void C_ZN15QGraphicsWidget11setTabOrderEPS_S0_(QGraphicsWidget * first, QGraphicsWidget * second) {
  QGraphicsWidget::setTabOrder(first, second);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:134
// [8] QGraphicsWidget * focusWidget()
extern "C"
void* C_ZNK15QGraphicsWidget11focusWidgetEv(void *this_) {
  return (void*)((QGraphicsWidget*)this_)->focusWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:137
// [4] int grabShortcut(const class QKeySequence &, Qt::ShortcutContext)
extern "C"
int C_ZN15QGraphicsWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *this_, QKeySequence* sequence, Qt::ShortcutContext context) {
  return (int)((QGraphicsWidget*)this_)->grabShortcut(*sequence, context);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:138
// [-2] void releaseShortcut(int)
extern "C"
void C_ZN15QGraphicsWidget15releaseShortcutEi(void *this_, int id) {
  ((QGraphicsWidget*)this_)->releaseShortcut(id);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:139
// [-2] void setShortcutEnabled(int, _Bool)
extern "C"
void C_ZN15QGraphicsWidget18setShortcutEnabledEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutEnabled(id, enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:140
// [-2] void setShortcutAutoRepeat(int, _Bool)
extern "C"
void C_ZN15QGraphicsWidget21setShortcutAutoRepeatEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutAutoRepeat(id, enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:145
// [-2] void addAction(class QAction *)
extern "C"
void C_ZN15QGraphicsWidget9addActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->addAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:153
// [-2] void insertAction(class QAction *, class QAction *)
extern "C"
void C_ZN15QGraphicsWidget12insertActionEP7QActionS1_(void *this_, QAction * before, QAction * action) {
  ((QGraphicsWidget*)this_)->insertAction(before, action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:154
// [-2] void removeAction(class QAction *)
extern "C"
void C_ZN15QGraphicsWidget12removeActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->removeAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:158
// [-2] void setAttribute(Qt::WidgetAttribute, _Bool)
extern "C"
void C_ZN15QGraphicsWidget12setAttributeEN2Qt15WidgetAttributeEb(void *this_, Qt::WidgetAttribute attribute, bool on) {
  ((QGraphicsWidget*)this_)->setAttribute(attribute, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:159
// [1] bool testAttribute(Qt::WidgetAttribute)
extern "C"
bool C_ZNK15QGraphicsWidget13testAttributeEN2Qt15WidgetAttributeE(void *this_, Qt::WidgetAttribute attribute) {
  return (bool)((QGraphicsWidget*)this_)->testAttribute(attribute);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:164
// [4] int type()
extern "C"
int C_ZNK15QGraphicsWidget4typeEv(void *this_) {
  return (int)((QGraphicsWidget*)this_)->type();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:166
// [-2] void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN15QGraphicsWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paint(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:167
// [-2] void paintWindowFrame(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN15QGraphicsWidget16paintWindowFrameEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paintWindowFrame(painter, option, widget);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:168
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK15QGraphicsWidget12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->boundingRect();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:169
// [8] QPainterPath shape()
extern "C"
void* C_ZNK15QGraphicsWidget5shapeEv(void *this_) {
  auto rv = ((QGraphicsWidget*)this_)->shape();
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:178
// [-2] void geometryChanged()
extern "C"
void C_ZN15QGraphicsWidget15geometryChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->geometryChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:179
// [-2] void layoutChanged()
extern "C"
void C_ZN15QGraphicsWidget13layoutChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->layoutChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicswidget.h:182
// [1] bool close()
extern "C"
bool C_ZN15QGraphicsWidget5closeEv(void *this_) {
  return (bool)((QGraphicsWidget*)this_)->close();
}
//  main block end
