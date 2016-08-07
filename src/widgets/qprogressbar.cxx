// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qprogressbar.h
// dst-file: /src/widgets/qprogressbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qprogressbar.h>


#include <qstring.h>
#include <qnamespace.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qprogressbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QProgressBar_Class_Size()
{
  return sizeof(QProgressBar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 98, column 13>
//   // proto:  QString QProgressBar::format();
// _ZNK12QProgressBar6formatEv format()
extern "C"
QString*
C_ZNK12QProgressBar6formatEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->format();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 101, column 10>
//   // proto:  void QProgressBar::reset();
// _ZN12QProgressBar5resetEv reset()
extern "C"
void
C_ZN12QProgressBar5resetEv(void *qthis) {
  ((QProgressBar*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 55, column 5>
//   // proto:  const QMetaObject * QProgressBar::metaObject();
// _ZNK12QProgressBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QProgressBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 75, column 9>
//   // proto:  int QProgressBar::maximum();
// _ZNK12QProgressBar7maximumEv maximum()
extern "C"
int
C_ZNK12QProgressBar7maximumEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->maximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 83, column 19>
//   // proto:  Qt::Alignment QProgressBar::alignment();
// _ZNK12QProgressBar9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK12QProgressBar9alignmentEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 96, column 10>
//   // proto:  void QProgressBar::setFormat(const QString & format);
// _ZN12QProgressBar9setFormatERK7QString setFormat(const class QString &)
extern "C"
void
C_ZN12QProgressBar9setFormatERK7QString(void *qthis,
const QString* arg1) {
  ((QProgressBar*)qthis)->setFormat(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 94, column 29>
//   // proto:  QProgressBar::Direction QProgressBar::textDirection();
// _ZNK12QProgressBar13textDirectionEv textDirection()
extern "C"
QProgressBar::Direction
C_ZNK12QProgressBar13textDirectionEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->textDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 92, column 10>
//   // proto:  bool QProgressBar::invertedAppearance();
// _ZNK12QProgressBar18invertedAppearanceEv invertedAppearance()
extern "C"
bool
C_ZNK12QProgressBar18invertedAppearanceEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->invertedAppearance();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 79, column 21>
//   // proto:  QString QProgressBar::text();
// _ZNK12QProgressBar4textEv text()
extern "C"
QString*
C_ZNK12QProgressBar4textEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 103, column 10>
//   // proto:  void QProgressBar::setMinimum(int minimum);
// _ZN12QProgressBar10setMinimumEi setMinimum(int)
extern "C"
void
C_ZN12QProgressBar10setMinimumEi(void *qthis,
int arg1) {
  ((QProgressBar*)qthis)->setMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 109, column 10>
//   // proto:  void QProgressBar::valueChanged(int value);
// _ZN12QProgressBar12valueChangedEi valueChanged(int)
extern "C"
void
C_ZN12QProgressBar12valueChangedEi(void *qthis,
int arg1) {
  ((QProgressBar*)qthis)->valueChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 71, column 14>
//   // proto:  void QProgressBar::QProgressBar(QWidget * parent);
extern "C"
QProgressBar*
C_ZN12QProgressBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QProgressBar(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 80, column 10>
//   // proto:  void QProgressBar::setTextVisible(bool visible);
// _ZN12QProgressBar14setTextVisibleEb setTextVisible(_Bool)
extern "C"
void
C_ZN12QProgressBar14setTextVisibleEb(void *qthis,
bool arg1) {
  ((QProgressBar*)qthis)->setTextVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 77, column 9>
//   // proto:  int QProgressBar::value();
// _ZNK12QProgressBar5valueEv value()
extern "C"
int
C_ZNK12QProgressBar5valueEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->value();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 105, column 10>
//   // proto:  void QProgressBar::setValue(int value);
// _ZN12QProgressBar8setValueEi setValue(int)
extern "C"
void
C_ZN12QProgressBar8setValueEi(void *qthis,
int arg1) {
  ((QProgressBar*)qthis)->setValue(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 89, column 21>
//   // proto:  Qt::Orientation QProgressBar::orientation();
// _ZNK12QProgressBar11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK12QProgressBar11orientationEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 93, column 10>
//   // proto:  void QProgressBar::setTextDirection(QProgressBar::Direction textDirection);
// _ZN12QProgressBar16setTextDirectionENS_9DirectionE setTextDirection(class QProgressBar::Direction)
extern "C"
void
C_ZN12QProgressBar16setTextDirectionENS_9DirectionE(void *qthis,
QProgressBar::Direction* arg1) {
  ((QProgressBar*)qthis)->setTextDirection(*((QProgressBar::Direction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 87, column 11>
//   // proto:  QSize QProgressBar::minimumSizeHint();
// _ZNK12QProgressBar15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK12QProgressBar15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 74, column 9>
//   // proto:  int QProgressBar::minimum();
// _ZNK12QProgressBar7minimumEv minimum()
extern "C"
int
C_ZNK12QProgressBar7minimumEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->minimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 102, column 10>
//   // proto:  void QProgressBar::setRange(int minimum, int maximum);
// _ZN12QProgressBar8setRangeEii setRange(int, int)
extern "C"
void
C_ZN12QProgressBar8setRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QProgressBar*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 86, column 11>
//   // proto:  QSize QProgressBar::sizeHint();
// _ZNK12QProgressBar8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK12QProgressBar8sizeHintEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 97, column 10>
//   // proto:  void QProgressBar::resetFormat();
// _ZN12QProgressBar11resetFormatEv resetFormat()
extern "C"
void
C_ZN12QProgressBar11resetFormatEv(void *qthis) {
  ((QProgressBar*)qthis)->resetFormat();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 81, column 10>
//   // proto:  bool QProgressBar::isTextVisible();
// _ZNK12QProgressBar13isTextVisibleEv isTextVisible()
extern "C"
bool
C_ZNK12QProgressBar13isTextVisibleEv(void *qthis) {
  auto ret =
  ((QProgressBar*)qthis)->isTextVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 84, column 10>
//   // proto:  void QProgressBar::setAlignment(Qt::Alignment alignment);
// _ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QProgressBar*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 91, column 10>
//   // proto:  void QProgressBar::setInvertedAppearance(bool invert);
// _ZN12QProgressBar21setInvertedAppearanceEb setInvertedAppearance(_Bool)
extern "C"
void
C_ZN12QProgressBar21setInvertedAppearanceEb(void *qthis,
bool arg1) {
  ((QProgressBar*)qthis)->setInvertedAppearance(arg1);
}
//   // proto:  void QProgressBar::~QProgressBar();
extern "C"
void C_ZN12QProgressBarD2Ev(void *qthis) {
  delete (QProgressBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 106, column 10>
//   // proto:  void QProgressBar::setOrientation(Qt::Orientation );
// _ZN12QProgressBar14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QProgressBar*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressbar.h', line 104, column 10>
//   // proto:  void QProgressBar::setMaximum(int maximum);
// _ZN12QProgressBar10setMaximumEi setMaximum(int)
extern "C"
void
C_ZN12QProgressBar10setMaximumEi(void *qthis,
int arg1) {
  ((QProgressBar*)qthis)->setMaximum(arg1);
}
// <= ext block end

// body block begin =>
// QProgressBar_SlotProxy here
class QProgressBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProgressBar_SlotProxy():QObject(){}

public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN12QProgressBar12valueChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qprogressbar.moc"

extern "C" {
  QProgressBar_SlotProxy* QProgressBar_SlotProxy_new()
  {
    return new QProgressBar_SlotProxy();
  }
};

void QProgressBar_SlotProxy::slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0) {
  if (this->slot_func__ZN12QProgressBar12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QProgressBar12valueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QProgressBar_SlotProxy_connect__ZN12QProgressBar12valueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProgressBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QProgressBar12valueChangedEi = (decltype(that->slot_func__ZN12QProgressBar12valueChangedEi))ffifptr;
  QObject::connect((QProgressBar*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN12QProgressBar12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QProgressBar_SlotProxy_disconnect__ZN12QProgressBar12valueChangedEi(QProgressBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

