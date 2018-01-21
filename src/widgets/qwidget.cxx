//  header block begin
// /usr/include/qt/QtWidgets/qwidget.h
#include <qwidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:129
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QWidget10metaObjectEv(void *this_) {
  /*return*/ ((QWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qwidget.h:212
// void QWidget(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN7QWidgetC1EPS_6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QWidget(parent, f);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:213
// void ~QWidget()
extern "C"
void C_ZN7QWidgetD1Ev(void *this_) {
  delete (QWidget*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:215
// int devType()
extern "C"
void C_ZNK7QWidget7devTypeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->devType();
}
// /usr/include/qt/QtWidgets/qwidget.h:217
// WId winId()
extern "C"
void C_ZNK7QWidget5winIdEv(void *this_) {
  /*return*/ ((QWidget*)this_)->winId();
}
// /usr/include/qt/QtWidgets/qwidget.h:218
// void createWinId()
extern "C"
void C_ZN7QWidget11createWinIdEv(void *this_) {
  ((QWidget*)this_)->createWinId();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:219
// WId internalWinId()
extern "C"
void C_ZNK7QWidget13internalWinIdEv(void *this_) {
  /*return*/ ((QWidget*)this_)->internalWinId();
}
// /usr/include/qt/QtWidgets/qwidget.h:220
// WId effectiveWinId()
extern "C"
void C_ZNK7QWidget14effectiveWinIdEv(void *this_) {
  /*return*/ ((QWidget*)this_)->effectiveWinId();
}
// /usr/include/qt/QtWidgets/qwidget.h:223
// QStyle * style()
extern "C"
void C_ZNK7QWidget5styleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->style();
}
// /usr/include/qt/QtWidgets/qwidget.h:224
// void setStyle(class QStyle *)
extern "C"
void C_ZN7QWidget8setStyleEP6QStyle(void *this_, QStyle * arg0) {
  ((QWidget*)this_)->setStyle(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:227
// bool isTopLevel()
extern "C"
void C_ZNK7QWidget10isTopLevelEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isTopLevel();
}
// /usr/include/qt/QtWidgets/qwidget.h:228
// bool isWindow()
extern "C"
void C_ZNK7QWidget8isWindowEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isWindow();
}
// /usr/include/qt/QtWidgets/qwidget.h:230
// bool isModal()
extern "C"
void C_ZNK7QWidget7isModalEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isModal();
}
// /usr/include/qt/QtWidgets/qwidget.h:231
// Qt::WindowModality windowModality()
extern "C"
void C_ZNK7QWidget14windowModalityEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowModality();
}
// /usr/include/qt/QtWidgets/qwidget.h:232
// void setWindowModality(Qt::WindowModality)
extern "C"
void C_ZN7QWidget17setWindowModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality windowModality) {
  ((QWidget*)this_)->setWindowModality(windowModality);
}
// /usr/include/qt/QtWidgets/qwidget.h:234
// bool isEnabled()
extern "C"
void C_ZNK7QWidget9isEnabledEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isEnabled();
}
// /usr/include/qt/QtWidgets/qwidget.h:235
// bool isEnabledTo(const class QWidget *)
extern "C"
void C_ZNK7QWidget11isEnabledToEPKS_(void *this_, const QWidget * arg0) {
  /*return*/ ((QWidget*)this_)->isEnabledTo(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:236
// bool isEnabledToTLW()
extern "C"
void C_ZNK7QWidget14isEnabledToTLWEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isEnabledToTLW();
}
// /usr/include/qt/QtWidgets/qwidget.h:239
// void setEnabled(_Bool)
extern "C"
void C_ZN7QWidget10setEnabledEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setEnabled(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:240
// void setDisabled(_Bool)
extern "C"
void C_ZN7QWidget11setDisabledEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setDisabled(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:241
// void setWindowModified(_Bool)
extern "C"
void C_ZN7QWidget17setWindowModifiedEb(void *this_, bool arg0) {
  ((QWidget*)this_)->setWindowModified(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:246
// QRect frameGeometry()
extern "C"
void C_ZNK7QWidget13frameGeometryEv(void *this_) {
  /*return*/ ((QWidget*)this_)->frameGeometry();
}
// /usr/include/qt/QtWidgets/qwidget.h:247
// const QRect & geometry()
extern "C"
void C_ZNK7QWidget8geometryEv(void *this_) {
  /*return*/ ((QWidget*)this_)->geometry();
}
// /usr/include/qt/QtWidgets/qwidget.h:248
// QRect normalGeometry()
extern "C"
void C_ZNK7QWidget14normalGeometryEv(void *this_) {
  /*return*/ ((QWidget*)this_)->normalGeometry();
}
// /usr/include/qt/QtWidgets/qwidget.h:250
// int x()
extern "C"
void C_ZNK7QWidget1xEv(void *this_) {
  /*return*/ ((QWidget*)this_)->x();
}
// /usr/include/qt/QtWidgets/qwidget.h:251
// int y()
extern "C"
void C_ZNK7QWidget1yEv(void *this_) {
  /*return*/ ((QWidget*)this_)->y();
}
// /usr/include/qt/QtWidgets/qwidget.h:252
// QPoint pos()
extern "C"
void C_ZNK7QWidget3posEv(void *this_) {
  /*return*/ ((QWidget*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qwidget.h:253
// QSize frameSize()
extern "C"
void C_ZNK7QWidget9frameSizeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->frameSize();
}
// /usr/include/qt/QtWidgets/qwidget.h:254
// QSize size()
extern "C"
void C_ZNK7QWidget4sizeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->size();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:255
// int width()
extern "C"
void C_ZNK7QWidget5widthEv(void *this_) {
  /*return*/ ((QWidget*)this_)->width();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:256
// int height()
extern "C"
void C_ZNK7QWidget6heightEv(void *this_) {
  /*return*/ ((QWidget*)this_)->height();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:257
// QRect rect()
extern "C"
void C_ZNK7QWidget4rectEv(void *this_) {
  /*return*/ ((QWidget*)this_)->rect();
}
// /usr/include/qt/QtWidgets/qwidget.h:258
// QRect childrenRect()
extern "C"
void C_ZNK7QWidget12childrenRectEv(void *this_) {
  /*return*/ ((QWidget*)this_)->childrenRect();
}
// /usr/include/qt/QtWidgets/qwidget.h:259
// QRegion childrenRegion()
extern "C"
void C_ZNK7QWidget14childrenRegionEv(void *this_) {
  /*return*/ ((QWidget*)this_)->childrenRegion();
}
// /usr/include/qt/QtWidgets/qwidget.h:261
// QSize minimumSize()
extern "C"
void C_ZNK7QWidget11minimumSizeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->minimumSize();
}
// /usr/include/qt/QtWidgets/qwidget.h:262
// QSize maximumSize()
extern "C"
void C_ZNK7QWidget11maximumSizeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->maximumSize();
}
// /usr/include/qt/QtWidgets/qwidget.h:263
// int minimumWidth()
extern "C"
void C_ZNK7QWidget12minimumWidthEv(void *this_) {
  /*return*/ ((QWidget*)this_)->minimumWidth();
}
// /usr/include/qt/QtWidgets/qwidget.h:264
// int minimumHeight()
extern "C"
void C_ZNK7QWidget13minimumHeightEv(void *this_) {
  /*return*/ ((QWidget*)this_)->minimumHeight();
}
// /usr/include/qt/QtWidgets/qwidget.h:265
// int maximumWidth()
extern "C"
void C_ZNK7QWidget12maximumWidthEv(void *this_) {
  /*return*/ ((QWidget*)this_)->maximumWidth();
}
// /usr/include/qt/QtWidgets/qwidget.h:266
// int maximumHeight()
extern "C"
void C_ZNK7QWidget13maximumHeightEv(void *this_) {
  /*return*/ ((QWidget*)this_)->maximumHeight();
}
// /usr/include/qt/QtWidgets/qwidget.h:267
// void setMinimumSize(const class QSize &)
extern "C"
void C_ZN7QWidget14setMinimumSizeERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->setMinimumSize(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:268
// void setMinimumSize(int, int)
extern "C"
void C_ZN7QWidget14setMinimumSizeEii(void *this_, int minw, int minh) {
  ((QWidget*)this_)->setMinimumSize(minw, minh);
}
// /usr/include/qt/QtWidgets/qwidget.h:269
// void setMaximumSize(const class QSize &)
extern "C"
void C_ZN7QWidget14setMaximumSizeERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->setMaximumSize(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:270
// void setMaximumSize(int, int)
extern "C"
void C_ZN7QWidget14setMaximumSizeEii(void *this_, int maxw, int maxh) {
  ((QWidget*)this_)->setMaximumSize(maxw, maxh);
}
// /usr/include/qt/QtWidgets/qwidget.h:271
// void setMinimumWidth(int)
extern "C"
void C_ZN7QWidget15setMinimumWidthEi(void *this_, int minw) {
  ((QWidget*)this_)->setMinimumWidth(minw);
}
// /usr/include/qt/QtWidgets/qwidget.h:272
// void setMinimumHeight(int)
extern "C"
void C_ZN7QWidget16setMinimumHeightEi(void *this_, int minh) {
  ((QWidget*)this_)->setMinimumHeight(minh);
}
// /usr/include/qt/QtWidgets/qwidget.h:273
// void setMaximumWidth(int)
extern "C"
void C_ZN7QWidget15setMaximumWidthEi(void *this_, int maxw) {
  ((QWidget*)this_)->setMaximumWidth(maxw);
}
// /usr/include/qt/QtWidgets/qwidget.h:274
// void setMaximumHeight(int)
extern "C"
void C_ZN7QWidget16setMaximumHeightEi(void *this_, int maxh) {
  ((QWidget*)this_)->setMaximumHeight(maxh);
}
// /usr/include/qt/QtWidgets/qwidget.h:280
// QSize sizeIncrement()
extern "C"
void C_ZNK7QWidget13sizeIncrementEv(void *this_) {
  /*return*/ ((QWidget*)this_)->sizeIncrement();
}
// /usr/include/qt/QtWidgets/qwidget.h:281
// void setSizeIncrement(const class QSize &)
extern "C"
void C_ZN7QWidget16setSizeIncrementERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->setSizeIncrement(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:282
// void setSizeIncrement(int, int)
extern "C"
void C_ZN7QWidget16setSizeIncrementEii(void *this_, int w, int h) {
  ((QWidget*)this_)->setSizeIncrement(w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:283
// QSize baseSize()
extern "C"
void C_ZNK7QWidget8baseSizeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->baseSize();
}
// /usr/include/qt/QtWidgets/qwidget.h:284
// void setBaseSize(const class QSize &)
extern "C"
void C_ZN7QWidget11setBaseSizeERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->setBaseSize(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:285
// void setBaseSize(int, int)
extern "C"
void C_ZN7QWidget11setBaseSizeEii(void *this_, int basew, int baseh) {
  ((QWidget*)this_)->setBaseSize(basew, baseh);
}
// /usr/include/qt/QtWidgets/qwidget.h:287
// void setFixedSize(const class QSize &)
extern "C"
void C_ZN7QWidget12setFixedSizeERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->setFixedSize(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:288
// void setFixedSize(int, int)
extern "C"
void C_ZN7QWidget12setFixedSizeEii(void *this_, int w, int h) {
  ((QWidget*)this_)->setFixedSize(w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:289
// void setFixedWidth(int)
extern "C"
void C_ZN7QWidget13setFixedWidthEi(void *this_, int w) {
  ((QWidget*)this_)->setFixedWidth(w);
}
// /usr/include/qt/QtWidgets/qwidget.h:290
// void setFixedHeight(int)
extern "C"
void C_ZN7QWidget14setFixedHeightEi(void *this_, int h) {
  ((QWidget*)this_)->setFixedHeight(h);
}
// /usr/include/qt/QtWidgets/qwidget.h:294
// QPoint mapToGlobal(const class QPoint &)
extern "C"
void C_ZNK7QWidget11mapToGlobalERK6QPoint(void *this_, const QPoint & arg0) {
  /*return*/ ((QWidget*)this_)->mapToGlobal(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:295
// QPoint mapFromGlobal(const class QPoint &)
extern "C"
void C_ZNK7QWidget13mapFromGlobalERK6QPoint(void *this_, const QPoint & arg0) {
  /*return*/ ((QWidget*)this_)->mapFromGlobal(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:296
// QPoint mapToParent(const class QPoint &)
extern "C"
void C_ZNK7QWidget11mapToParentERK6QPoint(void *this_, const QPoint & arg0) {
  /*return*/ ((QWidget*)this_)->mapToParent(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:297
// QPoint mapFromParent(const class QPoint &)
extern "C"
void C_ZNK7QWidget13mapFromParentERK6QPoint(void *this_, const QPoint & arg0) {
  /*return*/ ((QWidget*)this_)->mapFromParent(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:298
// QPoint mapTo(const class QWidget *, const class QPoint &)
extern "C"
void C_ZNK7QWidget5mapToEPKS_RK6QPoint(void *this_, const QWidget * arg0, const QPoint & arg1) {
  /*return*/ ((QWidget*)this_)->mapTo(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qwidget.h:299
// QPoint mapFrom(const class QWidget *, const class QPoint &)
extern "C"
void C_ZNK7QWidget7mapFromEPKS_RK6QPoint(void *this_, const QWidget * arg0, const QPoint & arg1) {
  /*return*/ ((QWidget*)this_)->mapFrom(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qwidget.h:301
// QWidget * window()
extern "C"
void C_ZNK7QWidget6windowEv(void *this_) {
  /*return*/ ((QWidget*)this_)->window();
}
// /usr/include/qt/QtWidgets/qwidget.h:302
// QWidget * nativeParentWidget()
extern "C"
void C_ZNK7QWidget18nativeParentWidgetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->nativeParentWidget();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:303
// QWidget * topLevelWidget()
extern "C"
void C_ZNK7QWidget14topLevelWidgetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->topLevelWidget();
}
// /usr/include/qt/QtWidgets/qwidget.h:306
// const QPalette & palette()
extern "C"
void C_ZNK7QWidget7paletteEv(void *this_) {
  /*return*/ ((QWidget*)this_)->palette();
}
// /usr/include/qt/QtWidgets/qwidget.h:307
// void setPalette(const class QPalette &)
extern "C"
void C_ZN7QWidget10setPaletteERK8QPalette(void *this_, const QPalette & arg0) {
  ((QWidget*)this_)->setPalette(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:309
// void setBackgroundRole(class QPalette::ColorRole)
extern "C"
void C_ZN7QWidget17setBackgroundRoleEN8QPalette9ColorRoleE(void *this_, QPalette::ColorRole arg0) {
  ((QWidget*)this_)->setBackgroundRole(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:310
// QPalette::ColorRole backgroundRole()
extern "C"
void C_ZNK7QWidget14backgroundRoleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->backgroundRole();
}
// /usr/include/qt/QtWidgets/qwidget.h:312
// void setForegroundRole(class QPalette::ColorRole)
extern "C"
void C_ZN7QWidget17setForegroundRoleEN8QPalette9ColorRoleE(void *this_, QPalette::ColorRole arg0) {
  ((QWidget*)this_)->setForegroundRole(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:313
// QPalette::ColorRole foregroundRole()
extern "C"
void C_ZNK7QWidget14foregroundRoleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->foregroundRole();
}
// /usr/include/qt/QtWidgets/qwidget.h:315
// const QFont & font()
extern "C"
void C_ZNK7QWidget4fontEv(void *this_) {
  /*return*/ ((QWidget*)this_)->font();
}
// /usr/include/qt/QtWidgets/qwidget.h:316
// void setFont(const class QFont &)
extern "C"
void C_ZN7QWidget7setFontERK5QFont(void *this_, const QFont & arg0) {
  ((QWidget*)this_)->setFont(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:317
// QFontMetrics fontMetrics()
extern "C"
void C_ZNK7QWidget11fontMetricsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->fontMetrics();
}
// /usr/include/qt/QtWidgets/qwidget.h:318
// QFontInfo fontInfo()
extern "C"
void C_ZNK7QWidget8fontInfoEv(void *this_) {
  /*return*/ ((QWidget*)this_)->fontInfo();
}
// /usr/include/qt/QtWidgets/qwidget.h:321
// QCursor cursor()
extern "C"
void C_ZNK7QWidget6cursorEv(void *this_) {
  /*return*/ ((QWidget*)this_)->cursor();
}
// /usr/include/qt/QtWidgets/qwidget.h:322
// void setCursor(const class QCursor &)
extern "C"
void C_ZN7QWidget9setCursorERK7QCursor(void *this_, const QCursor & arg0) {
  ((QWidget*)this_)->setCursor(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:323
// void unsetCursor()
extern "C"
void C_ZN7QWidget11unsetCursorEv(void *this_) {
  ((QWidget*)this_)->unsetCursor();
}
// /usr/include/qt/QtWidgets/qwidget.h:326
// void setMouseTracking(_Bool)
extern "C"
void C_ZN7QWidget16setMouseTrackingEb(void *this_, bool enable) {
  ((QWidget*)this_)->setMouseTracking(enable);
}
// /usr/include/qt/QtWidgets/qwidget.h:327
// bool hasMouseTracking()
extern "C"
void C_ZNK7QWidget16hasMouseTrackingEv(void *this_) {
  /*return*/ ((QWidget*)this_)->hasMouseTracking();
}
// /usr/include/qt/QtWidgets/qwidget.h:328
// bool underMouse()
extern "C"
void C_ZNK7QWidget10underMouseEv(void *this_) {
  /*return*/ ((QWidget*)this_)->underMouse();
}
// /usr/include/qt/QtWidgets/qwidget.h:330
// void setMask(const class QBitmap &)
extern "C"
void C_ZN7QWidget7setMaskERK7QBitmap(void *this_, const QBitmap & arg0) {
  ((QWidget*)this_)->setMask(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:331
// void setMask(const class QRegion &)
extern "C"
void C_ZN7QWidget7setMaskERK7QRegion(void *this_, const QRegion & arg0) {
  ((QWidget*)this_)->setMask(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:332
// QRegion mask()
extern "C"
void C_ZNK7QWidget4maskEv(void *this_) {
  /*return*/ ((QWidget*)this_)->mask();
}
// /usr/include/qt/QtWidgets/qwidget.h:333
// void clearMask()
extern "C"
void C_ZN7QWidget9clearMaskEv(void *this_) {
  ((QWidget*)this_)->clearMask();
}
// /usr/include/qt/QtWidgets/qwidget.h:335
// void render(class QPaintDevice *, const class QPoint &, const class QRegion &, RenderFlags)
extern "C"
void C_ZN7QWidget6renderEP12QPaintDeviceRK6QPointRK7QRegion6QFlagsINS_10RenderFlagEE(void *this_, QPaintDevice * target, const QPoint & targetOffset, const QRegion & sourceRegion, QFlags<QWidget::RenderFlag> renderFlags) {
  ((QWidget*)this_)->render(target, targetOffset, sourceRegion, renderFlags);
}
// /usr/include/qt/QtWidgets/qwidget.h:339
// void render(class QPainter *, const class QPoint &, const class QRegion &, RenderFlags)
extern "C"
void C_ZN7QWidget6renderEP8QPainterRK6QPointRK7QRegion6QFlagsINS_10RenderFlagEE(void *this_, QPainter * painter, const QPoint & targetOffset, const QRegion & sourceRegion, QFlags<QWidget::RenderFlag> renderFlags) {
  ((QWidget*)this_)->render(painter, targetOffset, sourceRegion, renderFlags);
}
// /usr/include/qt/QtWidgets/qwidget.h:343
// QPixmap grab(const class QRect &)
extern "C"
void C_ZN7QWidget4grabERK5QRect(void *this_, const QRect & rectangle) {
  /*return*/ ((QWidget*)this_)->grab(rectangle);
}
// /usr/include/qt/QtWidgets/qwidget.h:346
// QGraphicsEffect * graphicsEffect()
extern "C"
void C_ZNK7QWidget14graphicsEffectEv(void *this_) {
  /*return*/ ((QWidget*)this_)->graphicsEffect();
}
// /usr/include/qt/QtWidgets/qwidget.h:347
// void setGraphicsEffect(class QGraphicsEffect *)
extern "C"
void C_ZN7QWidget17setGraphicsEffectEP15QGraphicsEffect(void *this_, QGraphicsEffect * effect) {
  ((QWidget*)this_)->setGraphicsEffect(effect);
}
// /usr/include/qt/QtWidgets/qwidget.h:351
// void grabGesture(Qt::GestureType, Qt::GestureFlags)
extern "C"
void C_ZN7QWidget11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE(void *this_, Qt::GestureType type, QFlags<Qt::GestureFlag> flags) {
  ((QWidget*)this_)->grabGesture(type, flags);
}
// /usr/include/qt/QtWidgets/qwidget.h:352
// void ungrabGesture(Qt::GestureType)
extern "C"
void C_ZN7QWidget13ungrabGestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type) {
  ((QWidget*)this_)->ungrabGesture(type);
}
// /usr/include/qt/QtWidgets/qwidget.h:356
// void setWindowTitle(const class QString &)
extern "C"
void C_ZN7QWidget14setWindowTitleERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setWindowTitle(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:358
// void setStyleSheet(const class QString &)
extern "C"
void C_ZN7QWidget13setStyleSheetERK7QString(void *this_, const QString & styleSheet) {
  ((QWidget*)this_)->setStyleSheet(styleSheet);
}
// /usr/include/qt/QtWidgets/qwidget.h:362
// QString styleSheet()
extern "C"
void C_ZNK7QWidget10styleSheetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->styleSheet();
}
// /usr/include/qt/QtWidgets/qwidget.h:364
// QString windowTitle()
extern "C"
void C_ZNK7QWidget11windowTitleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowTitle();
}
// /usr/include/qt/QtWidgets/qwidget.h:365
// void setWindowIcon(const class QIcon &)
extern "C"
void C_ZN7QWidget13setWindowIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QWidget*)this_)->setWindowIcon(icon);
}
// /usr/include/qt/QtWidgets/qwidget.h:366
// QIcon windowIcon()
extern "C"
void C_ZNK7QWidget10windowIconEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowIcon();
}
// /usr/include/qt/QtWidgets/qwidget.h:367
// void setWindowIconText(const class QString &)
extern "C"
void C_ZN7QWidget17setWindowIconTextERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setWindowIconText(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:368
// QString windowIconText()
extern "C"
void C_ZNK7QWidget14windowIconTextEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowIconText();
}
// /usr/include/qt/QtWidgets/qwidget.h:369
// void setWindowRole(const class QString &)
extern "C"
void C_ZN7QWidget13setWindowRoleERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setWindowRole(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:370
// QString windowRole()
extern "C"
void C_ZNK7QWidget10windowRoleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowRole();
}
// /usr/include/qt/QtWidgets/qwidget.h:371
// void setWindowFilePath(const class QString &)
extern "C"
void C_ZN7QWidget17setWindowFilePathERK7QString(void *this_, const QString & filePath) {
  ((QWidget*)this_)->setWindowFilePath(filePath);
}
// /usr/include/qt/QtWidgets/qwidget.h:372
// QString windowFilePath()
extern "C"
void C_ZNK7QWidget14windowFilePathEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowFilePath();
}
// /usr/include/qt/QtWidgets/qwidget.h:374
// void setWindowOpacity(qreal)
extern "C"
void C_ZN7QWidget16setWindowOpacityEd(void *this_, qreal level) {
  ((QWidget*)this_)->setWindowOpacity(level);
}
// /usr/include/qt/QtWidgets/qwidget.h:375
// qreal windowOpacity()
extern "C"
void C_ZNK7QWidget13windowOpacityEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowOpacity();
}
// /usr/include/qt/QtWidgets/qwidget.h:377
// bool isWindowModified()
extern "C"
void C_ZNK7QWidget16isWindowModifiedEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isWindowModified();
}
// /usr/include/qt/QtWidgets/qwidget.h:379
// void setToolTip(const class QString &)
extern "C"
void C_ZN7QWidget10setToolTipERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setToolTip(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:380
// QString toolTip()
extern "C"
void C_ZNK7QWidget7toolTipEv(void *this_) {
  /*return*/ ((QWidget*)this_)->toolTip();
}
// /usr/include/qt/QtWidgets/qwidget.h:381
// void setToolTipDuration(int)
extern "C"
void C_ZN7QWidget18setToolTipDurationEi(void *this_, int msec) {
  ((QWidget*)this_)->setToolTipDuration(msec);
}
// /usr/include/qt/QtWidgets/qwidget.h:382
// int toolTipDuration()
extern "C"
void C_ZNK7QWidget15toolTipDurationEv(void *this_) {
  /*return*/ ((QWidget*)this_)->toolTipDuration();
}
// /usr/include/qt/QtWidgets/qwidget.h:385
// void setStatusTip(const class QString &)
extern "C"
void C_ZN7QWidget12setStatusTipERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setStatusTip(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:386
// QString statusTip()
extern "C"
void C_ZNK7QWidget9statusTipEv(void *this_) {
  /*return*/ ((QWidget*)this_)->statusTip();
}
// /usr/include/qt/QtWidgets/qwidget.h:389
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN7QWidget12setWhatsThisERK7QString(void *this_, const QString & arg0) {
  ((QWidget*)this_)->setWhatsThis(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:390
// QString whatsThis()
extern "C"
void C_ZNK7QWidget9whatsThisEv(void *this_) {
  /*return*/ ((QWidget*)this_)->whatsThis();
}
// /usr/include/qt/QtWidgets/qwidget.h:393
// QString accessibleName()
extern "C"
void C_ZNK7QWidget14accessibleNameEv(void *this_) {
  /*return*/ ((QWidget*)this_)->accessibleName();
}
// /usr/include/qt/QtWidgets/qwidget.h:394
// void setAccessibleName(const class QString &)
extern "C"
void C_ZN7QWidget17setAccessibleNameERK7QString(void *this_, const QString & name) {
  ((QWidget*)this_)->setAccessibleName(name);
}
// /usr/include/qt/QtWidgets/qwidget.h:395
// QString accessibleDescription()
extern "C"
void C_ZNK7QWidget21accessibleDescriptionEv(void *this_) {
  /*return*/ ((QWidget*)this_)->accessibleDescription();
}
// /usr/include/qt/QtWidgets/qwidget.h:396
// void setAccessibleDescription(const class QString &)
extern "C"
void C_ZN7QWidget24setAccessibleDescriptionERK7QString(void *this_, const QString & description) {
  ((QWidget*)this_)->setAccessibleDescription(description);
}
// /usr/include/qt/QtWidgets/qwidget.h:399
// void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN7QWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QWidget*)this_)->setLayoutDirection(direction);
}
// /usr/include/qt/QtWidgets/qwidget.h:400
// Qt::LayoutDirection layoutDirection()
extern "C"
void C_ZNK7QWidget15layoutDirectionEv(void *this_) {
  /*return*/ ((QWidget*)this_)->layoutDirection();
}
// /usr/include/qt/QtWidgets/qwidget.h:401
// void unsetLayoutDirection()
extern "C"
void C_ZN7QWidget20unsetLayoutDirectionEv(void *this_) {
  ((QWidget*)this_)->unsetLayoutDirection();
}
// /usr/include/qt/QtWidgets/qwidget.h:403
// void setLocale(const class QLocale &)
extern "C"
void C_ZN7QWidget9setLocaleERK7QLocale(void *this_, const QLocale & locale) {
  ((QWidget*)this_)->setLocale(locale);
}
// /usr/include/qt/QtWidgets/qwidget.h:404
// QLocale locale()
extern "C"
void C_ZNK7QWidget6localeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->locale();
}
// /usr/include/qt/QtWidgets/qwidget.h:405
// void unsetLocale()
extern "C"
void C_ZN7QWidget11unsetLocaleEv(void *this_) {
  ((QWidget*)this_)->unsetLocale();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:407
// bool isRightToLeft()
extern "C"
void C_ZNK7QWidget13isRightToLeftEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isRightToLeft();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:408
// bool isLeftToRight()
extern "C"
void C_ZNK7QWidget13isLeftToRightEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isLeftToRight();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:411
// void setFocus()
extern "C"
void C_ZN7QWidget8setFocusEv(void *this_) {
  ((QWidget*)this_)->setFocus();
}
// /usr/include/qt/QtWidgets/qwidget.h:414
// bool isActiveWindow()
extern "C"
void C_ZNK7QWidget14isActiveWindowEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isActiveWindow();
}
// /usr/include/qt/QtWidgets/qwidget.h:415
// void activateWindow()
extern "C"
void C_ZN7QWidget14activateWindowEv(void *this_) {
  ((QWidget*)this_)->activateWindow();
}
// /usr/include/qt/QtWidgets/qwidget.h:416
// void clearFocus()
extern "C"
void C_ZN7QWidget10clearFocusEv(void *this_) {
  ((QWidget*)this_)->clearFocus();
}
// /usr/include/qt/QtWidgets/qwidget.h:418
// void setFocus(Qt::FocusReason)
extern "C"
void C_ZN7QWidget8setFocusEN2Qt11FocusReasonE(void *this_, Qt::FocusReason reason) {
  ((QWidget*)this_)->setFocus(reason);
}
// /usr/include/qt/QtWidgets/qwidget.h:419
// Qt::FocusPolicy focusPolicy()
extern "C"
void C_ZNK7QWidget11focusPolicyEv(void *this_) {
  /*return*/ ((QWidget*)this_)->focusPolicy();
}
// /usr/include/qt/QtWidgets/qwidget.h:420
// void setFocusPolicy(Qt::FocusPolicy)
extern "C"
void C_ZN7QWidget14setFocusPolicyEN2Qt11FocusPolicyE(void *this_, Qt::FocusPolicy policy) {
  ((QWidget*)this_)->setFocusPolicy(policy);
}
// /usr/include/qt/QtWidgets/qwidget.h:421
// bool hasFocus()
extern "C"
void C_ZNK7QWidget8hasFocusEv(void *this_) {
  /*return*/ ((QWidget*)this_)->hasFocus();
}
// static
// /usr/include/qt/QtWidgets/qwidget.h:422
// void setTabOrder(class QWidget *, class QWidget *)
extern "C"
void C_ZN7QWidget11setTabOrderEPS_S0_(QWidget * arg0, QWidget * arg1) {
  QWidget::setTabOrder(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qwidget.h:423
// void setFocusProxy(class QWidget *)
extern "C"
void C_ZN7QWidget13setFocusProxyEPS_(void *this_, QWidget * arg0) {
  ((QWidget*)this_)->setFocusProxy(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:424
// QWidget * focusProxy()
extern "C"
void C_ZNK7QWidget10focusProxyEv(void *this_) {
  /*return*/ ((QWidget*)this_)->focusProxy();
}
// /usr/include/qt/QtWidgets/qwidget.h:425
// Qt::ContextMenuPolicy contextMenuPolicy()
extern "C"
void C_ZNK7QWidget17contextMenuPolicyEv(void *this_) {
  /*return*/ ((QWidget*)this_)->contextMenuPolicy();
}
// /usr/include/qt/QtWidgets/qwidget.h:426
// void setContextMenuPolicy(Qt::ContextMenuPolicy)
extern "C"
void C_ZN7QWidget20setContextMenuPolicyEN2Qt17ContextMenuPolicyE(void *this_, Qt::ContextMenuPolicy policy) {
  ((QWidget*)this_)->setContextMenuPolicy(policy);
}
// /usr/include/qt/QtWidgets/qwidget.h:429
// void grabMouse()
extern "C"
void C_ZN7QWidget9grabMouseEv(void *this_) {
  ((QWidget*)this_)->grabMouse();
}
// /usr/include/qt/QtWidgets/qwidget.h:431
// void grabMouse(const class QCursor &)
extern "C"
void C_ZN7QWidget9grabMouseERK7QCursor(void *this_, const QCursor & arg0) {
  ((QWidget*)this_)->grabMouse(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:433
// void releaseMouse()
extern "C"
void C_ZN7QWidget12releaseMouseEv(void *this_) {
  ((QWidget*)this_)->releaseMouse();
}
// /usr/include/qt/QtWidgets/qwidget.h:434
// void grabKeyboard()
extern "C"
void C_ZN7QWidget12grabKeyboardEv(void *this_) {
  ((QWidget*)this_)->grabKeyboard();
}
// /usr/include/qt/QtWidgets/qwidget.h:435
// void releaseKeyboard()
extern "C"
void C_ZN7QWidget15releaseKeyboardEv(void *this_) {
  ((QWidget*)this_)->releaseKeyboard();
}
// /usr/include/qt/QtWidgets/qwidget.h:437
// int grabShortcut(const class QKeySequence &, Qt::ShortcutContext)
extern "C"
void C_ZN7QWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE(void *this_, const QKeySequence & key, Qt::ShortcutContext context) {
  /*return*/ ((QWidget*)this_)->grabShortcut(key, context);
}
// /usr/include/qt/QtWidgets/qwidget.h:438
// void releaseShortcut(int)
extern "C"
void C_ZN7QWidget15releaseShortcutEi(void *this_, int id) {
  ((QWidget*)this_)->releaseShortcut(id);
}
// /usr/include/qt/QtWidgets/qwidget.h:439
// void setShortcutEnabled(int, _Bool)
extern "C"
void C_ZN7QWidget18setShortcutEnabledEib(void *this_, int id, bool enable) {
  ((QWidget*)this_)->setShortcutEnabled(id, enable);
}
// /usr/include/qt/QtWidgets/qwidget.h:440
// void setShortcutAutoRepeat(int, _Bool)
extern "C"
void C_ZN7QWidget21setShortcutAutoRepeatEib(void *this_, int id, bool enable) {
  ((QWidget*)this_)->setShortcutAutoRepeat(id, enable);
}
// static
// /usr/include/qt/QtWidgets/qwidget.h:442
// QWidget * mouseGrabber()
extern "C"
void C_ZN7QWidget12mouseGrabberEv() {
  /*return*/ QWidget::mouseGrabber();
}
// static
// /usr/include/qt/QtWidgets/qwidget.h:443
// QWidget * keyboardGrabber()
extern "C"
void C_ZN7QWidget15keyboardGrabberEv() {
  /*return*/ QWidget::keyboardGrabber();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:446
// bool updatesEnabled()
extern "C"
void C_ZNK7QWidget14updatesEnabledEv(void *this_) {
  /*return*/ ((QWidget*)this_)->updatesEnabled();
}
// /usr/include/qt/QtWidgets/qwidget.h:447
// void setUpdatesEnabled(_Bool)
extern "C"
void C_ZN7QWidget17setUpdatesEnabledEb(void *this_, bool enable) {
  ((QWidget*)this_)->setUpdatesEnabled(enable);
}
// /usr/include/qt/QtWidgets/qwidget.h:450
// QGraphicsProxyWidget * graphicsProxyWidget()
extern "C"
void C_ZNK7QWidget19graphicsProxyWidgetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->graphicsProxyWidget();
}
// /usr/include/qt/QtWidgets/qwidget.h:454
// void update()
extern "C"
void C_ZN7QWidget6updateEv(void *this_) {
  ((QWidget*)this_)->update();
}
// /usr/include/qt/QtWidgets/qwidget.h:455
// void repaint()
extern "C"
void C_ZN7QWidget7repaintEv(void *this_) {
  ((QWidget*)this_)->repaint();
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:458
// void update(int, int, int, int)
extern "C"
void C_ZN7QWidget6updateEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->update(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:459
// void update(const class QRect &)
extern "C"
void C_ZN7QWidget6updateERK5QRect(void *this_, const QRect & arg0) {
  ((QWidget*)this_)->update(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:460
// void update(const class QRegion &)
extern "C"
void C_ZN7QWidget6updateERK7QRegion(void *this_, const QRegion & arg0) {
  ((QWidget*)this_)->update(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:462
// void repaint(int, int, int, int)
extern "C"
void C_ZN7QWidget7repaintEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->repaint(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:463
// void repaint(const class QRect &)
extern "C"
void C_ZN7QWidget7repaintERK5QRect(void *this_, const QRect & arg0) {
  ((QWidget*)this_)->repaint(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:464
// void repaint(const class QRegion &)
extern "C"
void C_ZN7QWidget7repaintERK7QRegion(void *this_, const QRegion & arg0) {
  ((QWidget*)this_)->repaint(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:469
// void setVisible(_Bool)
extern "C"
void C_ZN7QWidget10setVisibleEb(void *this_, bool visible) {
  ((QWidget*)this_)->setVisible(visible);
}
// /usr/include/qt/QtWidgets/qwidget.h:470
// void setHidden(_Bool)
extern "C"
void C_ZN7QWidget9setHiddenEb(void *this_, bool hidden) {
  ((QWidget*)this_)->setHidden(hidden);
}
// /usr/include/qt/QtWidgets/qwidget.h:471
// void show()
extern "C"
void C_ZN7QWidget4showEv(void *this_) {
  ((QWidget*)this_)->show();
}
// /usr/include/qt/QtWidgets/qwidget.h:472
// void hide()
extern "C"
void C_ZN7QWidget4hideEv(void *this_) {
  ((QWidget*)this_)->hide();
}
// /usr/include/qt/QtWidgets/qwidget.h:474
// void showMinimized()
extern "C"
void C_ZN7QWidget13showMinimizedEv(void *this_) {
  ((QWidget*)this_)->showMinimized();
}
// /usr/include/qt/QtWidgets/qwidget.h:475
// void showMaximized()
extern "C"
void C_ZN7QWidget13showMaximizedEv(void *this_) {
  ((QWidget*)this_)->showMaximized();
}
// /usr/include/qt/QtWidgets/qwidget.h:476
// void showFullScreen()
extern "C"
void C_ZN7QWidget14showFullScreenEv(void *this_) {
  ((QWidget*)this_)->showFullScreen();
}
// /usr/include/qt/QtWidgets/qwidget.h:477
// void showNormal()
extern "C"
void C_ZN7QWidget10showNormalEv(void *this_) {
  ((QWidget*)this_)->showNormal();
}
// /usr/include/qt/QtWidgets/qwidget.h:479
// bool close()
extern "C"
void C_ZN7QWidget5closeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->close();
}
// /usr/include/qt/QtWidgets/qwidget.h:480
// void raise()
extern "C"
void C_ZN7QWidget5raiseEv(void *this_) {
  ((QWidget*)this_)->raise();
}
// /usr/include/qt/QtWidgets/qwidget.h:481
// void lower()
extern "C"
void C_ZN7QWidget5lowerEv(void *this_) {
  ((QWidget*)this_)->lower();
}
// /usr/include/qt/QtWidgets/qwidget.h:484
// void stackUnder(class QWidget *)
extern "C"
void C_ZN7QWidget10stackUnderEPS_(void *this_, QWidget * arg0) {
  ((QWidget*)this_)->stackUnder(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:485
// void move(int, int)
extern "C"
void C_ZN7QWidget4moveEii(void *this_, int x, int y) {
  ((QWidget*)this_)->move(x, y);
}
// /usr/include/qt/QtWidgets/qwidget.h:486
// void move(const class QPoint &)
extern "C"
void C_ZN7QWidget4moveERK6QPoint(void *this_, const QPoint & arg0) {
  ((QWidget*)this_)->move(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:487
// void resize(int, int)
extern "C"
void C_ZN7QWidget6resizeEii(void *this_, int w, int h) {
  ((QWidget*)this_)->resize(w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:488
// void resize(const class QSize &)
extern "C"
void C_ZN7QWidget6resizeERK5QSize(void *this_, const QSize & arg0) {
  ((QWidget*)this_)->resize(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:489
// void setGeometry(int, int, int, int)
extern "C"
void C_ZN7QWidget11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QWidget*)this_)->setGeometry(x, y, w, h);
}
// /usr/include/qt/QtWidgets/qwidget.h:490
// void setGeometry(const class QRect &)
extern "C"
void C_ZN7QWidget11setGeometryERK5QRect(void *this_, const QRect & arg0) {
  ((QWidget*)this_)->setGeometry(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:491
// QByteArray saveGeometry()
extern "C"
void C_ZNK7QWidget12saveGeometryEv(void *this_) {
  /*return*/ ((QWidget*)this_)->saveGeometry();
}
// /usr/include/qt/QtWidgets/qwidget.h:492
// bool restoreGeometry(const class QByteArray &)
extern "C"
void C_ZN7QWidget15restoreGeometryERK10QByteArray(void *this_, const QByteArray & geometry) {
  /*return*/ ((QWidget*)this_)->restoreGeometry(geometry);
}
// /usr/include/qt/QtWidgets/qwidget.h:493
// void adjustSize()
extern "C"
void C_ZN7QWidget10adjustSizeEv(void *this_) {
  ((QWidget*)this_)->adjustSize();
}
// /usr/include/qt/QtWidgets/qwidget.h:494
// bool isVisible()
extern "C"
void C_ZNK7QWidget9isVisibleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isVisible();
}
// /usr/include/qt/QtWidgets/qwidget.h:495
// bool isVisibleTo(const class QWidget *)
extern "C"
void C_ZNK7QWidget11isVisibleToEPKS_(void *this_, const QWidget * arg0) {
  /*return*/ ((QWidget*)this_)->isVisibleTo(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:496
// bool isHidden()
extern "C"
void C_ZNK7QWidget8isHiddenEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isHidden();
}
// /usr/include/qt/QtWidgets/qwidget.h:498
// bool isMinimized()
extern "C"
void C_ZNK7QWidget11isMinimizedEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isMinimized();
}
// /usr/include/qt/QtWidgets/qwidget.h:499
// bool isMaximized()
extern "C"
void C_ZNK7QWidget11isMaximizedEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isMaximized();
}
// /usr/include/qt/QtWidgets/qwidget.h:500
// bool isFullScreen()
extern "C"
void C_ZNK7QWidget12isFullScreenEv(void *this_) {
  /*return*/ ((QWidget*)this_)->isFullScreen();
}
// /usr/include/qt/QtWidgets/qwidget.h:502
// Qt::WindowStates windowState()
extern "C"
void C_ZNK7QWidget11windowStateEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowState();
}
// /usr/include/qt/QtWidgets/qwidget.h:503
// void setWindowState(Qt::WindowStates)
extern "C"
void C_ZN7QWidget14setWindowStateE6QFlagsIN2Qt11WindowStateEE(void *this_, QFlags<Qt::WindowState> state) {
  ((QWidget*)this_)->setWindowState(state);
}
// /usr/include/qt/QtWidgets/qwidget.h:504
// void overrideWindowState(Qt::WindowStates)
extern "C"
void C_ZN7QWidget19overrideWindowStateE6QFlagsIN2Qt11WindowStateEE(void *this_, QFlags<Qt::WindowState> state) {
  ((QWidget*)this_)->overrideWindowState(state);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:506
// QSize sizeHint()
extern "C"
void C_ZNK7QWidget8sizeHintEv(void *this_) {
  /*return*/ ((QWidget*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:507
// QSize minimumSizeHint()
extern "C"
void C_ZNK7QWidget15minimumSizeHintEv(void *this_) {
  /*return*/ ((QWidget*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qwidget.h:509
// QSizePolicy sizePolicy()
extern "C"
void C_ZNK7QWidget10sizePolicyEv(void *this_) {
  /*return*/ ((QWidget*)this_)->sizePolicy();
}
// /usr/include/qt/QtWidgets/qwidget.h:510
// void setSizePolicy(class QSizePolicy)
extern "C"
void C_ZN7QWidget13setSizePolicyE11QSizePolicy(void *this_, QSizePolicy arg0) {
  ((QWidget*)this_)->setSizePolicy(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:511
// void setSizePolicy(class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void C_ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_(void *this_, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical) {
  ((QWidget*)this_)->setSizePolicy(horizontal, vertical);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:512
// int heightForWidth(int)
extern "C"
void C_ZNK7QWidget14heightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QWidget*)this_)->heightForWidth(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:513
// bool hasHeightForWidth()
extern "C"
void C_ZNK7QWidget17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QWidget*)this_)->hasHeightForWidth();
}
// /usr/include/qt/QtWidgets/qwidget.h:515
// QRegion visibleRegion()
extern "C"
void C_ZNK7QWidget13visibleRegionEv(void *this_) {
  /*return*/ ((QWidget*)this_)->visibleRegion();
}
// /usr/include/qt/QtWidgets/qwidget.h:517
// void setContentsMargins(int, int, int, int)
extern "C"
void C_ZN7QWidget18setContentsMarginsEiiii(void *this_, int left, int top, int right, int bottom) {
  ((QWidget*)this_)->setContentsMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qwidget.h:518
// void setContentsMargins(const class QMargins &)
extern "C"
void C_ZN7QWidget18setContentsMarginsERK8QMargins(void *this_, const QMargins & margins) {
  ((QWidget*)this_)->setContentsMargins(margins);
}
// /usr/include/qt/QtWidgets/qwidget.h:519
// void getContentsMargins(int *, int *, int *, int *)
extern "C"
void C_ZNK7QWidget18getContentsMarginsEPiS0_S0_S0_(void *this_, int * left, int * top, int * right, int * bottom) {
  ((QWidget*)this_)->getContentsMargins(left, top, right, bottom);
}
// /usr/include/qt/QtWidgets/qwidget.h:520
// QMargins contentsMargins()
extern "C"
void C_ZNK7QWidget15contentsMarginsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->contentsMargins();
}
// /usr/include/qt/QtWidgets/qwidget.h:522
// QRect contentsRect()
extern "C"
void C_ZNK7QWidget12contentsRectEv(void *this_) {
  /*return*/ ((QWidget*)this_)->contentsRect();
}
// /usr/include/qt/QtWidgets/qwidget.h:525
// QLayout * layout()
extern "C"
void C_ZNK7QWidget6layoutEv(void *this_) {
  /*return*/ ((QWidget*)this_)->layout();
}
// /usr/include/qt/QtWidgets/qwidget.h:526
// void setLayout(class QLayout *)
extern "C"
void C_ZN7QWidget9setLayoutEP7QLayout(void *this_, QLayout * arg0) {
  ((QWidget*)this_)->setLayout(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:527
// void updateGeometry()
extern "C"
void C_ZN7QWidget14updateGeometryEv(void *this_) {
  ((QWidget*)this_)->updateGeometry();
}
// /usr/include/qt/QtWidgets/qwidget.h:529
// void setParent(class QWidget *)
extern "C"
void C_ZN7QWidget9setParentEPS_(void *this_, QWidget * parent) {
  ((QWidget*)this_)->setParent(parent);
}
// /usr/include/qt/QtWidgets/qwidget.h:530
// void setParent(class QWidget *, Qt::WindowFlags)
extern "C"
void C_ZN7QWidget9setParentEPS_6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * parent, QFlags<Qt::WindowType> f) {
  ((QWidget*)this_)->setParent(parent, f);
}
// /usr/include/qt/QtWidgets/qwidget.h:532
// void scroll(int, int)
extern "C"
void C_ZN7QWidget6scrollEii(void *this_, int dx, int dy) {
  ((QWidget*)this_)->scroll(dx, dy);
}
// /usr/include/qt/QtWidgets/qwidget.h:533
// void scroll(int, int, const class QRect &)
extern "C"
void C_ZN7QWidget6scrollEiiRK5QRect(void *this_, int dx, int dy, const QRect & arg2) {
  ((QWidget*)this_)->scroll(dx, dy, arg2);
}
// /usr/include/qt/QtWidgets/qwidget.h:537
// QWidget * focusWidget()
extern "C"
void C_ZNK7QWidget11focusWidgetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->focusWidget();
}
// /usr/include/qt/QtWidgets/qwidget.h:538
// QWidget * nextInFocusChain()
extern "C"
void C_ZNK7QWidget16nextInFocusChainEv(void *this_) {
  /*return*/ ((QWidget*)this_)->nextInFocusChain();
}
// /usr/include/qt/QtWidgets/qwidget.h:539
// QWidget * previousInFocusChain()
extern "C"
void C_ZNK7QWidget20previousInFocusChainEv(void *this_) {
  /*return*/ ((QWidget*)this_)->previousInFocusChain();
}
// /usr/include/qt/QtWidgets/qwidget.h:542
// bool acceptDrops()
extern "C"
void C_ZNK7QWidget11acceptDropsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->acceptDrops();
}
// /usr/include/qt/QtWidgets/qwidget.h:543
// void setAcceptDrops(_Bool)
extern "C"
void C_ZN7QWidget14setAcceptDropsEb(void *this_, bool on) {
  ((QWidget*)this_)->setAcceptDrops(on);
}
// /usr/include/qt/QtWidgets/qwidget.h:547
// void addAction(class QAction *)
extern "C"
void C_ZN7QWidget9addActionEP7QAction(void *this_, QAction * action) {
  ((QWidget*)this_)->addAction(action);
}
// /usr/include/qt/QtWidgets/qwidget.h:552
// void addActions(QList<class QAction *>)
extern "C"
void C_ZN7QWidget10addActionsE5QListIP7QActionE(void *this_, QList<QAction *> actions) {
  ((QWidget*)this_)->addActions(actions);
}
// /usr/include/qt/QtWidgets/qwidget.h:553
// void insertActions(class QAction *, QList<class QAction *>)
extern "C"
void C_ZN7QWidget13insertActionsEP7QAction5QListIS1_E(void *this_, QAction * before, QList<QAction *> actions) {
  ((QWidget*)this_)->insertActions(before, actions);
}
// /usr/include/qt/QtWidgets/qwidget.h:555
// void insertAction(class QAction *, class QAction *)
extern "C"
void C_ZN7QWidget12insertActionEP7QActionS1_(void *this_, QAction * before, QAction * action) {
  ((QWidget*)this_)->insertAction(before, action);
}
// /usr/include/qt/QtWidgets/qwidget.h:556
// void removeAction(class QAction *)
extern "C"
void C_ZN7QWidget12removeActionEP7QAction(void *this_, QAction * action) {
  ((QWidget*)this_)->removeAction(action);
}
// /usr/include/qt/QtWidgets/qwidget.h:557
// QList<QAction *> actions()
extern "C"
void C_ZNK7QWidget7actionsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->actions();
}
// /usr/include/qt/QtWidgets/qwidget.h:560
// QWidget * parentWidget()
extern "C"
void C_ZNK7QWidget12parentWidgetEv(void *this_) {
  /*return*/ ((QWidget*)this_)->parentWidget();
}
// /usr/include/qt/QtWidgets/qwidget.h:562
// void setWindowFlags(Qt::WindowFlags)
extern "C"
void C_ZN7QWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> type) {
  ((QWidget*)this_)->setWindowFlags(type);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:563
// Qt::WindowFlags windowFlags()
extern "C"
void C_ZNK7QWidget11windowFlagsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowFlags();
}
// /usr/include/qt/QtWidgets/qwidget.h:564
// void overrideWindowFlags(Qt::WindowFlags)
extern "C"
void C_ZN7QWidget19overrideWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> type) {
  ((QWidget*)this_)->overrideWindowFlags(type);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:566
// Qt::WindowType windowType()
extern "C"
void C_ZNK7QWidget10windowTypeEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowType();
}
// static
// /usr/include/qt/QtWidgets/qwidget.h:568
// QWidget * find(WId)
extern "C"
void C_ZN7QWidget4findEy(WId arg0) {
  /*return*/ QWidget::find(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:569
// QWidget * childAt(int, int)
extern "C"
void C_ZNK7QWidget7childAtEii(void *this_, int x, int y) {
  /*return*/ ((QWidget*)this_)->childAt(x, y);
}
// /usr/include/qt/QtWidgets/qwidget.h:570
// QWidget * childAt(const class QPoint &)
extern "C"
void C_ZNK7QWidget7childAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QWidget*)this_)->childAt(p);
}
// /usr/include/qt/QtWidgets/qwidget.h:582
// void setAttribute(Qt::WidgetAttribute, _Bool)
extern "C"
void C_ZN7QWidget12setAttributeEN2Qt15WidgetAttributeEb(void *this_, Qt::WidgetAttribute arg0, bool on) {
  ((QWidget*)this_)->setAttribute(arg0, on);
}
// inline
// /usr/include/qt/QtWidgets/qwidget.h:583
// bool testAttribute(Qt::WidgetAttribute)
extern "C"
void C_ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE(void *this_, Qt::WidgetAttribute arg0) {
  /*return*/ ((QWidget*)this_)->testAttribute(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:585
// QPaintEngine * paintEngine()
extern "C"
void C_ZNK7QWidget11paintEngineEv(void *this_) {
  /*return*/ ((QWidget*)this_)->paintEngine();
}
// /usr/include/qt/QtWidgets/qwidget.h:587
// void ensurePolished()
extern "C"
void C_ZNK7QWidget14ensurePolishedEv(void *this_) {
  ((QWidget*)this_)->ensurePolished();
}
// /usr/include/qt/QtWidgets/qwidget.h:589
// bool isAncestorOf(const class QWidget *)
extern "C"
void C_ZNK7QWidget12isAncestorOfEPKS_(void *this_, const QWidget * child) {
  /*return*/ ((QWidget*)this_)->isAncestorOf(child);
}
// /usr/include/qt/QtWidgets/qwidget.h:596
// bool autoFillBackground()
extern "C"
void C_ZNK7QWidget18autoFillBackgroundEv(void *this_) {
  /*return*/ ((QWidget*)this_)->autoFillBackground();
}
// /usr/include/qt/QtWidgets/qwidget.h:597
// void setAutoFillBackground(_Bool)
extern "C"
void C_ZN7QWidget21setAutoFillBackgroundEb(void *this_, bool enabled) {
  ((QWidget*)this_)->setAutoFillBackground(enabled);
}
// /usr/include/qt/QtWidgets/qwidget.h:599
// QBackingStore * backingStore()
extern "C"
void C_ZNK7QWidget12backingStoreEv(void *this_) {
  /*return*/ ((QWidget*)this_)->backingStore();
}
// /usr/include/qt/QtWidgets/qwidget.h:601
// QWindow * windowHandle()
extern "C"
void C_ZNK7QWidget12windowHandleEv(void *this_) {
  /*return*/ ((QWidget*)this_)->windowHandle();
}
// static
// /usr/include/qt/QtWidgets/qwidget.h:603
// QWidget * createWindowContainer(class QWindow *, class QWidget *, Qt::WindowFlags)
extern "C"
void C_ZN7QWidget21createWindowContainerEP7QWindowPS_6QFlagsIN2Qt10WindowTypeEE(QWindow * window, QWidget * parent, QFlags<Qt::WindowType> flags) {
  /*return*/ QWidget::createWindowContainer(window, parent, flags);
}
// /usr/include/qt/QtWidgets/qwidget.h:608
// void windowTitleChanged(const class QString &)
extern "C"
void C_ZN7QWidget18windowTitleChangedERK7QString(void *this_, const QString & title) {
  ((QWidget*)this_)->windowTitleChanged(title);
}
// /usr/include/qt/QtWidgets/qwidget.h:609
// void windowIconChanged(const class QIcon &)
extern "C"
void C_ZN7QWidget17windowIconChangedERK5QIcon(void *this_, const QIcon & icon) {
  ((QWidget*)this_)->windowIconChanged(icon);
}
// /usr/include/qt/QtWidgets/qwidget.h:610
// void windowIconTextChanged(const class QString &)
extern "C"
void C_ZN7QWidget21windowIconTextChangedERK7QString(void *this_, const QString & iconText) {
  ((QWidget*)this_)->windowIconTextChanged(iconText);
}
// /usr/include/qt/QtWidgets/qwidget.h:611
// void customContextMenuRequested(const class QPoint &)
extern "C"
void C_ZN7QWidget26customContextMenuRequestedERK6QPoint(void *this_, const QPoint & pos) {
  ((QWidget*)this_)->customContextMenuRequested(pos);
}
// virtual
// /usr/include/qt/QtWidgets/qwidget.h:664
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK7QWidget16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery arg0) {
  /*return*/ ((QWidget*)this_)->inputMethodQuery(arg0);
}
// /usr/include/qt/QtWidgets/qwidget.h:666
// Qt::InputMethodHints inputMethodHints()
extern "C"
void C_ZNK7QWidget16inputMethodHintsEv(void *this_) {
  /*return*/ ((QWidget*)this_)->inputMethodHints();
}
// /usr/include/qt/QtWidgets/qwidget.h:667
// void setInputMethodHints(Qt::InputMethodHints)
extern "C"
void C_ZN7QWidget19setInputMethodHintsE6QFlagsIN2Qt15InputMethodHintEE(void *this_, QFlags<Qt::InputMethodHint> hints) {
  ((QWidget*)this_)->setInputMethodHints(hints);
}
//  main block end
