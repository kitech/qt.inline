// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qevent.h
// dst-file: /src/gui/qevent.cxx
//

// header block begin =>
#include <qevent.h>

extern "C" {

int QWhatsThisClickedEvent_Class_Size()
{
  return sizeof(QWhatsThisClickedEvent);
}

// ~QWhatsThisClickedEvent()
void dedtor_ZN22QWhatsThisClickedEventD0Ev(QWhatsThisClickedEvent* that)
{
  QWhatsThisClickedEvent* rthis = (QWhatsThisClickedEvent*)that;
  delete rthis;
}

// QWhatsThisClickedEvent(const class QString &)
QWhatsThisClickedEvent* dector_ZN22QWhatsThisClickedEventC1ERK7QString(const QString & href)
{
  // static_assert(sizeof(QWhatsThisClickedEvent) == 32, "tyszerr");
  QWhatsThisClickedEvent* rthis = new QWhatsThisClickedEvent(href);
  return rthis;
}

  // proto:  QString QWhatsThisClickedEvent::href();
QString* demth_ZNK22QWhatsThisClickedEvent4hrefEv(void *that)
{
  QWhatsThisClickedEvent *cthat = (QWhatsThisClickedEvent *)that;
  auto recret = cthat->href();
  return new QString(recret);
}

int QExposeEvent_Class_Size()
{
  return sizeof(QExposeEvent);
}

// QExposeEvent(const class QRegion &)
QExposeEvent* dector_ZN12QExposeEventC1ERK7QRegion(const QRegion & rgn)
{
  // static_assert(sizeof(QExposeEvent) == 32, "tyszerr");
  QExposeEvent* rthis = new QExposeEvent(rgn);
  return rthis;
}

// ~QExposeEvent()
void dedtor_ZN12QExposeEventD0Ev(QExposeEvent* that)
{
  QExposeEvent* rthis = (QExposeEvent*)that;
  delete rthis;
}

  // proto:  const QRegion & QExposeEvent::region();
const QRegion * demth_ZNK12QExposeEvent6regionEv(void *that)
{
  QExposeEvent *cthat = (QExposeEvent *)that;
  return &cthat->region();
}

int QInputMethodEvent_Class_Size()
{
  return sizeof(QInputMethodEvent);
}

// QInputMethodEvent()
QInputMethodEvent* dector_ZN17QInputMethodEventC1Ev()
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent();
  return rthis;
}

// QInputMethodEvent(const class QString &, const QList<class QInputMethodEvent::Attribute> &)
QInputMethodEvent* dector_ZN17QInputMethodEventC1ERK7QStringRK5QListINS_9AttributeEE(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes)
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent(preeditText, attributes);
  return rthis;
}

// QInputMethodEvent(const class QInputMethodEvent &)
QInputMethodEvent* dector_ZN17QInputMethodEventC1ERKS_(const QInputMethodEvent & other)
{
  // static_assert(sizeof(QInputMethodEvent) == 32, "tyszerr");
  QInputMethodEvent* rthis = new QInputMethodEvent(other);
  return rthis;
}

  // proto:  const QString & QInputMethodEvent::preeditString();
const QString * demth_ZNK17QInputMethodEvent13preeditStringEv(void *that)
{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return &cthat->preeditString();
}

  // proto:  int QInputMethodEvent::replacementStart();
int demth_ZNK17QInputMethodEvent16replacementStartEv(void *that)
{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return cthat->replacementStart();
}

  // proto:  const QString & QInputMethodEvent::commitString();
const QString * demth_ZNK17QInputMethodEvent12commitStringEv(void *that)
{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return &cthat->commitString();
}

  // proto:  int QInputMethodEvent::replacementLength();
int demth_ZNK17QInputMethodEvent17replacementLengthEv(void *that)
{
  QInputMethodEvent *cthat = (QInputMethodEvent *)that;
  return cthat->replacementLength();
}

int QHelpEvent_Class_Size()
{
  return sizeof(QHelpEvent);
}

// QHelpEvent(enum QEvent::Type, const class QPoint &, const class QPoint &)
QHelpEvent* dector_ZN10QHelpEventC1EN6QEvent4TypeERK6QPointS4_(QEvent::Type type, const QPoint & pos, const QPoint & globalPos)
{
  // static_assert(sizeof(QHelpEvent) == 40, "tyszerr");
  QHelpEvent* rthis = new QHelpEvent(type, pos, globalPos);
  return rthis;
}

// ~QHelpEvent()
void dedtor_ZN10QHelpEventD0Ev(QHelpEvent* that)
{
  QHelpEvent* rthis = (QHelpEvent*)that;
  delete rthis;
}

  // proto:  const QPoint & QHelpEvent::globalPos();
const QPoint * demth_ZNK10QHelpEvent9globalPosEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return &cthat->globalPos();
}

  // proto:  int QHelpEvent::globalX();
int demth_ZNK10QHelpEvent7globalXEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPoint & QHelpEvent::pos();
const QPoint * demth_ZNK10QHelpEvent3posEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return &cthat->pos();
}

  // proto:  int QHelpEvent::y();
int demth_ZNK10QHelpEvent1yEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->y();
}

  // proto:  int QHelpEvent::globalY();
int demth_ZNK10QHelpEvent7globalYEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->globalY();
}

  // proto:  int QHelpEvent::x();
int demth_ZNK10QHelpEvent1xEv(void *that)
{
  QHelpEvent *cthat = (QHelpEvent *)that;
  return cthat->x();
}

int QActionEvent_Class_Size()
{
  return sizeof(QActionEvent);
}

// QActionEvent(int, class QAction *, class QAction *)
QActionEvent* dector_ZN12QActionEventC1EiP7QActionS1_(int type, QAction * action, QAction * before)
{
  // static_assert(sizeof(QActionEvent) == 40, "tyszerr");
  QActionEvent* rthis = new QActionEvent(type, action, before);
  return rthis;
}

// ~QActionEvent()
void dedtor_ZN12QActionEventD0Ev(QActionEvent* that)
{
  QActionEvent* rthis = (QActionEvent*)that;
  delete rthis;
}

  // proto:  QAction * QActionEvent::before();
