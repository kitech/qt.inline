// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qlabel.h
// dst-file: /src/widgets/qlabel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlabel.h>


#include <qnamespace.h>
#include <qstring.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qlabel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLabel_Class_Size()
{
  return sizeof(QLabel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 68, column 21>
//   // proto:  const QPicture * QLabel::picture();
// _ZNK6QLabel7pictureEv picture()
extern "C"
void*
C_ZNK6QLabel7pictureEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->picture();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 74, column 20>
//   // proto:  Qt::TextFormat QLabel::textFormat();
// _ZNK6QLabel10textFormatEv textFormat()
extern "C"
Qt::TextFormat
C_ZNK6QLabel10textFormatEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->textFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 62, column 14>
//   // proto:  void QLabel::QLabel(const QString & text, QWidget * parent, Qt::WindowFlags f);
extern "C"
QLabel*
C_ZN6QLabelC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString* arg1,
QWidget * arg2,
Qt::WindowFlags* arg3) {
  auto ret = new QLabel(*((const QString*)arg1),
arg2,
*((Qt::WindowFlags*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 120, column 10>
//   // proto:  void QLabel::setNum(double );
// _ZN6QLabel6setNumEd setNum(double)
extern "C"
void
C_ZN6QLabel6setNumEd(void *qthis,
double arg1) {
  ((QLabel*)qthis)->setNum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 114, column 10>
//   // proto:  void QLabel::setPicture(const QPicture & );
// _ZN6QLabel10setPictureERK8QPicture setPicture(const class QPicture &)
extern "C"
void
C_ZN6QLabel10setPictureERK8QPicture(void *qthis,
const QPicture* arg1) {
  ((QLabel*)qthis)->setPicture(*((const QPicture*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 111, column 10>
//   // proto:  void QLabel::setText(const QString & );
// _ZN6QLabel7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN6QLabel7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QLabel*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 102, column 10>
//   // proto:  void QLabel::setTextInteractionFlags(Qt::TextInteractionFlags flags);
// _ZN6QLabel23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void
C_ZN6QLabel23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *qthis,
Qt::TextInteractionFlags* arg1) {
  ((QLabel*)qthis)->setTextInteractionFlags(*((Qt::TextInteractionFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 66, column 20>
//   // proto:  const QPixmap * QLabel::pixmap();
// _ZNK6QLabel6pixmapEv pixmap()
extern "C"
void*
C_ZNK6QLabel6pixmapEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->pixmap();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 84, column 10>
//   // proto:  void QLabel::setIndent(int );
// _ZN6QLabel9setIndentEi setIndent(int)
extern "C"
void
C_ZN6QLabel9setIndentEi(void *qthis,
int arg1) {
  ((QLabel*)qthis)->setIndent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 77, column 19>
//   // proto:  Qt::Alignment QLabel::alignment();
// _ZNK6QLabel9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK6QLabel9alignmentEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 46, column 5>
//   // proto:  const QMetaObject * QLabel::metaObject();
// _ZNK6QLabel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QLabel10metaObjectEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QLabel::~QLabel();
extern "C"
void C_ZN6QLabelD2Ev(void *qthis) {
  delete (QLabel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 105, column 10>
//   // proto:  void QLabel::setSelection(int , int );
// _ZN6QLabel12setSelectionEii setSelection(int, int)
extern "C"
void
C_ZN6QLabel12setSelectionEii(void *qthis,
int arg1,
int arg2) {
  ((QLabel*)qthis)->setSelection(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 89, column 10>
//   // proto:  bool QLabel::hasScaledContents();
// _ZNK6QLabel17hasScaledContentsEv hasScaledContents()
extern "C"
bool
C_ZNK6QLabel17hasScaledContentsEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->hasScaledContents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 78, column 10>
//   // proto:  void QLabel::setAlignment(Qt::Alignment );
// _ZN6QLabel12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN6QLabel12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QLabel*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 65, column 13>
//   // proto:  QString QLabel::text();
// _ZNK6QLabel4textEv text()
extern "C"
QString*
C_ZNK6QLabel4textEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 97, column 9>
//   // proto:  int QLabel::heightForWidth(int );
// _ZNK6QLabel14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK6QLabel14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QLabel*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 61, column 14>
//   // proto:  void QLabel::QLabel(QWidget * parent, Qt::WindowFlags f);
extern "C"
QLabel*
C_ZN6QLabelC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QLabel(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 99, column 10>
//   // proto:  bool QLabel::openExternalLinks();
// _ZNK6QLabel17openExternalLinksEv openExternalLinks()
extern "C"
bool
C_ZNK6QLabel17openExternalLinksEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->openExternalLinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 119, column 10>
//   // proto:  void QLabel::setNum(int );
// _ZN6QLabel6setNumEi setNum(int)
extern "C"
void
C_ZN6QLabel6setNumEi(void *qthis,
int arg1) {
  ((QLabel*)qthis)->setNum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 112, column 10>
//   // proto:  void QLabel::setPixmap(const QPixmap & );
// _ZN6QLabel9setPixmapERK7QPixmap setPixmap(const class QPixmap &)
extern "C"
void
C_ZN6QLabel9setPixmapERK7QPixmap(void *qthis,
const QPixmap* arg1) {
  ((QLabel*)qthis)->setPixmap(*((const QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 100, column 10>
//   // proto:  void QLabel::setOpenExternalLinks(bool open);
// _ZN6QLabel20setOpenExternalLinksEb setOpenExternalLinks(_Bool)
extern "C"
void
C_ZN6QLabel20setOpenExternalLinksEb(void *qthis,
bool arg1) {
  ((QLabel*)qthis)->setOpenExternalLinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 95, column 14>
//   // proto:  QWidget * QLabel::buddy();
// _ZNK6QLabel5buddyEv buddy()
extern "C"
void*
C_ZNK6QLabel5buddyEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->buddy();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 75, column 10>
//   // proto:  void QLabel::setTextFormat(Qt::TextFormat );
// _ZN6QLabel13setTextFormatEN2Qt10TextFormatE setTextFormat(Qt::TextFormat)
extern "C"
void
C_ZN6QLabel13setTextFormatEN2Qt10TextFormatE(void *qthis,
Qt::TextFormat* arg1) {
  ((QLabel*)qthis)->setTextFormat(*((Qt::TextFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 81, column 10>
//   // proto:  bool QLabel::wordWrap();
// _ZNK6QLabel8wordWrapEv wordWrap()
extern "C"
bool
C_ZNK6QLabel8wordWrapEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->wordWrap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 80, column 10>
//   // proto:  void QLabel::setWordWrap(bool on);
// _ZN6QLabel11setWordWrapEb setWordWrap(_Bool)
extern "C"
void
C_ZN6QLabel11setWordWrapEb(void *qthis,
bool arg1) {
  ((QLabel*)qthis)->setWordWrap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 121, column 10>
//   // proto:  void QLabel::clear();
// _ZN6QLabel5clearEv clear()
extern "C"
void
C_ZN6QLabel5clearEv(void *qthis) {
  ((QLabel*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 87, column 10>
//   // proto:  void QLabel::setMargin(int );
// _ZN6QLabel9setMarginEi setMargin(int)
extern "C"
void
C_ZN6QLabel9setMarginEi(void *qthis,
int arg1) {
  ((QLabel*)qthis)->setMargin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 92, column 11>
//   // proto:  QSize QLabel::minimumSizeHint();
// _ZNK6QLabel15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK6QLabel15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 108, column 9>
//   // proto:  int QLabel::selectionStart();
// _ZNK6QLabel14selectionStartEv selectionStart()
extern "C"
int
C_ZNK6QLabel14selectionStartEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->selectionStart();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 106, column 10>
//   // proto:  bool QLabel::hasSelectedText();
// _ZNK6QLabel15hasSelectedTextEv hasSelectedText()
extern "C"
bool
C_ZNK6QLabel15hasSelectedTextEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->hasSelectedText();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 124, column 10>
//   // proto:  void QLabel::linkActivated(const QString & link);
// _ZN6QLabel13linkActivatedERK7QString linkActivated(const class QString &)
extern "C"
void
C_ZN6QLabel13linkActivatedERK7QString(void *qthis,
const QString* arg1) {
  ((QLabel*)qthis)->linkActivated(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 103, column 30>
//   // proto:  Qt::TextInteractionFlags QLabel::textInteractionFlags();
// _ZNK6QLabel20textInteractionFlagsEv textInteractionFlags()
extern "C"
QFlags<Qt::TextInteractionFlag>*
C_ZNK6QLabel20textInteractionFlagsEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->textInteractionFlags();
  return new QFlags<Qt::TextInteractionFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 94, column 10>
//   // proto:  void QLabel::setBuddy(QWidget * );
// _ZN6QLabel8setBuddyEP7QWidget setBuddy(class QWidget *)
extern "C"
void
C_ZN6QLabel8setBuddyEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QLabel*)qthis)->setBuddy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 83, column 9>
//   // proto:  int QLabel::indent();
// _ZNK6QLabel6indentEv indent()
extern "C"
int
C_ZNK6QLabel6indentEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->indent();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 91, column 11>
//   // proto:  QSize QLabel::sizeHint();
// _ZNK6QLabel8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK6QLabel8sizeHintEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 86, column 9>
//   // proto:  int QLabel::margin();
// _ZNK6QLabel6marginEv margin()
extern "C"
int
C_ZNK6QLabel6marginEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->margin();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 71, column 13>
//   // proto:  QMovie * QLabel::movie();
// _ZNK6QLabel5movieEv movie()
extern "C"
void*
C_ZNK6QLabel5movieEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->movie();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 90, column 10>
//   // proto:  void QLabel::setScaledContents(bool );
// _ZN6QLabel17setScaledContentsEb setScaledContents(_Bool)
extern "C"
void
C_ZN6QLabel17setScaledContentsEb(void *qthis,
bool arg1) {
  ((QLabel*)qthis)->setScaledContents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 117, column 10>
//   // proto:  void QLabel::setMovie(QMovie * movie);
// _ZN6QLabel8setMovieEP6QMovie setMovie(class QMovie *)
extern "C"
void
C_ZN6QLabel8setMovieEP6QMovie(void *qthis,
QMovie * arg1) {
  ((QLabel*)qthis)->setMovie(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 107, column 13>
//   // proto:  QString QLabel::selectedText();
// _ZNK6QLabel12selectedTextEv selectedText()
extern "C"
QString*
C_ZNK6QLabel12selectedTextEv(void *qthis) {
  auto ret =
  ((QLabel*)qthis)->selectedText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlabel.h', line 125, column 10>
//   // proto:  void QLabel::linkHovered(const QString & link);
// _ZN6QLabel11linkHoveredERK7QString linkHovered(const class QString &)
extern "C"
void
C_ZN6QLabel11linkHoveredERK7QString(void *qthis,
const QString* arg1) {
  ((QLabel*)qthis)->linkHovered(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// QLabel_SlotProxy here
class QLabel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLabel_SlotProxy():QObject(){}

public slots:
  // linkActivated(const class QString &)
  void slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN6QLabel13linkActivatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // linkHovered(const class QString &)
  void slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN6QLabel11linkHoveredERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlabel.moc"

extern "C" {
  QLabel_SlotProxy* QLabel_SlotProxy_new()
  {
    return new QLabel_SlotProxy();
  }
};

void QLabel_SlotProxy::slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN6QLabel13linkActivatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN6QLabel13linkActivatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLabel_SlotProxy_connect__ZN6QLabel13linkActivatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLabel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QLabel13linkActivatedERK7QString = (decltype(that->slot_func__ZN6QLabel13linkActivatedERK7QString))ffifptr;
  QObject::connect((QLabel*)sender, SIGNAL(linkActivated(const class QString &)), that, SLOT(slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLabel_SlotProxy_disconnect__ZN6QLabel13linkActivatedERK7QString(QLabel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLabel_SlotProxy::slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN6QLabel11linkHoveredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN6QLabel11linkHoveredERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLabel_SlotProxy_connect__ZN6QLabel11linkHoveredERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLabel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QLabel11linkHoveredERK7QString = (decltype(that->slot_func__ZN6QLabel11linkHoveredERK7QString))ffifptr;
  QObject::connect((QLabel*)sender, SIGNAL(linkHovered(const class QString &)), that, SLOT(slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLabel_SlotProxy_disconnect__ZN6QLabel11linkHoveredERK7QString(QLabel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

