//  header block begin
// /usr/include/qt/QtWidgets/qgraphicswidget.h
#include <qgraphicswidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:66
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QGraphicsWidget10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:83
// void QGraphicsWidget(class QGraphicsItem *, Qt::WindowFlags)
extern "C"
void* C_ZN15QGraphicsWidgetC1EP13QGraphicsItem6QFlagsIN2Qt10WindowTypeEE(QGraphicsItem * parent, QFlags<Qt::WindowType> wFlags) {
  return new QGraphicsWidget(parent, wFlags);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:84
// void ~QGraphicsWidget()
extern "C"
void C_ZN15QGraphicsWidgetD1Ev(void *this_) {
  delete (QGraphicsWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:85
// QGraphicsLayout * layout()
extern "C"
void C_ZNK15QGraphicsWidget6layoutEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->layout();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:86
// void setLayout(class QGraphicsLayout *)
extern "C"
void C_ZN15QGraphicsWidget9setLayoutEP15QGraphicsLayout(void *this_, QGraphicsLayout * layout) {
  ((QGraphicsWidget*)this_)->setLayout(layout);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:87
// void adjustSize()
extern "C"
void C_ZN15QGraphicsWidget10adjustSizeEv(void *this_) {
  ((QGraphicsWidget*)this_)->adjustSize();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:89
// Qt::LayoutDirection layoutDirection()
extern "C"
void C_ZNK15QGraphicsWidget15layoutDirectionEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->layoutDirection();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:90
// void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN15QGraphicsWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGraphicsWidget*)this_)->setLayoutDirection(direction);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:91
// void unsetLayoutDirection()
extern "C"
void C_ZN15QGraphicsWidget20unsetLayoutDirectionEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetLayoutDirection();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:93
// QStyle * style()
extern "C"
void C_ZNK15QGraphicsWidget5styleEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->style();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:94
// void setStyle(class QStyle *)
extern "C"
void C_ZN15QGraphicsWidget8setStyleEP6QStyle(void *this_, QStyle * style) {
  ((QGraphicsWidget*)this_)->setStyle(style);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:96
// QFont font()
extern "C"
void C_ZNK15QGraphicsWidget4fontEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->font();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:97
// void setFont(const class QFont &)
extern "C"
void C_ZN15QGraphicsWidget7setFontERK5QFont(void *this_, const QFont & font) {
  ((QGraphicsWidget*)this_)->setFont(font);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:99
// QPalette palette()
extern "C"
void C_ZNK15QGraphicsWidget7paletteEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->palette();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:100
// void setPalette(const class QPalette &)
extern "C"
void C_ZN15QGraphicsWidget10setPaletteERK8QPalette(void *this_, const QPalette & palette) {
  ((QGraphicsWidget*)this_)->setPalette(palette);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:102
// bool autoFillBackground()
extern "C"
void C_ZNK15QGraphicsWidget18autoFillBackgroundEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->autoFillBackground();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:103
// void setAutoFillBackground(_Bool)
extern "C"
void C_ZN15QGraphicsWidget21setAutoFillBackgroundEb(void *this_, bool enabled) {
  ((QGraphicsWidget*)this_)->setAutoFillBackground(enabled);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:105
// void resize(const class QSizeF &)
extern "C"
void C_ZN15QGraphicsWidget6resizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsWidget*)this_)->resize(size);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicswidget.h:106
// void resize(qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget6resizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->resize(w, h);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:107
// QSizeF size()
extern "C"
void C_ZNK15QGraphicsWidget4sizeEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->size();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:109
// void setGeometry(const class QRectF &)
extern "C"
void C_ZN15QGraphicsWidget11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsWidget*)this_)->setGeometry(rect);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicswidget.h:110
// void setGeometry(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget11setGeometryEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QGraphicsWidget*)this_)->setGeometry(x, y, w, h);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicswidget.h:111
// QRectF rect()
extern "C"
void C_ZNK15QGraphicsWidget4rectEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->rect();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:113
// void setContentsMargins(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget18setContentsMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setContentsMargins(left, top, right, bottom);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:114
// void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK15QGraphicsWidget18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getContentsMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:116
// void setWindowFrameMargins(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsWidget21setWindowFrameMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsWidget*)this_)->setWindowFrameMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:117
// void getWindowFrameMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK15QGraphicsWidget21getWindowFrameMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsWidget*)this_)->getWindowFrameMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:118
// void unsetWindowFrameMargins()
extern "C"
void C_ZN15QGraphicsWidget23unsetWindowFrameMarginsEv(void *this_) {
  ((QGraphicsWidget*)this_)->unsetWindowFrameMargins();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:119
// QRectF windowFrameGeometry()
extern "C"
void C_ZNK15QGraphicsWidget19windowFrameGeometryEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->windowFrameGeometry();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:120
// QRectF windowFrameRect()
extern "C"
void C_ZNK15QGraphicsWidget15windowFrameRectEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->windowFrameRect();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:123
// Qt::WindowFlags windowFlags()
extern "C"
void C_ZNK15QGraphicsWidget11windowFlagsEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->windowFlags();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:124
// Qt::WindowType windowType()
extern "C"
void C_ZNK15QGraphicsWidget10windowTypeEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->windowType();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:125
// void setWindowFlags(Qt::WindowFlags)
extern "C"
void C_ZN15QGraphicsWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> wFlags) {
  ((QGraphicsWidget*)this_)->setWindowFlags(wFlags);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:126
// bool isActiveWindow()
extern "C"
void C_ZNK15QGraphicsWidget14isActiveWindowEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->isActiveWindow();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:127
// void setWindowTitle(const class QString &)
extern "C"
void C_ZN15QGraphicsWidget14setWindowTitleERK7QString(void *this_, const QString & title) {
  ((QGraphicsWidget*)this_)->setWindowTitle(title);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:128
// QString windowTitle()
extern "C"
void C_ZNK15QGraphicsWidget11windowTitleEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->windowTitle();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:131
// Qt::FocusPolicy focusPolicy()
extern "C"
void C_ZNK15QGraphicsWidget11focusPolicyEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->focusPolicy();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:132
// void setFocusPolicy(Qt::FocusPolicy)
extern "C"
void C_ZN15QGraphicsWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *this_, Qt::FocusPolicy policy) {
  ((QGraphicsWidget*)this_)->setFocusPolicy(policy);
}
// static
// /usr/include/qt/QtWidgets/qgraphicswidget.h:133
// void setTabOrder(class QGraphicsWidget *, class QGraphicsWidget *)
extern "C"
void C_ZN15QGraphicsWidget11setTabOrderEPS_S0_(QGraphicsWidget * first, QGraphicsWidget * second) {
  QGraphicsWidget::setTabOrder(first, second);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:134
// QGraphicsWidget * focusWidget()
extern "C"
void C_ZNK15QGraphicsWidget11focusWidgetEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->focusWidget();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:137
// int grabShortcut(const class QKeySequence &, Qt::ShortcutContext)
extern "C"
void C_ZN15QGraphicsWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *this_, const QKeySequence & sequence, Qt::ShortcutContext context) {
  /*return*/ ((QGraphicsWidget*)this_)->grabShortcut(sequence, context);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:138
// void releaseShortcut(int)
extern "C"
void C_ZN15QGraphicsWidget15releaseShortcutEi(void *this_, int id) {
  ((QGraphicsWidget*)this_)->releaseShortcut(id);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:139
// void setShortcutEnabled(int, _Bool)
extern "C"
void C_ZN15QGraphicsWidget18setShortcutEnabledEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutEnabled(id, enabled);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:140
// void setShortcutAutoRepeat(int, _Bool)
extern "C"
void C_ZN15QGraphicsWidget21setShortcutAutoRepeatEib(void *this_, int id, bool enabled) {
  ((QGraphicsWidget*)this_)->setShortcutAutoRepeat(id, enabled);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:145
// void addAction(class QAction *)
extern "C"
void C_ZN15QGraphicsWidget9addActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->addAction(action);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:150
// void addActions(QList<class QAction *>)
extern "C"
void C_ZN15QGraphicsWidget10addActionsE5QListIP7QActionE(void *this_, QList<QAction *> actions) {
  ((QGraphicsWidget*)this_)->addActions(actions);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:151
// void insertActions(class QAction *, QList<class QAction *>)
extern "C"
void C_ZN15QGraphicsWidget13insertActionsEP7QAction5QListIS1_E(void *this_, QAction * before, QList<QAction *> actions) {
  ((QGraphicsWidget*)this_)->insertActions(before, actions);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:153
// void insertAction(class QAction *, class QAction *)
extern "C"
void C_ZN15QGraphicsWidget12insertActionEP7QActionS1_(void *this_, QAction * before, QAction * action) {
  ((QGraphicsWidget*)this_)->insertAction(before, action);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:154
// void removeAction(class QAction *)
extern "C"
void C_ZN15QGraphicsWidget12removeActionEP7QAction(void *this_, QAction * action) {
  ((QGraphicsWidget*)this_)->removeAction(action);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:155
// QList<QAction *> actions()
extern "C"
void C_ZNK15QGraphicsWidget7actionsEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->actions();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:158
// void setAttribute(Qt::WidgetAttribute, _Bool)
extern "C"
void C_ZN15QGraphicsWidget12setAttributeEN2Qt15WidgetAttributeEb(void *this_, Qt::WidgetAttribute attribute, bool on) {
  ((QGraphicsWidget*)this_)->setAttribute(attribute, on);
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:159
// bool testAttribute(Qt::WidgetAttribute)
extern "C"
void C_ZNK15QGraphicsWidget13testAttributeEN2Qt15WidgetAttributeE(void *this_, Qt::WidgetAttribute attribute) {
  /*return*/ ((QGraphicsWidget*)this_)->testAttribute(attribute);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:164
// int type()
extern "C"
void C_ZNK15QGraphicsWidget4typeEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->type();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:166
// void paint(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN15QGraphicsWidget5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paint(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:167
// void paintWindowFrame(class QPainter *, const class QStyleOptionGraphicsItem *, class QWidget *)
extern "C"
void C_ZN15QGraphicsWidget16paintWindowFrameEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsWidget*)this_)->paintWindowFrame(painter, option, widget);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:168
// QRectF boundingRect()
extern "C"
void C_ZNK15QGraphicsWidget12boundingRectEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->boundingRect();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicswidget.h:169
// QPainterPath shape()
extern "C"
void C_ZNK15QGraphicsWidget5shapeEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->shape();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:178
// void geometryChanged()
extern "C"
void C_ZN15QGraphicsWidget15geometryChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->geometryChanged();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:179
// void layoutChanged()
extern "C"
void C_ZN15QGraphicsWidget13layoutChangedEv(void *this_) {
  ((QGraphicsWidget*)this_)->layoutChanged();
}
// /usr/include/qt/QtWidgets/qgraphicswidget.h:182
// bool close()
extern "C"
void C_ZN15QGraphicsWidget5closeEv(void *this_) {
  /*return*/ ((QGraphicsWidget*)this_)->close();
}
//  main block end