QAction * demth_ZNK12QActionEvent6beforeEv(void *that)
{
  QActionEvent *cthat = (QActionEvent *)that;
  return cthat->before();
}

  // proto:  QAction * QActionEvent::action();
QAction * demth_ZNK12QActionEvent6actionEv(void *that)
{
  QActionEvent *cthat = (QActionEvent *)that;
  return cthat->action();
}

int QMouseEvent_Class_Size()
{
  return sizeof(QMouseEvent);
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, screenPos, button, buttons, modifiers);
  return rthis;
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, button, buttons, modifiers);
  return rthis;
}

// ~QMouseEvent()
void dedtor_ZN11QMouseEventD0Ev(QMouseEvent* that)
{
  QMouseEvent* rthis = (QMouseEvent*)that;
  delete rthis;
}

// QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
QMouseEvent* dector_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QMouseEvent) == 32, "tyszerr");
  QMouseEvent* rthis = new QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers);
  return rthis;
}

  // proto:  QPoint QMouseEvent::globalPos();
QPoint* demth_ZNK11QMouseEvent9globalPosEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  int QMouseEvent::y();
int demth_ZNK11QMouseEvent1yEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->y();
}

  // proto:  const QPointF & QMouseEvent::screenPos();
const QPointF * demth_ZNK11QMouseEvent9screenPosEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return &cthat->screenPos();
}

  // proto:  int QMouseEvent::x();
int demth_ZNK11QMouseEvent1xEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->x();
}

  // proto:  int QMouseEvent::globalX();
int demth_ZNK11QMouseEvent7globalXEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->globalX();
}

  // proto:  int QMouseEvent::globalY();
int demth_ZNK11QMouseEvent7globalYEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  return cthat->globalY();
}

  // proto:  QPoint QMouseEvent::pos();
QPoint* demth_ZNK11QMouseEvent3posEv(void *that)
{
  QMouseEvent *cthat = (QMouseEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

int QFileOpenEvent_Class_Size()
{
  return sizeof(QFileOpenEvent);
}

// QFileOpenEvent(const class QString &)
QFileOpenEvent* dector_ZN14QFileOpenEventC1ERK7QString(const QString & file)
{
  // static_assert(sizeof(QFileOpenEvent) == 40, "tyszerr");
  QFileOpenEvent* rthis = new QFileOpenEvent(file);
  return rthis;
}

// ~QFileOpenEvent()
void dedtor_ZN14QFileOpenEventD0Ev(QFileOpenEvent* that)
{
  QFileOpenEvent* rthis = (QFileOpenEvent*)that;
  delete rthis;
}

// QFileOpenEvent(const class QUrl &)
QFileOpenEvent* dector_ZN14QFileOpenEventC1ERK4QUrl(const QUrl & url)
{
  // static_assert(sizeof(QFileOpenEvent) == 40, "tyszerr");
  QFileOpenEvent* rthis = new QFileOpenEvent(url);
  return rthis;
}

  // proto:  QString QFileOpenEvent::file();
QString* demth_ZNK14QFileOpenEvent4fileEv(void *that)
{
  QFileOpenEvent *cthat = (QFileOpenEvent *)that;
  auto recret = cthat->file();
  return new QString(recret);
}

int QToolBarChangeEvent_Class_Size()
{
  return sizeof(QToolBarChangeEvent);
}

// QToolBarChangeEvent(_Bool)
QToolBarChangeEvent* dector_ZN19QToolBarChangeEventC1Eb(bool t)
{
  // static_assert(sizeof(QToolBarChangeEvent) == 32, "tyszerr");
  QToolBarChangeEvent* rthis = new QToolBarChangeEvent(t);
  return rthis;
}

// ~QToolBarChangeEvent()
void dedtor_ZN19QToolBarChangeEventD0Ev(QToolBarChangeEvent* that)
{
  QToolBarChangeEvent* rthis = (QToolBarChangeEvent*)that;
  delete rthis;
}

  // proto:  bool QToolBarChangeEvent::toggle();
bool demth_ZNK19QToolBarChangeEvent6toggleEv(void *that)
{
  QToolBarChangeEvent *cthat = (QToolBarChangeEvent *)that;
  return cthat->toggle();
}

int QTabletEvent_Class_Size()
{
  return sizeof(QTabletEvent);
}

// ~QTabletEvent()
void dedtor_ZN12QTabletEventD0Ev(QTabletEvent* that)
{
  QTabletEvent* rthis = (QTabletEvent*)that;
  delete rthis;
}

// QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)
QTabletEvent* dector_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEEx(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, Qt::KeyboardModifiers keyState, long long uniqueID)
{
  // static_assert(sizeof(QTabletEvent) == 32, "tyszerr");
  QTabletEvent* rthis = new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID);
  return rthis;
}

// QTabletEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64, Qt::MouseButton, Qt::MouseButtons)
QTabletEvent* dector_ZN12QTabletEventC1EN6QEvent4TypeERK7QPointFS4_iidiiddi6QFlagsIN2Qt16KeyboardModifierEExNS6_11MouseButtonES5_IS9_E(QEvent::Type t, const QPointF & pos, const QPointF & globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, Qt::KeyboardModifiers keyState, long long uniqueID, Qt::MouseButton button, Qt::MouseButtons buttons)
{
  // static_assert(sizeof(QTabletEvent) == 32, "tyszerr");
  QTabletEvent* rthis = new QTabletEvent(t, pos, globalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID, button, buttons);
  return rthis;
}

  // proto:  int QTabletEvent::x();
int demth_ZNK12QTabletEvent1xEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->x();
}

  // proto:  int QTabletEvent::xTilt();
int demth_ZNK12QTabletEvent5xTiltEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->xTilt();
}

  // proto:  qint64 QTabletEvent::uniqueId();
qint64 demth_ZNK12QTabletEvent8uniqueIdEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->uniqueId();
}

  // proto:  const QPointF & QTabletEvent::globalPosF();
const QPointF * demth_ZNK12QTabletEvent10globalPosFEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return &cthat->globalPosF();
}

  // proto:  int QTabletEvent::z();
