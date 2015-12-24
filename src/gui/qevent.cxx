// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qevent.h
// dst-file: /src/gui/qevent.cxx
//

// header block begin =>
#include <qevent.h>

extern "C" {

  // proto:  QString QWhatsThisClickedEvent::href();
QString* _ZNK22QWhatsThisClickedEvent4hrefEv(void *that)

{
  QWhatsThisClickedEvent *cthat = (QWhatsThisClickedEvent *)that;
  auto recret = cthat->href();
  return new QString(recret);
}

  // proto:  const QRegion & QExposeEvent::region();
const QRegion * _ZNK12QExposeEvent6regionEv(void *that)

{
  QExposeEvent *cthat = (QExposeEvent *)that;
  return &cthat->region();
}

  // proto:  const QString & QInputMethodEvent::preeditString();
const QString * _ZNK17QInputMethodEvent13preeditStringEv(void *that)

{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return &cthat->preeditString();
}

  // proto:  int QInputMethodEvent::replacementStart();
int _ZNK17QInputMethodEvent16replacementStartEv(void *that)

{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return cthat->replacementStart();
}

  // proto:  const QString & QInputMethodEvent::commitString();
const QString * _ZNK17QInputMethodEvent12commitStringEv(void *that)

{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return &cthat->commitString();
}

  // proto:  int QInputMethodEvent::replacementLength();
int _ZNK17QInputMethodEvent17replacementLengthEv(void *that)

{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return cthat->replacementLength();
}

  // proto:  const QPoint & QHelpEvent::globalPos();
const QPoint * _ZNK10QHelpEvent9globalPosEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return &cthat->globalPos();
}

  // proto:  int QHelpEvent::globalX();
int _ZNK10QHelpEvent7globalXEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPoint & QHelpEvent::pos();
const QPoint * _ZNK10QHelpEvent3posEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return &cthat->pos();
}

  // proto:  int QHelpEvent::y();
int _ZNK10QHelpEvent1yEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->y();
}

  // proto:  int QHelpEvent::globalY();
int _ZNK10QHelpEvent7globalYEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->globalY();
}

  // proto:  int QHelpEvent::x();
int _ZNK10QHelpEvent1xEv(void *that)

{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->x();
}

  // proto:  QAction * QActionEvent::before();
QAction * _ZNK12QActionEvent6beforeEv(void *that)

{
  QActionEvent *cthat = (QActionEvent *)that;
  return cthat->before();
}

  // proto:  QAction * QActionEvent::action();
QAction * _ZNK12QActionEvent6actionEv(void *that)

{
  QActionEvent *cthat = (QActionEvent *)that;
  return cthat->action();
}

  // proto:  QPoint QMouseEvent::globalPos();
QPoint* _ZNK11QMouseEvent9globalPosEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  int QMouseEvent::y();
int _ZNK11QMouseEvent1yEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->y();
}

  // proto:  const QPointF & QMouseEvent::screenPos();
const QPointF * _ZNK11QMouseEvent9screenPosEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return &cthat->screenPos();
}

  // proto:  int QMouseEvent::x();
int _ZNK11QMouseEvent1xEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->x();
}

  // proto:  int QMouseEvent::globalX();
int _ZNK11QMouseEvent7globalXEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->globalX();
}

  // proto:  int QMouseEvent::globalY();
int _ZNK11QMouseEvent7globalYEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->globalY();
}

  // proto:  QPoint QMouseEvent::pos();
QPoint* _ZNK11QMouseEvent3posEv(void *that)

{
  QMouseEvent *cthat = (QMouseEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  QString QFileOpenEvent::file();
QString* _ZNK14QFileOpenEvent4fileEv(void *that)

{
  QFileOpenEvent *cthat = (QFileOpenEvent *)that;
  auto recret = cthat->file();
  return new QString(recret);
}

  // proto:  bool QToolBarChangeEvent::toggle();
bool _ZNK19QToolBarChangeEvent6toggleEv(void *that)

{
  QToolBarChangeEvent *cthat = (QToolBarChangeEvent *)that;
  return cthat->toggle();
}

  // proto:  int QTabletEvent::x();
int _ZNK12QTabletEvent1xEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->x();
}

  // proto:  int QTabletEvent::xTilt();
int _ZNK12QTabletEvent5xTiltEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->xTilt();
}

  // proto:  qint64 QTabletEvent::uniqueId();
qint64 _ZNK12QTabletEvent8uniqueIdEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->uniqueId();
}

  // proto:  const QPointF & QTabletEvent::globalPosF();
const QPointF * _ZNK12QTabletEvent10globalPosFEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return &cthat->globalPosF();
}

  // proto:  int QTabletEvent::z();
