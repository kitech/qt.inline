//  header block begin
// /usr/include/qt/QtGui/qpalette.h
#ifndef protected
#define protected public
#endif
#include <qpalette.h>
#include <QtGui>
#include "callback_inherit.h"

// QPalette is pure virtual: false
// QPalette has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPalette : public QPalette {
public:
  virtual ~MyQPalette() {}
// void QPalette()
MyQPalette() : QPalette() {}
// void QPalette(const class QColor &)
MyQPalette(const QColor & button) : QPalette(button) {}
// void QPalette(Qt::GlobalColor)
MyQPalette(Qt::GlobalColor button) : QPalette(button) {}
// void QPalette(const class QColor &, const class QColor &)
MyQPalette(const QColor & button, const QColor & window) : QPalette(button, window) {}
// void QPalette(const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
MyQPalette(const QBrush & windowText, const QBrush & button, const QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush & base, const QBrush & window) : QPalette(windowText, button, light, dark, mid, text, bright_text, base, window) {}
// void QPalette(const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &)
MyQPalette(const QColor & windowText, const QColor & window, const QColor & light, const QColor & dark, const QColor & mid, const QColor & text, const QColor & base) : QPalette(windowText, window, light, dark, mid, text, base) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:58
// [-2] void QPalette()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2Ev() {
  return  new QPalette();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:59
