// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qabstractspinbox.h
// dst-file: /src/widgets/qabstractspinbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractspinbox.h>


#include <qnamespace.h>
#include <qsize.h>
#include <qstring.h>
#include <qvalidator.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qabstractspinbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractSpinBox_Class_Size()
{
  return sizeof(QAbstractSpinBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 129, column 18>
//   // proto:  void QAbstractSpinBox::stepBy(int steps);
// _ZN16QAbstractSpinBox6stepByEi stepBy(int)
extern "C"
void
C_ZN16QAbstractSpinBox6stepByEi(void *qthis,
int arg1) {
  ((QAbstractSpinBox*)qthis)->stepBy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 90, column 20>
//   // proto:  QAbstractSpinBox::CorrectionMode QAbstractSpinBox::correctionMode();
// _ZNK16QAbstractSpinBox14correctionModeEv correctionMode()
extern "C"
QAbstractSpinBox::CorrectionMode
C_ZNK16QAbstractSpinBox14correctionModeEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->correctionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 101, column 10>
//   // proto:  void QAbstractSpinBox::setReadOnly(bool r);
// _ZN16QAbstractSpinBox11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 110, column 10>
//   // proto:  void QAbstractSpinBox::setFrame(bool );
// _ZN16QAbstractSpinBox8setFrameEb setFrame(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox8setFrameEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setFrame(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 96, column 10>
//   // proto:  void QAbstractSpinBox::setSpecialValueText(const QString & txt);
// _ZN16QAbstractSpinBox19setSpecialValueTextERK7QString setSpecialValueText(const class QString &)
extern "C"
void
C_ZN16QAbstractSpinBox19setSpecialValueTextERK7QString(void *qthis,
const QString* arg1) {
  ((QAbstractSpinBox*)qthis)->setSpecialValueText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 113, column 10>
//   // proto:  void QAbstractSpinBox::setAccelerated(bool on);
// _ZN16QAbstractSpinBox14setAcceleratedEb setAccelerated(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox14setAcceleratedEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setAccelerated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 121, column 10>
//   // proto:  void QAbstractSpinBox::interpretText();
// _ZN16QAbstractSpinBox13interpretTextEv interpretText()
extern "C"
void
C_ZN16QAbstractSpinBox13interpretTextEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->interpretText();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 122, column 10>
//   // proto:  bool QAbstractSpinBox::event(QEvent * event);
// _ZN16QAbstractSpinBox5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN16QAbstractSpinBox5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 105, column 10>
//   // proto:  bool QAbstractSpinBox::keyboardTracking();
// _ZNK16QAbstractSpinBox16keyboardTrackingEv keyboardTracking()
extern "C"
bool
C_ZNK16QAbstractSpinBox16keyboardTrackingEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->keyboardTracking();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 161, column 10>
//   // proto:  void QAbstractSpinBox::editingFinished();
// _ZN16QAbstractSpinBox15editingFinishedEv editingFinished()
extern "C"
void
C_ZN16QAbstractSpinBox15editingFinishedEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->editingFinished();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 108, column 19>
//   // proto:  Qt::Alignment QAbstractSpinBox::alignment();
// _ZNK16QAbstractSpinBox9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK16QAbstractSpinBox9alignmentEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 58, column 5>
//   // proto:  const QMetaObject * QAbstractSpinBox::metaObject();
// _ZNK16QAbstractSpinBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QAbstractSpinBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 83, column 19>
//   // proto:  QAbstractSpinBox::ButtonSymbols QAbstractSpinBox::buttonSymbols();
// _ZNK16QAbstractSpinBox13buttonSymbolsEv buttonSymbols()
extern "C"
QAbstractSpinBox::ButtonSymbols
C_ZNK16QAbstractSpinBox13buttonSymbolsEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->buttonSymbols();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 119, column 11>
//   // proto:  QSize QAbstractSpinBox::sizeHint();
// _ZNK16QAbstractSpinBox8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK16QAbstractSpinBox8sizeHintEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QAbstractSpinBox::~QAbstractSpinBox();
extern "C"
void C_ZN16QAbstractSpinBoxD2Ev(void *qthis) {
  delete (QAbstractSpinBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 127, column 18>
//   // proto:  void QAbstractSpinBox::fixup(QString & input);
// _ZNK16QAbstractSpinBox5fixupER7QString fixup(class QString &)
extern "C"
void
C_ZNK16QAbstractSpinBox5fixupER7QString(void *qthis,
QString* arg1) {
  ((QAbstractSpinBox*)qthis)->fixup(*((QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 133, column 10>
//   // proto:  void QAbstractSpinBox::selectAll();
// _ZN16QAbstractSpinBox9selectAllEv selectAll()
extern "C"
void
C_ZN16QAbstractSpinBox9selectAllEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 132, column 10>
//   // proto:  void QAbstractSpinBox::stepDown();
// _ZN16QAbstractSpinBox8stepDownEv stepDown()
extern "C"
void
C_ZN16QAbstractSpinBox8stepDownEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->stepDown();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 84, column 10>
//   // proto:  void QAbstractSpinBox::setButtonSymbols(QAbstractSpinBox::ButtonSymbols bs);
// _ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE setButtonSymbols(enum QAbstractSpinBox::ButtonSymbols)
extern "C"
void
C_ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE(void *qthis,
QAbstractSpinBox::ButtonSymbols arg1) {
  ((QAbstractSpinBox*)qthis)->setButtonSymbols(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 134, column 18>
//   // proto:  void QAbstractSpinBox::clear();
// _ZN16QAbstractSpinBox5clearEv clear()
extern "C"
void
C_ZN16QAbstractSpinBox5clearEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 93, column 13>
//   // proto:  QString QAbstractSpinBox::text();
// _ZNK16QAbstractSpinBox4textEv text()
extern "C"
QString*
C_ZNK16QAbstractSpinBox4textEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 126, column 31>
//   // proto:  QValidator::State QAbstractSpinBox::validate(QString & input, int & pos);
// _ZNK16QAbstractSpinBox8validateER7QStringRi validate(class QString &, int &)
extern "C"
QValidator::State
C_ZNK16QAbstractSpinBox8validateER7QStringRi(void *qthis,
QString* arg1,
int* arg2) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->validate(*((QString*)arg1),
*((int*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 95, column 13>
//   // proto:  QString QAbstractSpinBox::specialValueText();
// _ZNK16QAbstractSpinBox16specialValueTextEv specialValueText()
extern "C"
QString*
C_ZNK16QAbstractSpinBox16specialValueTextEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->specialValueText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 120, column 11>
//   // proto:  QSize QAbstractSpinBox::minimumSizeHint();
// _ZNK16QAbstractSpinBox15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK16QAbstractSpinBox15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 124, column 14>
//   // proto:  QVariant QAbstractSpinBox::inputMethodQuery(Qt::InputMethodQuery );
// _ZNK16QAbstractSpinBox16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK16QAbstractSpinBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 98, column 10>
//   // proto:  bool QAbstractSpinBox::wrapping();
// _ZNK16QAbstractSpinBox8wrappingEv wrapping()
extern "C"
bool
C_ZNK16QAbstractSpinBox8wrappingEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->wrapping();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 107, column 10>
//   // proto:  void QAbstractSpinBox::setAlignment(Qt::Alignment flag);
// _ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QAbstractSpinBox*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 73, column 14>
//   // proto:  void QAbstractSpinBox::QAbstractSpinBox(QWidget * parent);
extern "C"
QAbstractSpinBox*
C_ZN16QAbstractSpinBoxC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QAbstractSpinBox(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 131, column 10>
//   // proto:  void QAbstractSpinBox::stepUp();
// _ZN16QAbstractSpinBox6stepUpEv stepUp()
extern "C"
void
C_ZN16QAbstractSpinBox6stepUpEv(void *qthis) {
  ((QAbstractSpinBox*)qthis)->stepUp();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 99, column 10>
//   // proto:  void QAbstractSpinBox::setWrapping(bool w);
// _ZN16QAbstractSpinBox11setWrappingEb setWrapping(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox11setWrappingEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setWrapping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 104, column 10>
//   // proto:  void QAbstractSpinBox::setKeyboardTracking(bool kt);
// _ZN16QAbstractSpinBox19setKeyboardTrackingEb setKeyboardTracking(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox19setKeyboardTrackingEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setKeyboardTracking(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 114, column 10>
//   // proto:  bool QAbstractSpinBox::isAccelerated();
// _ZNK16QAbstractSpinBox13isAcceleratedEv isAccelerated()
extern "C"
bool
C_ZNK16QAbstractSpinBox13isAcceleratedEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->isAccelerated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 116, column 10>
//   // proto:  void QAbstractSpinBox::setGroupSeparatorShown(bool shown);
// _ZN16QAbstractSpinBox22setGroupSeparatorShownEb setGroupSeparatorShown(_Bool)
extern "C"
void
C_ZN16QAbstractSpinBox22setGroupSeparatorShownEb(void *qthis,
bool arg1) {
  ((QAbstractSpinBox*)qthis)->setGroupSeparatorShown(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 89, column 10>
//   // proto:  void QAbstractSpinBox::setCorrectionMode(QAbstractSpinBox::CorrectionMode cm);
// _ZN16QAbstractSpinBox17setCorrectionModeENS_14CorrectionModeE setCorrectionMode(enum QAbstractSpinBox::CorrectionMode)
extern "C"
void
C_ZN16QAbstractSpinBox17setCorrectionModeENS_14CorrectionModeE(void *qthis,
QAbstractSpinBox::CorrectionMode arg1) {
  ((QAbstractSpinBox*)qthis)->setCorrectionMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 102, column 10>
//   // proto:  bool QAbstractSpinBox::isReadOnly();
// _ZNK16QAbstractSpinBox10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK16QAbstractSpinBox10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 92, column 10>
//   // proto:  bool QAbstractSpinBox::hasAcceptableInput();
// _ZNK16QAbstractSpinBox18hasAcceptableInputEv hasAcceptableInput()
extern "C"
bool
C_ZNK16QAbstractSpinBox18hasAcceptableInputEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->hasAcceptableInput();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 117, column 10>
//   // proto:  bool QAbstractSpinBox::isGroupSeparatorShown();
// _ZNK16QAbstractSpinBox21isGroupSeparatorShownEv isGroupSeparatorShown()
extern "C"
bool
C_ZNK16QAbstractSpinBox21isGroupSeparatorShownEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->isGroupSeparatorShown();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractspinbox.h', line 111, column 10>
//   // proto:  bool QAbstractSpinBox::hasFrame();
// _ZNK16QAbstractSpinBox8hasFrameEv hasFrame()
extern "C"
bool
C_ZNK16QAbstractSpinBox8hasFrameEv(void *qthis) {
  auto ret =
  ((QAbstractSpinBox*)qthis)->hasFrame();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QAbstractSpinBox_SlotProxy here
class QAbstractSpinBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractSpinBox_SlotProxy():QObject(){}

public slots:
  // editingFinished()
  void slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv();
public:
  void (*slot_func__ZN16QAbstractSpinBox15editingFinishedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractspinbox.moc"

extern "C" {
  QAbstractSpinBox_SlotProxy* QAbstractSpinBox_SlotProxy_new()
  {
    return new QAbstractSpinBox_SlotProxy();
  }
};

void QAbstractSpinBox_SlotProxy::slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv() {
  if (this->slot_func__ZN16QAbstractSpinBox15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QAbstractSpinBox15editingFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractSpinBox_SlotProxy_connect__ZN16QAbstractSpinBox15editingFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractSpinBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QAbstractSpinBox15editingFinishedEv = (decltype(that->slot_func__ZN16QAbstractSpinBox15editingFinishedEv))ffifptr;
  QObject::connect((QAbstractSpinBox*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN16QAbstractSpinBox15editingFinishedEv()));
  return that;
}
extern "C"
void QAbstractSpinBox_SlotProxy_disconnect__ZN16QAbstractSpinBox15editingFinishedEv(QAbstractSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