int _ZNK12QTabletEvent1zEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->z();
}

  // proto:  int QTabletEvent::y();
int _ZNK12QTabletEvent1yEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QTabletEvent::pos();
QPoint* _ZNK12QTabletEvent3posEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  qreal QTabletEvent::rotation();
qreal _ZNK12QTabletEvent8rotationEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->rotation();
}

  // proto:  QPoint QTabletEvent::globalPos();
QPoint* _ZNK12QTabletEvent9globalPosEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  qreal QTabletEvent::tangentialPressure();
qreal _ZNK12QTabletEvent18tangentialPressureEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->tangentialPressure();
}

  // proto:  qreal QTabletEvent::hiResGlobalX();
qreal _ZNK12QTabletEvent12hiResGlobalXEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->hiResGlobalX();
}

  // proto:  int QTabletEvent::globalY();
int _ZNK12QTabletEvent7globalYEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->globalY();
}

  // proto:  qreal QTabletEvent::hiResGlobalY();
qreal _ZNK12QTabletEvent12hiResGlobalYEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->hiResGlobalY();
}

  // proto:  int QTabletEvent::globalX();
int _ZNK12QTabletEvent7globalXEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPointF & QTabletEvent::posF();
const QPointF * _ZNK12QTabletEvent4posFEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return &cthat->posF();
}

  // proto:  qreal QTabletEvent::pressure();
qreal _ZNK12QTabletEvent8pressureEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->pressure();
}

  // proto:  int QTabletEvent::yTilt();
int _ZNK12QTabletEvent5yTiltEv(void *that)

{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->yTilt();
}

  // proto:  void QTouchEvent::setDevice(QTouchDevice * adevice);
void _ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *that, QTouchDevice * adevice)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setDevice(adevice);
}

  // proto:  QWindow * QTouchEvent::window();
QWindow * _ZNK11QTouchEvent6windowEv(void *that)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->window();
}

  // proto:  QTouchDevice * QTouchEvent::device();
QTouchDevice * _ZNK11QTouchEvent6deviceEv(void *that)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->device();
}

  // proto:  QObject * QTouchEvent::target();
QObject * _ZNK11QTouchEvent6targetEv(void *that)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->target();
}

  // proto:  void QTouchEvent::setTouchPointStates(Qt::TouchPointStates aTouchPointStates);
void _ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE(void *that, Qt::TouchPointStates aTouchPointStates)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTouchPointStates(aTouchPointStates);
}

  // proto:  void QTouchEvent::setTouchPoints(const QList<QTouchEvent::TouchPoint> & atouchPoints);
void _ZN11QTouchEvent14setTouchPointsERK5QListINS_10TouchPointEE(void *that, const QList<QTouchEvent::TouchPoint> & atouchPoints)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTouchPoints(atouchPoints);
}

  // proto:  void QTouchEvent::setWindow(QWindow * awindow);
void _ZN11QTouchEvent9setWindowEP7QWindow(void *that, QWindow * awindow)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setWindow(awindow);
}

  // proto:  void QTouchEvent::setTarget(QObject * atarget);
void _ZN11QTouchEvent9setTargetEP7QObject(void *that, QObject * atarget)

{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTarget(atarget);
}

  // proto:  int QWheelEvent::x();
int _ZNK11QWheelEvent1xEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->x();
}

  // proto:  QPoint QWheelEvent::angleDelta();
QPoint* _ZNK11QWheelEvent10angleDeltaEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->angleDelta();
  return new QPoint(recret);
}

  // proto:  QPoint QWheelEvent::pos();
QPoint* _ZNK11QWheelEvent3posEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  int QWheelEvent::globalY();
int _ZNK11QWheelEvent7globalYEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->globalY();
}

  // proto:  const QPointF & QWheelEvent::posF();
const QPointF * _ZNK11QWheelEvent4posFEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return &cthat->posF();
}

  // proto:  int QWheelEvent::globalX();
int _ZNK11QWheelEvent7globalXEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->globalX();
}

  // proto:  int QWheelEvent::y();
int _ZNK11QWheelEvent1yEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QWheelEvent::pixelDelta();
QPoint* _ZNK11QWheelEvent10pixelDeltaEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->pixelDelta();
  return new QPoint(recret);
}

  // proto:  int QWheelEvent::delta();
int _ZNK11QWheelEvent5deltaEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->delta();
}

  // proto:  QPoint QWheelEvent::globalPos();
QPoint* _ZNK11QWheelEvent9globalPosEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  const QPointF & QWheelEvent::globalPosF();
const QPointF * _ZNK11QWheelEvent10globalPosFEv(void *that)