int demth_ZNK12QTabletEvent1zEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->z();
}

  // proto:  int QTabletEvent::y();
int demth_ZNK12QTabletEvent1yEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QTabletEvent::pos();
QPoint* demth_ZNK12QTabletEvent3posEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  qreal QTabletEvent::rotation();
qreal demth_ZNK12QTabletEvent8rotationEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->rotation();
}

  // proto:  QPoint QTabletEvent::globalPos();
QPoint* demth_ZNK12QTabletEvent9globalPosEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  qreal QTabletEvent::tangentialPressure();
qreal demth_ZNK12QTabletEvent18tangentialPressureEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->tangentialPressure();
}

  // proto:  qreal QTabletEvent::hiResGlobalX();
qreal demth_ZNK12QTabletEvent12hiResGlobalXEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->hiResGlobalX();
}

  // proto:  int QTabletEvent::globalY();
int demth_ZNK12QTabletEvent7globalYEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->globalY();
}

  // proto:  qreal QTabletEvent::hiResGlobalY();
qreal demth_ZNK12QTabletEvent12hiResGlobalYEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->hiResGlobalY();
}

  // proto:  int QTabletEvent::globalX();
int demth_ZNK12QTabletEvent7globalXEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPointF & QTabletEvent::posF();
const QPointF * demth_ZNK12QTabletEvent4posFEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return &cthat->posF();
}

  // proto:  qreal QTabletEvent::pressure();
qreal demth_ZNK12QTabletEvent8pressureEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->pressure();
}

  // proto:  int QTabletEvent::yTilt();
int demth_ZNK12QTabletEvent5yTiltEv(void *that)
{
  QTabletEvent *cthat = (QTabletEvent *)that;
  return cthat->yTilt();
}

int QTouchEvent_Class_Size()
{
  return sizeof(QTouchEvent);
}

// QTouchEvent(class QEvent::Type, class QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<class QTouchEvent::TouchPoint> &)
QTouchEvent* dector_ZN11QTouchEventC1EN6QEvent4TypeEP12QTouchDevice6QFlagsIN2Qt16KeyboardModifierEES4_INS5_15TouchPointStateEERK5QListINS_10TouchPointEE(QEvent::Type eventType, QTouchDevice * device, Qt::KeyboardModifiers modifiers, Qt::TouchPointStates touchPointStates, const QList<QTouchEvent::TouchPoint> & touchPoints)
{
  // static_assert(sizeof(QTouchEvent) == 32, "tyszerr");
  QTouchEvent* rthis = new QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints);
  return rthis;
}

// ~QTouchEvent()
void dedtor_ZN11QTouchEventD0Ev(QTouchEvent* that)
{
  QTouchEvent* rthis = (QTouchEvent*)that;
  delete rthis;
}

  // proto:  void QTouchEvent::setDevice(QTouchDevice * adevice);
void demth_ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *that, QTouchDevice * adevice)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setDevice(adevice);
}

  // proto:  QWindow * QTouchEvent::window();
QWindow * demth_ZNK11QTouchEvent6windowEv(void *that)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->window();
}

  // proto:  QTouchDevice * QTouchEvent::device();
QTouchDevice * demth_ZNK11QTouchEvent6deviceEv(void *that)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->device();
}

  // proto:  QObject * QTouchEvent::target();
QObject * demth_ZNK11QTouchEvent6targetEv(void *that)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
  return cthat->target();
}

  // proto:  void QTouchEvent::setTouchPointStates(Qt::TouchPointStates aTouchPointStates);
void demth_ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE(void *that, Qt::TouchPointStates aTouchPointStates)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTouchPointStates(aTouchPointStates);
}

  // proto:  void QTouchEvent::setTouchPoints(const QList<QTouchEvent::TouchPoint> & atouchPoints);
void demth_ZN11QTouchEvent14setTouchPointsERK5QListINS_10TouchPointEE(void *that, const QList<QTouchEvent::TouchPoint> & atouchPoints)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTouchPoints(atouchPoints);
}

  // proto:  void QTouchEvent::setWindow(QWindow * awindow);
void demth_ZN11QTouchEvent9setWindowEP7QWindow(void *that, QWindow * awindow)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setWindow(awindow);
}

  // proto:  void QTouchEvent::setTarget(QObject * atarget);
void demth_ZN11QTouchEvent9setTargetEP7QObject(void *that, QObject * atarget)
{
  QTouchEvent *cthat = (QTouchEvent *)that;
   cthat->setTarget(atarget);
}

int QScreenOrientationChangeEvent_Class_Size()
{
  return sizeof(QScreenOrientationChangeEvent);
}

// ~QScreenOrientationChangeEvent()
void dedtor_ZN29QScreenOrientationChangeEventD0Ev(QScreenOrientationChangeEvent* that)
{
  QScreenOrientationChangeEvent* rthis = (QScreenOrientationChangeEvent*)that;
  delete rthis;
}

// QScreenOrientationChangeEvent(class QScreen *, Qt::ScreenOrientation)
QScreenOrientationChangeEvent* dector_ZN29QScreenOrientationChangeEventC1EP7QScreenN2Qt17ScreenOrientationE(QScreen * screen, Qt::ScreenOrientation orientation)
{
  // static_assert(sizeof(QScreenOrientationChangeEvent) == 40, "tyszerr");
  QScreenOrientationChangeEvent* rthis = new QScreenOrientationChangeEvent(screen, orientation);
  return rthis;
}

int QIconDragEvent_Class_Size()
{
  return sizeof(QIconDragEvent);
}

// ~QIconDragEvent()
void dedtor_ZN14QIconDragEventD0Ev(QIconDragEvent* that)
{
  QIconDragEvent* rthis = (QIconDragEvent*)that;
  delete rthis;
}

// QIconDragEvent()
QIconDragEvent* dector_ZN14QIconDragEventC1Ev()
{
  // static_assert(sizeof(QIconDragEvent) == 32, "tyszerr");
  QIconDragEvent* rthis = new QIconDragEvent();
  return rthis;
}

int QCloseEvent_Class_Size()
{
  return sizeof(QCloseEvent);
}

