// /usr/include/qt/QtWidgets/qprogressbar.h
#include <qprogressbar.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QProgressBar10metaObjectEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:71
// void QProgressBar(class QWidget *)
extern "C"
void* C_ZN12QProgressBarC1EP7QWidget(QWidget * parent) {
  return new QProgressBar(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qprogressbar.h:72
// void ~QProgressBar()
extern "C"
void C_ZN12QProgressBarD1Ev(void *this_) {
  delete (QProgressBar*)(this_);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:74
// int minimum()
extern "C"
void C_ZNK12QProgressBar7minimumEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->minimum();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:75
// int maximum()
extern "C"
void C_ZNK12QProgressBar7maximumEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->maximum();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:77
// int value()
extern "C"
void C_ZNK12QProgressBar5valueEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->value();
}
// virtual
// /usr/include/qt/QtWidgets/qprogressbar.h:79
// QString text()
extern "C"
void C_ZNK12QProgressBar4textEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->text();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:80
// void setTextVisible(_Bool)
extern "C"
void C_ZN12QProgressBar14setTextVisibleEb(void *this_, bool visible) {
  ((QProgressBar*)this_)->setTextVisible(visible);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:81
// bool isTextVisible()
extern "C"
void C_ZNK12QProgressBar13isTextVisibleEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->isTextVisible();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:83
// Qt::Alignment alignment()
extern "C"
void C_ZNK12QProgressBar9alignmentEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->alignment();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:84
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QProgressBar*)this_)->setAlignment(alignment);
}
// virtual
// /usr/include/qt/QtWidgets/qprogressbar.h:86
// QSize sizeHint()
extern "C"
void C_ZNK12QProgressBar8sizeHintEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qprogressbar.h:87
// QSize minimumSizeHint()
extern "C"
void C_ZNK12QProgressBar15minimumSizeHintEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:89
// Qt::Orientation orientation()
extern "C"
void C_ZNK12QProgressBar11orientationEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:91
// void setInvertedAppearance(_Bool)
extern "C"
void C_ZN12QProgressBar21setInvertedAppearanceEb(void *this_, bool invert) {
  ((QProgressBar*)this_)->setInvertedAppearance(invert);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:92
// bool invertedAppearance()
extern "C"
void C_ZNK12QProgressBar18invertedAppearanceEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->invertedAppearance();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:93
// void setTextDirection(class QProgressBar::Direction)
extern "C"
void C_ZN12QProgressBar16setTextDirectionENS_9DirectionE(void *this_, QProgressBar::Direction textDirection) {
  ((QProgressBar*)this_)->setTextDirection(textDirection);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:94
// QProgressBar::Direction textDirection()
extern "C"
void C_ZNK12QProgressBar13textDirectionEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->textDirection();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:96
// void setFormat(const class QString &)
extern "C"
void C_ZN12QProgressBar9setFormatERK7QString(void *this_, const QString & format) {
  ((QProgressBar*)this_)->setFormat(format);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:97
// void resetFormat()
extern "C"
void C_ZN12QProgressBar11resetFormatEv(void *this_) {
  ((QProgressBar*)this_)->resetFormat();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:98
// QString format()
extern "C"
void C_ZNK12QProgressBar6formatEv(void *this_) {
  /*return*/ ((QProgressBar*)this_)->format();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:101
// void reset()
extern "C"
void C_ZN12QProgressBar5resetEv(void *this_) {
  ((QProgressBar*)this_)->reset();
}
// /usr/include/qt/QtWidgets/qprogressbar.h:102
// void setRange(int, int)
extern "C"
void C_ZN12QProgressBar8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressBar*)this_)->setRange(minimum, maximum);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:103
// void setMinimum(int)
extern "C"
void C_ZN12QProgressBar10setMinimumEi(void *this_, int minimum) {
  ((QProgressBar*)this_)->setMinimum(minimum);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:104
// void setMaximum(int)
extern "C"
void C_ZN12QProgressBar10setMaximumEi(void *this_, int maximum) {
  ((QProgressBar*)this_)->setMaximum(maximum);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:105
// void setValue(int)
extern "C"
void C_ZN12QProgressBar8setValueEi(void *this_, int value) {
  ((QProgressBar*)this_)->setValue(value);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:106
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation a0) {
  ((QProgressBar*)this_)->setOrientation(a0);
}
// /usr/include/qt/QtWidgets/qprogressbar.h:109
// void valueChanged(int)
extern "C"
void C_ZN12QProgressBar12valueChangedEi(void *this_, int value) {
  ((QProgressBar*)this_)->valueChanged(value);
}