// [-2] void QPalette(const class QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2ERK6QColor(QColor* button) {
  return  new QPalette(*button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:60
// [-2] void QPalette(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2EN2Qt11GlobalColorE(Qt::GlobalColor button) {
  return  new QPalette(button);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:61
// [-2] void QPalette(const class QColor &, const class QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2ERK6QColorS2_(QColor* button, QColor* window) {
  return  new QPalette(*button, *window);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:62
// [-2] void QPalette(const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
  return  new QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:65
// [-2] void QPalette(const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &, const class QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteC2ERK6QColorS2_S2_S2_S2_S2_S2_(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base) {
  return  new QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:68
// [-2] void ~QPalette()
extern "C" Q_DECL_EXPORT
void C_ZN8QPaletteD2Ev(void *this_) {
  delete (QPalette*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:69
// [16] QPalette & operator=(const class QPalette &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteaSERKS_(void *this_, QPalette* palette) {
  auto& rv = ((QPalette*)this_)->operator=(*palette);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:74
// [16] QPalette & operator=(class QPalette &&)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPaletteaSEOS_(void *this_, QPalette && other) {
  auto& rv = ((QPalette*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:81
// [-2] void swap(class QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette4swapERS_(void *this_, QPalette* other) {
  ((QPalette*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:104
// [4] QPalette::ColorGroup currentColorGroup()
extern "C" Q_DECL_EXPORT
QPalette::ColorGroup C_ZNK8QPalette17currentColorGroupEv(void *this_) {
  return (QPalette::ColorGroup)((QPalette*)this_)->currentColorGroup();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:105
// [-2] void setCurrentColorGroup(enum QPalette::ColorGroup)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette20setCurrentColorGroupENS_10ColorGroupE(void *this_, QPalette::ColorGroup cg) {
  ((QPalette*)this_)->setCurrentColorGroup(cg);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:107
// [16] const QColor & color(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette5colorENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  auto& rv = ((QPalette*)this_)->color(cg, cr);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:109
// [8] const QBrush & brush(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette5brushENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  auto& rv = ((QPalette*)this_)->brush(cg, cr);
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:110
// [-2] void setColor(enum QPalette::ColorGroup, enum QPalette::ColorRole, const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette8setColorENS_10ColorGroupENS_9ColorRoleERK6QColor(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr, QColor* color) {
  ((QPalette*)this_)->setColor(cg, cr, *color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:111
// [-2] void setColor(enum QPalette::ColorRole, const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette8setColorENS_9ColorRoleERK6QColor(void *this_, QPalette::ColorRole cr, QColor* color) {
  ((QPalette*)this_)->setColor(cr, *color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:112
// [-2] void setBrush(enum QPalette::ColorRole, const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette8setBrushENS_9ColorRoleERK6QBrush(void *this_, QPalette::ColorRole cr, QBrush* brush) {
  ((QPalette*)this_)->setBrush(cr, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:113
// [1] bool isBrushSet(enum QPalette::ColorGroup, enum QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPalette10isBrushSetENS_10ColorGroupENS_9ColorRoleE(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr) {
  return (bool)((QPalette*)this_)->isBrushSet(cg, cr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:114
// [-2] void setBrush(enum QPalette::ColorGroup, enum QPalette::ColorRole, const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette8setBrushENS_10ColorGroupENS_9ColorRoleERK6QBrush(void *this_, QPalette::ColorGroup cg, QPalette::ColorRole cr, QBrush* brush) {
  ((QPalette*)this_)->setBrush(cg, cr, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:115
// [-2] void setColorGroup(enum QPalette::ColorGroup, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &, const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette13setColorGroupENS_10ColorGroupERK6QBrushS3_S3_S3_S3_S3_S3_S3_S3_(void *this_, QPalette::ColorGroup cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
  ((QPalette*)this_)->setColorGroup(cr, *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:119
// [1] bool isEqual(enum QPalette::ColorGroup, enum QPalette::ColorGroup)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPalette7isEqualENS_10ColorGroupES0_(void *this_, QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) {
  return (bool)((QPalette*)this_)->isEqual(cr1, cr2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:121
// [16] const QColor & color(enum QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette5colorENS_9ColorRoleE(void *this_, QPalette::ColorRole cr) {
  auto& rv = ((QPalette*)this_)->color(cr);
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:122
// [8] const QBrush & brush(enum QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette5brushENS_9ColorRoleE(void *this_, QPalette::ColorRole cr) {
  auto& rv = ((QPalette*)this_)->brush(cr);
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:123
// [8] const QBrush & foreground()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette10foregroundEv(void *this_) {
  auto& rv = ((QPalette*)this_)->foreground();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:124
// [8] const QBrush & windowText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette10windowTextEv(void *this_) {
  auto& rv = ((QPalette*)this_)->windowText();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:125
// [8] const QBrush & button()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette6buttonEv(void *this_) {
  auto& rv = ((QPalette*)this_)->button();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:126
// [8] const QBrush & light()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette5lightEv(void *this_) {
  auto& rv = ((QPalette*)this_)->light();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:127
// [8] const QBrush & dark()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette4darkEv(void *this_) {
  auto& rv = ((QPalette*)this_)->dark();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:128
// [8] const QBrush & mid()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette3midEv(void *this_) {
  auto& rv = ((QPalette*)this_)->mid();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:129
// [8] const QBrush & text()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette4textEv(void *this_) {
  auto& rv = ((QPalette*)this_)->text();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:130
// [8] const QBrush & base()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette4baseEv(void *this_) {
  auto& rv = ((QPalette*)this_)->base();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:131
// [8] const QBrush & alternateBase()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette13alternateBaseEv(void *this_) {
  auto& rv = ((QPalette*)this_)->alternateBase();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:132
// [8] const QBrush & toolTipBase()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette11toolTipBaseEv(void *this_) {
  auto& rv = ((QPalette*)this_)->toolTipBase();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:133
// [8] const QBrush & toolTipText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette11toolTipTextEv(void *this_) {
  auto& rv = ((QPalette*)this_)->toolTipText();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:134
// [8] const QBrush & background()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette10backgroundEv(void *this_) {
  auto& rv = ((QPalette*)this_)->background();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:135
// [8] const QBrush & window()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette6windowEv(void *this_) {
  auto& rv = ((QPalette*)this_)->window();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:136
// [8] const QBrush & midlight()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette8midlightEv(void *this_) {
  auto& rv = ((QPalette*)this_)->midlight();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:137
// [8] const QBrush & brightText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette10brightTextEv(void *this_) {
  auto& rv = ((QPalette*)this_)->brightText();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:138
// [8] const QBrush & buttonText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette10buttonTextEv(void *this_) {
  auto& rv = ((QPalette*)this_)->buttonText();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:139
// [8] const QBrush & shadow()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette6shadowEv(void *this_) {
  auto& rv = ((QPalette*)this_)->shadow();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:140
// [8] const QBrush & highlight()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette9highlightEv(void *this_) {
  auto& rv = ((QPalette*)this_)->highlight();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:141
// [8] const QBrush & highlightedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette15highlightedTextEv(void *this_) {
  auto& rv = ((QPalette*)this_)->highlightedText();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:142
// [8] const QBrush & link()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette4linkEv(void *this_) {
  auto& rv = ((QPalette*)this_)->link();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:143
// [8] const QBrush & linkVisited()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette11linkVisitedEv(void *this_) {
  auto& rv = ((QPalette*)this_)->linkVisited();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:145
// [1] bool operator==(const class QPalette &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPaletteeqERKS_(void *this_, QPalette* p) {
  return (bool)((QPalette*)this_)->operator==(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:146
// [1] bool operator!=(const class QPalette &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPaletteneERKS_(void *this_, QPalette* p) {
  return (bool)((QPalette*)this_)->operator!=(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:147
// [1] bool isCopyOf(const class QPalette &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPalette8isCopyOfERKS_(void *this_, QPalette* p) {
  return (bool)((QPalette*)this_)->isCopyOf(*p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:152
// [8] qint64 cacheKey()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK8QPalette8cacheKeyEv(void *this_) {
  return (qint64)((QPalette*)this_)->cacheKey();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:154
// [16] QPalette resolve(const class QPalette &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPalette7resolveERKS_(void *this_, QPalette* arg0) {
  auto rv = ((QPalette*)this_)->resolve(*arg0);
return new QPalette(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:155
// [4] uint resolve()
extern "C" Q_DECL_EXPORT
uint C_ZNK8QPalette7resolveEv(void *this_) {
  return (uint)((QPalette*)this_)->resolve();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:156
// [-2] void resolve(uint)
extern "C" Q_DECL_EXPORT
void C_ZN8QPalette7resolveEj(void *this_, uint mask) {
  ((QPalette*)this_)->resolve(mask);
}

//  main block end
