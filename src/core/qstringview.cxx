//  header block begin
// since 0x050a00
// /usr/include/qt/QtCore/qstringview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringview.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringView is pure virtual: false
// QStringView has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStringView : public QStringView {
public:
  virtual ~MyQStringView() {}
// void QStringView()
MyQStringView() : QStringView() {}
// void QStringView(std::nullptr_t)
MyQStringView(std::nullptr_t arg0) : QStringView(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:172
// [-2] void QStringView()
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringViewC2Ev() {
  return  new QStringView();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:174
// [-2] void QStringView(std::nullptr_t)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringViewC2EDn(std::nullptr_t arg0) {
  return  new QStringView(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:215
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView8toStringEv(void *this_) {
  auto rv = ((QStringView*)this_)->toString();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:217
// [8] qsizetype size()
extern "C" Q_DECL_EXPORT
qsizetype C_ZNK11QStringView4sizeEv(void *this_) {
  return (qsizetype)((QStringView*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:218
// [8] QStringView::const_pointer data()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView4dataEv(void *this_) {
  auto rv = ((QStringView*)this_)->data();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:219
// [8] const QStringView::storage_type * utf16()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView5utf16Ev(void *this_) {
  return (void*)((QStringView*)this_)->utf16();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:221
// [2] QChar operator[](qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringViewixEx(void *this_, qsizetype n) {
  auto rv = ((QStringView*)this_)->operator[](n);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:228
// [8] QByteArray toLatin1()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView8toLatin1Ev(void *this_) {
  auto rv = ((QStringView*)this_)->toLatin1();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:229
// [8] QByteArray toUtf8()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView6toUtf8Ev(void *this_) {
  auto rv = ((QStringView*)this_)->toUtf8();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:230
// [8] QByteArray toLocal8Bit()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView11toLocal8BitEv(void *this_) {
  auto rv = ((QStringView*)this_)->toLocal8Bit();
return new QByteArray(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:231
// [8] QVector<uint> toUcs4()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView6toUcs4Ev(void *this_) {
  auto rv = ((QStringView*)this_)->toUcs4();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:233
// [2] QChar at(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView2atEx(void *this_, qsizetype n) {
  auto rv = ((QStringView*)this_)->at(n);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:235
// [16] QStringView mid(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView3midEx(void *this_, qsizetype pos) {
  auto rv = ((QStringView*)this_)->mid(pos);
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:237
// [16] QStringView mid(qsizetype, qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView3midExx(void *this_, qsizetype pos, qsizetype n) {
  auto rv = ((QStringView*)this_)->mid(pos, n);
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:239
// [16] QStringView left(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView4leftEx(void *this_, qsizetype n) {
  auto rv = ((QStringView*)this_)->left(n);
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:241
// [16] QStringView right(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView5rightEx(void *this_, qsizetype n) {
  auto rv = ((QStringView*)this_)->right(n);
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:243
// [16] QStringView chopped(qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView7choppedEx(void *this_, qsizetype n) {
  auto rv = ((QStringView*)this_)->chopped(n);
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:246
// [-2] void truncate(qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN11QStringView8truncateEx(void *this_, qsizetype n) {
  ((QStringView*)this_)->truncate(n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:248
// [-2] void chop(qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN11QStringView4chopEx(void *this_, qsizetype n) {
  ((QStringView*)this_)->chop(n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:251
// [16] QStringView trimmed()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView7trimmedEv(void *this_) {
  auto rv = ((QStringView*)this_)->trimmed();
return new QStringView(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:253
// [1] bool startsWith(QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView10startsWithES_N2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->startsWith(*s, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:255
// [1] bool startsWith(QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView10startsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->startsWith(*s, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:256
// [1] bool startsWith(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView10startsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QStringView*)this_)->startsWith(*c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:258
// [1] bool startsWith(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView10startsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->startsWith(*c, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:261
// [1] bool endsWith(QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView8endsWithES_N2Qt15CaseSensitivityE(void *this_, QStringView* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->endsWith(*s, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:263
// [1] bool endsWith(QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView8endsWithE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* s, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->endsWith(*s, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:264
// [1] bool endsWith(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView8endsWithE5QChar(void *this_, QChar* c) {
  return (bool)((QStringView*)this_)->endsWith(*c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:266
// [1] bool endsWith(QChar, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView8endsWithE5QCharN2Qt15CaseSensitivityE(void *this_, QChar* c, Qt::CaseSensitivity cs) {
  return (bool)((QStringView*)this_)->endsWith(*c, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:272
// [8] QStringView::const_iterator begin()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView5beginEv(void *this_) {
  auto rv = ((QStringView*)this_)->begin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:273
// [8] QStringView::const_iterator end()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView3endEv(void *this_) {
  auto rv = ((QStringView*)this_)->end();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:274
// [8] QStringView::const_iterator cbegin()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView6cbeginEv(void *this_) {
  auto rv = ((QStringView*)this_)->cbegin();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:275
// [8] QStringView::const_iterator cend()
extern "C" Q_DECL_EXPORT
void C_ZNK11QStringView4cendEv(void *this_) {
  auto rv = ((QStringView*)this_)->cend();
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:276
// [8] QStringView::const_reverse_iterator rbegin()
extern "C" Q_DECL_EXPORT
QStringView::const_reverse_iterator* C_ZNK11QStringView6rbeginEv(void *this_) {
  auto rv = ((QStringView*)this_)->rbegin();
return new QStringView::const_reverse_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:277
// [8] QStringView::const_reverse_iterator rend()
extern "C" Q_DECL_EXPORT
QStringView::const_reverse_iterator* C_ZNK11QStringView4rendEv(void *this_) {
  auto rv = ((QStringView*)this_)->rend();
return new QStringView::const_reverse_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:278
// [8] QStringView::const_reverse_iterator crbegin()
extern "C" Q_DECL_EXPORT
QStringView::const_reverse_iterator* C_ZNK11QStringView7crbeginEv(void *this_) {
  auto rv = ((QStringView*)this_)->crbegin();
return new QStringView::const_reverse_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:279
// [8] QStringView::const_reverse_iterator crend()
extern "C" Q_DECL_EXPORT
QStringView::const_reverse_iterator* C_ZNK11QStringView5crendEv(void *this_) {
  auto rv = ((QStringView*)this_)->crend();
return new QStringView::const_reverse_iterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:281
// [1] bool empty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView5emptyEv(void *this_) {
  return (bool)((QStringView*)this_)->empty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:282
// [2] QChar front()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView5frontEv(void *this_) {
  auto rv = ((QStringView*)this_)->front();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:283
// [2] QChar back()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView4backEv(void *this_) {
  auto rv = ((QStringView*)this_)->back();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:288
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView6isNullEv(void *this_) {
  return (bool)((QStringView*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:289
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringView7isEmptyEv(void *this_) {
  return (bool)((QStringView*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:290
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringView6lengthEv(void *this_) {
  return (int)((QStringView*)this_)->length();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:292
// [2] QChar first()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView5firstEv(void *this_) {
  auto rv = ((QStringView*)this_)->first();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringview.h:293
// [2] QChar last()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringView4lastEv(void *this_) {
  auto rv = ((QStringView*)this_)->last();
return new QChar(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QStringViewD2Ev(void *this_) {
  delete (QStringView*)(this_);
}
//  main block end
