//  header block begin
// /usr/include/qt/QtWidgets/qlabel.h
#include <qlabel.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qlabel.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK6QLabel10metaObjectEv(void *this_) {
  /*return*/ ((QLabel*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qlabel.h:67
// void QLabel(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QLabelC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QLabel(parent, f);
}
// /usr/include/qt/QtWidgets/qlabel.h:68
// void QLabel(const class QString &, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN6QLabelC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & text, QWidget * parent, QFlags<Qt::WindowType> f) {
  return new QLabel(text, parent, f);
}
// virtual
// /usr/include/qt/QtWidgets/qlabel.h:69
// void ~QLabel()
extern "C"
void C_ZN6QLabelD1Ev(void *this_) {
  delete (QLabel*)(this_);
}
// /usr/include/qt/QtWidgets/qlabel.h:71
// QString text()
extern "C"
void C_ZNK6QLabel4textEv(void *this_) {
  /*return*/ ((QLabel*)this_)->text();
}
// /usr/include/qt/QtWidgets/qlabel.h:72
// const QPixmap * pixmap()
extern "C"
void C_ZNK6QLabel6pixmapEv(void *this_) {
  /*return*/ ((QLabel*)this_)->pixmap();
}
// /usr/include/qt/QtWidgets/qlabel.h:74
// const QPicture * picture()
extern "C"
void C_ZNK6QLabel7pictureEv(void *this_) {
  /*return*/ ((QLabel*)this_)->picture();
}
// /usr/include/qt/QtWidgets/qlabel.h:77
// QMovie * movie()
extern "C"
void C_ZNK6QLabel5movieEv(void *this_) {
  /*return*/ ((QLabel*)this_)->movie();
}
// /usr/include/qt/QtWidgets/qlabel.h:80
// Qt::TextFormat textFormat()
extern "C"
void C_ZNK6QLabel10textFormatEv(void *this_) {
  /*return*/ ((QLabel*)this_)->textFormat();
}
// /usr/include/qt/QtWidgets/qlabel.h:81
// void setTextFormat(Qt::TextFormat)
extern "C"
void C_ZN6QLabel13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat arg0) {
  ((QLabel*)this_)->setTextFormat(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:83
// Qt::Alignment alignment()
extern "C"
void C_ZNK6QLabel9alignmentEv(void *this_) {
  /*return*/ ((QLabel*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qlabel.h:84
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN6QLabel12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, Qt::Alignment arg0) {
  ((QLabel*)this_)->setAlignment(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:86
// void setWordWrap(_Bool)
extern "C"
void C_ZN6QLabel11setWordWrapEb(void *this_, bool on) {
  ((QLabel*)this_)->setWordWrap(on);
}
// /usr/include/qt/QtWidgets/qlabel.h:87
// bool wordWrap()
extern "C"
void C_ZNK6QLabel8wordWrapEv(void *this_) {
  /*return*/ ((QLabel*)this_)->wordWrap();
}
// /usr/include/qt/QtWidgets/qlabel.h:89
// int indent()
extern "C"
void C_ZNK6QLabel6indentEv(void *this_) {
  /*return*/ ((QLabel*)this_)->indent();
}
// /usr/include/qt/QtWidgets/qlabel.h:90
// void setIndent(int)
extern "C"
void C_ZN6QLabel9setIndentEi(void *this_, int arg0) {
  ((QLabel*)this_)->setIndent(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:92
// int margin()
extern "C"
void C_ZNK6QLabel6marginEv(void *this_) {
  /*return*/ ((QLabel*)this_)->margin();
}
// /usr/include/qt/QtWidgets/qlabel.h:93
// void setMargin(int)
extern "C"
void C_ZN6QLabel9setMarginEi(void *this_, int arg0) {
  ((QLabel*)this_)->setMargin(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:95
// bool hasScaledContents()
extern "C"
void C_ZNK6QLabel17hasScaledContentsEv(void *this_) {
  /*return*/ ((QLabel*)this_)->hasScaledContents();
}
// /usr/include/qt/QtWidgets/qlabel.h:96
// void setScaledContents(_Bool)
extern "C"
void C_ZN6QLabel17setScaledContentsEb(void *this_, bool arg0) {
  ((QLabel*)this_)->setScaledContents(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qlabel.h:97
// QSize sizeHint()
extern "C"
void C_ZNK6QLabel8sizeHintEv(void *this_) {
  /*return*/ ((QLabel*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qlabel.h:98
// QSize minimumSizeHint()
extern "C"
void C_ZNK6QLabel15minimumSizeHintEv(void *this_) {
  /*return*/ ((QLabel*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qlabel.h:100
// void setBuddy(class QWidget *)
extern "C"
void C_ZN6QLabel8setBuddyEP7QWidget(void *this_, QWidget * arg0) {
  ((QLabel*)this_)->setBuddy(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:101
// QWidget * buddy()
extern "C"
void C_ZNK6QLabel5buddyEv(void *this_) {
  /*return*/ ((QLabel*)this_)->buddy();
}
// virtual
// /usr/include/qt/QtWidgets/qlabel.h:103
// int heightForWidth(int)
extern "C"
void C_ZNK6QLabel14heightForWidthEi(void *this_, int arg0) {
  /*return*/ ((QLabel*)this_)->heightForWidth(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:105
// bool openExternalLinks()
extern "C"
void C_ZNK6QLabel17openExternalLinksEv(void *this_) {
  /*return*/ ((QLabel*)this_)->openExternalLinks();
}
// /usr/include/qt/QtWidgets/qlabel.h:106
// void setOpenExternalLinks(_Bool)
extern "C"
void C_ZN6QLabel20setOpenExternalLinksEb(void *this_, bool open) {
  ((QLabel*)this_)->setOpenExternalLinks(open);
}
// /usr/include/qt/QtWidgets/qlabel.h:108
// void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void C_ZN6QLabel23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QLabel*)this_)->setTextInteractionFlags(flags);
}
// /usr/include/qt/QtWidgets/qlabel.h:109
// Qt::TextInteractionFlags textInteractionFlags()
extern "C"
void C_ZNK6QLabel20textInteractionFlagsEv(void *this_) {
  /*return*/ ((QLabel*)this_)->textInteractionFlags();
}
// /usr/include/qt/QtWidgets/qlabel.h:111
// void setSelection(int, int)
extern "C"
void C_ZN6QLabel12setSelectionEii(void *this_, int arg0, int arg1) {
  ((QLabel*)this_)->setSelection(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qlabel.h:112
// bool hasSelectedText()
extern "C"
void C_ZNK6QLabel15hasSelectedTextEv(void *this_) {
  /*return*/ ((QLabel*)this_)->hasSelectedText();
}
// /usr/include/qt/QtWidgets/qlabel.h:113
// QString selectedText()
extern "C"
void C_ZNK6QLabel12selectedTextEv(void *this_) {
  /*return*/ ((QLabel*)this_)->selectedText();
}
// /usr/include/qt/QtWidgets/qlabel.h:114
// int selectionStart()
extern "C"
void C_ZNK6QLabel14selectionStartEv(void *this_) {
  /*return*/ ((QLabel*)this_)->selectionStart();
}
// /usr/include/qt/QtWidgets/qlabel.h:117
// void setText(const class QString &)
extern "C"
void C_ZN6QLabel7setTextERK7QString(void *this_, const QString & arg0) {
  ((QLabel*)this_)->setText(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:118
// void setPixmap(const class QPixmap &)
extern "C"
void C_ZN6QLabel9setPixmapERK7QPixmap(void *this_, const QPixmap & arg0) {
  ((QLabel*)this_)->setPixmap(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:120
// void setPicture(const class QPicture &)
extern "C"
void C_ZN6QLabel10setPictureERK8QPicture(void *this_, const QPicture & arg0) {
  ((QLabel*)this_)->setPicture(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:123
// void setMovie(class QMovie *)
extern "C"
void C_ZN6QLabel8setMovieEP6QMovie(void *this_, QMovie * movie) {
  ((QLabel*)this_)->setMovie(movie);
}
// /usr/include/qt/QtWidgets/qlabel.h:125
// void setNum(int)
extern "C"
void C_ZN6QLabel6setNumEi(void *this_, int arg0) {
  ((QLabel*)this_)->setNum(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:126
// void setNum(double)
extern "C"
void C_ZN6QLabel6setNumEd(void *this_, double arg0) {
  ((QLabel*)this_)->setNum(arg0);
}
// /usr/include/qt/QtWidgets/qlabel.h:127
// void clear()
extern "C"
void C_ZN6QLabel5clearEv(void *this_) {
  ((QLabel*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qlabel.h:130
// void linkActivated(const class QString &)
extern "C"
void C_ZN6QLabel13linkActivatedERK7QString(void *this_, const QString & link) {
  ((QLabel*)this_)->linkActivated(link);
}
// /usr/include/qt/QtWidgets/qlabel.h:131
// void linkHovered(const class QString &)
extern "C"
void C_ZN6QLabel11linkHoveredERK7QString(void *this_, const QString & link) {
  ((QLabel*)this_)->linkHovered(link);
}
//  main block end