// ~QCloseEvent()
void dedtor_ZN11QCloseEventD0Ev(QCloseEvent* that)
{
  QCloseEvent* rthis = (QCloseEvent*)that;
  delete rthis;
}

// QCloseEvent()
QCloseEvent* dector_ZN11QCloseEventC1Ev()
{
  // static_assert(sizeof(QCloseEvent) == 32, "tyszerr");
  QCloseEvent* rthis = new QCloseEvent();
  return rthis;
}

int QDragEnterEvent_Class_Size()
{
  return sizeof(QDragEnterEvent);
}

// ~QDragEnterEvent()
void dedtor_ZN15QDragEnterEventD0Ev(QDragEnterEvent* that)
{
  QDragEnterEvent* rthis = (QDragEnterEvent*)that;
  delete rthis;
}

// QDragEnterEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
QDragEnterEvent* dector_ZN15QDragEnterEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE(const QPoint & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QDragEnterEvent) == 32, "tyszerr");
  QDragEnterEvent* rthis = new QDragEnterEvent(pos, actions, data, buttons, modifiers);
  return rthis;
}

int QWheelEvent_Class_Size()
{
  return sizeof(QWheelEvent);
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, const QPointF & globalPos, int delta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::Orientation orient)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase, Qt::MouseEventSource)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseENS4_16MouseEventSourceE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source);
  return rthis;
}

// ~QWheelEvent()
void dedtor_ZN11QWheelEventD0Ev(QWheelEvent* that)
{
  QWheelEvent* rthis = (QWheelEvent*)that;
  delete rthis;
}

// QWheelEvent(const class QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE(const QPointF & pos, int delta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::Orientation orient)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, delta, buttons, modifiers, orient);
  return rthis;
}

// QWheelEvent(const class QPointF &, const class QPointF &, class QPoint, class QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)
QWheelEvent* dector_ZN11QWheelEventC1ERK7QPointFS2_6QPointS3_iN2Qt11OrientationE6QFlagsINS4_11MouseButtonEES6_INS4_16KeyboardModifierEENS4_11ScrollPhaseE(const QPointF & pos, const QPointF & globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase)
{
  // static_assert(sizeof(QWheelEvent) == 32, "tyszerr");
  QWheelEvent* rthis = new QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase);
  return rthis;
}

  // proto:  int QWheelEvent::x();
int demth_ZNK11QWheelEvent1xEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->x();
}

  // proto:  QPoint QWheelEvent::angleDelta();
QPoint* demth_ZNK11QWheelEvent10angleDeltaEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->angleDelta();
  return new QPoint(recret);
}

  // proto:  QPoint QWheelEvent::pos();
QPoint* demth_ZNK11QWheelEvent3posEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  int QWheelEvent::globalY();
int demth_ZNK11QWheelEvent7globalYEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->globalY();
}

  // proto:  const QPointF & QWheelEvent::posF();
const QPointF * demth_ZNK11QWheelEvent4posFEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return &cthat->posF();
}

  // proto:  int QWheelEvent::globalX();
int demth_ZNK11QWheelEvent7globalXEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->globalX();
}

  // proto:  int QWheelEvent::y();
int demth_ZNK11QWheelEvent1yEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QWheelEvent::pixelDelta();
QPoint* demth_ZNK11QWheelEvent10pixelDeltaEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->pixelDelta();
  return new QPoint(recret);
}

  // proto:  int QWheelEvent::delta();
int demth_ZNK11QWheelEvent5deltaEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return cthat->delta();
}

  // proto:  QPoint QWheelEvent::globalPos();
QPoint* demth_ZNK11QWheelEvent9globalPosEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  const QPointF & QWheelEvent::globalPosF();
const QPointF * demth_ZNK11QWheelEvent10globalPosFEv(void *that)
{
  QWheelEvent *cthat = (QWheelEvent *)that;
  return &cthat->globalPosF();
}

int QScrollEvent_Class_Size()
{
  return sizeof(QScrollEvent);
}

// ~QScrollEvent()
void dedtor_ZN12QScrollEventD0Ev(QScrollEvent* that)
{
  QScrollEvent* rthis = (QScrollEvent*)that;
  delete rthis;
}

// QScrollEvent(const class QPointF &, const class QPointF &, enum QScrollEvent::ScrollState)
QScrollEvent* dector_ZN12QScrollEventC1ERK7QPointFS2_NS_11ScrollStateE(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState)
{
  // static_assert(sizeof(QScrollEvent) == 64, "tyszerr");
  QScrollEvent* rthis = new QScrollEvent(contentPos, overshoot, scrollState);
  return rthis;
}

int QHoverEvent_Class_Size()
{
  return sizeof(QHoverEvent);
}

// QHoverEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::KeyboardModifiers)
QHoverEvent* dector_ZN11QHoverEventC1EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, const QPointF & pos, const QPointF & oldPos, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QHoverEvent) == 32, "tyszerr");
  QHoverEvent* rthis = new QHoverEvent(type, pos, oldPos, modifiers);
  return rthis;
}

// ~QHoverEvent()
void dedtor_ZN11QHoverEventD0Ev(QHoverEvent* that)
{
  QHoverEvent* rthis = (QHoverEvent*)that;
  delete rthis;
}

  // proto:  const QPointF & QHoverEvent::posF();
const QPointF * demth_ZNK11QHoverEvent4posFEv(void *that)
{
  QHoverEvent *cthat = (QHoverEvent *)that;
  return &cthat->posF();
}

  // proto:  QPoint QHoverEvent::oldPos();
QPoint* demth_ZNK11QHoverEvent6oldPosEv(void *that)
{
  QHoverEvent *cthat = (QHoverEvent *)that;
  auto recret = cthat->oldPos();
  return new QPoint(recret);
}

  // proto:  const QPointF & QHoverEvent::oldPosF();
const QPointF * demth_ZNK11QHoverEvent7oldPosFEv(void *that)
{
  QHoverEvent *cthat = (QHoverEvent *)that;
  return &cthat->oldPosF();
}

  // proto:  QPoint QHoverEvent::pos();