{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return &cthat->globalPosF();
}

  // proto:  const QPointF & QHoverEvent::posF();
const QPointF * _ZNK11QHoverEvent4posFEv(void *that)

{
  QHoverEvent *cthat = (QHoverEvent *)that;
  return &cthat->posF();
}

  // proto:  QPoint QHoverEvent::oldPos();
QPoint* _ZNK11QHoverEvent6oldPosEv(void *that)

{
  QHoverEvent *cthat = (QHoverEvent *)that;
  auto recret = cthat->oldPos();
  return new QPoint(recret);
}

  // proto:  const QPointF & QHoverEvent::oldPosF();
const QPointF * _ZNK11QHoverEvent7oldPosFEv(void *that)

{
  QHoverEvent *cthat = (QHoverEvent *)that;
  return &cthat->oldPosF();
}

  // proto:  QPoint QHoverEvent::pos();
QPoint* _ZNK11QHoverEvent3posEv(void *that)

{
  QHoverEvent *cthat = (QHoverEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  void QDragMoveEvent::accept(const QRect & r);
void _ZN14QDragMoveEvent6acceptERK5QRect(void *that, const QRect & r)

{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->accept(r);
}

  // proto:  QRect QDragMoveEvent::answerRect();
QRect* _ZNK14QDragMoveEvent10answerRectEv(void *that)

{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
  auto recret = cthat->answerRect();
  return new QRect(recret);
}

  // proto:  void QDragMoveEvent::ignore(const QRect & r);
void _ZN14QDragMoveEvent6ignoreERK5QRect(void *that, const QRect & r)

{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->ignore(r);
}

  // proto:  void QDragMoveEvent::ignore();
void _ZN14QDragMoveEvent6ignoreEv(void *that)

{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->ignore();
}

  // proto:  void QDragMoveEvent::accept();
void _ZN14QDragMoveEvent6acceptEv(void *that)

{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->accept();
}

  // proto:  const QRect & QPaintEvent::rect();
const QRect * _ZNK11QPaintEvent4rectEv(void *that)

{
  QPaintEvent *cthat = (QPaintEvent *)that;
  return &cthat->rect();
}

  // proto:  const QRegion & QPaintEvent::region();
const QRegion * _ZNK11QPaintEvent6regionEv(void *that)

{
  QPaintEvent *cthat = (QPaintEvent *)that;
  return &cthat->region();
}

  // proto:  bool QFocusEvent::lostFocus();
bool _ZNK11QFocusEvent9lostFocusEv(void *that)

{
  QFocusEvent *cthat = (QFocusEvent *)that;
  return cthat->lostFocus();
}

  // proto:  bool QFocusEvent::gotFocus();
bool _ZNK11QFocusEvent8gotFocusEv(void *that)

{
  QFocusEvent *cthat = (QFocusEvent *)that;
  return cthat->gotFocus();
}

  // proto:  const QPoint QNativeGestureEvent::pos();
const QPoint* _ZNK19QNativeGestureEvent3posEv(void *that)

{
  QNativeGestureEvent *cthat = (QNativeGestureEvent *)that;
  auto recret = cthat->pos();
  return new const QPoint(recret);
}

  // proto:  const QPoint QNativeGestureEvent::globalPos();
const QPoint* _ZNK19QNativeGestureEvent9globalPosEv(void *that)

{
  QNativeGestureEvent *cthat = (QNativeGestureEvent *)that;
  auto recret = cthat->globalPos();
  return new const QPoint(recret);
}

  // proto:  const QSize & QResizeEvent::oldSize();
const QSize * _ZNK12QResizeEvent7oldSizeEv(void *that)

{
  QResizeEvent *cthat = (QResizeEvent *)that;
  return &cthat->oldSize();
}

  // proto:  const QSize & QResizeEvent::size();
const QSize * _ZNK12QResizeEvent4sizeEv(void *that)

{
  QResizeEvent *cthat = (QResizeEvent *)that;
  return &cthat->size();
}

  // proto:  QString QStatusTipEvent::tip();
QString* _ZNK15QStatusTipEvent3tipEv(void *that)

{
  QStatusTipEvent *cthat = (QStatusTipEvent *)that;
  auto recret = cthat->tip();
  return new QString(recret);
}

  // proto:  int QEnterEvent::y();
int _ZNK11QEnterEvent1yEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QEnterEvent::pos();
QPoint* _ZNK11QEnterEvent3posEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  int QEnterEvent::globalX();
int _ZNK11QEnterEvent7globalXEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->globalX();
}

  // proto:  int QEnterEvent::x();
int _ZNK11QEnterEvent1xEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->x();
}

  // proto:  QPoint QEnterEvent::globalPos();
