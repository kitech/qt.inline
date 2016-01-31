// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qabstractslider.h
// dst-file: /src/widgets/qabstractslider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractslider.h>


#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qabstractslider_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractSlider_Class_Size()
{
  return sizeof(QAbstractSlider);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 84, column 10>
//   // proto:  void QAbstractSlider::setSliderPosition(int );
// _ZN15QAbstractSlider17setSliderPositionEi setSliderPosition(int)
extern "C"
void
C_ZN15QAbstractSlider17setSliderPositionEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setSliderPosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 116, column 10>
//   // proto:  void QAbstractSlider::sliderPressed();
// _ZN15QAbstractSlider13sliderPressedEv sliderPressed()
extern "C"
void
C_ZN15QAbstractSlider13sliderPressedEv(void *qthis) {
  ((QAbstractSlider*)qthis)->sliderPressed();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 82, column 10>
//   // proto:  bool QAbstractSlider::isSliderDown();
// _ZNK15QAbstractSlider12isSliderDownEv isSliderDown()
extern "C"
bool
C_ZNK15QAbstractSlider12isSliderDownEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->isSliderDown();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 104, column 9>
//   // proto:  int QAbstractSlider::value();
// _ZNK15QAbstractSlider5valueEv value()
extern "C"
int
C_ZNK15QAbstractSlider5valueEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->value();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 90, column 10>
//   // proto:  void QAbstractSlider::setInvertedControls(bool );
// _ZN15QAbstractSlider19setInvertedControlsEb setInvertedControls(_Bool)
extern "C"
void
C_ZN15QAbstractSlider19setInvertedControlsEb(void *qthis,
bool arg1) {
  ((QAbstractSlider*)qthis)->setInvertedControls(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 106, column 10>
//   // proto:  void QAbstractSlider::triggerAction(QAbstractSlider::SliderAction action);
// _ZN15QAbstractSlider13triggerActionENS_12SliderActionE triggerAction(enum QAbstractSlider::SliderAction)
extern "C"
void
C_ZN15QAbstractSlider13triggerActionENS_12SliderActionE(void *qthis,
QAbstractSlider::SliderAction arg1) {
  ((QAbstractSlider*)qthis)->triggerAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 67, column 9>
//   // proto:  int QAbstractSlider::minimum();
// _ZNK15QAbstractSlider7minimumEv minimum()
extern "C"
int
C_ZNK15QAbstractSlider7minimumEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->minimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 73, column 9>
//   // proto:  int QAbstractSlider::singleStep();
// _ZNK15QAbstractSlider10singleStepEv singleStep()
extern "C"
int
C_ZNK15QAbstractSlider10singleStepEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->singleStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 64, column 21>
//   // proto:  Qt::Orientation QAbstractSlider::orientation();
// _ZNK15QAbstractSlider11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK15QAbstractSlider11orientationEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 76, column 9>
//   // proto:  int QAbstractSlider::pageStep();
// _ZNK15QAbstractSlider8pageStepEv pageStep()
extern "C"
int
C_ZNK15QAbstractSlider8pageStepEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->pageStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 69, column 10>
//   // proto:  void QAbstractSlider::setMaximum(int );
// _ZN15QAbstractSlider10setMaximumEi setMaximum(int)
extern "C"
void
C_ZN15QAbstractSlider10setMaximumEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 91, column 10>
//   // proto:  bool QAbstractSlider::invertedControls();
// _ZNK15QAbstractSlider16invertedControlsEv invertedControls()
extern "C"
bool
C_ZNK15QAbstractSlider16invertedControlsEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->invertedControls();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 109, column 10>
//   // proto:  void QAbstractSlider::setValue(int );
// _ZN15QAbstractSlider8setValueEi setValue(int)
extern "C"
void
C_ZN15QAbstractSlider8setValueEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 114, column 10>
//   // proto:  void QAbstractSlider::valueChanged(int value);
// _ZN15QAbstractSlider12valueChangedEi valueChanged(int)
extern "C"
void
C_ZN15QAbstractSlider12valueChangedEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->valueChanged(arg1);
}
//   // proto:  void QAbstractSlider::~QAbstractSlider();
extern "C"
void C_ZN15QAbstractSliderD2Ev(void *qthis) {
  delete (QAbstractSlider*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 75, column 10>
//   // proto:  void QAbstractSlider::setPageStep(int );
// _ZN15QAbstractSlider11setPageStepEi setPageStep(int)
extern "C"
void
C_ZN15QAbstractSlider11setPageStepEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setPageStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 81, column 10>
//   // proto:  void QAbstractSlider::setSliderDown(bool );
// _ZN15QAbstractSlider13setSliderDownEb setSliderDown(_Bool)
extern "C"
void
C_ZN15QAbstractSlider13setSliderDownEb(void *qthis,
bool arg1) {
  ((QAbstractSlider*)qthis)->setSliderDown(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 70, column 9>
//   // proto:  int QAbstractSlider::maximum();
// _ZNK15QAbstractSlider7maximumEv maximum()
extern "C"
int
C_ZNK15QAbstractSlider7maximumEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->maximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 46, column 5>
//   // proto:  const QMetaObject * QAbstractSlider::metaObject();
// _ZNK15QAbstractSlider10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QAbstractSlider10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 122, column 10>
//   // proto:  void QAbstractSlider::actionTriggered(int action);
// _ZN15QAbstractSlider15actionTriggeredEi actionTriggered(int)
extern "C"
void
C_ZN15QAbstractSlider15actionTriggeredEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->actionTriggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 72, column 10>
//   // proto:  void QAbstractSlider::setSingleStep(int );
// _ZN15QAbstractSlider13setSingleStepEi setSingleStep(int)
extern "C"
void
C_ZN15QAbstractSlider13setSingleStepEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setSingleStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 117, column 10>
//   // proto:  void QAbstractSlider::sliderMoved(int position);
// _ZN15QAbstractSlider11sliderMovedEi sliderMoved(int)
extern "C"
void
C_ZN15QAbstractSlider11sliderMovedEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->sliderMoved(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 87, column 10>
//   // proto:  void QAbstractSlider::setInvertedAppearance(bool );
// _ZN15QAbstractSlider21setInvertedAppearanceEb setInvertedAppearance(_Bool)
extern "C"
void
C_ZN15QAbstractSlider21setInvertedAppearanceEb(void *qthis,
bool arg1) {
  ((QAbstractSlider*)qthis)->setInvertedAppearance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 120, column 10>
//   // proto:  void QAbstractSlider::rangeChanged(int min, int max);
// _ZN15QAbstractSlider12rangeChangedEii rangeChanged(int, int)
extern "C"
void
C_ZN15QAbstractSlider12rangeChangedEii(void *qthis,
int arg1,
int arg2) {
  ((QAbstractSlider*)qthis)->rangeChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 79, column 10>
//   // proto:  bool QAbstractSlider::hasTracking();
// _ZNK15QAbstractSlider11hasTrackingEv hasTracking()
extern "C"
bool
C_ZNK15QAbstractSlider11hasTrackingEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->hasTracking();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 118, column 10>
//   // proto:  void QAbstractSlider::sliderReleased();
// _ZN15QAbstractSlider14sliderReleasedEv sliderReleased()
extern "C"
void
C_ZN15QAbstractSlider14sliderReleasedEv(void *qthis) {
  ((QAbstractSlider*)qthis)->sliderReleased();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 88, column 10>
//   // proto:  bool QAbstractSlider::invertedAppearance();
// _ZNK15QAbstractSlider18invertedAppearanceEv invertedAppearance()
extern "C"
bool
C_ZNK15QAbstractSlider18invertedAppearanceEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->invertedAppearance();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 85, column 9>
//   // proto:  int QAbstractSlider::sliderPosition();
// _ZNK15QAbstractSlider14sliderPositionEv sliderPosition()
extern "C"
int
C_ZNK15QAbstractSlider14sliderPositionEv(void *qthis) {
  auto ret =
  ((QAbstractSlider*)qthis)->sliderPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 78, column 10>
//   // proto:  void QAbstractSlider::setTracking(bool enable);
// _ZN15QAbstractSlider11setTrackingEb setTracking(_Bool)
extern "C"
void
C_ZN15QAbstractSlider11setTrackingEb(void *qthis,
bool arg1) {
  ((QAbstractSlider*)qthis)->setTracking(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 61, column 14>
//   // proto:  void QAbstractSlider::QAbstractSlider(QWidget * parent);
extern "C"
QAbstractSlider*
C_ZN15QAbstractSliderC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QAbstractSlider(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 111, column 10>
//   // proto:  void QAbstractSlider::setRange(int min, int max);
// _ZN15QAbstractSlider8setRangeEii setRange(int, int)
extern "C"
void
C_ZN15QAbstractSlider8setRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QAbstractSlider*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 66, column 10>
//   // proto:  void QAbstractSlider::setMinimum(int );
// _ZN15QAbstractSlider10setMinimumEi setMinimum(int)
extern "C"
void
C_ZN15QAbstractSlider10setMinimumEi(void *qthis,
int arg1) {
  ((QAbstractSlider*)qthis)->setMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractslider.h', line 110, column 10>
//   // proto:  void QAbstractSlider::setOrientation(Qt::Orientation );
// _ZN15QAbstractSlider14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN15QAbstractSlider14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QAbstractSlider*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <= ext block end

// body block begin =>
// QAbstractSlider_SlotProxy here
class QAbstractSlider_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractSlider_SlotProxy():QObject(){}

public slots:
  // sliderPressed()
  void slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv();
public:
  void (*slot_func__ZN15QAbstractSlider13sliderPressedEv)(void* rsfptr) = NULL;
public slots:
  // actionTriggered(int)
  void slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider15actionTriggeredEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sliderMoved(int)
  void slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider11sliderMovedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // rangeChanged(int, int)
  void slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN15QAbstractSlider12rangeChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN15QAbstractSlider12valueChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sliderReleased()
  void slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv();
public:
  void (*slot_func__ZN15QAbstractSlider14sliderReleasedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractslider.moc"

extern "C" {
  QAbstractSlider_SlotProxy* QAbstractSlider_SlotProxy_new()
  {
    return new QAbstractSlider_SlotProxy();
  }
};

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv() {
  if (this->slot_func__ZN15QAbstractSlider13sliderPressedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider13sliderPressedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider13sliderPressedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider13sliderPressedEv = (decltype(that->slot_func__ZN15QAbstractSlider13sliderPressedEv))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderPressed()), that, SLOT(slot_proxy_func__ZN15QAbstractSlider13sliderPressedEv()));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider13sliderPressedEv(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider15actionTriggeredEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider15actionTriggeredEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider15actionTriggeredEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider15actionTriggeredEi = (decltype(that->slot_func__ZN15QAbstractSlider15actionTriggeredEi))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(actionTriggered(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider15actionTriggeredEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider15actionTriggeredEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider11sliderMovedEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider11sliderMovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider11sliderMovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider11sliderMovedEi = (decltype(that->slot_func__ZN15QAbstractSlider11sliderMovedEi))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderMoved(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider11sliderMovedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider11sliderMovedEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN15QAbstractSlider12rangeChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider12rangeChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider12rangeChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider12rangeChangedEii = (decltype(that->slot_func__ZN15QAbstractSlider12rangeChangedEii))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(rangeChanged(int, int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider12rangeChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider12rangeChangedEii(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0) {
  if (this->slot_func__ZN15QAbstractSlider12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider12valueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider12valueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider12valueChangedEi = (decltype(that->slot_func__ZN15QAbstractSlider12valueChangedEi))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN15QAbstractSlider12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider12valueChangedEi(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractSlider_SlotProxy::slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv() {
  if (this->slot_func__ZN15QAbstractSlider14sliderReleasedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractSlider14sliderReleasedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSlider_SlotProxy_connect__ZN15QAbstractSlider14sliderReleasedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSlider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractSlider14sliderReleasedEv = (decltype(that->slot_func__ZN15QAbstractSlider14sliderReleasedEv))ffifptr;
  QObject::connect((QAbstractSlider*)sender, SIGNAL(sliderReleased()), that, SLOT(slot_proxy_func__ZN15QAbstractSlider14sliderReleasedEv()));
  return that;
}
extern "C"
void QAbstractSlider_SlotProxy_disconnect__ZN15QAbstractSlider14sliderReleasedEv(QAbstractSlider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