QPoint* demth_ZNK11QHoverEvent3posEv(void *that)
{
  QHoverEvent *cthat = (QHoverEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

int QDragMoveEvent_Class_Size()
{
  return sizeof(QDragMoveEvent);
}

// QDragMoveEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
QDragMoveEvent* dector_ZN14QDragMoveEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPoint & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type type)
{
  // static_assert(sizeof(QDragMoveEvent) == 32, "tyszerr");
  QDragMoveEvent* rthis = new QDragMoveEvent(pos, actions, data, buttons, modifiers, type);
  return rthis;
}

// ~QDragMoveEvent()
void dedtor_ZN14QDragMoveEventD0Ev(QDragMoveEvent* that)
{
  QDragMoveEvent* rthis = (QDragMoveEvent*)that;
  delete rthis;
}

  // proto:  void QDragMoveEvent::accept(const QRect & r);
void demth_ZN14QDragMoveEvent6acceptERK5QRect(void *that, const QRect & r)
{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->accept(r);
}

  // proto:  QRect QDragMoveEvent::answerRect();
QRect* demth_ZNK14QDragMoveEvent10answerRectEv(void *that)
{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
  auto recret = cthat->answerRect();
  return new QRect(recret);
}

  // proto:  void QDragMoveEvent::ignore(const QRect & r);
void demth_ZN14QDragMoveEvent6ignoreERK5QRect(void *that, const QRect & r)
{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->ignore(r);
}

  // proto:  void QDragMoveEvent::ignore();
void demth_ZN14QDragMoveEvent6ignoreEv(void *that)
{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->ignore();
}

  // proto:  void QDragMoveEvent::accept();
void demth_ZN14QDragMoveEvent6acceptEv(void *that)
{
  QDragMoveEvent *cthat = (QDragMoveEvent *)that;
   cthat->accept();
}

int QShowEvent_Class_Size()
{
  return sizeof(QShowEvent);
}

// ~QShowEvent()
void dedtor_ZN10QShowEventD0Ev(QShowEvent* that)
{
  QShowEvent* rthis = (QShowEvent*)that;
  delete rthis;
}

// QShowEvent()
QShowEvent* dector_ZN10QShowEventC1Ev()
{
  // static_assert(sizeof(QShowEvent) == 32, "tyszerr");
  QShowEvent* rthis = new QShowEvent();
  return rthis;
}

int QPlatformSurfaceEvent_Class_Size()
{
  return sizeof(QPlatformSurfaceEvent);
}

// QPlatformSurfaceEvent(enum QPlatformSurfaceEvent::SurfaceEventType)
QPlatformSurfaceEvent* dector_ZN21QPlatformSurfaceEventC1ENS_16SurfaceEventTypeE(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType)
{
  // static_assert(sizeof(QPlatformSurfaceEvent) == 32, "tyszerr");
  QPlatformSurfaceEvent* rthis = new QPlatformSurfaceEvent(surfaceEventType);
  return rthis;
}

// ~QPlatformSurfaceEvent()
void dedtor_ZN21QPlatformSurfaceEventD0Ev(QPlatformSurfaceEvent* that)
{
  QPlatformSurfaceEvent* rthis = (QPlatformSurfaceEvent*)that;
  delete rthis;
}

int QPaintEvent_Class_Size()
{
  return sizeof(QPaintEvent);
}

// ~QPaintEvent()
void dedtor_ZN11QPaintEventD0Ev(QPaintEvent* that)
{
  QPaintEvent* rthis = (QPaintEvent*)that;
  delete rthis;
}

// QPaintEvent(const class QRect &)
QPaintEvent* dector_ZN11QPaintEventC1ERK5QRect(const QRect & paintRect)
{
  // static_assert(sizeof(QPaintEvent) == 56, "tyszerr");
  QPaintEvent* rthis = new QPaintEvent(paintRect);
  return rthis;
}

// QPaintEvent(const class QRegion &)
QPaintEvent* dector_ZN11QPaintEventC1ERK7QRegion(const QRegion & paintRegion)
{
  // static_assert(sizeof(QPaintEvent) == 56, "tyszerr");
  QPaintEvent* rthis = new QPaintEvent(paintRegion);
  return rthis;
}

  // proto:  const QRect & QPaintEvent::rect();
const QRect * demth_ZNK11QPaintEvent4rectEv(void *that)
{
  QPaintEvent *cthat = (QPaintEvent *)that;
  return &cthat->rect();
}

  // proto:  const QRegion & QPaintEvent::region();
const QRegion * demth_ZNK11QPaintEvent6regionEv(void *that)
{
  QPaintEvent *cthat = (QPaintEvent *)that;
  return &cthat->region();
}

int QFocusEvent_Class_Size()
{
  return sizeof(QFocusEvent);
}

// QFocusEvent(enum QEvent::Type, Qt::FocusReason)
QFocusEvent* dector_ZN11QFocusEventC1EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type, Qt::FocusReason reason)
{
  // static_assert(sizeof(QFocusEvent) == 32, "tyszerr");
  QFocusEvent* rthis = new QFocusEvent(type, reason);
  return rthis;
}

// ~QFocusEvent()
void dedtor_ZN11QFocusEventD0Ev(QFocusEvent* that)
{
  QFocusEvent* rthis = (QFocusEvent*)that;
  delete rthis;
}

  // proto:  bool QFocusEvent::lostFocus();
bool demth_ZNK11QFocusEvent9lostFocusEv(void *that)
{
  QFocusEvent *cthat = (QFocusEvent *)that;
  return cthat->lostFocus();
}

  // proto:  bool QFocusEvent::gotFocus();
bool demth_ZNK11QFocusEvent8gotFocusEv(void *that)
{
  QFocusEvent *cthat = (QFocusEvent *)that;
  return cthat->gotFocus();
}

int QNativeGestureEvent_Class_Size()
{
  return sizeof(QNativeGestureEvent);
}

// QNativeGestureEvent(Qt::NativeGestureType, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
QNativeGestureEvent* dector_ZN19QNativeGestureEventC1EN2Qt17NativeGestureTypeERK7QPointFS4_S4_dmy(Qt::NativeGestureType type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, double value, unsigned long sequenceId, unsigned long long intArgument)
{
  // static_assert(sizeof(QNativeGestureEvent) == 32, "tyszerr");
  QNativeGestureEvent* rthis = new QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument);
  return rthis;
}

  // proto:  const QPoint QNativeGestureEvent::pos();