QPoint* _ZNK11QEnterEvent9globalPosEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  int QEnterEvent::globalY();
int _ZNK11QEnterEvent7globalYEv(void *that)

{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->globalY();
}

  // proto:  const QPoint & QMoveEvent::oldPos();
const QPoint * _ZNK10QMoveEvent6oldPosEv(void *that)

{
  QMoveEvent *cthat = (QMoveEvent *)that;
  return &cthat->oldPos();
}

  // proto:  const QPoint & QMoveEvent::pos();
const QPoint * _ZNK10QMoveEvent3posEv(void *that)

{
  QMoveEvent *cthat = (QMoveEvent *)that;
  return &cthat->pos();
}

  // proto:  QPoint QDropEvent::pos();
QPoint* _ZNK10QDropEvent3posEv(void *that)

{
  QDropEvent *cthat = (QDropEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  const QMimeData * QDropEvent::mimeData();
const QMimeData * _ZNK10QDropEvent8mimeDataEv(void *that)

{
  QDropEvent *cthat = (QDropEvent *)that;
  return cthat->mimeData();
}

  // proto:  void QDropEvent::acceptProposedAction();
void _ZN10QDropEvent20acceptProposedActionEv(void *that)

{
  QDropEvent *cthat = (QDropEvent *)that;
   cthat->acceptProposedAction();
}

  // proto:  const QPointF & QDropEvent::posF();
const QPointF * _ZNK10QDropEvent4posFEv(void *that)

{
  QDropEvent *cthat = (QDropEvent *)that;
  return &cthat->posF();
}

  // proto:  void QInputEvent::setTimestamp(ulong atimestamp);
void _ZN11QInputEvent12setTimestampEm(void *that, unsigned long atimestamp)

{
  QInputEvent *cthat = (QInputEvent *)that;
   cthat->setTimestamp(atimestamp);
}

  // proto:  void QInputEvent::setModifiers(Qt::KeyboardModifiers amodifiers);
void _ZN11QInputEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *that, Qt::KeyboardModifiers amodifiers)

{
  QInputEvent *cthat = (QInputEvent *)that;
   cthat->setModifiers(amodifiers);
}

  // proto:  ulong QInputEvent::timestamp();
ulong _ZNK11QInputEvent9timestampEv(void *that)

{
  QInputEvent *cthat = (QInputEvent *)that;
  return cthat->timestamp();
}

  // proto:  int QKeyEvent::count();
int _ZNK9QKeyEvent5countEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->count();
}

  // proto:  QString QKeyEvent::text();
QString* _ZNK9QKeyEvent4textEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  quint32 QKeyEvent::nativeVirtualKey();
quint32 _ZNK9QKeyEvent16nativeVirtualKeyEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeVirtualKey();
}

  // proto:  bool QKeyEvent::isAutoRepeat();
bool _ZNK9QKeyEvent12isAutoRepeatEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->isAutoRepeat();
}

  // proto:  quint32 QKeyEvent::nativeModifiers();
quint32 _ZNK9QKeyEvent15nativeModifiersEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeModifiers();
}

  // proto:  quint32 QKeyEvent::nativeScanCode();
quint32 _ZNK9QKeyEvent14nativeScanCodeEv(void *that)

{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeScanCode();
}

  // proto:  const QPoint & QContextMenuEvent::globalPos();
const QPoint * _ZNK17QContextMenuEvent9globalPosEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return &cthat->globalPos();
}

  // proto:  int QContextMenuEvent::globalY();
int _ZNK17QContextMenuEvent7globalYEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->globalY();
}

  // proto:  int QContextMenuEvent::globalX();
int _ZNK17QContextMenuEvent7globalXEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPoint & QContextMenuEvent::pos();
const QPoint * _ZNK17QContextMenuEvent3posEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return &cthat->pos();
}

  // proto:  int QContextMenuEvent::y();
int _ZNK17QContextMenuEvent1yEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->y();
}

  // proto:  int QContextMenuEvent::x();
int _ZNK17QContextMenuEvent1xEv(void *that)

{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->x();
}

  // proto:  const QKeySequence & QShortcutEvent::key();
const QKeySequence * _ZNK14QShortcutEvent3keyEv(void *that)

{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return &cthat->key();
}

  // proto:  bool QShortcutEvent::isAmbiguous();
bool _ZNK14QShortcutEvent11isAmbiguousEv(void *that)

{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return cthat->isAmbiguous();
}

  // proto:  int QShortcutEvent::shortcutId();
int _ZNK14QShortcutEvent10shortcutIdEv(void *that)

{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return cthat->shortcutId();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

