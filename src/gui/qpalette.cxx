//  header block begin
// /usr/include/qt/QtGui/qpalette.h
#include <qpalette.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpalette.h:57
// void QPalette()
extern "C"
void* C_ZN8QPaletteC1Ev() {
  return new QPalette();
}
// /usr/include/qt/QtGui/qpalette.h:58
// void QPalette(const class QColor &)
extern "C"
void* C_ZN8QPaletteC1ERK6QColor(const QColor & button) {
  return new QPalette(button);
}
// /usr/include/qt/QtGui/qpalette.h:59
// void QPalette(Qt::GlobalColor)
extern "C"
void* C_ZN8QPaletteC1EN2Qt11GlobalColorE(Qt::GlobalColor button) {
  return new QPalette(button);
}
// /usr/include/qt/QtGui/qpalette.h:60
// void QPalette(const class QColor &, const class QColor &)
extern "C"
void* C_ZN8QPaletteC1ERK6QColorS2_(const QColor & button, const QColor & window) {
  return new QPalette(button, window);
}
// /usr/include/qt/QtGui/qpalette.h:61
// void QPalette(const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
extern "C"
void* C_ZN8QPaletteC1ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window) {
  return new QPalette(windowText, button, light, dark, mid, text, bright_text, base, window);
}
// /usr/include/qt/QtGui/qpalette.h:64
// void QPalette(const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &)
extern "C"
void* C_ZN8QPaletteC1ERK6QColorS2_S2_S2_S2_S2_S2_(const QColor & windowText, const QColor & window, const QColor & light, const QColor & dark, const QColor & mid, const QColor & text, const QColor & base) {
  return new QPalette(windowText, window, light, dark, mid, text, base);
}
// /usr/include/qt/QtGui/qpalette.h:67
// void ~QPalette()
extern "C"
void C_ZN8QPaletteD1Ev(void *this_) {
  delete (QPalette*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:80
// void swap(class QPalette &)
extern "C"
void C_ZN8QPalette4swapERS_(void *this_, QPalette & other) {
  ((QPalette*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:103
// QPalette::ColorGroup currentColorGroup()
extern "C"
void C_ZNK8QPalette17currentColorGroupEv(void *this_) {
  /*return*/ ((QPalette*)this_)->currentColorGroup();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:104
// void setCurrentColorGroup(enum QPalette::ColorGroup)
extern "C"
void C_ZN8QPalette20setCurrentColorGroupENS_10ColorGroupE(void *this_, QPalette::ColorGroup cg) {
  ((QPalette*)this_)->setCurrentColorGroup(cg);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:106
// const QColor & color(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C"
void C_ZNK8QPalette5colorENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  /*return*/ ((QPalette*)this_)->color(cg, cr);
}
// /usr/include/qt/QtGui/qpalette.h:108
// const QBrush & brush(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C"
void C_ZNK8QPalette5brushENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  /*return*/ ((QPalette*)this_)->brush(cg, cr);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:109
// void setColor(enum QPalette::ColorGroup, enum QPalette::ColorRole, const class QColor &)
extern "C"
void C_ZN8QPalette8setColorENS_10ColorGroupENS_9ColorRoleERK6QColor(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QColor & color) {
  ((QPalette*)this_)->setColor(cg, cr, color);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:110
// void setColor(enum QPalette::ColorRole, const class QColor &)
extern "C"
void C_ZN8QPalette8setColorENS_9ColorRoleERK6QColor(void *this_, QPalette::ColorRole cr, const QColor & color) {
  ((QPalette*)this_)->setColor(cr, color);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:111
// void setBrush(enum QPalette::ColorRole, const class QBrush &)
extern "C"
void C_ZN8QPalette8setBrushENS_9ColorRoleERK6QBrush(void *this_, QPalette::ColorRole cr, const QBrush & brush) {
  ((QPalette*)this_)->setBrush(cr, brush);
}
// /usr/include/qt/QtGui/qpalette.h:112
// bool isBrushSet(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C"
void C_ZNK8QPalette10isBrushSetENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  /*return*/ ((QPalette*)this_)->isBrushSet(cg, cr);
}
// /usr/include/qt/QtGui/qpalette.h:113
// void setBrush(enum QPalette::ColorGroup, enum QPalette::ColorRole, const class QBrush &)
extern "C"
void C_ZN8QPalette8setBrushENS_10ColorGroupENS_9ColorRoleERK6QBrush(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr, const QBrush & brush) {
  ((QPalette*)this_)->setBrush(cg, cr, brush);
}
// /usr/include/qt/QtGui/qpalette.h:114
// void setColorGroup(enum QPalette::ColorGroup, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
extern "C"
void C_ZN8QPalette13setColorGroupENS_10ColorGroupERK6QBrushS3_S3_S3_S3_S3_S3_S3_S3_(void *this_, QPalette::ColorGroup cr, const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window) {
  ((QPalette*)this_)->setColorGroup(cr, windowText, button, light, dark, mid, text, bright_text, base, window);
}
// /usr/include/qt/QtGui/qpalette.h:118
// bool isEqual(enum QPalette::ColorGroup, enum QPalette::ColorGroup)
extern "C"
void C_ZNK8QPalette7isEqualENS_10ColorGroupES0_(void *this_, QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) {
  /*return*/ ((QPalette*)this_)->isEqual(cr1, cr2);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:120
// const QColor & color(enum QPalette::ColorRole)
extern "C"
void C_ZNK8QPalette5colorENS_9ColorRoleE(void *this_, QPalette::ColorRole cr) {
  /*return*/ ((QPalette*)this_)->color(cr);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:121
// const QBrush & brush(enum QPalette::ColorRole)
extern "C"
void C_ZNK8QPalette5brushENS_9ColorRoleE(void *this_, QPalette::ColorRole cr) {
  /*return*/ ((QPalette*)this_)->brush(cr);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:122
// const QBrush & foreground()
extern "C"
void C_ZNK8QPalette10foregroundEv(void *this_) {
  /*return*/ ((QPalette*)this_)->foreground();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:123
// const QBrush & windowText()
extern "C"
void C_ZNK8QPalette10windowTextEv(void *this_) {
  /*return*/ ((QPalette*)this_)->windowText();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:124
// const QBrush & button()
extern "C"
void C_ZNK8QPalette6buttonEv(void *this_) {
  /*return*/ ((QPalette*)this_)->button();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:125
// const QBrush & light()
extern "C"
void C_ZNK8QPalette5lightEv(void *this_) {
  /*return*/ ((QPalette*)this_)->light();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:126
// const QBrush & dark()
extern "C"
void C_ZNK8QPalette4darkEv(void *this_) {
  /*return*/ ((QPalette*)this_)->dark();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:127
// const QBrush & mid()
extern "C"
void C_ZNK8QPalette3midEv(void *this_) {
  /*return*/ ((QPalette*)this_)->mid();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:128
// const QBrush & text()
extern "C"
void C_ZNK8QPalette4textEv(void *this_) {
  /*return*/ ((QPalette*)this_)->text();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:129
// const QBrush & base()
extern "C"
void C_ZNK8QPalette4baseEv(void *this_) {
  /*return*/ ((QPalette*)this_)->base();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:130
// const QBrush & alternateBase()
extern "C"
void C_ZNK8QPalette13alternateBaseEv(void *this_) {
  /*return*/ ((QPalette*)this_)->alternateBase();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:131
// const QBrush & toolTipBase()
extern "C"
void C_ZNK8QPalette11toolTipBaseEv(void *this_) {
  /*return*/ ((QPalette*)this_)->toolTipBase();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:132
// const QBrush & toolTipText()
extern "C"
void C_ZNK8QPalette11toolTipTextEv(void *this_) {
  /*return*/ ((QPalette*)this_)->toolTipText();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:133
// const QBrush & background()
extern "C"
void C_ZNK8QPalette10backgroundEv(void *this_) {
  /*return*/ ((QPalette*)this_)->background();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:134
// const QBrush & window()
extern "C"
void C_ZNK8QPalette6windowEv(void *this_) {
  /*return*/ ((QPalette*)this_)->window();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:135
// const QBrush & midlight()
extern "C"
void C_ZNK8QPalette8midlightEv(void *this_) {
  /*return*/ ((QPalette*)this_)->midlight();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:136
// const QBrush & brightText()
extern "C"
void C_ZNK8QPalette10brightTextEv(void *this_) {
  /*return*/ ((QPalette*)this_)->brightText();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:137
// const QBrush & buttonText()
extern "C"
void C_ZNK8QPalette10buttonTextEv(void *this_) {
  /*return*/ ((QPalette*)this_)->buttonText();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:138
// const QBrush & shadow()
extern "C"
void C_ZNK8QPalette6shadowEv(void *this_) {
  /*return*/ ((QPalette*)this_)->shadow();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:139
// const QBrush & highlight()
extern "C"
void C_ZNK8QPalette9highlightEv(void *this_) {
  /*return*/ ((QPalette*)this_)->highlight();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:140
// const QBrush & highlightedText()
extern "C"
void C_ZNK8QPalette15highlightedTextEv(void *this_) {
  /*return*/ ((QPalette*)this_)->highlightedText();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:141
// const QBrush & link()
extern "C"
void C_ZNK8QPalette4linkEv(void *this_) {
  /*return*/ ((QPalette*)this_)->link();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:142
// const QBrush & linkVisited()
extern "C"
void C_ZNK8QPalette11linkVisitedEv(void *this_) {
  /*return*/ ((QPalette*)this_)->linkVisited();
}
// /usr/include/qt/QtGui/qpalette.h:146
// bool isCopyOf(const class QPalette &)
extern "C"
void C_ZNK8QPalette8isCopyOfERKS_(void *this_, const QPalette & p) {
  /*return*/ ((QPalette*)this_)->isCopyOf(p);
}
// /usr/include/qt/QtGui/qpalette.h:151
// qint64 cacheKey()
extern "C"
void C_ZNK8QPalette8cacheKeyEv(void *this_) {
  /*return*/ ((QPalette*)this_)->cacheKey();
}
// /usr/include/qt/QtGui/qpalette.h:153
// QPalette resolve(const class QPalette &)
extern "C"
void C_ZNK8QPalette7resolveERKS_(void *this_, const QPalette & arg0) {
  /*return*/ ((QPalette*)this_)->resolve(arg0);
}
// inline
// /usr/include/qt/QtGui/qpalette.h:154
// uint resolve()
extern "C"
void C_ZNK8QPalette7resolveEv(void *this_) {
  /*return*/ ((QPalette*)this_)->resolve();
}
// inline
// /usr/include/qt/QtGui/qpalette.h:155
// void resolve(uint)
extern "C"
void C_ZN8QPalette7resolveEj(void *this_, uint mask) {
  ((QPalette*)this_)->resolve(mask);
}
//  main block end