const QPoint* demth_ZNK19QNativeGestureEvent3posEv(void *that)
{
  QNativeGestureEvent *cthat = (QNativeGestureEvent *)that;
  auto recret = cthat->pos();
  return new const QPoint(recret);
}

  // proto:  const QPoint QNativeGestureEvent::globalPos();
const QPoint* demth_ZNK19QNativeGestureEvent9globalPosEv(void *that)
{
  QNativeGestureEvent *cthat = (QNativeGestureEvent *)that;
  auto recret = cthat->globalPos();
  return new const QPoint(recret);
}

int QResizeEvent_Class_Size()
{
  return sizeof(QResizeEvent);
}

// ~QResizeEvent()
void dedtor_ZN12QResizeEventD0Ev(QResizeEvent* that)
{
  QResizeEvent* rthis = (QResizeEvent*)that;
  delete rthis;
}

// QResizeEvent(const class QSize &, const class QSize &)
QResizeEvent* dector_ZN12QResizeEventC1ERK5QSizeS2_(const QSize & size, const QSize & oldSize)
{
  // static_assert(sizeof(QResizeEvent) == 40, "tyszerr");
  QResizeEvent* rthis = new QResizeEvent(size, oldSize);
  return rthis;
}

  // proto:  const QSize & QResizeEvent::oldSize();
const QSize * demth_ZNK12QResizeEvent7oldSizeEv(void *that)
{
  QResizeEvent *cthat = (QResizeEvent *)that;
  return &cthat->oldSize();
}

  // proto:  const QSize & QResizeEvent::size();
const QSize * demth_ZNK12QResizeEvent4sizeEv(void *that)
{
  QResizeEvent *cthat = (QResizeEvent *)that;
  return &cthat->size();
}

int QStatusTipEvent_Class_Size()
{
  return sizeof(QStatusTipEvent);
}

// ~QStatusTipEvent()
void dedtor_ZN15QStatusTipEventD0Ev(QStatusTipEvent* that)
{
  QStatusTipEvent* rthis = (QStatusTipEvent*)that;
  delete rthis;
}

// QStatusTipEvent(const class QString &)
QStatusTipEvent* dector_ZN15QStatusTipEventC1ERK7QString(const QString & tip)
{
  // static_assert(sizeof(QStatusTipEvent) == 32, "tyszerr");
  QStatusTipEvent* rthis = new QStatusTipEvent(tip);
  return rthis;
}

  // proto:  QString QStatusTipEvent::tip();
QString* demth_ZNK15QStatusTipEvent3tipEv(void *that)
{
  QStatusTipEvent *cthat = (QStatusTipEvent *)that;
  auto recret = cthat->tip();
  return new QString(recret);
}

int QEnterEvent_Class_Size()
{
  return sizeof(QEnterEvent);
}

// ~QEnterEvent()
void dedtor_ZN11QEnterEventD0Ev(QEnterEvent* that)
{
  QEnterEvent* rthis = (QEnterEvent*)that;
  delete rthis;
}

// QEnterEvent(const class QPointF &, const class QPointF &, const class QPointF &)
QEnterEvent* dector_ZN11QEnterEventC1ERK7QPointFS2_S2_(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos)
{
  // static_assert(sizeof(QEnterEvent) == 72, "tyszerr");
  QEnterEvent* rthis = new QEnterEvent(localPos, windowPos, screenPos);
  return rthis;
}

  // proto:  int QEnterEvent::y();
int demth_ZNK11QEnterEvent1yEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->y();
}

  // proto:  QPoint QEnterEvent::pos();
QPoint* demth_ZNK11QEnterEvent3posEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  int QEnterEvent::globalX();
int demth_ZNK11QEnterEvent7globalXEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->globalX();
}

  // proto:  int QEnterEvent::x();
int demth_ZNK11QEnterEvent1xEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->x();
}

  // proto:  QPoint QEnterEvent::globalPos();
QPoint* demth_ZNK11QEnterEvent9globalPosEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  auto recret = cthat->globalPos();
  return new QPoint(recret);
}

  // proto:  int QEnterEvent::globalY();
int demth_ZNK11QEnterEvent7globalYEv(void *that)
{
  QEnterEvent *cthat = (QEnterEvent *)that;
  return cthat->globalY();
}

int QMoveEvent_Class_Size()
{
  return sizeof(QMoveEvent);
}

// ~QMoveEvent()
void dedtor_ZN10QMoveEventD0Ev(QMoveEvent* that)
{
  QMoveEvent* rthis = (QMoveEvent*)that;
  delete rthis;
}

// QMoveEvent(const class QPoint &, const class QPoint &)
QMoveEvent* dector_ZN10QMoveEventC1ERK6QPointS2_(const QPoint & pos, const QPoint & oldPos)
{
  // static_assert(sizeof(QMoveEvent) == 40, "tyszerr");
  QMoveEvent* rthis = new QMoveEvent(pos, oldPos);
  return rthis;
}

  // proto:  const QPoint & QMoveEvent::oldPos();
const QPoint * demth_ZNK10QMoveEvent6oldPosEv(void *that)
{
  QMoveEvent *cthat = (QMoveEvent *)that;
  return &cthat->oldPos();
}

  // proto:  const QPoint & QMoveEvent::pos();
const QPoint * demth_ZNK10QMoveEvent3posEv(void *that)
{
  QMoveEvent *cthat = (QMoveEvent *)that;
  return &cthat->pos();
}

int QHideEvent_Class_Size()
{
  return sizeof(QHideEvent);
}

// QHideEvent()
QHideEvent* dector_ZN10QHideEventC1Ev()
{
  // static_assert(sizeof(QHideEvent) == 32, "tyszerr");
  QHideEvent* rthis = new QHideEvent();
  return rthis;
}

// ~QHideEvent()
void dedtor_ZN10QHideEventD0Ev(QHideEvent* that)
{
  QHideEvent* rthis = (QHideEvent*)that;
  delete rthis;
}

