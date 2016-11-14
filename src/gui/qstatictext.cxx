// /usr/include/qt/QtGui/qstatictext.h
#include <qstatictext.h>
#include <QtGui>

// /usr/include/qt/QtGui/qstatictext.h:63
// void QStaticText()
extern "C"
void* C_ZN11QStaticTextC1Ev() {
  return new QStaticText();
}
// /usr/include/qt/QtGui/qstatictext.h:64
// void QStaticText(const class QString &)
extern "C"
void* C_ZN11QStaticTextC1ERK7QString(const QString & text) {
  return new QStaticText(text);
}
// /usr/include/qt/QtGui/qstatictext.h:70
// void ~QStaticText()
extern "C"
void C_ZN11QStaticTextD1Ev(void *this_) {
  delete (QStaticText*)(this_);
}
// inline
// /usr/include/qt/QtGui/qstatictext.h:72
// void swap(class QStaticText &)
extern "C"
void C_ZN11QStaticText4swapERS_(void *this_, QStaticText & other) {
  ((QStaticText*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qstatictext.h:74
// void setText(const class QString &)
extern "C"
void C_ZN11QStaticText7setTextERK7QString(void *this_, const QString & text) {
  ((QStaticText*)this_)->setText(text);
}
// /usr/include/qt/QtGui/qstatictext.h:75
// QString text()
extern "C"
void C_ZNK11QStaticText4textEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->text();
}
// /usr/include/qt/QtGui/qstatictext.h:77
// void setTextFormat(Qt::TextFormat)
extern "C"
void C_ZN11QStaticText13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat textFormat) {
  ((QStaticText*)this_)->setTextFormat(textFormat);
}
// /usr/include/qt/QtGui/qstatictext.h:78
// Qt::TextFormat textFormat()
extern "C"
void C_ZNK11QStaticText10textFormatEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->textFormat();
}
// /usr/include/qt/QtGui/qstatictext.h:80
// void setTextWidth(qreal)
extern "C"
void C_ZN11QStaticText12setTextWidthEd(void *this_, qreal textWidth) {
  ((QStaticText*)this_)->setTextWidth(textWidth);
}
// /usr/include/qt/QtGui/qstatictext.h:81
// qreal textWidth()
extern "C"
void C_ZNK11QStaticText9textWidthEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->textWidth();
}
// /usr/include/qt/QtGui/qstatictext.h:83
// void setTextOption(const class QTextOption &)
extern "C"
void C_ZN11QStaticText13setTextOptionERK11QTextOption(void *this_, const QTextOption & textOption) {
  ((QStaticText*)this_)->setTextOption(textOption);
}
// /usr/include/qt/QtGui/qstatictext.h:84
// QTextOption textOption()
extern "C"
void C_ZNK11QStaticText10textOptionEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->textOption();
}
// /usr/include/qt/QtGui/qstatictext.h:86
// QSizeF size()
extern "C"
void C_ZNK11QStaticText4sizeEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->size();
}
// /usr/include/qt/QtGui/qstatictext.h:88
// void prepare(const class QTransform &, const class QFont &)
extern "C"
void C_ZN11QStaticText7prepareERK10QTransformRK5QFont(void *this_, const QTransform & matrix, const QFont & font) {
  ((QStaticText*)this_)->prepare(matrix, font);
}
// /usr/include/qt/QtGui/qstatictext.h:90
// void setPerformanceHint(enum QStaticText::PerformanceHint)
extern "C"
void C_ZN11QStaticText18setPerformanceHintENS_15PerformanceHintE(void *this_, QStaticText::PerformanceHint performanceHint) {
  ((QStaticText*)this_)->setPerformanceHint(performanceHint);
}
// /usr/include/qt/QtGui/qstatictext.h:91
// QStaticText::PerformanceHint performanceHint()
extern "C"
void C_ZNK11QStaticText15performanceHintEv(void *this_) {
  /*return*/ ((QStaticText*)this_)->performanceHint();
}