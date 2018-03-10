//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFormat is pure virtual: false
// QTextFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextFormat : public QTextFormat {
public:
  virtual ~MyQTextFormat() {}
// void QTextFormat()
MyQTextFormat() : QTextFormat() {}
// void QTextFormat(int)
MyQTextFormat(int type_) : QTextFormat(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:288
// [-2] void QTextFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormatC2Ev() {
  return  new QTextFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:290
// [-2] void QTextFormat(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormatC2Ei(int type_) {
  return  new QTextFormat(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:293
// [16] QTextFormat & operator=(const class QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextFormataSERKS_(void *this_, QTextFormat* rhs) {
  auto& rv = ((QTextFormat*)this_)->operator=(*rhs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:294
// [-2] void ~QTextFormat()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormatD2Ev(void *this_) {
  delete (QTextFormat*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:296
// [-2] void swap(class QTextFormat &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat4swapERS_(void *this_, QTextFormat* other) {
  ((QTextFormat*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:299
// [-2] void merge(const class QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat5mergeERKS_(void *this_, QTextFormat* other) {
  ((QTextFormat*)this_)->merge(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:301
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat7isValidEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qtextformat.h:302
// [1] bool isEmpty()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat7isEmptyEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isEmpty();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:304
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat4typeEv(void *this_) {
  return (int)((QTextFormat*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:306
// [4] int objectIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat11objectIndexEv(void *this_) {
  return (int)((QTextFormat*)this_)->objectIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:307
// [-2] void setObjectIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat14setObjectIndexEi(void *this_, int object) {
  ((QTextFormat*)this_)->setObjectIndex(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:309
// [16] QVariant property(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat8propertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->property(propertyId);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:310
// [-2] void setProperty(int, const class QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat11setPropertyEiRK8QVariant(void *this_, int propertyId, QVariant* value) {
  ((QTextFormat*)this_)->setProperty(propertyId, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:311
// [-2] void clearProperty(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13clearPropertyEi(void *this_, int propertyId) {
  ((QTextFormat*)this_)->clearProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:312
// [1] bool hasProperty(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat11hasPropertyEi(void *this_, int propertyId) {
  return (bool)((QTextFormat*)this_)->hasProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:314
// [1] bool boolProperty(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12boolPropertyEi(void *this_, int propertyId) {
  return (bool)((QTextFormat*)this_)->boolProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:315
// [4] int intProperty(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat11intPropertyEi(void *this_, int propertyId) {
  return (int)((QTextFormat*)this_)->intProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:316
// [8] qreal doubleProperty(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextFormat14doublePropertyEi(void *this_, int propertyId) {
  return (qreal)((QTextFormat*)this_)->doubleProperty(propertyId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:317
// [8] QString stringProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat14stringPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->stringProperty(propertyId);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:318
// [16] QColor colorProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13colorPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->colorProperty(propertyId);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:319
// [8] QPen penProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat11penPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->penProperty(propertyId);
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:320
// [8] QBrush brushProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13brushPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->brushProperty(propertyId);
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:321
// [16] QTextLength lengthProperty(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat14lengthPropertyEi(void *this_, int propertyId) {
  auto rv = ((QTextFormat*)this_)->lengthProperty(propertyId);
return new QTextLength(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:327
// [4] int propertyCount()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat13propertyCountEv(void *this_) {
  return (int)((QTextFormat*)this_)->propertyCount();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:329
// [-2] void setObjectType(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setObjectTypeEi(void *this_, int type_) {
  ((QTextFormat*)this_)->setObjectType(type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:330
// [4] int objectType()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextFormat10objectTypeEv(void *this_) {
  return (int)((QTextFormat*)this_)->objectType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:333
// [1] bool isCharFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12isCharFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isCharFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:334
// [1] bool isBlockFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isBlockFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isBlockFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:335
// [1] bool isListFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat12isListFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isListFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:336
// [1] bool isFrameFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isFrameFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isFrameFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:337
// [1] bool isImageFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isImageFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isImageFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:338
// [1] bool isTableFormat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat13isTableFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isTableFormat();
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:339
// [1] bool isTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormat17isTableCellFormatEv(void *this_) {
  return (bool)((QTextFormat*)this_)->isTableCellFormat();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:341
// [16] QTextBlockFormat toBlockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toBlockFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toBlockFormat();
return new QTextBlockFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:342
// [16] QTextCharFormat toCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat12toCharFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toCharFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:343
// [16] QTextListFormat toListFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat12toListFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toListFormat();
return new QTextListFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:344
// [16] QTextTableFormat toTableFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toTableFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toTableFormat();
return new QTextTableFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:345
// [16] QTextFrameFormat toFrameFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toFrameFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toFrameFormat();
return new QTextFrameFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:346
// [16] QTextImageFormat toImageFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat13toImageFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toImageFormat();
return new QTextImageFormat(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:347
// [16] QTextTableCellFormat toTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat17toTableCellFormatEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->toTableCellFormat();
return new QTextTableCellFormat(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:349
// [1] bool operator==(const class QTextFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormateqERKS_(void *this_, QTextFormat* rhs) {
  return (bool)((QTextFormat*)this_)->operator==(*rhs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:350
// [1] bool operator!=(const class QTextFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextFormatneERKS_(void *this_, QTextFormat* rhs) {
  return (bool)((QTextFormat*)this_)->operator!=(*rhs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:353
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QTextFormat*)this_)->setLayoutDirection(direction);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:355
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK11QTextFormat15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QTextFormat*)this_)->layoutDirection();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:358
// [-2] void setBackground(const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setBackgroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTextFormat*)this_)->setBackground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:360
// [8] QBrush background()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat10backgroundEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->background();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:362
// [-2] void clearBackground()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat15clearBackgroundEv(void *this_) {
  ((QTextFormat*)this_)->clearBackground();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:365
// [-2] void setForeground(const class QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat13setForegroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTextFormat*)this_)->setForeground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:367
// [8] QBrush foreground()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextFormat10foregroundEv(void *this_) {
  auto rv = ((QTextFormat*)this_)->foreground();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:369
// [-2] void clearForeground()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextFormat15clearForegroundEv(void *this_) {
  ((QTextFormat*)this_)->clearForeground();
}

//  main block end