int QDragLeaveEvent_Class_Size()
{
  return sizeof(QDragLeaveEvent);
}

// ~QDragLeaveEvent()
void dedtor_ZN15QDragLeaveEventD0Ev(QDragLeaveEvent* that)
{
  QDragLeaveEvent* rthis = (QDragLeaveEvent*)that;
  delete rthis;
}

// QDragLeaveEvent()
QDragLeaveEvent* dector_ZN15QDragLeaveEventC1Ev()
{
  // static_assert(sizeof(QDragLeaveEvent) == 32, "tyszerr");
  QDragLeaveEvent* rthis = new QDragLeaveEvent();
  return rthis;
}

int QDropEvent_Class_Size()
{
  return sizeof(QDropEvent);
}

// ~QDropEvent()
void dedtor_ZN10QDropEventD0Ev(QDropEvent* that)
{
  QDropEvent* rthis = (QDropEvent*)that;
  delete rthis;
}

// QDropEvent(const class QPointF &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
QDropEvent* dector_ZN10QDropEventC1ERK7QPointF6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPointF & pos, Qt::DropActions actions, const QMimeData * data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type type)
{
  // static_assert(sizeof(QDropEvent) == 32, "tyszerr");
  QDropEvent* rthis = new QDropEvent(pos, actions, data, buttons, modifiers, type);
  return rthis;
}

  // proto:  QPoint QDropEvent::pos();
QPoint* demth_ZNK10QDropEvent3posEv(void *that)
{
  QDropEvent *cthat = (QDropEvent *)that;
  auto recret = cthat->pos();
  return new QPoint(recret);
}

  // proto:  const QMimeData * QDropEvent::mimeData();
const QMimeData * demth_ZNK10QDropEvent8mimeDataEv(void *that)
{
  QDropEvent *cthat = (QDropEvent *)that;
  return cthat->mimeData();
}

  // proto:  void QDropEvent::acceptProposedAction();
void demth_ZN10QDropEvent20acceptProposedActionEv(void *that)
{
  QDropEvent *cthat = (QDropEvent *)that;
   cthat->acceptProposedAction();
}

  // proto:  const QPointF & QDropEvent::posF();
const QPointF * demth_ZNK10QDropEvent4posFEv(void *that)
{
  QDropEvent *cthat = (QDropEvent *)that;
  return &cthat->posF();
}

int QInputEvent_Class_Size()
{
  return sizeof(QInputEvent);
}

// QInputEvent(enum QEvent::Type, Qt::KeyboardModifiers)
QInputEvent* dector_ZN11QInputEventC1EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QInputEvent) == 32, "tyszerr");
  QInputEvent* rthis = new QInputEvent(type, modifiers);
  return rthis;
}

// ~QInputEvent()
void dedtor_ZN11QInputEventD0Ev(QInputEvent* that)
{
  QInputEvent* rthis = (QInputEvent*)that;
  delete rthis;
}

  // proto:  void QInputEvent::setTimestamp(ulong atimestamp);
void demth_ZN11QInputEvent12setTimestampEm(void *that, unsigned long atimestamp)
{
  QInputEvent *cthat = (QInputEvent *)that;
   cthat->setTimestamp(atimestamp);
}

  // proto:  void QInputEvent::setModifiers(Qt::KeyboardModifiers amodifiers);
void demth_ZN11QInputEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *that, Qt::KeyboardModifiers amodifiers)
{
  QInputEvent *cthat = (QInputEvent *)that;
   cthat->setModifiers(amodifiers);
}

  // proto:  ulong QInputEvent::timestamp();
ulong demth_ZNK11QInputEvent9timestampEv(void *that)
{
  QInputEvent *cthat = (QInputEvent *)that;
  return cthat->timestamp();
}

int QApplicationStateChangeEvent_Class_Size()
{
  return sizeof(QApplicationStateChangeEvent);
}

// QApplicationStateChangeEvent(Qt::ApplicationState)
QApplicationStateChangeEvent* dector_ZN28QApplicationStateChangeEventC1EN2Qt16ApplicationStateE(Qt::ApplicationState state)
{
  // static_assert(sizeof(QApplicationStateChangeEvent) == 32, "tyszerr");
  QApplicationStateChangeEvent* rthis = new QApplicationStateChangeEvent(state);
  return rthis;
}

int QKeyEvent_Class_Size()
{
  return sizeof(QKeyEvent);
}

// ~QKeyEvent()
void dedtor_ZN9QKeyEventD0Ev(QKeyEvent* that)
{
  QKeyEvent* rthis = (QKeyEvent*)that;
  delete rthis;
}

// QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, const class QString &, _Bool, ushort)
QKeyEvent* dector_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt(QEvent::Type type, int key, Qt::KeyboardModifiers modifiers, const QString & text, bool autorep, unsigned short count)
{
  // static_assert(sizeof(QKeyEvent) == 32, "tyszerr");
  QKeyEvent* rthis = new QKeyEvent(type, key, modifiers, text, autorep, count);
  return rthis;
}

// QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const class QString &, _Bool, ushort)
QKeyEvent* dector_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEEjjjRK7QStringbt(QEvent::Type type, int key, Qt::KeyboardModifiers modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const QString & text, bool autorep, unsigned short count)
{
  // static_assert(sizeof(QKeyEvent) == 32, "tyszerr");
  QKeyEvent* rthis = new QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count);
  return rthis;
}

  // proto:  int QKeyEvent::count();
int demth_ZNK9QKeyEvent5countEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->count();
}

  // proto:  QString QKeyEvent::text();
QString* demth_ZNK9QKeyEvent4textEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  auto recret = cthat->text();
  return new QString(recret);
}

  // proto:  quint32 QKeyEvent::nativeVirtualKey();
quint32 demth_ZNK9QKeyEvent16nativeVirtualKeyEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeVirtualKey();
}

  // proto:  bool QKeyEvent::isAutoRepeat();
bool demth_ZNK9QKeyEvent12isAutoRepeatEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->isAutoRepeat();
}

  // proto:  quint32 QKeyEvent::nativeModifiers();
