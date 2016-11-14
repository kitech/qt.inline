// /usr/include/qt/QtGui/qwindow.h
#include <qwindow.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qwindow.h:93
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QWindow10metaObjectEv(void *this_) {
  /*return*/ ((QWindow*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qwindow.h:134
// void QWindow(class QScreen *)
extern "C"
void* C_ZN7QWindowC1EP7QScreen(QScreen * screen) {
  return new QWindow(screen);
}
// /usr/include/qt/QtGui/qwindow.h:135
// void QWindow(class QWindow *)
extern "C"
void* C_ZN7QWindowC1EPS_(QWindow * parent) {
  return new QWindow(parent);
}
// virtual
// /usr/include/qt/QtGui/qwindow.h:136
// void ~QWindow()
extern "C"
void C_ZN7QWindowD1Ev(void *this_) {
  delete (QWindow*)(this_);
}
// /usr/include/qt/QtGui/qwindow.h:138
// void setSurfaceType(enum QSurface::SurfaceType)
extern "C"
void C_ZN7QWindow14setSurfaceTypeEN8QSurface11SurfaceTypeE(void *this_, QSurface::SurfaceType surfaceType) {
  ((QWindow*)this_)->setSurfaceType(surfaceType);
}
// virtual
// /usr/include/qt/QtGui/qwindow.h:139
// QSurface::SurfaceType surfaceType()
extern "C"
void C_ZNK7QWindow11surfaceTypeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->surfaceType();
}
// /usr/include/qt/QtGui/qwindow.h:141
// bool isVisible()
extern "C"
void C_ZNK7QWindow9isVisibleEv(void *this_) {
  /*return*/ ((QWindow*)this_)->isVisible();
}
// /usr/include/qt/QtGui/qwindow.h:143
// QWindow::Visibility visibility()
extern "C"
void C_ZNK7QWindow10visibilityEv(void *this_) {
  /*return*/ ((QWindow*)this_)->visibility();
}
// /usr/include/qt/QtGui/qwindow.h:144
// void setVisibility(enum QWindow::Visibility)
extern "C"
void C_ZN7QWindow13setVisibilityENS_10VisibilityE(void *this_, QWindow::Visibility v) {
  ((QWindow*)this_)->setVisibility(v);
}
// /usr/include/qt/QtGui/qwindow.h:146
// void create()
extern "C"
void C_ZN7QWindow6createEv(void *this_) {
  ((QWindow*)this_)->create();
}
// /usr/include/qt/QtGui/qwindow.h:148
// WId winId()
extern "C"
void C_ZNK7QWindow5winIdEv(void *this_) {
  /*return*/ ((QWindow*)this_)->winId();
}
// /usr/include/qt/QtGui/qwindow.h:150
// QWindow * parent()
extern "C"
void C_ZNK7QWindow6parentEv(void *this_) {
  /*return*/ ((QWindow*)this_)->parent();
}
// /usr/include/qt/QtGui/qwindow.h:151
// void setParent(class QWindow *)
extern "C"
void C_ZN7QWindow9setParentEPS_(void *this_, QWindow * parent) {
  ((QWindow*)this_)->setParent(parent);
}
// /usr/include/qt/QtGui/qwindow.h:153
// bool isTopLevel()
extern "C"
void C_ZNK7QWindow10isTopLevelEv(void *this_) {
  /*return*/ ((QWindow*)this_)->isTopLevel();
}
// /usr/include/qt/QtGui/qwindow.h:155
// bool isModal()
extern "C"
void C_ZNK7QWindow7isModalEv(void *this_) {
  /*return*/ ((QWindow*)this_)->isModal();
}
// /usr/include/qt/QtGui/qwindow.h:156
// Qt::WindowModality modality()
extern "C"
void C_ZNK7QWindow8modalityEv(void *this_) {
  /*return*/ ((QWindow*)this_)->modality();
}
// /usr/include/qt/QtGui/qwindow.h:157
// void setModality(Qt::WindowModality)
extern "C"
void C_ZN7QWindow11setModalityEN2Qt14WindowModalityE(void *this_, Qt::WindowModality modality) {
  ((QWindow*)this_)->setModality(modality);
}
// /usr/include/qt/QtGui/qwindow.h:159
// void setFormat(const class QSurfaceFormat &)
extern "C"
void C_ZN7QWindow9setFormatERK14QSurfaceFormat(void *this_, const QSurfaceFormat & format) {
  ((QWindow*)this_)->setFormat(format);
}
// virtual
// /usr/include/qt/QtGui/qwindow.h:160
// QSurfaceFormat format()
extern "C"
void C_ZNK7QWindow6formatEv(void *this_) {
  /*return*/ ((QWindow*)this_)->format();
}
// /usr/include/qt/QtGui/qwindow.h:161
// QSurfaceFormat requestedFormat()
extern "C"
void C_ZNK7QWindow15requestedFormatEv(void *this_) {
  /*return*/ ((QWindow*)this_)->requestedFormat();
}
// /usr/include/qt/QtGui/qwindow.h:163
// void setFlags(Qt::WindowFlags)
extern "C"
void C_ZN7QWindow8setFlagsE6QFlagsIN2Qt10WindowTypeEE(void *this_, QFlags<Qt::WindowType> flags) {
  ((QWindow*)this_)->setFlags(flags);
}
// /usr/include/qt/QtGui/qwindow.h:164
// Qt::WindowFlags flags()
extern "C"
void C_ZNK7QWindow5flagsEv(void *this_) {
  /*return*/ ((QWindow*)this_)->flags();
}
// /usr/include/qt/QtGui/qwindow.h:165
// Qt::WindowType type()
extern "C"
void C_ZNK7QWindow4typeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->type();
}
// /usr/include/qt/QtGui/qwindow.h:167
// QString title()
extern "C"
void C_ZNK7QWindow5titleEv(void *this_) {
  /*return*/ ((QWindow*)this_)->title();
}
// /usr/include/qt/QtGui/qwindow.h:169
// void setOpacity(qreal)
extern "C"
void C_ZN7QWindow10setOpacityEd(void *this_, qreal level) {
  ((QWindow*)this_)->setOpacity(level);
}
// /usr/include/qt/QtGui/qwindow.h:170
// qreal opacity()
extern "C"
void C_ZNK7QWindow7opacityEv(void *this_) {
  /*return*/ ((QWindow*)this_)->opacity();
}
// /usr/include/qt/QtGui/qwindow.h:172
// void setMask(const class QRegion &)
extern "C"
void C_ZN7QWindow7setMaskERK7QRegion(void *this_, const QRegion & region) {
  ((QWindow*)this_)->setMask(region);
}
// /usr/include/qt/QtGui/qwindow.h:173
// QRegion mask()
extern "C"
void C_ZNK7QWindow4maskEv(void *this_) {
  /*return*/ ((QWindow*)this_)->mask();
}
// /usr/include/qt/QtGui/qwindow.h:175
// bool isActive()
extern "C"
void C_ZNK7QWindow8isActiveEv(void *this_) {
  /*return*/ ((QWindow*)this_)->isActive();
}
// /usr/include/qt/QtGui/qwindow.h:177
// void reportContentOrientationChange(Qt::ScreenOrientation)
extern "C"
void C_ZN7QWindow30reportContentOrientationChangeEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QWindow*)this_)->reportContentOrientationChange(orientation);
}
// /usr/include/qt/QtGui/qwindow.h:178
// Qt::ScreenOrientation contentOrientation()
extern "C"
void C_ZNK7QWindow18contentOrientationEv(void *this_) {
  /*return*/ ((QWindow*)this_)->contentOrientation();
}
// /usr/include/qt/QtGui/qwindow.h:180
// qreal devicePixelRatio()
extern "C"
void C_ZNK7QWindow16devicePixelRatioEv(void *this_) {
  /*return*/ ((QWindow*)this_)->devicePixelRatio();
}
// /usr/include/qt/QtGui/qwindow.h:182
// Qt::WindowState windowState()
extern "C"
void C_ZNK7QWindow11windowStateEv(void *this_) {
  /*return*/ ((QWindow*)this_)->windowState();
}
// /usr/include/qt/QtGui/qwindow.h:183
// void setWindowState(Qt::WindowState)
extern "C"
void C_ZN7QWindow14setWindowStateEN2Qt11WindowStateE(void *this_, Qt::WindowState state) {
  ((QWindow*)this_)->setWindowState(state);
}
// /usr/include/qt/QtGui/qwindow.h:185
// void setTransientParent(class QWindow *)
extern "C"
void C_ZN7QWindow18setTransientParentEPS_(void *this_, QWindow * parent) {
  ((QWindow*)this_)->setTransientParent(parent);
}
// /usr/include/qt/QtGui/qwindow.h:186
// QWindow * transientParent()
extern "C"
void C_ZNK7QWindow15transientParentEv(void *this_) {
  /*return*/ ((QWindow*)this_)->transientParent();
}
// /usr/include/qt/QtGui/qwindow.h:193
// bool isAncestorOf(const class QWindow *, enum QWindow::AncestorMode)
extern "C"
void C_ZNK7QWindow12isAncestorOfEPKS_NS_12AncestorModeE(void *this_, const QWindow * child, QWindow::AncestorMode mode) {
  /*return*/ ((QWindow*)this_)->isAncestorOf(child, mode);
}
// /usr/include/qt/QtGui/qwindow.h:195
// bool isExposed()
extern "C"
void C_ZNK7QWindow9isExposedEv(void *this_) {
  /*return*/ ((QWindow*)this_)->isExposed();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:197
// int minimumWidth()
extern "C"
void C_ZNK7QWindow12minimumWidthEv(void *this_) {
  /*return*/ ((QWindow*)this_)->minimumWidth();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:198
// int minimumHeight()
extern "C"
void C_ZNK7QWindow13minimumHeightEv(void *this_) {
  /*return*/ ((QWindow*)this_)->minimumHeight();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:199
// int maximumWidth()
extern "C"
void C_ZNK7QWindow12maximumWidthEv(void *this_) {
  /*return*/ ((QWindow*)this_)->maximumWidth();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:200
// int maximumHeight()
extern "C"
void C_ZNK7QWindow13maximumHeightEv(void *this_) {
  /*return*/ ((QWindow*)this_)->maximumHeight();
}
// /usr/include/qt/QtGui/qwindow.h:202
// QSize minimumSize()
extern "C"
void C_ZNK7QWindow11minimumSizeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->minimumSize();
}
// /usr/include/qt/QtGui/qwindow.h:203
// QSize maximumSize()
extern "C"
void C_ZNK7QWindow11maximumSizeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->maximumSize();
}
// /usr/include/qt/QtGui/qwindow.h:204
// QSize baseSize()
extern "C"
void C_ZNK7QWindow8baseSizeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->baseSize();
}
// /usr/include/qt/QtGui/qwindow.h:205
// QSize sizeIncrement()
extern "C"
void C_ZNK7QWindow13sizeIncrementEv(void *this_) {
  /*return*/ ((QWindow*)this_)->sizeIncrement();
}
// /usr/include/qt/QtGui/qwindow.h:207
// void setMinimumSize(const class QSize &)
extern "C"
void C_ZN7QWindow14setMinimumSizeERK5QSize(void *this_, const QSize & size) {
  ((QWindow*)this_)->setMinimumSize(size);
}
// /usr/include/qt/QtGui/qwindow.h:208
// void setMaximumSize(const class QSize &)
extern "C"
void C_ZN7QWindow14setMaximumSizeERK5QSize(void *this_, const QSize & size) {
  ((QWindow*)this_)->setMaximumSize(size);
}
// /usr/include/qt/QtGui/qwindow.h:209
// void setBaseSize(const class QSize &)
extern "C"
void C_ZN7QWindow11setBaseSizeERK5QSize(void *this_, const QSize & size) {
  ((QWindow*)this_)->setBaseSize(size);
}
// /usr/include/qt/QtGui/qwindow.h:210
// void setSizeIncrement(const class QSize &)
extern "C"
void C_ZN7QWindow16setSizeIncrementERK5QSize(void *this_, const QSize & size) {
  ((QWindow*)this_)->setSizeIncrement(size);
}
// /usr/include/qt/QtGui/qwindow.h:212
// void setGeometry(int, int, int, int)
extern "C"
void C_ZN7QWindow11setGeometryEiiii(void *this_, int posx, int posy, int w, int h) {
  ((QWindow*)this_)->setGeometry(posx, posy, w, h);
}
// /usr/include/qt/QtGui/qwindow.h:213
// void setGeometry(const class QRect &)
extern "C"
void C_ZN7QWindow11setGeometryERK5QRect(void *this_, const QRect & rect) {
  ((QWindow*)this_)->setGeometry(rect);
}
// /usr/include/qt/QtGui/qwindow.h:214
// QRect geometry()
extern "C"
void C_ZNK7QWindow8geometryEv(void *this_) {
  /*return*/ ((QWindow*)this_)->geometry();
}
// /usr/include/qt/QtGui/qwindow.h:216
// QMargins frameMargins()
extern "C"
void C_ZNK7QWindow12frameMarginsEv(void *this_) {
  /*return*/ ((QWindow*)this_)->frameMargins();
}
// /usr/include/qt/QtGui/qwindow.h:217
// QRect frameGeometry()
extern "C"
void C_ZNK7QWindow13frameGeometryEv(void *this_) {
  /*return*/ ((QWindow*)this_)->frameGeometry();
}
// /usr/include/qt/QtGui/qwindow.h:219
// QPoint framePosition()
extern "C"
void C_ZNK7QWindow13framePositionEv(void *this_) {
  /*return*/ ((QWindow*)this_)->framePosition();
}
// /usr/include/qt/QtGui/qwindow.h:220
// void setFramePosition(const class QPoint &)
extern "C"
void C_ZN7QWindow16setFramePositionERK6QPoint(void *this_, const QPoint & point) {
  ((QWindow*)this_)->setFramePosition(point);
}
// inline
// /usr/include/qt/QtGui/qwindow.h:222
// int width()
extern "C"
void C_ZNK7QWindow5widthEv(void *this_) {
  /*return*/ ((QWindow*)this_)->width();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:223
// int height()
extern "C"
void C_ZNK7QWindow6heightEv(void *this_) {
  /*return*/ ((QWindow*)this_)->height();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:224
// int x()
extern "C"
void C_ZNK7QWindow1xEv(void *this_) {
  /*return*/ ((QWindow*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:225
// int y()
extern "C"
void C_ZNK7QWindow1yEv(void *this_) {
  /*return*/ ((QWindow*)this_)->y();
}
// inline virtual
// /usr/include/qt/QtGui/qwindow.h:227
// QSize size()
extern "C"
void C_ZNK7QWindow4sizeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->size();
}
// inline
// /usr/include/qt/QtGui/qwindow.h:228
// QPoint position()
extern "C"
void C_ZNK7QWindow8positionEv(void *this_) {
  /*return*/ ((QWindow*)this_)->position();
}
// /usr/include/qt/QtGui/qwindow.h:230
// void setPosition(const class QPoint &)
extern "C"
void C_ZN7QWindow11setPositionERK6QPoint(void *this_, const QPoint & pt) {
  ((QWindow*)this_)->setPosition(pt);
}
// /usr/include/qt/QtGui/qwindow.h:231
// void setPosition(int, int)
extern "C"
void C_ZN7QWindow11setPositionEii(void *this_, int posx, int posy) {
  ((QWindow*)this_)->setPosition(posx, posy);
}
// /usr/include/qt/QtGui/qwindow.h:233
// void resize(const class QSize &)
extern "C"
void C_ZN7QWindow6resizeERK5QSize(void *this_, const QSize & newSize) {
  ((QWindow*)this_)->resize(newSize);
}
// /usr/include/qt/QtGui/qwindow.h:234
// void resize(int, int)
extern "C"
void C_ZN7QWindow6resizeEii(void *this_, int w, int h) {
  ((QWindow*)this_)->resize(w, h);
}
// /usr/include/qt/QtGui/qwindow.h:236
// void setFilePath(const class QString &)
extern "C"
void C_ZN7QWindow11setFilePathERK7QString(void *this_, const QString & filePath) {
  ((QWindow*)this_)->setFilePath(filePath);
}
// /usr/include/qt/QtGui/qwindow.h:237
// QString filePath()
extern "C"
void C_ZNK7QWindow8filePathEv(void *this_) {
  /*return*/ ((QWindow*)this_)->filePath();
}
// /usr/include/qt/QtGui/qwindow.h:239
// void setIcon(const class QIcon &)
extern "C"
void C_ZN7QWindow7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QWindow*)this_)->setIcon(icon);
}
// /usr/include/qt/QtGui/qwindow.h:240
// QIcon icon()
extern "C"
void C_ZNK7QWindow4iconEv(void *this_) {
  /*return*/ ((QWindow*)this_)->icon();
}
// /usr/include/qt/QtGui/qwindow.h:242
// void destroy()
extern "C"
void C_ZN7QWindow7destroyEv(void *this_) {
  ((QWindow*)this_)->destroy();
}
// /usr/include/qt/QtGui/qwindow.h:244
// QPlatformWindow * handle()
extern "C"
void C_ZNK7QWindow6handleEv(void *this_) {
  /*return*/ ((QWindow*)this_)->handle();
}
// /usr/include/qt/QtGui/qwindow.h:246
// bool setKeyboardGrabEnabled(_Bool)
extern "C"
void C_ZN7QWindow22setKeyboardGrabEnabledEb(void *this_, bool grab) {
  /*return*/ ((QWindow*)this_)->setKeyboardGrabEnabled(grab);
}
// /usr/include/qt/QtGui/qwindow.h:247
// bool setMouseGrabEnabled(_Bool)
extern "C"
void C_ZN7QWindow19setMouseGrabEnabledEb(void *this_, bool grab) {
  /*return*/ ((QWindow*)this_)->setMouseGrabEnabled(grab);
}
// /usr/include/qt/QtGui/qwindow.h:249
// QScreen * screen()
extern "C"
void C_ZNK7QWindow6screenEv(void *this_) {
  /*return*/ ((QWindow*)this_)->screen();
}
// /usr/include/qt/QtGui/qwindow.h:250
// void setScreen(class QScreen *)
extern "C"
void C_ZN7QWindow9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QWindow*)this_)->setScreen(screen);
}
// virtual
// /usr/include/qt/QtGui/qwindow.h:252
// QAccessibleInterface * accessibleRoot()
extern "C"
void C_ZNK7QWindow14accessibleRootEv(void *this_) {
  /*return*/ ((QWindow*)this_)->accessibleRoot();
}
// virtual
// /usr/include/qt/QtGui/qwindow.h:253
// QObject * focusObject()
extern "C"
void C_ZNK7QWindow11focusObjectEv(void *this_) {
  /*return*/ ((QWindow*)this_)->focusObject();
}
// /usr/include/qt/QtGui/qwindow.h:255
// QPoint mapToGlobal(const class QPoint &)
extern "C"
void C_ZNK7QWindow11mapToGlobalERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QWindow*)this_)->mapToGlobal(pos);
}
// /usr/include/qt/QtGui/qwindow.h:256
// QPoint mapFromGlobal(const class QPoint &)
extern "C"
void C_ZNK7QWindow13mapFromGlobalERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QWindow*)this_)->mapFromGlobal(pos);
}
// /usr/include/qt/QtGui/qwindow.h:259
// QCursor cursor()
extern "C"
void C_ZNK7QWindow6cursorEv(void *this_) {
  /*return*/ ((QWindow*)this_)->cursor();
}
// /usr/include/qt/QtGui/qwindow.h:260
// void setCursor(const class QCursor &)
extern "C"
void C_ZN7QWindow9setCursorERK7QCursor(void *this_, const QCursor & a0) {
  ((QWindow*)this_)->setCursor(a0);
}
// /usr/include/qt/QtGui/qwindow.h:261
// void unsetCursor()
extern "C"
void C_ZN7QWindow11unsetCursorEv(void *this_) {
  ((QWindow*)this_)->unsetCursor();
}
// static
// /usr/include/qt/QtGui/qwindow.h:264
// QWindow * fromWinId(WId)
extern "C"
void C_ZN7QWindow9fromWinIdEy(WId id) {
  /*return*/ QWindow::fromWinId(id);
}
// /usr/include/qt/QtGui/qwindow.h:267
// void requestActivate()
extern "C"
void C_ZN7QWindow15requestActivateEv(void *this_) {
  ((QWindow*)this_)->requestActivate();
}
// /usr/include/qt/QtGui/qwindow.h:269
// void setVisible(_Bool)
extern "C"
void C_ZN7QWindow10setVisibleEb(void *this_, bool visible) {
  ((QWindow*)this_)->setVisible(visible);
}
// /usr/include/qt/QtGui/qwindow.h:271
// void show()
extern "C"
void C_ZN7QWindow4showEv(void *this_) {
  ((QWindow*)this_)->show();
}
// /usr/include/qt/QtGui/qwindow.h:272
// void hide()
extern "C"
void C_ZN7QWindow4hideEv(void *this_) {
  ((QWindow*)this_)->hide();
}
// /usr/include/qt/QtGui/qwindow.h:274
// void showMinimized()
extern "C"
void C_ZN7QWindow13showMinimizedEv(void *this_) {
  ((QWindow*)this_)->showMinimized();
}
// /usr/include/qt/QtGui/qwindow.h:275
// void showMaximized()
extern "C"
void C_ZN7QWindow13showMaximizedEv(void *this_) {
  ((QWindow*)this_)->showMaximized();
}
// /usr/include/qt/QtGui/qwindow.h:276
// void showFullScreen()
extern "C"
void C_ZN7QWindow14showFullScreenEv(void *this_) {
  ((QWindow*)this_)->showFullScreen();
}
// /usr/include/qt/QtGui/qwindow.h:277
// void showNormal()
extern "C"
void C_ZN7QWindow10showNormalEv(void *this_) {
  ((QWindow*)this_)->showNormal();
}
// /usr/include/qt/QtGui/qwindow.h:279
// bool close()
extern "C"
void C_ZN7QWindow5closeEv(void *this_) {
  /*return*/ ((QWindow*)this_)->close();
}
// /usr/include/qt/QtGui/qwindow.h:280
// void raise()
extern "C"
void C_ZN7QWindow5raiseEv(void *this_) {
  ((QWindow*)this_)->raise();
}
// /usr/include/qt/QtGui/qwindow.h:281
// void lower()
extern "C"
void C_ZN7QWindow5lowerEv(void *this_) {
  ((QWindow*)this_)->lower();
}
// /usr/include/qt/QtGui/qwindow.h:283
// void setTitle(const class QString &)
extern "C"
void C_ZN7QWindow8setTitleERK7QString(void *this_, const QString & a0) {
  ((QWindow*)this_)->setTitle(a0);
}
// /usr/include/qt/QtGui/qwindow.h:285
// void setX(int)
extern "C"
void C_ZN7QWindow4setXEi(void *this_, int arg) {
  ((QWindow*)this_)->setX(arg);
}
// /usr/include/qt/QtGui/qwindow.h:286
// void setY(int)
extern "C"
void C_ZN7QWindow4setYEi(void *this_, int arg) {
  ((QWindow*)this_)->setY(arg);
}
// /usr/include/qt/QtGui/qwindow.h:287
// void setWidth(int)
extern "C"
void C_ZN7QWindow8setWidthEi(void *this_, int arg) {
  ((QWindow*)this_)->setWidth(arg);
}
// /usr/include/qt/QtGui/qwindow.h:288
// void setHeight(int)
extern "C"
void C_ZN7QWindow9setHeightEi(void *this_, int arg) {
  ((QWindow*)this_)->setHeight(arg);
}
// /usr/include/qt/QtGui/qwindow.h:290
// void setMinimumWidth(int)
extern "C"
void C_ZN7QWindow15setMinimumWidthEi(void *this_, int w) {
  ((QWindow*)this_)->setMinimumWidth(w);
}
// /usr/include/qt/QtGui/qwindow.h:291
// void setMinimumHeight(int)
extern "C"
void C_ZN7QWindow16setMinimumHeightEi(void *this_, int h) {
  ((QWindow*)this_)->setMinimumHeight(h);
}
// /usr/include/qt/QtGui/qwindow.h:292
// void setMaximumWidth(int)
extern "C"
void C_ZN7QWindow15setMaximumWidthEi(void *this_, int w) {
  ((QWindow*)this_)->setMaximumWidth(w);
}
// /usr/include/qt/QtGui/qwindow.h:293
// void setMaximumHeight(int)
extern "C"
void C_ZN7QWindow16setMaximumHeightEi(void *this_, int h) {
  ((QWindow*)this_)->setMaximumHeight(h);
}
// /usr/include/qt/QtGui/qwindow.h:295
// void alert(int)
extern "C"
void C_ZN7QWindow5alertEi(void *this_, int msec) {
  ((QWindow*)this_)->alert(msec);
}
// /usr/include/qt/QtGui/qwindow.h:297
// void requestUpdate()
extern "C"
void C_ZN7QWindow13requestUpdateEv(void *this_) {
  ((QWindow*)this_)->requestUpdate();
}
// /usr/include/qt/QtGui/qwindow.h:300
// void screenChanged(class QScreen *)
extern "C"
void C_ZN7QWindow13screenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QWindow*)this_)->screenChanged(screen);
}
// /usr/include/qt/QtGui/qwindow.h:301
// void modalityChanged(Qt::WindowModality)
extern "C"
void C_ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(void *this_, Qt::WindowModality modality) {
  ((QWindow*)this_)->modalityChanged(modality);
}
// /usr/include/qt/QtGui/qwindow.h:302
// void windowStateChanged(Qt::WindowState)
extern "C"
void C_ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(void *this_, Qt::WindowState windowState) {
  ((QWindow*)this_)->windowStateChanged(windowState);
}
// /usr/include/qt/QtGui/qwindow.h:303
// void windowTitleChanged(const class QString &)
extern "C"
void C_ZN7QWindow18windowTitleChangedERK7QString(void *this_, const QString & title) {
  ((QWindow*)this_)->windowTitleChanged(title);
}
// /usr/include/qt/QtGui/qwindow.h:305
// void xChanged(int)
extern "C"
void C_ZN7QWindow8xChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->xChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:306
// void yChanged(int)
extern "C"
void C_ZN7QWindow8yChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->yChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:308
// void widthChanged(int)
extern "C"
void C_ZN7QWindow12widthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->widthChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:309
// void heightChanged(int)
extern "C"
void C_ZN7QWindow13heightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->heightChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:311
// void minimumWidthChanged(int)
extern "C"
void C_ZN7QWindow19minimumWidthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->minimumWidthChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:312
// void minimumHeightChanged(int)
extern "C"
void C_ZN7QWindow20minimumHeightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->minimumHeightChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:313
// void maximumWidthChanged(int)
extern "C"
void C_ZN7QWindow19maximumWidthChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->maximumWidthChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:314
// void maximumHeightChanged(int)
extern "C"
void C_ZN7QWindow20maximumHeightChangedEi(void *this_, int arg) {
  ((QWindow*)this_)->maximumHeightChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:316
// void visibleChanged(_Bool)
extern "C"
void C_ZN7QWindow14visibleChangedEb(void *this_, bool arg) {
  ((QWindow*)this_)->visibleChanged(arg);
}
// /usr/include/qt/QtGui/qwindow.h:317
// void visibilityChanged(class QWindow::Visibility)
extern "C"
void C_ZN7QWindow17visibilityChangedENS_10VisibilityE(void *this_, QWindow::Visibility visibility) {
  ((QWindow*)this_)->visibilityChanged(visibility);
}
// /usr/include/qt/QtGui/qwindow.h:318
// void activeChanged()
extern "C"
void C_ZN7QWindow13activeChangedEv(void *this_) {
  ((QWindow*)this_)->activeChanged();
}
// /usr/include/qt/QtGui/qwindow.h:319
// void contentOrientationChanged(Qt::ScreenOrientation)
extern "C"
void C_ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(void *this_, Qt::ScreenOrientation orientation) {
  ((QWindow*)this_)->contentOrientationChanged(orientation);
}
// /usr/include/qt/QtGui/qwindow.h:321
// void focusObjectChanged(class QObject *)
extern "C"
void C_ZN7QWindow18focusObjectChangedEP7QObject(void *this_, QObject * object) {
  ((QWindow*)this_)->focusObjectChanged(object);
}
// /usr/include/qt/QtGui/qwindow.h:323
// void opacityChanged(qreal)
extern "C"
void C_ZN7QWindow14opacityChangedEd(void *this_, qreal opacity) {
  ((QWindow*)this_)->opacityChanged(opacity);
}