quint32 demth_ZNK9QKeyEvent15nativeModifiersEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeModifiers();
}

  // proto:  quint32 QKeyEvent::nativeScanCode();
quint32 demth_ZNK9QKeyEvent14nativeScanCodeEv(void *that)
{
  QKeyEvent *cthat = (QKeyEvent *)that;
  return cthat->nativeScanCode();
}

int QContextMenuEvent_Class_Size()
{
  return sizeof(QContextMenuEvent);
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos, globalPos);
  return rthis;
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &, Qt::KeyboardModifiers)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, Qt::KeyboardModifiers modifiers)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos, globalPos, modifiers);
  return rthis;
}

// ~QContextMenuEvent()
void dedtor_ZN17QContextMenuEventD0Ev(QContextMenuEvent* that)
{
  QContextMenuEvent* rthis = (QContextMenuEvent*)that;
  delete rthis;
}

// QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &)
QContextMenuEvent* dector_ZN17QContextMenuEventC1ENS_6ReasonERK6QPoint(QContextMenuEvent::Reason reason, const QPoint & pos)
{
  // static_assert(sizeof(QContextMenuEvent) == 32, "tyszerr");
  QContextMenuEvent* rthis = new QContextMenuEvent(reason, pos);
  return rthis;
}

  // proto:  const QPoint & QContextMenuEvent::globalPos();
const QPoint * demth_ZNK17QContextMenuEvent9globalPosEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return &cthat->globalPos();
}

  // proto:  int QContextMenuEvent::globalY();
int demth_ZNK17QContextMenuEvent7globalYEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->globalY();
}

  // proto:  int QContextMenuEvent::globalX();
int demth_ZNK17QContextMenuEvent7globalXEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->globalX();
}

  // proto:  const QPoint & QContextMenuEvent::pos();
const QPoint * demth_ZNK17QContextMenuEvent3posEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return &cthat->pos();
}

  // proto:  int QContextMenuEvent::y();
int demth_ZNK17QContextMenuEvent1yEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->y();
}

  // proto:  int QContextMenuEvent::x();
int demth_ZNK17QContextMenuEvent1xEv(void *that)
{
  QContextMenuEvent *cthat = (QContextMenuEvent *)that;
  return cthat->x();
}

int QScrollPrepareEvent_Class_Size()
{
  return sizeof(QScrollPrepareEvent);
}

// QScrollPrepareEvent(const class QPointF &)
QScrollPrepareEvent* dector_ZN19QScrollPrepareEventC1ERK7QPointF(const QPointF & startPos)
{
  // static_assert(sizeof(QScrollPrepareEvent) == 112, "tyszerr");
  QScrollPrepareEvent* rthis = new QScrollPrepareEvent(startPos);
  return rthis;
}

// ~QScrollPrepareEvent()
void dedtor_ZN19QScrollPrepareEventD0Ev(QScrollPrepareEvent* that)
{
  QScrollPrepareEvent* rthis = (QScrollPrepareEvent*)that;
  delete rthis;
}

int QShortcutEvent_Class_Size()
{
  return sizeof(QShortcutEvent);
}

// ~QShortcutEvent()
void dedtor_ZN14QShortcutEventD0Ev(QShortcutEvent* that)
{
  QShortcutEvent* rthis = (QShortcutEvent*)that;
  delete rthis;
}

// QShortcutEvent(const class QKeySequence &, int, _Bool)
QShortcutEvent* dector_ZN14QShortcutEventC1ERK12QKeySequenceib(const QKeySequence & key, int id, bool ambiguous)
{
  // static_assert(sizeof(QShortcutEvent) == 40, "tyszerr");
  QShortcutEvent* rthis = new QShortcutEvent(key, id, ambiguous);
  return rthis;
}

  // proto:  const QKeySequence & QShortcutEvent::key();
const QKeySequence * demth_ZNK14QShortcutEvent3keyEv(void *that)
{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return &cthat->key();
}

  // proto:  bool QShortcutEvent::isAmbiguous();
bool demth_ZNK14QShortcutEvent11isAmbiguousEv(void *that)
{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return cthat->isAmbiguous();
}

  // proto:  int QShortcutEvent::shortcutId();
int demth_ZNK14QShortcutEvent10shortcutIdEv(void *that)
{
  QShortcutEvent *cthat = (QShortcutEvent *)that;
  return cthat->shortcutId();
}

int QWindowStateChangeEvent_Class_Size()
{
  return sizeof(QWindowStateChangeEvent);
}

// ~QWindowStateChangeEvent()
void dedtor_ZN23QWindowStateChangeEventD0Ev(QWindowStateChangeEvent* that)
{
  QWindowStateChangeEvent* rthis = (QWindowStateChangeEvent*)that;
  delete rthis;
}

// QWindowStateChangeEvent(Qt::WindowStates, _Bool)
QWindowStateChangeEvent* dector_ZN23QWindowStateChangeEventC1E6QFlagsIN2Qt11WindowStateEEb(Qt::WindowStates aOldState, bool isOverride)
{
  // static_assert(sizeof(QWindowStateChangeEvent) == 32, "tyszerr");
  QWindowStateChangeEvent* rthis = new QWindowStateChangeEvent(aOldState, isOverride);
  return rthis;
}

int QInputMethodQueryEvent_Class_Size()
{
  return sizeof(QInputMethodQueryEvent);
}

// ~QInputMethodQueryEvent()
void dedtor_ZN22QInputMethodQueryEventD0Ev(QInputMethodQueryEvent* that)
{
  QInputMethodQueryEvent* rthis = (QInputMethodQueryEvent*)that;
  delete rthis;
}

// QInputMethodQueryEvent(Qt::InputMethodQueries)
QInputMethodQueryEvent* dector_ZN22QInputMethodQueryEventC1E6QFlagsIN2Qt16InputMethodQueryEE(Qt::InputMethodQueries queries)
{
  // static_assert(sizeof(QInputMethodQueryEvent) == 32, "tyszerr");
  QInputMethodQueryEvent* rthis = new QInputMethodQueryEvent(queries);
  return rthis;
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

